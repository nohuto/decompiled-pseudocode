/*
 * XREFs of MiResolveImageReferences @ 0x1406AE074
 * Callers:
 *     MiResolveImageImports @ 0x1407BCD10 (MiResolveImageImports.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x140208A00 (RtlAppendUnicodeStringToString.c)
 *     MiSessionReferenceImage @ 0x14020A978 (MiSessionReferenceImage.c)
 *     MiSessionLookupImage @ 0x14020AB68 (MiSessionLookupImage.c)
 *     RtlImageDirectoryEntryToData @ 0x140214A20 (RtlImageDirectoryEntryToData.c)
 *     MiGetSystemRegionType @ 0x140284B00 (MiGetSystemRegionType.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     RtlInitAnsiString @ 0x1402F6EE0 (RtlInitAnsiString.c)
 *     ApiSetResolveToHost @ 0x14035F5D8 (ApiSetResolveToHost.c)
 *     _strnicmp @ 0x1403D99E0 (_strnicmp.c)
 *     MiSnapThunk @ 0x1406AE510 (MiSnapThunk.c)
 *     RtlCompareUnicodeString @ 0x1406DA170 (RtlCompareUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1406DA320 (RtlEqualUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x14076F5C0 (RtlFreeUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140773DF0 (RtlAnsiStringToUnicodeString.c)
 *     RtlDuplicateUnicodeString @ 0x1407B72A0 (RtlDuplicateUnicodeString.c)
 *     PsQueryCurrentApiSetSchema @ 0x1407D43DC (PsQueryCurrentApiSetSchema.c)
 *     MiCompressImportList @ 0x1407D909C (MiCompressImportList.c)
 *     MiPrepareImportList @ 0x1407D915C (MiPrepareImportList.c)
 *     MiDereferenceSingleImport @ 0x1407E9978 (MiDereferenceSingleImport.c)
 *     MiLoadImportDll @ 0x140811078 (MiLoadImportDll.c)
 *     MiFormFullImageName @ 0x140854C7C (MiFormFullImageName.c)
 *     MiSnapUnresolvedImport @ 0x140A2B378 (MiSnapUnresolvedImport.c)
 *     MiLogFailedDriverLoad @ 0x140A30534 (MiLogFailedDriverLoad.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiResolveImageReferences(__int64 a1, __int64 a2, _QWORD *a3, const UNICODE_STRING *a4, int a5)
{
  char *v5; // r13
  unsigned int *v6; // rax
  unsigned int *v7; // r12
  char v8; // di
  UNICODE_STRING *v9; // r15
  unsigned int v10; // esi
  int v11; // eax
  UNICODE_STRING *v12; // r14
  int ImportDll; // ebx
  const CHAR *v14; // rdi
  __int64 CurrentApiSetSchema; // rax
  _QWORD *v16; // rsi
  PVOID *v17; // rbx
  __int64 v18; // r15
  unsigned int v19; // ecx
  __int64 v20; // rax
  char *v21; // rdi
  unsigned int v22; // esi
  __int64 v23; // rbx
  __int64 v25; // rax
  ULONG v26; // edi
  UNICODE_STRING *p_String2; // rdi
  unsigned int v28; // esi
  __int64 v29; // rax
  ULONG_PTR v30; // rcx
  char v31; // [rsp+38h] [rbp-91h]
  char v32; // [rsp+39h] [rbp-90h] BYREF
  unsigned int v33; // [rsp+3Ch] [rbp-8Dh]
  __int64 v34; // [rsp+40h] [rbp-89h]
  UNICODE_STRING *p_String1; // [rsp+48h] [rbp-81h] BYREF
  ULONG Size; // [rsp+50h] [rbp-79h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-71h] BYREF
  UNICODE_STRING StringIn; // [rsp+68h] [rbp-61h] BYREF
  _QWORD v39[2]; // [rsp+78h] [rbp-51h] BYREF
  UNICODE_STRING String1; // [rsp+88h] [rbp-41h] BYREF
  __int64 v41; // [rsp+98h] [rbp-31h] BYREF
  UNICODE_STRING String2; // [rsp+A0h] [rbp-29h] BYREF
  _QWORD v43[2]; // [rsp+B0h] [rbp-19h] BYREF
  STRING DestinationString; // [rsp+C0h] [rbp-9h] BYREF

  v43[0] = 3932218LL;
  *(_QWORD *)&String2.Length = 1441812LL;
  *(_QWORD *)&String1.Length = 0LL;
  v39[0] = 0LL;
  v5 = *(char **)(a1 + 48);
  v43[1] = L"\\SystemRoot\\System32\\drivers\\";
  *(_QWORD *)(a1 + 136) = -2LL;
  String2.Buffer = L"ksrext.sys";
  v41 = 0LL;
  v32 = 0;
  DestinationString = 0LL;
  UnicodeString = 0LL;
  StringIn = 0LL;
  v6 = (unsigned int *)RtlImageDirectoryEntryToData(v5, 1u, 1u, &Size);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  v31 = 0;
  p_String1 = 0LL;
  v8 = 0;
  v34 = 0LL;
  v9 = 0LL;
  v33 = 0;
  v10 = 0;
  String1.Buffer = 0LL;
  v11 = MiPrepareImportList(v6, &p_String1);
  v12 = p_String1;
  ImportDll = v11;
  if ( v11 < 0 )
  {
LABEL_59:
    v25 = 0LL;
    goto LABEL_60;
  }
  while ( 1 )
  {
    if ( !v7[3] || !*v7 )
    {
      v23 = MiCompressImportList(v12);
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)v5) == 1 )
        MiSessionLookupImage((unsigned __int64)v5)[11] = v23;
      else
        *(_QWORD *)(a1 + 136) = v23;
      return 0LL;
    }
    v14 = &v5[v7[3]];
    v9 = 0LL;
    RtlInitAnsiString(&DestinationString, v14);
    ImportDll = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
    if ( ImportDll < 0 )
      goto LABEL_87;
    if ( !UnicodeString.Buffer )
      goto LABEL_86;
    CurrentApiSetSchema = PsQueryCurrentApiSetSchema();
    ImportDll = ApiSetResolveToHost(CurrentApiSetSchema, &UnicodeString.Length, a2, &v32, (__int64)&StringIn);
    if ( ImportDll < 0 )
      goto LABEL_87;
    if ( v32 )
    {
      RtlFreeUnicodeString(&UnicodeString);
      if ( !StringIn.Length )
        goto LABEL_6;
      Size = 0x80000000;
      v16 = v43;
      ImportDll = RtlDuplicateUnicodeString(0, &StringIn, &UnicodeString);
      v25 = 0LL;
      if ( ImportDll < 0 )
        goto LABEL_90;
    }
    else
    {
      v16 = a3;
      Size = 0;
    }
    if ( !a4
      || !strnicmp(v14, "ntoskrnl", 8uLL)
      || !strnicmp(v14, "hal", 3uLL)
      || !RtlCompareUnicodeString(&UnicodeString, &String2, 1u) )
    {
      String1 = UnicodeString;
    }
    else
    {
      String1.MaximumLength = a4->Length + UnicodeString.Length;
      String1.Buffer = (wchar_t *)MiAllocatePool(256, String1.MaximumLength, 0x54446D4Du);
      if ( !String1.Buffer )
        goto LABEL_86;
      String1.Length = 0;
      RtlAppendUnicodeStringToString(&String1, a4);
      RtlAppendUnicodeStringToString(&String1, &UnicodeString);
      v31 = 1;
    }
    v17 = (PVOID *)PsLoadedModuleList;
    p_String1 = &String1;
    while ( 1 )
    {
      if ( v17 == &PsLoadedModuleList )
        goto LABEL_40;
      if ( RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)(v17 + 11), 1u) )
        break;
      v17 = (PVOID *)*v17;
    }
    v18 = (__int64)v17[6];
    if ( !v18 )
      break;
    if ( (*((_DWORD *)v17 + 49) & 0x20) != 0 )
    {
      ImportDll = -1073740608;
LABEL_84:
      v9 = p_String1;
      goto LABEL_87;
    }
    if ( ((_DWORD)v17[13] & 0x1000) == 0 )
    {
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)v17[6]) == 1 )
      {
        v18 &= -(__int64)((unsigned int)MiSessionReferenceImage(v18) != 0);
        if ( !v18 )
          break;
      }
      else if ( v17[17] != (PVOID)1 )
      {
        ++*((_WORD *)v17 + 54);
      }
    }
LABEL_26:
    if ( ((_DWORD)v17[13] & 0x1000) == 0 && v17[17] != (PVOID)1 )
    {
      v19 = v33;
      *((_QWORD *)&v12->Buffer + v33) = v17;
      v33 = v19 + 1;
    }
    v20 = *v7;
    if ( (_DWORD)v20 )
    {
      v21 = &v5[v20];
      v22 = (_DWORD)v5 + v7[4];
      while ( *(_QWORD *)v21 )
      {
        ImportDll = MiSnapThunk(v18, (_DWORD)v5, (_DWORD)v21, v22, 0LL);
        if ( ImportDll < 0 )
        {
          v25 = MiSnapUnresolvedImport(v5, v21, v18);
          goto LABEL_89;
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
LABEL_6:
    v7 += 5;
  }
LABEL_40:
  if ( a5 )
  {
    ImportDll = -1073740945;
    goto LABEL_84;
  }
  if ( !(unsigned int)MiFormFullImageName(v16, &UnicodeString, &StringIn) )
    goto LABEL_85;
  v26 = Size;
  ImportDll = MiLoadImportDll((unsigned int)&StringIn, (_DWORD)a4, Size, (unsigned int)v39, (__int64)&v41);
  if ( ImportDll == -1073741800 )
  {
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)v5) == 1 )
    {
      ImportDll = MiLoadImportDll((unsigned int)&StringIn, (_DWORD)a4, v26 | 1, (unsigned int)v39, (__int64)&v41);
      goto LABEL_43;
    }
LABEL_44:
    ExFreePoolWithTag(StringIn.Buffer, 0);
    v25 = 0LL;
    if ( ImportDll < 0 )
    {
LABEL_89:
      v9 = p_String1;
LABEL_90:
      v8 = v31;
      v10 = v33;
      goto LABEL_60;
    }
    v17 = (PVOID *)v39[0];
    v18 = *(_QWORD *)(v39[0] + 48LL);
    goto LABEL_26;
  }
LABEL_43:
  if ( ImportDll != -1073741772 )
    goto LABEL_44;
  ExFreePoolWithTag(StringIn.Buffer, 0);
  if ( v16 != v43 )
  {
    if ( !(unsigned int)MiFormFullImageName(v43, &UnicodeString, &StringIn) )
    {
      v9 = p_String1;
      ImportDll = -1073741670;
      v8 = v31;
      v10 = v33;
      goto LABEL_59;
    }
    goto LABEL_78;
  }
  if ( !v32 )
  {
    ImportDll = -1073741772;
    goto LABEL_84;
  }
  if ( (unsigned int)MiFormFullImageName(a3, &UnicodeString, &StringIn) )
  {
LABEL_78:
    ImportDll = MiLoadImportDll((unsigned int)&StringIn, (_DWORD)a4, v26, (unsigned int)v39, (__int64)&v41);
    if ( v32 && ImportDll == -1073741800 && (unsigned int)MiGetSystemRegionType((unsigned __int64)v5) == 1 )
      ImportDll = MiLoadImportDll((unsigned int)&StringIn, (_DWORD)a4, v26 | 1, (unsigned int)v39, (__int64)&v41);
    goto LABEL_44;
  }
LABEL_85:
  v9 = p_String1;
LABEL_86:
  ImportDll = -1073741670;
LABEL_87:
  v8 = v31;
  v10 = v33;
  v25 = v34;
LABEL_60:
  MiLogFailedDriverLoad(a2, v9, v25, (unsigned int)ImportDll);
  if ( v8 )
    ExFreePoolWithTag(String1.Buffer, 0);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v12 )
  {
    if ( v10 != *(_QWORD *)&v12->Length )
      *(_QWORD *)&v12->Length = v10;
    p_String2 = v12;
    String2 = 0LL;
    if ( v12 != (UNICODE_STRING *)1 && v12 != (UNICODE_STRING *)-2LL )
    {
      if ( ((unsigned __int8)v12 & 1) != 0 )
      {
        *(_QWORD *)&String2.Length = 1LL;
        p_String2 = &String2;
        String2.Buffer = (wchar_t *)((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFFEuLL);
      }
      v28 = 0;
      if ( *(_QWORD *)&p_String2->Length )
      {
        v29 = 0LL;
        do
        {
          v30 = *((_QWORD *)&p_String2->Buffer + v29);
          if ( !v30 )
            break;
          if ( !(unsigned int)MiDereferenceSingleImport(v30) )
            break;
          v29 = ++v28;
        }
        while ( (unsigned __int64)v28 < *(_QWORD *)&p_String2->Length );
      }
    }
    ExFreePoolWithTag(v12, 0);
  }
  return (unsigned int)ImportDll;
}
