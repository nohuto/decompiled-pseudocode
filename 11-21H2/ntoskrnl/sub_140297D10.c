/*
 * XREFs of sub_140297D10 @ 0x140297D10
 * Callers:
 *     RtlRaiseException @ 0x140294A60 (RtlRaiseException.c)
 *     RtlInitializeExtendedContext @ 0x140295100 (RtlInitializeExtendedContext.c)
 *     sub_140295210 @ 0x140295210 (sub_140295210.c)
 *     RtlUnwindEx @ 0x1402957A0 (RtlUnwindEx.c)
 *     sub_140296110 @ 0x140296110 (sub_140296110.c)
 *     sub_140299280 @ 0x140299280 (sub_140299280.c)
 *     RtlUnwind @ 0x140387A90 (RtlUnwind.c)
 *     sub_14066D650 @ 0x14066D650 (sub_14066D650.c)
 *     sub_140701F10 @ 0x140701F10 (sub_140701F10.c)
 *     sub_140702CA4 @ 0x140702CA4 (sub_140702CA4.c)
 * Callees:
 *     sub_14024ED80 @ 0x14024ED80 (sub_14024ED80.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14045F176 @ 0x14045F176 (sub_14045F176.c)
 */

__int64 __fastcall sub_140297D10(__int64 a1, unsigned int a2, _QWORD *a3, __int64 a4)
{
  size_t v4; // rsi
  __int64 v5; // r12
  _DWORD *v7; // rbx
  char v8; // di
  _DWORD *v9; // rcx
  int v10; // ecx
  _DWORD *v11; // rax
  int v12; // ecx
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  LODWORD(v4) = 0;
  v5 = a4;
  v7 = 0LL;
  if ( (a2 & 0x27FFFF80) != 0x10000
    && (a2 & 0x7FFFF20) != 0x100000
    && (a2 & 0x7FFFFF0) != 0x200000
    && (a2 & 0x7FFFFE0) != 0x400000 )
  {
    return 3221225485LL;
  }
  v8 = 1;
  if ( (a2 & 0x100040) == 1048640 || (a2 & 0x10040) == 65600 )
  {
    if ( !MEMORY[0xFFFFF780000003D8] )
      return 3221225659LL;
    v8 = 3;
  }
  if ( (a2 & 0x100080) != 0x100080 )
    goto LABEL_6;
  if ( !(_BYTE)byte_140E01841 )
    return 3221225659LL;
  v8 |= 4u;
LABEL_6:
  if ( (a2 & 0x10000) != 0 )
  {
    v9 = (_DWORD *)((a1 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
    v7 = v9 + 179;
LABEL_20:
    *v9 = a2;
    goto LABEL_9;
  }
  if ( (a2 & 0x100000) == 0 )
  {
    if ( (a2 & 0x200000) != 0 )
    {
      v9 = (_DWORD *)((a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      v7 = v9 + 104;
    }
    else
    {
      if ( (a2 & 0x400000) == 0 )
        goto LABEL_10;
      v9 = (_DWORD *)((a1 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      v7 = v9 + 228;
    }
    goto LABEL_20;
  }
  v9 = (_DWORD *)((a1 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
  v9[12] = a2;
  v7 = v9 + 308;
LABEL_9:
  v7[3] = (_DWORD)v7 - (_DWORD)v9;
LABEL_10:
  v10 = v7[3];
  v7[2] = -v10;
  *v7 = -v10;
  v7[1] = v10 + 32;
  if ( (a2 & 0x10020) != 65568 && (a2 & 0x10000) != 0 )
    v7[3] = 204;
  v11 = v7 + 8;
  if ( (v8 & 2) != 0 )
  {
    v14 = ((unsigned __int64)v7 + 95) & 0xFFFFFFFFFFFFFFC0uLL;
    if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      v16 = (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708] | 0x8000000000000000uLL) & a4;
      sub_14045F176(a2, &v16);
      v5 = v16;
    }
    v4 = (unsigned int)sub_14024ED80(v5) - 512;
    memset((void *)(((unsigned __int64)v7 + 95) & 0xFFFFFFFFFFFFFFC0uLL), 0, v4);
    if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      *(_QWORD *)((((unsigned __int64)v7 + 95) & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v5 | 0x8000000000000000uLL;
    v12 = v14 - (_DWORD)v7;
    v7[1] = v4 + v14 - (_DWORD)v7 - *v7;
    v11 = (_DWORD *)(v4 + v14);
  }
  else
  {
    v12 = 33;
  }
  v7[4] = v12;
  v7[5] = v4;
  if ( (v8 & 4) != 0 )
  {
    v15 = ((unsigned __int64)v11 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    *(_OWORD *)v15 = 0LL;
    *(_QWORD *)(v15 + 16) = 0LL;
    LODWORD(v15) = v15 - (_DWORD)v7;
    v7[6] = v15;
    LODWORD(v15) = v15 - *v7;
    v7[7] = 24;
    v7[1] = v15 + 24;
  }
  *a3 = v7;
  return 0LL;
}
