/*
 * XREFs of ApiSetQuerySchemaInfo_V7 @ 0x18009EBF0
 * Callers:
 *     ApiSetQuerySchemaInfo @ 0x18000C31C (ApiSetQuerySchemaInfo.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x180014A70 (RtlCompareUnicodeString.c)
 *     ApiSetpGetSearchKeyInfo_V7 @ 0x18009F0FC (ApiSetpGetSearchKeyInfo_V7.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x18009F24C (ApiSetpSearchForSectionIndex_V7.c)
 */

__int64 __fastcall ApiSetQuerySchemaInfo_V7(__int64 a1, unsigned __int16 *a2, bool *a3, bool *a4)
{
  unsigned int v4; // ebx
  bool v6; // r12
  bool v7; // si
  unsigned int v8; // r14d
  char v9; // r10
  unsigned __int64 v10; // rcx
  __int64 v11; // r15
  unsigned __int16 v12; // ax
  unsigned int v13; // eax
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned __int64 v19; // r9
  unsigned int v20; // eax
  _WORD *v21; // rdx
  _WORD *v22; // rdx
  signed int v23; // r8d
  int v24; // eax
  unsigned __int16 v26; // [rsp+30h] [rbp-30h] BYREF
  _UNICODE_STRING String1; // [rsp+38h] [rbp-28h] BYREF
  _UNICODE_STRING String2; // [rsp+48h] [rbp-18h] BYREF
  char v29; // [rsp+A8h] [rbp+48h] BYREF
  bool *v30; // [rsp+B0h] [rbp+50h]
  bool *v31; // [rsp+B8h] [rbp+58h]

  v31 = a4;
  v30 = a3;
  v4 = 0;
  *a3 = 0;
  v6 = 0;
  *a4 = 0;
  v7 = 0;
  v8 = *a2;
  v9 = 0;
  if ( v8 >= 8 )
  {
    v10 = **((_QWORD **)a2 + 1) & 0xFFFFFFDFFFDFFFDFuLL;
    if ( v10 == 0x2D004900500041LL || v10 == 0x2D005400580045LL )
      v9 = 1;
  }
  v11 = *((_QWORD *)a2 + 1);
  if ( v9 )
  {
    if ( !(unsigned __int8)ApiSetpGetSearchKeyInfo_V7(
                             v11,
                             (unsigned __int16)v8 >> 1,
                             (_DWORD)a3,
                             (unsigned int)&v26,
                             (__int64)&v29) )
      goto LABEL_28;
    if ( v29 )
    {
      v13 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 40, v11, v26);
      if ( v13 == -1 )
        goto LABEL_28;
      v14 = *(unsigned __int16 *)(a1 + 6);
      v15 = *(unsigned int *)(a1 + 40);
      v16 = a1 + *(unsigned __int8 *)(a1 + 50) * (unsigned __int64)v13 - v14;
      if ( (*(_BYTE *)(v15 + v16 + 22) & 2) != 0 )
        v7 = *(_BYTE *)(*(unsigned int *)(a1 + 76)
                      + *(unsigned __int8 *)(a1 + 86) * (unsigned __int64)*(unsigned int *)(v15 + v16 + 12)
                      - v14
                      + a1
                      + 8) <= *(_BYTE *)(a1 + 3);
    }
    else
    {
      v17 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 52, v11, v26);
      if ( v17 == -1 )
        goto LABEL_28;
      v18 = 0;
      v19 = a1
          + v17 * (unsigned __int64)*(unsigned __int8 *)(a1 + 62)
          - *(unsigned __int16 *)(a1 + 6)
          + *(unsigned int *)(a1 + 52);
      v20 = 2 * v26;
      if ( !((v8 - v20) >> 1) )
        return (unsigned int)-1073741811;
      v21 = (_WORD *)(v11 + v20);
      if ( *v21 != 45 )
        return (unsigned int)-1073741811;
      v22 = v21 + 1;
      v23 = ((v8 - v20) >> 1) - 1;
      if ( (v8 - v20) >> 1 == 1 )
        return (unsigned int)-1073741811;
      while ( v23 > 0 )
      {
        if ( (unsigned __int16)(*v22 - 48) > 9u )
          return (unsigned int)-1073741811;
        v24 = (unsigned __int16)*v22++;
        --v23;
        v18 = v24 + 2 * (5 * v18 - 24);
      }
      if ( v18 > *(unsigned __int8 *)(v19 + 18) )
        goto LABEL_28;
      v7 = (*(_BYTE *)(v19 + 19) & 2) != 0;
    }
    v6 = 1;
    goto LABEL_28;
  }
  String1.Buffer = (wchar_t *)*((_QWORD *)a2 + 1);
  if ( (unsigned __int16)v8 >= 0x14u )
  {
    v12 = 20;
    String1.Length = 20;
  }
  else
  {
    v12 = v8;
    String1.Length = v8;
  }
  String1.MaximumLength = v12;
  *(_DWORD *)&String2.Length = 1310740;
  String2.Buffer = L"schemaext-";
  if ( !RtlCompareUnicodeString(&String1, &String2, 1u) )
  {
    v6 = (unsigned int)ApiSetpSearchForSectionIndex_V7(a1, a1 + 64, v11, (unsigned __int16)v8 >> 1) != -1;
    v7 = v6;
LABEL_28:
    *v30 = v6;
    *v31 = v7;
    return v4;
  }
  return (unsigned int)-1073741811;
}
