/*
 * XREFs of ApiSetQuerySchemaInfo @ 0x18000C53C
 * Callers:
 *     RtlIsApiSetImplemented @ 0x18000C490 (RtlIsApiSetImplemented.c)
 *     ApiSetQueryApiSetPresenceEx @ 0x1800884E0 (ApiSetQueryApiSetPresenceEx.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x180014C80 (RtlCompareUnicodeString.c)
 *     ApiSetpSearchForApiSet @ 0x180019EF0 (ApiSetpSearchForApiSet.c)
 */

__int64 __fastcall ApiSetQuerySchemaInfo(__int64 a1, unsigned __int16 *a2, unsigned __int64 a3, bool *a4)
{
  __int64 v4; // rdi
  unsigned int v5; // ebx
  _BYTE *v7; // r13
  bool v9; // bp
  bool v10; // r14
  char v11; // r10
  __int64 v12; // rsi
  _WORD *v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // edx
  __int64 v16; // r8
  unsigned int v17; // edi
  unsigned int v18; // eax
  _WORD *v19; // r9
  int v20; // r10d
  int v21; // eax
  unsigned int *v22; // rax
  unsigned int *v23; // rdx
  unsigned int v24; // r10d
  unsigned int v25; // r9d
  _WORD *v26; // r8
  _WORD *v27; // r8
  int v28; // r9d
  int v30; // eax
  __int16 v31; // ax
  _WORD v32[4]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v33; // [rsp+28h] [rbp-40h]
  int v34; // [rsp+30h] [rbp-38h] BYREF
  const wchar_t *v35; // [rsp+38h] [rbp-30h]

  v4 = *a2;
  v5 = 0;
  v7 = (_BYTE *)a3;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( (unsigned int)v4 >= 8 )
  {
    a3 = **((_QWORD **)a2 + 1) & 0xFFFFFFDFFFDFFFDFuLL;
    if ( a3 == 0x2D004900500041LL || a3 == 0x2D005400580045LL )
      v11 = 1;
  }
  v12 = *((_QWORD *)a2 + 1);
  if ( !v11 )
  {
    v33 = *((_QWORD *)a2 + 1);
    if ( (unsigned __int16)v4 < 0x14u )
    {
      v31 = v4;
      v32[0] = v4;
    }
    else
    {
      v31 = 20;
      v32[0] = 20;
    }
    v32[1] = v31;
    v34 = 1310740;
    LOBYTE(a3) = 1;
    v35 = L"SchemaExt-";
    if ( !(unsigned int)RtlCompareUnicodeString(v32, &v34, a3) )
    {
      v9 = ApiSetpSearchForApiSet(a1, v12, (unsigned __int16)v4 >> 1) != 0;
      v10 = v9;
      goto LABEL_23;
    }
    return (unsigned int)-1073741811;
  }
  v13 = (_WORD *)(v12 + v4);
  v14 = *a2;
  v15 = v14;
  if ( (unsigned int)v4 > 1 )
  {
    do
    {
      v15 -= 2;
      --v13;
    }
    while ( *v13 != 45 && v15 > 1 );
  }
  v16 = (unsigned __int16)v15;
  if ( !((unsigned __int16)v15 >> 1) )
    return (unsigned int)-1073741811;
  v17 = 0;
  v18 = (v14 - (unsigned __int16)v15) >> 1;
  if ( !v18 )
    return (unsigned int)-1073741811;
  if ( *(_WORD *)(v12 + (unsigned __int16)v15) != 45 )
    return (unsigned int)-1073741811;
  v19 = (_WORD *)(v12 + (unsigned __int16)v15 + 2);
  v20 = v18 - 1;
  if ( v18 == 1 )
    return (unsigned int)-1073741811;
  if ( (int)(v18 - 1) > 0 )
  {
    while ( (unsigned __int16)(*v19 - 48) <= 9u )
    {
      v21 = (unsigned __int16)*v19++;
      --v20;
      v17 = v21 + 2 * (5 * v17 - 24);
      if ( v20 <= 0 )
        goto LABEL_15;
    }
    return (unsigned int)-1073741811;
  }
LABEL_15:
  LOWORD(v16) = (unsigned __int16)v15 >> 1;
  v22 = (unsigned int *)ApiSetpSearchForApiSet(a1, v12, v16);
  v23 = v22;
  if ( v22 )
  {
    v24 = 0;
    v25 = (v22[2] - v22[3]) >> 1;
    if ( v25 )
    {
      v26 = (_WORD *)(a1 + v22[1] + v22[3]);
      if ( *v26 == 45 )
      {
        v27 = v26 + 1;
        v28 = v25 - 1;
        if ( v28 )
        {
          while ( v28 > 0 )
          {
            if ( (unsigned __int16)(*v27 - 48) > 9u )
              goto LABEL_23;
            v30 = (unsigned __int16)*v27++;
            --v28;
            v24 = v30 + 2 * (5 * v24 - 24);
          }
          if ( v17 <= v24 )
          {
            v9 = 1;
            if ( v23[5] )
              v10 = *(_DWORD *)(v23[4] + a1 + 16) != 0;
          }
        }
      }
    }
  }
LABEL_23:
  *v7 = v9;
  *a4 = v10;
  return v5;
}
