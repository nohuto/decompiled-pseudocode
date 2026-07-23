/*
 * XREFs of ApiSetQuerySchemaInfo_V7 @ 0x140416DE0
 * Callers:
 *     ApiSetQuerySchemaInfo @ 0x14035F374 (ApiSetQuerySchemaInfo.c)
 * Callees:
 *     ApiSetpGetSearchKeyInfo_V7 @ 0x1404182F4 (ApiSetpGetSearchKeyInfo_V7.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x14041847C (ApiSetpSearchForSectionIndex_V7.c)
 *     RtlCompareUnicodeString @ 0x1406DA170 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall ApiSetQuerySchemaInfo_V7(__int64 a1, unsigned __int16 *a2, char *a3, bool *a4)
{
  unsigned int v4; // ebx
  unsigned __int16 v6; // cx
  bool v8; // si
  char v9; // r10
  char v10; // r15
  unsigned __int64 v11; // rdx
  wchar_t *v12; // r12
  unsigned int v13; // eax
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned __int64 v19; // r10
  unsigned int v20; // eax
  unsigned int v21; // r8d
  _WORD *v22; // rdx
  unsigned __int16 *v23; // rdx
  int v24; // r8d
  int v25; // r9d
  int v27; // [rsp+20h] [rbp-40h]
  unsigned __int16 v28; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING String1; // [rsp+38h] [rbp-28h] BYREF
  UNICODE_STRING String2; // [rsp+48h] [rbp-18h] BYREF
  char v31; // [rsp+A8h] [rbp+48h] BYREF
  char *v32; // [rsp+B0h] [rbp+50h]
  bool *v33; // [rsp+B8h] [rbp+58h]

  v33 = a4;
  v32 = a3;
  v4 = 0;
  v6 = *a2;
  *a3 = 0;
  v8 = 0;
  *a4 = 0;
  v9 = 0;
  v10 = 0;
  if ( v6 >= 8u )
  {
    v11 = **((_QWORD **)a2 + 1) & 0xFFFFFFDFFFDFFFDFuLL;
    if ( v11 == 0x2D004900500041LL || v11 == 0x2D005400580045LL )
      v9 = 1;
  }
  v12 = (wchar_t *)*((_QWORD *)a2 + 1);
  if ( v9 )
  {
    v31 = 0;
    v28 = 0;
    LOBYTE(a3) = 1;
    if ( (unsigned __int8)ApiSetpGetSearchKeyInfo_V7(
                            (_DWORD)v12,
                            v6 >> 1,
                            (_DWORD)a3,
                            (unsigned int)&v28,
                            (__int64)&v31) )
    {
      LOBYTE(v27) = 1;
      if ( v31 )
      {
        v13 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 40, v12, v28, v27);
        if ( v13 != -1 )
        {
          v14 = *(unsigned __int16 *)(a1 + 6);
          v15 = *(unsigned int *)(a1 + 40);
          v16 = a1 + *(unsigned __int8 *)(a1 + 50) * (unsigned __int64)v13 - v14;
          if ( (*(_BYTE *)(v15 + v16 + 22) & 2) != 0 )
            v8 = *(_BYTE *)(*(unsigned int *)(a1 + 76)
                          + *(unsigned __int8 *)(a1 + 86) * (unsigned __int64)*(unsigned int *)(v15 + v16 + 12)
                          - v14
                          + a1
                          + 8) <= *(_BYTE *)(a1 + 3);
LABEL_28:
          v10 = 1;
        }
      }
      else
      {
        v17 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 52, v12, v28, v27);
        if ( v17 != -1 )
        {
          v18 = 0;
          v19 = a1
              + v17 * (unsigned __int64)*(unsigned __int8 *)(a1 + 62)
              - *(unsigned __int16 *)(a1 + 6)
              + *(unsigned int *)(a1 + 52);
          v20 = 2 * v28;
          v21 = (*a2 - v20) >> 1;
          if ( !v21 )
            return (unsigned int)-1073741811;
          v22 = (_WORD *)(*((_QWORD *)a2 + 1) + v20);
          if ( *v22 != 45 )
            return (unsigned int)-1073741811;
          v23 = v22 + 1;
          v24 = v21 - 1;
          if ( !v24 )
            return (unsigned int)-1073741811;
          while ( v24 > 0 )
          {
            v25 = *v23;
            if ( (unsigned __int16)(v25 - 48) > 9u )
              return (unsigned int)-1073741811;
            ++v23;
            --v24;
            v18 = v25 + 2 * (5 * v18 - 24);
          }
          if ( v18 > *(unsigned __int8 *)(v19 + 18) )
            goto LABEL_29;
          v8 = (*(_BYTE *)(v19 + 19) & 2) != 0;
          goto LABEL_28;
        }
      }
    }
LABEL_29:
    *v32 = v10;
    *v33 = v8;
    return v4;
  }
  *(_DWORD *)(&String2.MaximumLength + 1) = 0;
  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = v12;
  if ( v6 >= 0x14u )
  {
    v6 = 20;
    String1.Length = 20;
  }
  else
  {
    String1.Length = v6;
  }
  String1.MaximumLength = v6;
  String2.Buffer = L"schemaext-";
  *(_DWORD *)&String2.Length = 1310740;
  if ( !RtlCompareUnicodeString(&String1, &String2, 1u) )
  {
    if ( (unsigned int)ApiSetpSearchForSectionIndex_V7(a1, a1 + 64, *((_QWORD *)a2 + 1), *a2 >> 1, 1) != -1 )
      v10 = 1;
    v8 = v10;
    goto LABEL_29;
  }
  return (unsigned int)-1073741811;
}
