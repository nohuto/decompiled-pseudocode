/*
 * XREFs of SepCaptureTokenSecurityAttributesInformation @ 0x1407F0D70
 * Callers:
 *     NtCreateTokenEx @ 0x1406BB560 (NtCreateTokenEx.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x1407F0BF0 (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 *     SepCaptureUnicodeStringArray @ 0x1406D4C80 (SepCaptureUnicodeStringArray.c)
 *     RtlCompareUnicodeString @ 0x1406DA170 (RtlCompareUnicodeString.c)
 *     SepCaptureInt64Array @ 0x1407F17A0 (SepCaptureInt64Array.c)
 *     SepCaptureFqbnArray @ 0x1409CD980 (SepCaptureFqbnArray.c)
 *     SepCaptureOctetStringArray @ 0x1409CDBB8 (SepCaptureOctetStringArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall SepCaptureTokenSecurityAttributesInformation(
        unsigned __int64 a1,
        _DWORD *a2,
        int a3,
        char a4,
        char a5,
        unsigned __int64 **a6)
{
  unsigned __int16 *v7; // rsi
  signed int v8; // edi
  void *v9; // r13
  unsigned __int64 *Pool2; // rax
  unsigned __int64 *v11; // r14
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  __int64 v14; // r15
  unsigned __int64 v15; // rax
  __int64 v16; // r8
  unsigned int i; // r15d
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned int v20; // edx
  __int64 v21; // r15
  unsigned int v22; // r10d
  int v23; // eax
  char v25; // dl
  unsigned int j; // r13d
  __int64 v27; // rcx
  int v28; // edx
  __int64 v29; // rax
  unsigned int v30; // r15d
  unsigned int v31; // r13d
  unsigned int v32; // r15d
  void *v33; // rcx
  char v34; // [rsp+20h] [rbp-88h]
  int v35; // [rsp+24h] [rbp-84h]
  unsigned int v36; // [rsp+2Ch] [rbp-7Ch]
  PVOID P; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v38; // [rsp+38h] [rbp-70h]
  int v39; // [rsp+3Ch] [rbp-6Ch]
  void *v40; // [rsp+40h] [rbp-68h]
  __int64 v41; // [rsp+48h] [rbp-60h]
  int v42; // [rsp+50h] [rbp-58h]
  void *v43; // [rsp+58h] [rbp-50h]
  unsigned __int16 *v44; // [rsp+60h] [rbp-48h]
  unsigned __int64 *v45; // [rsp+68h] [rbp-40h]
  __int64 v46; // [rsp+70h] [rbp-38h]
  PCUNICODE_STRING v47; // [rsp+78h] [rbp-30h]
  int v51; // [rsp+C8h] [rbp+20h]

  v7 = 0LL;
  v44 = 0LL;
  v38 = 0;
  v42 = 0;
  v34 = 0;
  v8 = 0;
  v9 = 0LL;
  v40 = 0LL;
  v43 = 0LL;
  v36 = 0;
  v39 = 0;
  P = 0LL;
  if ( !a4 )
    return 3221225659LL;
  Pool2 = (unsigned __int64 *)ExAllocatePool2(256LL, 16LL, 1950442835LL);
  v11 = Pool2;
  v45 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_OWORD *)Pool2 = 0LL;
  if ( a4 != 1 )
    goto LABEL_78;
  if ( !a2 || !a3 || *a2 == 1 )
    v34 = 1;
  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a1 + 16 > 0x7FFFFFFF0000LL || a1 + 16 < a1 )
    MEMORY[0x7FFFFFFF0000] = 0;
  *(_WORD *)Pool2 = *(_WORD *)a1;
  *((_WORD *)Pool2 + 1) = *(_WORD *)(a1 + 2);
  v12 = *(unsigned int *)(a1 + 4);
  *((_DWORD *)Pool2 + 1) = v12;
  if ( !(_DWORD)v12 )
  {
    *a6 = Pool2;
    return 0LL;
  }
  Pool2[1] = *(_QWORD *)(a1 + 8);
  v13 = 40 * v12;
  v46 = v13;
  v14 = 0xFFFFFFFFLL;
  if ( v13 <= 0xFFFFFFFF )
    v14 = (unsigned int)v13;
  v8 = v13 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v13 > 0xFFFFFFFF )
  {
    ExFreePoolWithTag(Pool2, 0);
    return (unsigned int)v8;
  }
  v7 = (unsigned __int16 *)ExAllocatePool2(256LL, (unsigned int)v14, 1950442835LL);
  v44 = v7;
  if ( !v7 )
  {
    ExFreePoolWithTag(v11, 0);
    return 3221225626LL;
  }
  if ( (_DWORD)v14 )
  {
    v15 = v11[1];
    if ( (v15 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v15 + v14 > 0x7FFFFFFF0000LL || v15 + v14 < v15 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  memmove(v7, (const void *)v11[1], (unsigned int)v14);
  for ( i = 0; ; ++i )
  {
    v9 = 0LL;
    v40 = 0LL;
    v43 = 0LL;
    if ( i >= *((_DWORD *)v11 + 1) )
      break;
    v41 = 5LL * i;
    if ( !v7[20 * i] )
    {
      v8 = -1073741811;
      v9 = 0LL;
      v40 = 0LL;
      v43 = 0LL;
      goto LABEL_70;
    }
    v9 = (void *)ExAllocatePool2(256LL, v7[20 * i], 1950442835LL);
    v40 = v9;
    v43 = v9;
    if ( !v9 )
    {
      v8 = -1073741670;
      goto LABEL_70;
    }
    v18 = v7[4 * v41];
    if ( (_WORD)v18 )
    {
      v19 = *(_QWORD *)&v7[4 * v41 + 4];
      if ( (v19 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v19 + v18 > 0x7FFFFFFF0000LL || v19 + v18 < v19 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(v9, *(const void **)&v7[4 * v41 + 4], v7[4 * v41]);
    *(_QWORD *)&v7[4 * v41 + 4] = v9;
    v42 = ++v38;
    v43 = 0LL;
  }
  v20 = 0;
  v35 = 0;
  while ( v20 < *((_DWORD *)v11 + 1) )
  {
    v21 = 5LL * v20;
    v22 = *(_DWORD *)&v7[20 * v20 + 12];
    if ( v22 )
    {
      switch ( v7[20 * v20 + 8] )
      {
        case 1u:
        case 2u:
LABEL_41:
          v23 = SepCaptureInt64Array(*(void **)&v7[20 * v20 + 16]);
          break;
        case 3u:
          LOBYTE(v16) = 1;
          v23 = SepCaptureUnicodeStringArray(*(_QWORD *)&v7[20 * v20 + 16], v22, v16, &P);
          break;
        case 4u:
          v23 = SepCaptureFqbnArray(*(void **)&v7[20 * v20 + 16]);
          break;
        default:
          if ( v7[20 * v20 + 8] != 5 )
          {
            if ( v7[20 * v20 + 8] == 6 )
              goto LABEL_41;
            if ( v7[20 * v20 + 8] != 16 )
            {
              v8 = -1073741637;
LABEL_45:
              if ( v8 < 0 )
                goto LABEL_70;
              v39 = ++v36;
              P = 0LL;
              goto LABEL_33;
            }
          }
          v23 = SepCaptureOctetStringArray(*(void **)&v7[20 * v20 + 16]);
          break;
      }
      v8 = v23;
      if ( v23 >= 0 )
        *(_QWORD *)&v7[4 * v21 + 16] = P;
      v20 = v35;
      goto LABEL_45;
    }
    if ( !a5 )
    {
      v8 = -1073741811;
      goto LABEL_70;
    }
    *(_QWORD *)&v7[20 * v20 + 16] = 0LL;
    v39 = ++v36;
LABEL_33:
    v35 = ++v20;
  }
  if ( v8 >= 0 )
  {
    v11[1] = (unsigned __int64)v7;
    if ( !v34 && a3 != *((_DWORD *)v11 + 1) )
      v8 = -1073741811;
  }
LABEL_70:
  v25 = v34;
  if ( v8 < 0 )
    goto LABEL_92;
  for ( j = 0; j < *((_DWORD *)v11 + 1); ++j )
  {
    v27 = j;
    v41 = j;
    if ( v25 || (v28 = a2[j], v41 = j, v28 == 2) || (v41 = j, v28 == 4) )
    {
      v29 = 0LL;
      while ( 1 )
      {
        v51 = v29;
        if ( (unsigned int)v29 >= 4 )
          break;
        v46 = 3 * v29;
        v47 = (PCUNICODE_STRING)&v7[20 * v27];
        if ( !RtlCompareUnicodeString(v47, (PCUNICODE_STRING)&SepValidAttributesTypes[3 * v29], 1u) )
        {
          if ( v47[1].Length != LODWORD(SepValidAttributesTypes[v46 + 2]) )
            v8 = -1073741811;
          if ( LODWORD(v47[1].Buffer) < HIDWORD(SepValidAttributesTypes[v46 + 2]) )
            v8 = -1073741811;
          break;
        }
        v29 = (unsigned int)(v51 + 1);
        v27 = v41;
      }
    }
    v25 = v34;
  }
  v9 = v40;
LABEL_78:
  if ( v8 < 0 )
  {
LABEL_92:
    if ( v7 )
    {
      v30 = 0;
      v31 = v38;
      while ( v30 < v31 )
        ExFreePoolWithTag(*(PVOID *)&v7[20 * v30++ + 4], 0);
      v32 = 0;
      v9 = v40;
      while ( v32 < v36 )
      {
        v33 = *(void **)&v7[20 * v32 + 16];
        if ( v33 )
          ExFreePoolWithTag(v33, 0);
        ++v32;
      }
      ExFreePoolWithTag(v7, 0);
      v11 = v45;
    }
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    if ( P )
      ExFreePoolWithTag(P, 0);
    ExFreePoolWithTag(v11, 0);
  }
  else
  {
    *a6 = v11;
  }
  return (unsigned int)v8;
}
