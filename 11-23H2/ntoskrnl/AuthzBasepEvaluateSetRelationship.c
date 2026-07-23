/*
 * XREFs of AuthzBasepEvaluateSetRelationship @ 0x14030C048
 * Callers:
 *     AuthzBasepEvaluateExpression @ 0x14030C134 (AuthzBasepEvaluateExpression.c)
 * Callees:
 *     AuthzBasepRestartOperandValueEnumeration @ 0x14030C004 (AuthzBasepRestartOperandValueEnumeration.c)
 *     AuthzBasepValueInSet @ 0x14030C1D8 (AuthzBasepValueInSet.c)
 *     AuthzBasepGetNextValue @ 0x14030C304 (AuthzBasepGetNextValue.c)
 */

__int64 __fastcall AuthzBasepEvaluateSetRelationship(int a1, __int64 a2, _DWORD *a3)
{
  int v4; // edx
  int v5; // r13d
  int v6; // r12d
  int v8; // ecx
  __int64 v9; // r14
  int v10; // eax
  unsigned int v12; // r14d
  int v13; // eax
  __int64 v14; // r9
  char v15; // al
  char v16; // al
  unsigned int v17; // r14d
  int NextValue; // eax
  char v19; // al
  int v20; // eax
  unsigned int v21; // r14d
  int v22; // eax
  char v23; // al
  __int128 v24; // [rsp+20h] [rbp-50h] BYREF
  __int128 v25; // [rsp+30h] [rbp-40h]
  __int64 v26; // [rsp+40h] [rbp-30h]
  _OWORD v27[2]; // [rsp+48h] [rbp-28h] BYREF
  int v28; // [rsp+68h] [rbp-8h]
  __int16 v29; // [rsp+6Ch] [rbp-4h]

  *a3 = 0;
  v4 = 0;
  LODWORD(v26) = 0;
  v5 = 0;
  WORD2(v26) = 0;
  v6 = 0;
  v28 = 0;
  v29 = 0;
  v24 = 0LL;
  v25 = 0LL;
  memset(v27, 0, sizeof(v27));
  if ( !a1 )
  {
    if ( *(_DWORD *)(a2 + 12) != 1 && *(_DWORD *)(a2 + 52) != 1 && *(_DWORD *)(a2 + 4) != *(_DWORD *)(a2 + 44) )
      return (unsigned int)v4;
    while ( 1 )
    {
      v17 = *(_DWORD *)(a2 + 8);
      NextValue = AuthzBasepGetNextValue(a2, &v24);
      v4 = NextValue;
      if ( NextValue == -2147483622 )
        break;
      if ( NextValue < 0 )
        goto LABEL_13;
      if ( *(_WORD *)(a2 + 40) == 4 )
      {
        v4 = AuthzBasepGetNextValue(a2, v27);
        if ( v4 < 0 )
          goto LABEL_13;
        v19 = *(_BYTE *)(a2 + 4);
        DWORD2(v24) = 0;
        BYTE4(v24) = v19;
        LOWORD(v24) = *(_WORD *)a2;
        *(_QWORD *)&v25 = *(_QWORD *)(a2 + 16);
        DWORD2(v25) = *(_DWORD *)(a2 + 8);
        v26 = *(_QWORD *)(a2 + 32) + v17;
      }
      ++v5;
      v4 = ((__int64 (__fastcall *)(__int128 *, __int64, _DWORD *, _QWORD))AuthzBasepValueInSet)(&v24, a2 + 40, a3, 0LL);
      if ( v4 < 0 )
      {
LABEL_13:
        *a3 = -1;
        return (unsigned int)v4;
      }
      if ( *a3 != 1 )
        return (unsigned int)v4;
    }
    v20 = *(_DWORD *)(a2 + 12);
    v4 = 0;
    if ( v20 == 1 && !*(_BYTE *)(a2 + 4) )
    {
      if ( *(_DWORD *)(a2 + 52) == 1 )
        goto LABEL_43;
      if ( *(_DWORD *)(a2 + 44) == 1 )
        return (unsigned int)v4;
    }
    if ( *(_DWORD *)(a2 + 52) != 1 )
    {
LABEL_46:
      AuthzBasepRestartOperandValueEnumeration(a2);
      while ( 1 )
      {
        v21 = *(_DWORD *)(a2 + 48);
        v22 = AuthzBasepGetNextValue(a2 + 40, &v24);
        v4 = v22;
        if ( v22 == -2147483622 )
          break;
        if ( v22 < 0 )
          goto LABEL_13;
        if ( *(_WORD *)a2 == 4 )
        {
          v4 = AuthzBasepGetNextValue(a2 + 40, v27);
          if ( v4 < 0 )
            goto LABEL_13;
          v23 = *(_BYTE *)(a2 + 44);
          DWORD2(v24) = 0;
          BYTE4(v24) = v23;
          LOWORD(v24) = *(_WORD *)(a2 + 40);
          *(_QWORD *)&v25 = *(_QWORD *)(a2 + 56);
          DWORD2(v25) = *(_DWORD *)(a2 + 48);
          v26 = *(_QWORD *)(a2 + 72) + v21;
        }
        ++v6;
        v4 = ((__int64 (__fastcall *)(__int128 *, __int64, _DWORD *, _QWORD))AuthzBasepValueInSet)(&v24, a2, a3, 0LL);
        if ( v4 < 0 )
          goto LABEL_13;
        if ( *a3 != 1 )
          return (unsigned int)v4;
      }
      v4 = 0;
      if ( v5 != v6 )
        *a3 = 0;
      return (unsigned int)v4;
    }
LABEL_43:
    if ( !*(_BYTE *)(a2 + 44) && v20 != 1 && *(_DWORD *)(a2 + 4) == 1 )
      return (unsigned int)v4;
    goto LABEL_46;
  }
  v8 = a1 - 1;
  if ( v8 )
  {
    if ( v8 != 1 )
      return (unsigned int)v4;
    while ( 1 )
    {
      v12 = *(_DWORD *)(a2 + 8);
      v13 = AuthzBasepGetNextValue(a2, &v24);
      v4 = v13;
      if ( v13 == -2147483622 )
        return 0;
      if ( v13 < 0 )
        goto LABEL_13;
      if ( *(_WORD *)(a2 + 40) == 4 )
      {
        v4 = AuthzBasepGetNextValue(a2, v27);
        if ( v4 < 0 )
          goto LABEL_13;
        v15 = *(_BYTE *)(a2 + 4);
        DWORD2(v24) = 0;
        BYTE4(v24) = v15;
        LOWORD(v24) = *(_WORD *)a2;
        *(_QWORD *)&v25 = *(_QWORD *)(a2 + 16);
        DWORD2(v25) = *(_DWORD *)(a2 + 8);
        v26 = *(_QWORD *)(a2 + 32) + v12;
      }
      LOBYTE(v14) = 1;
      v4 = ((__int64 (__fastcall *)(__int128 *, __int64, _DWORD *, __int64))AuthzBasepValueInSet)(
             &v24,
             a2 + 40,
             a3,
             v14);
      if ( v4 < 0 )
        goto LABEL_13;
      if ( *a3 )
        return (unsigned int)v4;
    }
  }
  if ( *(_DWORD *)(a2 + 12) == 1 || *(_DWORD *)(a2 + 52) == 1 || *(_DWORD *)(a2 + 4) >= *(_DWORD *)(a2 + 44) )
  {
    while ( 1 )
    {
      v9 = *(unsigned int *)(a2 + 48);
      v10 = AuthzBasepGetNextValue(a2 + 40, &v24);
      v4 = v10;
      if ( v10 == -2147483622 )
        return 0;
      if ( v10 < 0 )
        goto LABEL_13;
      if ( *(_WORD *)a2 == 4 )
      {
        v4 = AuthzBasepGetNextValue(a2 + 40, v27);
        if ( v4 < 0 )
          goto LABEL_13;
        v16 = *(_BYTE *)(a2 + 44);
        DWORD2(v24) = 0;
        BYTE4(v24) = v16;
        LOWORD(v24) = *(_WORD *)(a2 + 40);
        *(_QWORD *)&v25 = *(_QWORD *)(a2 + 56);
        DWORD2(v25) = *(_DWORD *)(a2 + 48);
        v26 = *(_QWORD *)(a2 + 72) + v9;
      }
      v4 = ((__int64 (__fastcall *)(__int128 *, __int64, _DWORD *, _QWORD))AuthzBasepValueInSet)(&v24, a2, a3, 0LL);
      if ( v4 < 0 )
        goto LABEL_13;
      if ( *a3 != 1 )
        return (unsigned int)v4;
    }
  }
  return (unsigned int)v4;
}
