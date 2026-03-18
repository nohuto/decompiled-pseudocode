/*
 * XREFs of MiResolveImageReferences @ 0x140757FFC
 * Callers:
 *     MiResolveImageImports @ 0x140761604 (MiResolveImageImports.c)
 * Callees:
 *     ApiSetResolveToHost @ 0x1402516A0 (ApiSetResolveToHost.c)
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     MiSessionLookupImage @ 0x1402DBF3C (MiSessionLookupImage.c)
 *     MiSessionReferenceImage @ 0x1402DC164 (MiSessionReferenceImage.c)
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     _strnicmp @ 0x1403E1240 (_strnicmp.c)
 *     RtlDuplicateUnicodeString @ 0x1406A9D20 (RtlDuplicateUnicodeString.c)
 *     PsQueryCurrentApiSetSchema @ 0x1406D972C (PsQueryCurrentApiSetSchema.c)
 *     MiCompressImportList @ 0x1406DF688 (MiCompressImportList.c)
 *     MiPrepareImportList @ 0x1406DF748 (MiPrepareImportList.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     MiSnapThunk @ 0x1407584B4 (MiSnapThunk.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 *     MiDereferenceSingleImport @ 0x1407623BC (MiDereferenceSingleImport.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     MiLoadImportDll @ 0x14082ECCC (MiLoadImportDll.c)
 *     MiFormFullImageName @ 0x140858690 (MiFormFullImageName.c)
 *     MiLogFailedDriverLoad @ 0x14096C4AC (MiLogFailedDriverLoad.c)
 *     MiSnapUnresolvedImport @ 0x14097838C (MiSnapUnresolvedImport.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiResolveImageReferences(__int64 a1, __int64 a2, _QWORD *a3, const UNICODE_STRING *a4, int a5)
{
  const UNICODE_STRING *v5; // r15
  unsigned __int64 v6; // r13
  unsigned int *v7; // rax
  unsigned int *v8; // r12
  char v9; // r14
  PVOID v10; // rdi
  int v11; // eax
  UNICODE_STRING *v12; // rsi
  int ImportDll; // ebx
  const char *v14; // rdi
  __int64 CurrentApiSetSchema; // rax
  _QWORD *v16; // r14
  PVOID *v17; // rbx
  unsigned __int64 v18; // r15
  unsigned int v19; // ecx
  __int64 v20; // rax
  _QWORD *v21; // rdi
  int v22; // r14d
  _QWORD *v23; // rbx
  unsigned int v25; // edi
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
  unsigned int v36; // [rsp+54h] [rbp-55h] BYREF
  UNICODE_STRING String1; // [rsp+58h] [rbp-51h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-41h] BYREF
  UNICODE_STRING StringIn; // [rsp+78h] [rbp-31h] BYREF
  unsigned __int64 *v40; // [rsp+88h] [rbp-21h] BYREF
  __int64 v41; // [rsp+90h] [rbp-19h] BYREF
  _QWORD v42[2]; // [rsp+98h] [rbp-11h] BYREF
  STRING DestinationString; // [rsp+A8h] [rbp-1h] BYREF
  __int64 v45; // [rsp+110h] [rbp+67h]

  v45 = a2;
  v42[0] = 3932218LL;
  v42[1] = L"\\SystemRoot\\System32\\drivers\\";
  v5 = a4;
  *(_QWORD *)&String1.Length = 0LL;
  v6 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 136) = -2LL;
  v40 = 0LL;
  v41 = 0LL;
  LOBYTE(a2) = 1;
  v32[0] = 0;
  DestinationString = 0LL;
  UnicodeString = 0LL;
  StringIn = 0LL;
  v7 = (unsigned int *)RtlImageDirectoryEntryToData(v6, a2, 1, (int)&v36);
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
  v11 = MiPrepareImportList(v7, (__int64 *)&P);
  v12 = (UNICODE_STRING *)P;
  ImportDll = v11;
  if ( v11 >= 0 )
  {
    while ( 1 )
    {
      if ( !v8[3] || !*v8 )
      {
        v23 = MiCompressImportList(v12, 1);
        if ( (unsigned int)MiGetSystemRegionType(v6) == 1 )
          MiSessionLookupImage(v6)[11] = v23;
        else
          *(_QWORD *)(a1 + 136) = v23;
        return 0LL;
      }
      v14 = (const char *)(v6 + v8[3]);
      P = 0LL;
      RtlInitAnsiString(&DestinationString, v14);
      ImportDll = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
      if ( ImportDll < 0 )
        goto LABEL_64;
      if ( !UnicodeString.Buffer )
      {
LABEL_63:
        ImportDll = -1073741670;
LABEL_64:
        v10 = P;
        v9 = v31;
        v26 = v34;
        goto LABEL_72;
      }
      CurrentApiSetSchema = PsQueryCurrentApiSetSchema();
      ImportDll = ApiSetResolveToHost(CurrentApiSetSchema, &UnicodeString.Length, v45, v32, (__int64)&StringIn);
      if ( ImportDll < 0 )
        goto LABEL_64;
      if ( v32[0] )
      {
        RtlFreeUnicodeString(&UnicodeString);
        if ( !StringIn.Length )
          goto LABEL_7;
        v36 = 0x80000000;
        v16 = v42;
        ImportDll = RtlDuplicateUnicodeString(0, &StringIn, &UnicodeString);
        if ( ImportDll < 0 )
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
        v36 = 0;
      }
      if ( !v5 || !strnicmp(v14, "ntoskrnl", 8uLL) || !strnicmp(v14, "hal", 3uLL) )
      {
        String1 = UnicodeString;
      }
      else
      {
        String1.MaximumLength = UnicodeString.Length + v5->Length;
        String1.Buffer = (wchar_t *)MiAllocatePool(256, String1.MaximumLength, 0x54446D4Du);
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
              ImportDll = -1073740608;
              goto LABEL_64;
            }
            if ( ((_DWORD)v17[13] & 0x1000) != 0 )
              goto LABEL_27;
            if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)v17[6]) != 1 )
            {
              if ( v17[17] != (PVOID)1 )
                ++*((_WORD *)v17 + 54);
              goto LABEL_27;
            }
            v18 &= -(__int64)((unsigned int)MiSessionReferenceImage(v18) != 0);
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
        ImportDll = -1073740945;
        goto LABEL_64;
      }
      if ( !(unsigned int)MiFormFullImageName(v16, &UnicodeString, &StringIn) )
        goto LABEL_63;
      v25 = v36;
      ImportDll = MiLoadImportDll((unsigned int)&StringIn, (_DWORD)v5, v36, (unsigned int)&v40, (__int64)&v41);
      if ( ImportDll == -1073741800 )
      {
        if ( (unsigned int)MiGetSystemRegionType(v6) != 1 )
          goto LABEL_50;
        ImportDll = MiLoadImportDll((unsigned int)&StringIn, (_DWORD)v5, v25 | 1, (unsigned int)&v40, (__int64)&v41);
      }
      if ( ImportDll == -1073741772 )
      {
        ExFreePoolWithTag(StringIn.Buffer, 0);
        if ( v16 == v42 )
        {
          if ( !v32[0] )
          {
            ImportDll = -1073741772;
            goto LABEL_64;
          }
          if ( !(unsigned int)MiFormFullImageName(a3, &UnicodeString, &StringIn) )
            goto LABEL_63;
        }
        else if ( !(unsigned int)MiFormFullImageName(v42, &UnicodeString, &StringIn) )
        {
          ImportDll = -1073741670;
          goto LABEL_70;
        }
        ImportDll = MiLoadImportDll((unsigned int)&StringIn, (_DWORD)v5, v25, (unsigned int)&v40, (__int64)&v41);
        if ( v32[0] && ImportDll == -1073741800 && (unsigned int)MiGetSystemRegionType(v6) == 1 )
          ImportDll = MiLoadImportDll((unsigned int)&StringIn, (_DWORD)v5, v25 | 1, (unsigned int)&v40, (__int64)&v41);
      }
LABEL_50:
      ExFreePoolWithTag(StringIn.Buffer, 0);
      v26 = 0LL;
      if ( ImportDll < 0 )
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
        v21 = (_QWORD *)(v20 + v6);
        v22 = v6 + v8[4];
        while ( *v21 )
        {
          ImportDll = MiSnapThunk(v18, v6, (_DWORD)v21, v22, 0LL);
          if ( ImportDll < 0 )
          {
            v26 = MiSnapUnresolvedImport(v6, v21, v18);
            goto LABEL_90;
          }
          ++v21;
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
  MiLogFailedDriverLoad(v45, v10, v26, (unsigned int)ImportDll);
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
          if ( !(unsigned int)MiDereferenceSingleImport(v30) )
            break;
          v29 = ++v28;
        }
        while ( (unsigned __int64)v28 < *(_QWORD *)&p_String1->Length );
      }
    }
    ExFreePoolWithTag(v12, 0);
  }
  return (unsigned int)ImportDll;
}
