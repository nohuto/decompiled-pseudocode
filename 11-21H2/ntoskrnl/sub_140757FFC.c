/*
 * XREFs of sub_140757FFC @ 0x140757FFC
 * Callers:
 *     sub_140761604 @ 0x140761604 (sub_140761604.c)
 * Callees:
 *     sub_1402516A0 @ 0x1402516A0 (sub_1402516A0.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     sub_1402DBF3C @ 0x1402DBF3C (sub_1402DBF3C.c)
 *     sub_1402DC164 @ 0x1402DC164 (sub_1402DC164.c)
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     _strnicmp @ 0x1403E1240 (_strnicmp.c)
 *     RtlDuplicateUnicodeString @ 0x1406A9D20 (RtlDuplicateUnicodeString.c)
 *     sub_1406D972C @ 0x1406D972C (sub_1406D972C.c)
 *     sub_1406DF688 @ 0x1406DF688 (sub_1406DF688.c)
 *     sub_1406DF748 @ 0x1406DF748 (sub_1406DF748.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_1407584B4 @ 0x1407584B4 (sub_1407584B4.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 *     sub_1407623BC @ 0x1407623BC (sub_1407623BC.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     sub_14082ECCC @ 0x14082ECCC (sub_14082ECCC.c)
 *     sub_140858690 @ 0x140858690 (sub_140858690.c)
 *     sub_14096C4AC @ 0x14096C4AC (sub_14096C4AC.c)
 *     sub_14097838C @ 0x14097838C (sub_14097838C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140757FFC(__int64 a1, __int64 a2, _QWORD *a3, const UNICODE_STRING *a4, int a5)
{
  const UNICODE_STRING *v5; // r15
  char *v6; // r13
  unsigned int *v7; // rax
  unsigned int *v8; // r12
  char v9; // r14
  PVOID v10; // rdi
  int v11; // eax
  UNICODE_STRING *v12; // rsi
  int v13; // ebx
  const CHAR *v14; // rdi
  __int64 v15; // rax
  _QWORD *v16; // r14
  PVOID *v17; // rbx
  unsigned __int64 v18; // r15
  unsigned int v19; // ecx
  __int64 v20; // rax
  char *v21; // rdi
  unsigned int v22; // r14d
  _QWORD *v23; // rbx
  ULONG v25; // edi
  __int64 v26; // rax
  UNICODE_STRING *p_String1; // rdi
  unsigned int v28; // r14d
  __int64 v29; // rax
  ULONG_PTR v30; // rcx
  char v31; // [rsp+38h] [rbp-71h]
  char v32[7]; // [rsp+39h] [rbp-70h] BYREF
  PVOID P; // [rsp+40h] [rbp-69h] BYREF
  __int64 v34; // [rsp+48h] [rbp-61h]
  unsigned int v35; // [rsp+50h] [rbp-59h]
  ULONG Size; // [rsp+54h] [rbp-55h] BYREF
  UNICODE_STRING String1; // [rsp+58h] [rbp-51h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-41h] BYREF
  UNICODE_STRING StringIn; // [rsp+78h] [rbp-31h] BYREF
  unsigned __int64 *v40; // [rsp+88h] [rbp-21h] BYREF
  __int64 v41; // [rsp+90h] [rbp-19h] BYREF
  _QWORD v42[2]; // [rsp+98h] [rbp-11h] BYREF
  _STRING DestinationString; // [rsp+A8h] [rbp-1h] BYREF

  v42[0] = 3932218LL;
  v42[1] = L"\\SystemRoot\\System32\\drivers\\";
  v5 = a4;
  *(_QWORD *)&String1.Length = 0LL;
  v6 = *(char **)(a1 + 48);
  *(_QWORD *)(a1 + 136) = -2LL;
  v40 = 0LL;
  v41 = 0LL;
  v32[0] = 0;
  DestinationString = 0LL;
  UnicodeString = 0LL;
  StringIn = 0LL;
  v7 = (unsigned int *)RtlImageDirectoryEntryToData(v6, 1u, 1u, &Size);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  v31 = 0;
  P = 0LL;
  v9 = 0;
  v34 = 0LL;
  v10 = 0LL;
  v35 = 0;
  String1.Buffer = 0LL;
  v11 = sub_1406DF748(v7, (__int64 *)&P);
  v12 = (UNICODE_STRING *)P;
  v13 = v11;
  if ( v11 >= 0 )
  {
    while ( 1 )
    {
      if ( !v8[3] || !*v8 )
      {
        v23 = sub_1406DF688(v12, 1);
        if ( (unsigned int)sub_14027B080((unsigned __int64)v6) == 1 )
          sub_1402DBF3C((unsigned __int64)v6)[11] = v23;
        else
          *(_QWORD *)(a1 + 136) = v23;
        return 0LL;
      }
      v14 = &v6[v8[3]];
      P = 0LL;
      RtlInitAnsiString(&DestinationString, v14);
      v13 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
      if ( v13 < 0 )
        goto LABEL_64;
      if ( !UnicodeString.Buffer )
      {
LABEL_63:
        v13 = -1073741670;
LABEL_64:
        v10 = P;
        v9 = v31;
        v26 = v34;
        goto LABEL_72;
      }
      v15 = sub_1406D972C();
      v13 = sub_1402516A0(v15, &UnicodeString.Length, a2, v32, (__int64)&StringIn);
      if ( v13 < 0 )
        goto LABEL_64;
      if ( v32[0] )
      {
        RtlFreeUnicodeString(&UnicodeString);
        if ( !StringIn.Length )
          goto LABEL_7;
        Size = 0x80000000;
        v16 = v42;
        v13 = RtlDuplicateUnicodeString(0, &StringIn, &UnicodeString);
        if ( v13 < 0 )
        {
LABEL_70:
          v10 = P;
          v9 = v31;
          break;
        }
      }
      else
      {
        v16 = a3;
        Size = 0;
      }
      if ( !v5 || !strnicmp(v14, "ntoskrnl", 8uLL) || !strnicmp(v14, "hal", 3uLL) )
      {
        String1 = UnicodeString;
      }
      else
      {
        String1.MaximumLength = UnicodeString.Length + v5->Length;
        String1.Buffer = (wchar_t *)sub_1402828F0(256, String1.MaximumLength, 0x54446D4Du);
        if ( !String1.Buffer )
          goto LABEL_63;
        String1.Length = 0;
        RtlAppendUnicodeStringToString(&String1, v5);
        RtlAppendUnicodeStringToString(&String1, &UnicodeString);
        v31 = 1;
      }
      v17 = (PVOID *)PsLoadedModuleList;
      P = &String1;
      while ( v17 != &PsLoadedModuleList )
      {
        if ( RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)(v17 + 11), 1u) )
        {
          v18 = (unsigned __int64)v17[6];
          if ( v18 )
          {
            if ( (*((_DWORD *)v17 + 49) & 0x20) != 0 )
            {
              v13 = -1073740608;
              goto LABEL_64;
            }
            if ( ((_DWORD)v17[13] & 0x1000) != 0 )
              goto LABEL_27;
            if ( (unsigned int)sub_14027B080((unsigned __int64)v17[6]) != 1 )
            {
              if ( v17[17] != (PVOID)1 )
                ++*((_WORD *)v17 + 54);
              goto LABEL_27;
            }
            v18 &= -(__int64)((unsigned int)sub_1402DC164(v18) != 0);
            if ( v18 )
              goto LABEL_27;
          }
          LODWORD(v5) = (_DWORD)a4;
          break;
        }
        v17 = (PVOID *)*v17;
      }
      if ( a5 )
      {
        v13 = -1073740945;
        goto LABEL_64;
      }
      if ( !(unsigned int)sub_140858690(v16, &UnicodeString, &StringIn) )
        goto LABEL_63;
      v25 = Size;
      v13 = sub_14082ECCC((unsigned int)&StringIn, (_DWORD)v5, Size, (unsigned int)&v40, (__int64)&v41);
      if ( v13 == -1073741800 )
      {
        if ( (unsigned int)sub_14027B080((unsigned __int64)v6) != 1 )
          goto LABEL_50;
        v13 = sub_14082ECCC((unsigned int)&StringIn, (_DWORD)v5, v25 | 1, (unsigned int)&v40, (__int64)&v41);
      }
      if ( v13 == -1073741772 )
      {
        ExFreePoolWithTag(StringIn.Buffer, 0);
        if ( v16 == v42 )
        {
          if ( !v32[0] )
          {
            v13 = -1073741772;
            goto LABEL_64;
          }
          if ( !(unsigned int)sub_140858690(a3, &UnicodeString, &StringIn) )
            goto LABEL_63;
        }
        else if ( !(unsigned int)sub_140858690(v42, &UnicodeString, &StringIn) )
        {
          v13 = -1073741670;
          goto LABEL_70;
        }
        v13 = sub_14082ECCC((unsigned int)&StringIn, (_DWORD)v5, v25, (unsigned int)&v40, (__int64)&v41);
        if ( v32[0] && v13 == -1073741800 && (unsigned int)sub_14027B080((unsigned __int64)v6) == 1 )
          v13 = sub_14082ECCC((unsigned int)&StringIn, (_DWORD)v5, v25 | 1, (unsigned int)&v40, (__int64)&v41);
      }
LABEL_50:
      ExFreePoolWithTag(StringIn.Buffer, 0);
      v26 = 0LL;
      if ( v13 < 0 )
      {
LABEL_90:
        v10 = P;
        v9 = v31;
        goto LABEL_72;
      }
      v17 = (PVOID *)v40;
      v18 = v40[6];
LABEL_27:
      if ( ((_DWORD)v17[13] & 0x1000) == 0 && v17[17] != (PVOID)1 )
      {
        v19 = v35;
        *((_QWORD *)&v12->Buffer + v35) = v17;
        v35 = v19 + 1;
      }
      v20 = *v8;
      if ( (_DWORD)v20 )
      {
        v21 = &v6[v20];
        v22 = (_DWORD)v6 + v8[4];
        while ( *(_QWORD *)v21 )
        {
          v13 = sub_1407584B4(v18, (_DWORD)v6, (_DWORD)v21, v22, 0LL);
          if ( v13 < 0 )
          {
            v26 = sub_14097838C(v6, v21, v18);
            goto LABEL_90;
          }
          v21 += 8;
          v22 += 8;
        }
      }
      RtlFreeUnicodeString(&UnicodeString);
      if ( v31 )
      {
        ExFreePoolWithTag(String1.Buffer, 0);
        v31 = 0;
      }
      v5 = a4;
LABEL_7:
      v8 += 5;
    }
  }
  v26 = 0LL;
LABEL_72:
  sub_14096C4AC(a2, v10, v26, (unsigned int)v13);
  if ( v9 )
    ExFreePoolWithTag(String1.Buffer, 0);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v12 )
  {
    if ( v35 != *(_QWORD *)&v12->Length )
      *(_QWORD *)&v12->Length = v35;
    p_String1 = v12;
    String1 = 0LL;
    if ( v12 != (UNICODE_STRING *)1 && v12 != (UNICODE_STRING *)-2LL )
    {
      if ( ((unsigned __int8)v12 & 1) != 0 )
      {
        *(_QWORD *)&String1.Length = 1LL;
        p_String1 = &String1;
        String1.Buffer = (wchar_t *)((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFFEuLL);
      }
      v28 = 0;
      if ( *(_QWORD *)&p_String1->Length )
      {
        v29 = 0LL;
        do
        {
          v30 = *((_QWORD *)&p_String1->Buffer + v29);
          if ( !v30 )
            break;
          if ( !(unsigned int)sub_1407623BC(v30) )
            break;
          v29 = ++v28;
        }
        while ( (unsigned __int64)v28 < *(_QWORD *)&p_String1->Length );
      }
    }
    ExFreePoolWithTag(v12, 0);
  }
  return (unsigned int)v13;
}
