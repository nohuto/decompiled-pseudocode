/*
 * XREFs of ApiSetQuerySchemaInfo @ 0x14035F374
 * Callers:
 *     RtlIsApiSetImplemented @ 0x1407D4330 (RtlIsApiSetImplemented.c)
 * Callees:
 *     ApiSetpSearchForApiSet @ 0x14035F720 (ApiSetpSearchForApiSet.c)
 *     ApiSetQuerySchemaInfo_V7 @ 0x140416DE0 (ApiSetQuerySchemaInfo_V7.c)
 *     RtlCompareUnicodeString @ 0x1406DA170 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall ApiSetQuerySchemaInfo(__int64 a1, unsigned __int16 *a2, char *a3, bool *a4)
{
  unsigned int v4; // ebx
  bool v6; // zf
  char v10; // bp
  bool v11; // r12
  __int64 v13; // rcx
  char v14; // r8
  unsigned __int64 v15; // rdx
  wchar_t *v16; // r11
  __int64 v17; // r9
  unsigned int v18; // eax
  _WORD *v19; // rcx
  unsigned int v20; // edx
  __int64 v21; // r8
  unsigned int v22; // edi
  unsigned int v23; // eax
  unsigned __int16 *v24; // r9
  int v25; // r10d
  int v26; // edx
  __int64 v27; // rax
  unsigned int *v28; // rdx
  unsigned int v29; // eax
  unsigned int v30; // r10d
  unsigned int v31; // r9d
  _WORD *v32; // r8
  unsigned __int16 *v33; // r8
  int v34; // r9d
  int v35; // r11d
  UNICODE_STRING String1; // [rsp+20h] [rbp-48h] BYREF
  UNICODE_STRING String2; // [rsp+30h] [rbp-38h] BYREF

  v4 = 0;
  v6 = *(_BYTE *)a1 == 7;
  *a3 = 0;
  *a4 = 0;
  v10 = 0;
  v11 = 0;
  if ( v6 || *(_DWORD *)a1 == 6 && (*(_DWORD *)(a1 + 8) & 4) != 0 && *(_BYTE *)(a1 + 28) == 7 )
    return ApiSetQuerySchemaInfo_V7();
  v13 = *a2;
  v14 = 0;
  if ( (unsigned int)v13 >= 8 )
  {
    v15 = **((_QWORD **)a2 + 1) & 0xFFFFFFDFFFDFFFDFuLL;
    if ( v15 == 0x2D004900500041LL || v15 == 0x2D005400580045LL )
      v14 = 1;
  }
  v16 = (wchar_t *)*((_QWORD *)a2 + 1);
  if ( v14 )
  {
    v18 = v13;
    v19 = (wchar_t *)((char *)v16 + v13);
    v20 = v18;
    if ( v18 > 1 )
    {
      do
      {
        v20 -= 2;
        --v19;
      }
      while ( *v19 != 45 && v20 > 1 );
    }
    v21 = (unsigned __int16)v20;
    LOWORD(v21) = (unsigned __int16)v20 >> 1;
    if ( (unsigned __int16)v20 >> 1 )
    {
      v22 = 0;
      v23 = (v18 - (unsigned __int16)v20) >> 1;
      if ( v23 )
      {
        if ( *(wchar_t *)((char *)v16 + (unsigned __int16)v20) == 45 )
        {
          v24 = (wchar_t *)((char *)v16 + (unsigned __int16)v20 + 2);
          v25 = v23 - 1;
          if ( v23 != 1 )
          {
            if ( (int)(v23 - 1) <= 0 )
            {
LABEL_28:
              v27 = ApiSetpSearchForApiSet(a1, v16, v21, v24);
              v28 = (unsigned int *)v27;
              if ( v27 )
              {
                v29 = *(_DWORD *)(v27 + 12);
                v30 = 0;
                v31 = (v28[2] - v29) >> 1;
                if ( v31 )
                {
                  v32 = (_WORD *)(a1 + v28[1] + v29);
                  if ( *v32 == 45 )
                  {
                    v33 = v32 + 1;
                    v34 = v31 - 1;
                    if ( v34 )
                    {
                      while ( v34 > 0 )
                      {
                        v35 = *v33;
                        if ( (unsigned __int16)(v35 - 48) > 9u )
                          goto LABEL_39;
                        ++v33;
                        --v34;
                        v30 = v35 + 2 * (5 * v30 - 24);
                      }
                      if ( v22 <= v30 )
                      {
                        v10 = 1;
                        if ( v28[5] )
                          v11 = *(_DWORD *)(v28[4] + a1 + 16) != 0;
                      }
                    }
                  }
                }
              }
              goto LABEL_39;
            }
            while ( 1 )
            {
              v26 = *v24;
              if ( (unsigned __int16)(v26 - 48) > 9u )
                break;
              ++v24;
              --v25;
              v22 = v26 + 2 * (5 * v22 - 24);
              if ( v25 <= 0 )
                goto LABEL_28;
            }
          }
        }
      }
    }
    return (unsigned int)-1073741811;
  }
  *(_DWORD *)(&String2.MaximumLength + 1) = 0;
  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = v16;
  if ( (unsigned __int16)v13 >= 0x14u )
  {
    LOWORD(v13) = 20;
    String1.Length = 20;
  }
  else
  {
    String1.Length = v13;
  }
  String1.MaximumLength = v13;
  String2.Buffer = L"schemaext-";
  *(_DWORD *)&String2.Length = 1310740;
  if ( RtlCompareUnicodeString(&String1, &String2, 1u) )
    return (unsigned int)-1073741811;
  if ( ApiSetpSearchForApiSet(a1, *((_QWORD *)a2 + 1), *a2 >> 1, v17) )
    v10 = 1;
  v11 = v10;
LABEL_39:
  *a3 = v10;
  *a4 = v11;
  return v4;
}
