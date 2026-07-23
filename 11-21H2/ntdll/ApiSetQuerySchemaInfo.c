/*
 * XREFs of ApiSetQuerySchemaInfo @ 0x18004883C
 * Callers:
 *     RtlIsApiSetImplemented @ 0x180048760 (RtlIsApiSetImplemented.c)
 *     ApiSetQueryApiSetPresenceEx @ 0x18008E240 (ApiSetQueryApiSetPresenceEx.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x1800415D0 (RtlCompareUnicodeString.c)
 *     ApiSetpSearchForApiSet @ 0x180048A80 (ApiSetpSearchForApiSet.c)
 */

__int64 __fastcall ApiSetQuerySchemaInfo(__int64 a1, unsigned __int16 *a2, bool *a3, bool *a4)
{
  __int64 v4; // rdi
  unsigned int v5; // ebx
  bool v9; // bp
  bool v10; // r14
  char v11; // r10
  unsigned __int64 v12; // r8
  __int64 v13; // rsi
  _WORD *v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // edx
  __int64 v17; // r8
  unsigned int v18; // edi
  unsigned int v19; // eax
  _WORD *v20; // r9
  int v21; // r10d
  int v22; // eax
  unsigned int *v23; // rax
  unsigned int *v24; // rdx
  unsigned int v25; // r10d
  unsigned int v26; // r9d
  _WORD *v27; // r8
  _WORD *v28; // r8
  int v29; // r9d
  int v31; // eax
  unsigned __int16 v32; // ax
  _UNICODE_STRING String1; // [rsp+20h] [rbp-48h] BYREF
  _UNICODE_STRING String2; // [rsp+30h] [rbp-38h] BYREF

  v4 = *a2;
  v5 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( (unsigned int)v4 >= 8 )
  {
    v12 = **((_QWORD **)a2 + 1) & 0xFFFFFFDFFFDFFFDFuLL;
    if ( v12 == 0x2D004900500041LL || v12 == 0x2D005400580045LL )
      v11 = 1;
  }
  v13 = *((_QWORD *)a2 + 1);
  if ( !v11 )
  {
    String1.Buffer = (wchar_t *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int16)v4 < 0x14u )
    {
      v32 = v4;
      String1.Length = v4;
    }
    else
    {
      v32 = 20;
      String1.Length = 20;
    }
    String1.MaximumLength = v32;
    *(_DWORD *)&String2.Length = 1310740;
    String2.Buffer = L"SchemaExt-";
    if ( !RtlCompareUnicodeString(&String1, &String2, 1u) )
    {
      v9 = ApiSetpSearchForApiSet(a1, v13, (unsigned __int16)v4 >> 1) != 0;
      v10 = v9;
      goto LABEL_23;
    }
    return (unsigned int)-1073741811;
  }
  v14 = (_WORD *)(v13 + v4);
  v15 = *a2;
  v16 = v15;
  if ( (unsigned int)v4 > 1 )
  {
    do
    {
      v16 -= 2;
      --v14;
    }
    while ( *v14 != 45 && v16 > 1 );
  }
  v17 = (unsigned __int16)v16;
  if ( !((unsigned __int16)v16 >> 1) )
    return (unsigned int)-1073741811;
  v18 = 0;
  v19 = (v15 - (unsigned __int16)v16) >> 1;
  if ( !v19 )
    return (unsigned int)-1073741811;
  if ( *(_WORD *)(v13 + (unsigned __int16)v16) != 45 )
    return (unsigned int)-1073741811;
  v20 = (_WORD *)(v13 + (unsigned __int16)v16 + 2);
  v21 = v19 - 1;
  if ( v19 == 1 )
    return (unsigned int)-1073741811;
  if ( (int)(v19 - 1) > 0 )
  {
    while ( (unsigned __int16)(*v20 - 48) <= 9u )
    {
      v22 = (unsigned __int16)*v20++;
      --v21;
      v18 = v22 + 2 * (5 * v18 - 24);
      if ( v21 <= 0 )
        goto LABEL_15;
    }
    return (unsigned int)-1073741811;
  }
LABEL_15:
  LOWORD(v17) = (unsigned __int16)v16 >> 1;
  v23 = (unsigned int *)ApiSetpSearchForApiSet(a1, v13, v17);
  v24 = v23;
  if ( v23 )
  {
    v25 = 0;
    v26 = (v23[2] - v23[3]) >> 1;
    if ( v26 )
    {
      v27 = (_WORD *)(a1 + v23[1] + v23[3]);
      if ( *v27 == 45 )
      {
        v28 = v27 + 1;
        v29 = v26 - 1;
        if ( v29 )
        {
          while ( v29 > 0 )
          {
            if ( (unsigned __int16)(*v28 - 48) > 9u )
              goto LABEL_23;
            v31 = (unsigned __int16)*v28++;
            --v29;
            v25 = v31 + 2 * (5 * v25 - 24);
          }
          if ( v18 <= v25 )
          {
            v9 = 1;
            if ( v24[5] )
              v10 = *(_DWORD *)(v24[4] + a1 + 16) != 0;
          }
        }
      }
    }
  }
LABEL_23:
  *a3 = v9;
  *a4 = v10;
  return v5;
}
