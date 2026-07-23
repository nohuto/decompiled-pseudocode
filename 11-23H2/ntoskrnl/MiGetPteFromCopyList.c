/*
 * XREFs of MiGetPteFromCopyList @ 0x1402842C0
 * Callers:
 *     MiCopyPage @ 0x1402840A0 (MiCopyPage.c)
 *     MiCopyPagesIntoEnclave @ 0x140A3D274 (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiMakeValidPte @ 0x1402CF540 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 *__fastcall MiGetPteFromCopyList(unsigned int *a1, __int64 a2, __int64 a3)
{
  int v6; // ebp
  int v7; // r15d
  __int64 v8; // rdx
  int v9; // r8d
  __int64 *v10; // rdi
  char v11; // dl
  __int64 ValidPte; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  char v16; // dl
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // r8
  __int64 v23; // rdx
  _QWORD v24[24]; // [rsp+20h] [rbp-108h] BYREF

  memset(v24, 0, 0xB8uLL);
  v6 = 2;
  v7 = 1;
  if ( a3 == -1 )
    v6 = 1;
  v8 = *a1;
  if ( (int)v8 + v6 > a1[1] )
  {
    v22 = *a1;
    LODWORD(v24[1]) = 20;
    v23 = *((_QWORD *)a1 + 2) << 25;
    v24[3] = 0LL;
    MiInsertTbFlushEntry((__int64)v24, v23 >> 16, v22, 0);
    MiFlushTbList((int *)v24);
    v8 = 0LL;
  }
  v9 = 4;
  v10 = (__int64 *)(*((_QWORD *)a1 + 2) + 8 * v8);
  *a1 = v8 + v6;
  v11 = *(_BYTE *)(48 * a2 - 0x21FFFFFFFFDELL) >> 6;
  if ( v11 )
  {
    if ( v11 == 2 )
      v9 = 28;
  }
  else
  {
    v9 = 12;
  }
  ValidPte = MiMakeValidPte(v10, a2, v9 | 0xA0000000);
  if ( !MiPteInShadowRange((unsigned __int64)v10) )
    goto LABEL_9;
  if ( !(unsigned int)MiPteHasShadow(v14, v13, v15) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ValidPte & 1) != 0 )
    {
      ValidPte |= 0x8000000000000000uLL;
    }
LABEL_9:
    *v10 = ValidPte;
    goto LABEL_10;
  }
  if ( !HIBYTE(word_140C66CFC) && (ValidPte & 1) != 0 )
    ValidPte |= 0x8000000000000000uLL;
  *v10 = ValidPte;
  MiWritePteShadow(v10, ValidPte);
LABEL_10:
  if ( a3 != -1 )
  {
    v16 = *(_BYTE *)(48 * a3 - 0x21FFFFFFFFDELL) >> 6;
    if ( v16 )
    {
      if ( v16 == 2 )
        v7 = 25;
    }
    else
    {
      v7 = 9;
    }
    v17 = MiMakeValidPte(v10, a3, v7 | 0x20000000u);
    if ( !MiPteInShadowRange((unsigned __int64)(v10 + 1)) )
      goto LABEL_15;
    if ( !(unsigned int)MiPteHasShadow(v19, v18, v20) )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v17 & 1) != 0 )
      {
        v17 |= 0x8000000000000000uLL;
      }
LABEL_15:
      v10[1] = v17;
      return v10;
    }
    if ( !HIBYTE(word_140C66CFC) && (v17 & 1) != 0 )
      v17 |= 0x8000000000000000uLL;
    v10[1] = v17;
    MiWritePteShadow(v10 + 1, v17);
  }
  return v10;
}
