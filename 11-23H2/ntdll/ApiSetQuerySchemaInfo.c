/*
 * XREFs of ApiSetQuerySchemaInfo @ 0x18000C31C
 * Callers:
 *     RtlIsApiSetImplemented @ 0x18000C270 (RtlIsApiSetImplemented.c)
 *     ApiSetQueryApiSetPresenceEx @ 0x180088CE0 (ApiSetQueryApiSetPresenceEx.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x180014A70 (RtlCompareUnicodeString.c)
 *     ApiSetpSearchForApiSet @ 0x180019D10 (ApiSetpSearchForApiSet.c)
 *     ApiSetQuerySchemaInfo_V7 @ 0x18009EBF0 (ApiSetQuerySchemaInfo_V7.c)
 */

__int64 __fastcall ApiSetQuerySchemaInfo(_BYTE *a1, unsigned __int16 *a2, bool *a3, bool *a4)
{
  unsigned int v4; // ebx
  bool v8; // r14
  bool v9; // r13
  __int64 v11; // rdi
  char v12; // r8
  unsigned __int64 v13; // rcx
  __int64 v14; // rbp
  unsigned __int16 v15; // ax
  __int64 v16; // r9
  _WORD *v17; // rcx
  unsigned int v18; // eax
  unsigned int v19; // edx
  __int64 v20; // r8
  unsigned int v21; // edi
  unsigned int v22; // eax
  _WORD *v23; // r9
  int v24; // r10d
  int v25; // eax
  unsigned int *v26; // rax
  unsigned int *v27; // rdx
  unsigned int v28; // r10d
  unsigned int v29; // r9d
  _WORD *v30; // r8
  _WORD *v31; // r8
  int v32; // r9d
  int v33; // eax
  _UNICODE_STRING String1; // [rsp+20h] [rbp-48h] BYREF
  _UNICODE_STRING String2; // [rsp+30h] [rbp-38h] BYREF

  v4 = 0;
  *a3 = 0;
  *a4 = 0;
  v8 = 0;
  v9 = 0;
  if ( *a1 == 7 || *(_DWORD *)a1 == 6 && (a1[8] & 4) != 0 && a1[28] == 7 )
    return ApiSetQuerySchemaInfo_V7();
  v11 = *a2;
  v12 = 0;
  if ( (unsigned int)v11 >= 8 )
  {
    v13 = **((_QWORD **)a2 + 1) & 0xFFFFFFDFFFDFFFDFuLL;
    if ( v13 == 0x2D004900500041LL || v13 == 0x2D005400580045LL )
      v12 = 1;
  }
  v14 = *((_QWORD *)a2 + 1);
  if ( v12 )
  {
    v17 = (_WORD *)(v11 + v14);
    v18 = *a2;
    v19 = v18;
    if ( (unsigned int)v11 > 1 )
    {
      do
      {
        v19 -= 2;
        --v17;
      }
      while ( *v17 != 45 && v19 > 1 );
    }
    v20 = (unsigned __int16)v19;
    if ( (unsigned __int16)v19 >> 1 )
    {
      v21 = 0;
      v22 = (v18 - (unsigned __int16)v19) >> 1;
      if ( v22 )
      {
        if ( *(_WORD *)((unsigned __int16)v19 + v14) == 45 )
        {
          v23 = (_WORD *)((unsigned __int16)v19 + v14 + 2);
          v24 = v22 - 1;
          if ( v22 != 1 )
          {
            if ( (int)(v22 - 1) <= 0 )
            {
LABEL_26:
              LOWORD(v20) = (unsigned __int16)v19 >> 1;
              v26 = (unsigned int *)ApiSetpSearchForApiSet(a1, v14, v20, v23);
              v27 = v26;
              if ( v26 )
              {
                v28 = 0;
                v29 = (v26[2] - v26[3]) >> 1;
                if ( v29 )
                {
                  v30 = &a1[v26[1] + v26[3]];
                  if ( *v30 == 45 )
                  {
                    v31 = v30 + 1;
                    v32 = v29 - 1;
                    if ( v32 )
                    {
                      while ( v32 > 0 )
                      {
                        if ( (unsigned __int16)(*v31 - 48) > 9u )
                          goto LABEL_37;
                        v33 = (unsigned __int16)*v31++;
                        --v32;
                        v28 = v33 + 2 * (5 * v28 - 24);
                      }
                      if ( v21 <= v28 )
                      {
                        v8 = 1;
                        if ( v27[5] )
                          v9 = *(_DWORD *)&a1[v27[4] + 16] != 0;
                      }
                    }
                  }
                }
              }
              goto LABEL_37;
            }
            while ( (unsigned __int16)(*v23 - 48) <= 9u )
            {
              v25 = (unsigned __int16)*v23++;
              --v24;
              v21 = v25 + 2 * (5 * v21 - 24);
              if ( v24 <= 0 )
                goto LABEL_26;
            }
          }
        }
      }
    }
    return (unsigned int)-1073741811;
  }
  String1.Buffer = (wchar_t *)*((_QWORD *)a2 + 1);
  if ( (unsigned __int16)v11 >= 0x14u )
  {
    v15 = 20;
    String1.Length = 20;
  }
  else
  {
    v15 = v11;
    String1.Length = v11;
  }
  String1.MaximumLength = v15;
  *(_DWORD *)&String2.Length = 1310740;
  String2.Buffer = L"schemaext-";
  if ( RtlCompareUnicodeString(&String1, &String2, 1u) )
    return (unsigned int)-1073741811;
  v8 = ApiSetpSearchForApiSet(a1, v14, (unsigned __int16)v11 >> 1, v16) != 0;
  v9 = v8;
LABEL_37:
  *a3 = v8;
  *a4 = v9;
  return v4;
}
