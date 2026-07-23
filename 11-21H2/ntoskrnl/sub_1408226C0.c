/*
 * XREFs of sub_1408226C0 @ 0x1408226C0
 * Callers:
 *     sub_140818934 @ 0x140818934 (sub_140818934.c)
 * Callees:
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlNtStatusToDosError @ 0x14069E070 (RtlNtStatusToDosError.c)
 *     RtlWriteRegistryValue @ 0x1406D76C0 (RtlWriteRegistryValue.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 *     sub_140781F40 @ 0x140781F40 (sub_140781F40.c)
 *     sub_14081637C @ 0x14081637C (sub_14081637C.c)
 *     sub_140822030 @ 0x140822030 (sub_140822030.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_1408226C0(__int64 a1, unsigned int a2, const WCHAR *a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r13
  WCHAR *v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r12
  wchar_t *Pool2; // rax
  WCHAR *v15; // r15
  __int64 v16; // rbx
  __int64 v17; // r12
  NTSTATUS v18; // eax
  const WCHAR *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r10
  __int64 v24; // rcx
  UNICODE_STRING *v25; // rdi
  __int64 *v26; // rbx
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdi
  wchar_t *v31; // rax
  NTSTATUS v32; // eax
  HANDLE v33; // rcx
  size_t Size; // [rsp+60h] [rbp-B0h]
  size_t v35; // [rsp+70h] [rbp-A0h]
  size_t v36; // [rsp+80h] [rbp-90h]
  HANDLE Handle; // [rsp+90h] [rbp-80h] BYREF
  int v38; // [rsp+98h] [rbp-78h] BYREF
  unsigned int v39; // [rsp+9Ch] [rbp-74h] BYREF
  int v40; // [rsp+A0h] [rbp-70h] BYREF
  char v41[4]; // [rsp+A4h] [rbp-6Ch] BYREF
  ULONG ValueData; // [rsp+A8h] [rbp-68h] BYREF
  size_t v43; // [rsp+ACh] [rbp-64h] BYREF
  int v44; // [rsp+B4h] [rbp-5Ch] BYREF
  __int64 v45; // [rsp+B8h] [rbp-58h]
  __int64 v46; // [rsp+C0h] [rbp-50h] BYREF
  HANDLE KeyHandle; // [rsp+C8h] [rbp-48h] BYREF
  __int64 v48; // [rsp+D0h] [rbp-40h] BYREF
  PVOID Src; // [rsp+D8h] [rbp-38h] BYREF
  PVOID v50; // [rsp+E0h] [rbp-30h] BYREF
  PVOID P; // [rsp+E8h] [rbp-28h] BYREF
  PVOID v52; // [rsp+F0h] [rbp-20h] BYREF
  int v53[2]; // [rsp+F8h] [rbp-18h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+100h] [rbp-10h] BYREF
  UNICODE_STRING v55; // [rsp+130h] [rbp+20h] BYREF
  __int64 v56[2]; // [rsp+140h] [rbp+30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+150h] [rbp+40h] BYREF
  GUID Guid; // [rsp+160h] [rbp+50h] BYREF
  UNICODE_STRING UnicodeString[4]; // [rsp+170h] [rbp+60h] BYREF
  int v60; // [rsp+1B0h] [rbp+A0h] BYREF
  int *v61; // [rsp+1B8h] [rbp+A8h]
  int v62; // [rsp+1C0h] [rbp+B0h] BYREF
  int *v63; // [rsp+1C8h] [rbp+B8h]
  int v64; // [rsp+1D0h] [rbp+C0h] BYREF
  char *v65; // [rsp+1D8h] [rbp+C8h]
  int v66; // [rsp+1E0h] [rbp+D0h] BYREF
  unsigned int *v67; // [rsp+1E8h] [rbp+D8h]
  int v68; // [rsp+1F0h] [rbp+E0h] BYREF
  __int64 *v69; // [rsp+1F8h] [rbp+E8h]
  int v70; // [rsp+200h] [rbp+F0h] BYREF
  __int64 *v71; // [rsp+208h] [rbp+F8h]
  _QWORD v72[148]; // [rsp+300h] [rbp+1F0h] BYREF

  *(_QWORD *)&Guid.Data1 = a5;
  v6 = a2;
  *(_QWORD *)v53 = a1;
  v45 = a4;
  v9 = 0LL;
  v38 = 0;
  DestinationString = 0LL;
  *(_DWORD *)v41 = 0;
  v39 = 0;
  v40 = 0;
  v46 = 0LL;
  v48 = 0LL;
  ValueData = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  Src = 0LL;
  v44 = 0;
  v55 = 0LL;
  v50 = 0LL;
  P = 0LL;
  v43 = 0LL;
  v52 = 0LL;
  RtlInitUnicodeString(&DestinationString, a3);
  memset(v72, 0, 0x498uLL);
  memset(UnicodeString, 0, sizeof(UnicodeString));
  v10 = -1LL;
  *(_OWORD *)v56 = 0LL;
  v11 = -1LL;
  do
    ++v11;
  while ( *(_WORD *)(a4 + 2 * v11) );
  v12 = -1LL;
  do
    ++v12;
  while ( a3[v12] );
  v13 = (unsigned int)(2 * (v12 + v11) + 4);
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, v13, 1350005829LL);
  v15 = Pool2;
  v16 = 4LL;
  if ( !Pool2 )
    goto LABEL_31;
  if ( (unsigned int)sub_1402E1280(Pool2, (unsigned int)v13, L"%ws\\%ws", v45, a3) )
    goto LABEL_31;
  RtlInitUnicodeString(&v55, v15);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v55;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes) < 0 )
    goto LABEL_31;
  v17 = *(_QWORD *)&Guid.Data1;
  if ( *(_QWORD *)&Guid.Data1 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( *(_WORD *)(*(_QWORD *)&Guid.Data1 + 2 * v29) );
    do
      ++v10;
    while ( a3[v10] );
    v30 = (unsigned int)(2 * (v10 + v29) + 4);
    v31 = (wchar_t *)ExAllocatePool2(256LL, v30, 1350005829LL);
    v9 = v31;
    if ( !v31 )
      goto LABEL_31;
    if ( !(unsigned int)sub_1402E1280(v31, (unsigned int)v30, L"%ws\\%ws", v17, a3) )
    {
      RtlInitUnicodeString(&v55, v9);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v55;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v32 = ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes);
      v33 = Handle;
      if ( v32 < 0 )
        v33 = 0LL;
      Handle = v33;
    }
  }
  LODWORD(v72[4]) = 4;
  v72[0] = sub_1408166C0;
  v72[7] = sub_1408166C0;
  v72[3] = &v60;
  v72[14] = sub_1408166C0;
  v72[2] = L"Enabled";
  v72[21] = sub_1408166C0;
  v61 = &v38;
  v72[28] = sub_1408166C0;
  v72[10] = &v62;
  v72[9] = L"EnableProperty";
  v63 = &v40;
  v72[17] = &v64;
  v72[16] = L"EnableLevel";
  v65 = v41;
  v72[24] = &v66;
  v72[23] = L"EnableFlags";
  v67 = &v39;
  v72[31] = &v68;
  v72[30] = L"MatchAnyKeyword";
  v69 = &v46;
  v72[38] = &v70;
  v72[37] = L"MatchAllKeyword";
  LODWORD(v72[32]) = 11;
  v68 = 11;
  v72[35] = sub_1408166C0;
  LODWORD(v72[39]) = 11;
  v70 = 11;
  v71 = &v48;
  v60 = 4;
  LODWORD(v72[11]) = 4;
  v62 = 4;
  LODWORD(v72[18]) = 4;
  v64 = 4;
  LODWORD(v72[25]) = 4;
  v66 = 4;
  v18 = sub_140781F40(0x40000000, (const WCHAR *)KeyHandle, (__int64)v72, 0LL);
  if ( v18 < 0 )
    goto LABEL_72;
  v19 = (const WCHAR *)Handle;
  if ( Handle && !a6 )
  {
    LODWORD(v72[6]) = 4;
    v72[5] = &v38;
    LODWORD(v72[13]) = 4;
    v72[12] = &v40;
    LODWORD(v72[20]) = 4;
    v72[19] = v41;
    LODWORD(v72[27]) = 4;
    v72[26] = &v39;
    v72[33] = &v46;
    v72[40] = &v48;
    LODWORD(v72[34]) = 8;
    LODWORD(v72[41]) = 8;
    v18 = sub_140781F40(0x40000000, (const WCHAR *)Handle, (__int64)v72, 0LL);
    if ( v18 >= 0 )
    {
      v19 = (const WCHAR *)Handle;
      goto LABEL_11;
    }
LABEL_72:
    ValueData = RtlNtStatusToDosError(v18);
LABEL_27:
    v19 = (const WCHAR *)Handle;
    goto LABEL_28;
  }
LABEL_11:
  if ( v38 )
  {
    v45 = 0LL;
    v20 = (__int64)v9;
    if ( a6 )
      v20 = 0LL;
    Guid = 0LL;
    if ( (_DWORD)v6 )
      LOWORD(v45) = v6;
    else
      LOWORD(v45) = -1;
    sub_140822030(
      (__int64)v15,
      v20,
      UnicodeString,
      (__int64)v56,
      (__int64)&Src,
      (__int64)&v44,
      (__int64)&v50,
      (__int64)&v43 + 4,
      (__int64 *)&P,
      &v43,
      (__int64)&v52);
    v18 = RtlGUIDFromString(&DestinationString, &Guid);
    if ( v18 >= 0 )
    {
      v21 = *(_QWORD *)&Guid.Data1 - 0x4FA775A3E02A841CLL;
      if ( *(_QWORD *)&Guid.Data1 == 0x4FA775A3E02A841CLL )
        v21 = *(_QWORD *)Guid.Data4 - 0x237F9BCF09AEC8AFLL;
      if ( !v21 )
        goto LABEL_54;
      v22 = *(_QWORD *)&Guid.Data1 - 0x5668BB5DF4E1897CLL;
      if ( *(_QWORD *)&Guid.Data1 == 0x5668BB5DF4E1897CLL )
        v22 = *(_QWORD *)Guid.Data4 - 0x44D38D4D0F04D8F1LL;
      if ( v22 )
      {
        v23 = *(_QWORD *)v53;
      }
      else
      {
LABEL_54:
        v23 = *(_QWORD *)v53;
        if ( *(_QWORD *)v53 != qword_140D05008 )
          goto LABEL_31;
        if ( (unsigned int)v6 < *(_DWORD *)(*(_QWORD *)v53 + 16LL) )
        {
          v28 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v53 + 456LL) + 8 * v6);
          if ( (v28 & 1) == 0 )
          {
            if ( *(_QWORD *)(v28 + 160) )
              goto LABEL_31;
            _InterlockedOr((volatile signed __int32 *)(v28 + 816), 0x4000u);
          }
        }
      }
      v24 = v46;
      if ( !v46 )
      {
        v24 = v39;
        v46 = v39;
      }
      LODWORD(v35) = HIDWORD(v43);
      LODWORD(v36) = v43;
      LODWORD(Size) = v44;
      v18 = sub_14081637C(
              v23,
              (__int128 *)&Guid,
              0LL,
              v45,
              1,
              v41[0],
              v24,
              v48,
              v40,
              (const void **)UnicodeString,
              (const void **)v56,
              Src,
              Size,
              v50,
              v35,
              P,
              v36,
              (__int64)v52);
      if ( v18 >= 0 )
        goto LABEL_27;
    }
    goto LABEL_72;
  }
LABEL_28:
  if ( !v19 )
    v19 = (const WCHAR *)KeyHandle;
  RtlWriteRegistryValue(0x40000000u, v19, L"Status", 4u, &ValueData, 4u);
LABEL_31:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  if ( v50 )
    ExFreePoolWithTag(v50, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v52 )
    ExFreePoolWithTag(v52, 0);
  v25 = UnicodeString;
  do
  {
    RtlFreeUnicodeString(v25++);
    --v16;
  }
  while ( v16 );
  v26 = v56;
  v27 = 2LL;
  do
  {
    if ( *v26 )
      ExFreePoolWithTag((PVOID)*v26, 0);
    ++v26;
    --v27;
  }
  while ( v27 );
}
