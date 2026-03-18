/*
 * XREFs of MiGetPteFromCopyList @ 0x1402CBF80
 * Callers:
 *     MiSwapStackPage @ 0x140249930 (MiSwapStackPage.c)
 *     MiCopyPage @ 0x1402E7D60 (MiCopyPage.c)
 *     MiStealPage @ 0x1402E97D4 (MiStealPage.c)
 *     MiAddPagesToEnclave @ 0x1405A7D28 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x140979274 (MiCopyPagesIntoEnclave.c)
 *     MiFillPerSessionProtos @ 0x140983680 (MiFillPerSessionProtos.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

unsigned __int64 *__fastcall MiGetPteFromCopyList(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  int v7; // ebx
  int v8; // r8d
  unsigned __int64 *v9; // rdi
  char v10; // dl
  unsigned __int64 ValidPte; // rbx
  int v12; // r8d
  char v13; // dl
  unsigned __int64 v14; // rbx
  __int64 v16; // r8
  __int64 v17; // rdx
  _QWORD v18[24]; // [rsp+20h] [rbp-F8h] BYREF

  memset(v18, 0, 0xB8uLL);
  v6 = *a1;
  v7 = (a3 != -1) + 1;
  if ( (int)v6 + v7 > a1[1] )
  {
    v16 = *a1;
    LODWORD(v18[1]) = 20;
    v17 = *((_QWORD *)a1 + 2) << 25;
    v18[3] = 0LL;
    MiInsertTbFlushEntry(v18, v17 >> 16, v16, 0LL);
    MiFlushTbList(v18);
    v6 = 0LL;
  }
  v8 = 4;
  v9 = (unsigned __int64 *)(*((_QWORD *)a1 + 2) + 8 * v6);
  *a1 = v7 + v6;
  v10 = *(_BYTE *)(48 * a2 - 0x21FFFFFFFFDELL) >> 6;
  if ( v10 )
  {
    if ( v10 == 2 )
      v8 = 28;
  }
  else
  {
    v8 = 12;
  }
  ValidPte = MiMakeValidPte((unsigned __int64)v9, a2, v8 | 0xA0000000);
  if ( !(unsigned int)MiPteInShadowRange(v9) )
    goto LABEL_7;
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ValidPte & 1) != 0 )
    {
      ValidPte |= 0x8000000000000000uLL;
    }
LABEL_7:
    *v9 = ValidPte;
    goto LABEL_8;
  }
  if ( !HIBYTE(word_140C51864) && (ValidPte & 1) != 0 )
    ValidPte |= 0x8000000000000000uLL;
  *v9 = ValidPte;
  MiWritePteShadow((__int64)v9, ValidPte);
LABEL_8:
  if ( a3 != -1 )
  {
    v12 = 1;
    v13 = *(_BYTE *)(48 * a3 - 0x21FFFFFFFFDELL) >> 6;
    if ( v13 )
    {
      if ( v13 == 2 )
        v12 = 25;
    }
    else
    {
      v12 = 9;
    }
    v14 = MiMakeValidPte((unsigned __int64)v9, a3, v12 | 0x20000000u);
    if ( !(unsigned int)MiPteInShadowRange(v9 + 1) )
      goto LABEL_13;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v14 & 1) != 0 )
      {
        v14 |= 0x8000000000000000uLL;
      }
LABEL_13:
      v9[1] = v14;
      return v9;
    }
    if ( !HIBYTE(word_140C51864) && (v14 & 1) != 0 )
      v14 |= 0x8000000000000000uLL;
    v9[1] = v14;
    MiWritePteShadow((__int64)(v9 + 1), v14);
  }
  return v9;
}
