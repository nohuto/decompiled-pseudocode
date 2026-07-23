/*
 * XREFs of SdbpGetManifestedMergeStubAlloc @ 0x140A4EB78
 * Callers:
 *     SdbGetMergeRedirectPath @ 0x140A4E170 (SdbGetMergeRedirectPath.c)
 * Callees:
 *     _wcsicmp @ 0x1403D93F0 (_wcsicmp.c)
 *     _wcsnicmp @ 0x1403D9530 (_wcsnicmp.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwEnumerateValueKey @ 0x14041A900 (ZwEnumerateValueKey.c)
 *     SdbpGetMergeSdbsDisabled @ 0x14066DD64 (SdbpGetMergeSdbsDisabled.c)
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     RtlGetNtSystemRoot @ 0x140695E40 (RtlGetNtSystemRoot.c)
 *     AslStringDuplicate @ 0x1406D4AA8 (AslStringDuplicate.c)
 *     AslAlloc @ 0x1407589A8 (AslAlloc.c)
 *     AslRegistryGetKey @ 0x14084F2CC (AslRegistryGetKey.c)
 *     AslPathToSystemPath @ 0x140A55398 (AslPathToSystemPath.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SdbpGetManifestedMergeStubAlloc(_QWORD *a1, const wchar_t *a2)
{
  wchar_t *v3; // rsi
  wchar_t *v4; // r12
  wchar_t *v5; // r13
  int MergeSdbsDisabled; // ebx
  int Key; // eax
  int v9; // r14d
  const wchar_t **v10; // rbx
  __int64 v11; // r14
  __int64 v12; // rax
  ULONG Length; // ebx
  ULONG v14; // r12d
  wchar_t *v15; // rax
  NTSTATUS v16; // eax
  __int64 v17; // rax
  ULONG v18; // ebx
  unsigned __int64 v19; // r15
  const wchar_t *NtSystemRoot; // rax
  const wchar_t *v21; // rbx
  size_t v22; // r8
  const wchar_t *KeyValueInformation; // [rsp+30h] [rbp-20h]
  wchar_t *v24; // [rsp+38h] [rbp-18h] BYREF
  HANDLE KeyHandle[2]; // [rsp+40h] [rbp-10h] BYREF
  ULONG ResultLength; // [rsp+A0h] [rbp+50h] BYREF
  ULONG v28; // [rsp+A8h] [rbp+58h] BYREF

  v28 = 0;
  v3 = 0LL;
  ResultLength = 0;
  v4 = 0LL;
  v5 = 0LL;
  v24 = 0LL;
  KeyHandle[0] = 0LL;
  if ( !a1 )
    return 3221225711LL;
  *a1 = 0LL;
  MergeSdbsDisabled = SdbpGetMergeSdbsDisabled(&v28);
  if ( MergeSdbsDisabled >= 0 )
  {
    if ( v28 )
      return (unsigned int)-1073741772;
    Key = AslRegistryGetKey(
            KeyHandle,
            L"Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\SdbUpdates\\ManifestedMergeStubSdbs",
            0x80000100,
            1);
    MergeSdbsDisabled = Key;
    if ( Key < 0 )
    {
      if ( Key != -1073741772 )
        AslLogCallPrintf(1LL);
      goto LABEL_48;
    }
    v9 = 1;
    v10 = (const wchar_t **)&off_14000A0E8;
    do
    {
      if ( !wcsicmp(a2, *v10) )
        break;
      ++v9;
      v10 += 4;
    }
    while ( (__int64)v10 < (__int64)&qword_14000A1A8 );
    v3 = 0LL;
    v5 = 0LL;
    if ( v9 >= 7 )
    {
LABEL_47:
      MergeSdbsDisabled = -1073741772;
      goto LABEL_48;
    }
    v11 = -1LL;
    v12 = -1LL;
    do
      ++v12;
    while ( a2[v12] );
    Length = 2 * v12 + 18;
    v28 = Length;
    v4 = (wchar_t *)AslAlloc(0LL, Length);
    KeyValueInformation = v4;
    if ( !v4 )
    {
      MergeSdbsDisabled = -1073741801;
      AslLogCallPrintf(1LL);
LABEL_48:
      if ( (unsigned __int64)KeyHandle[0] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
        ZwClose(KeyHandle[0]);
      if ( v3 )
        ExFreePoolWithTag(v3, 0x74705041u);
      if ( v4 )
        ExFreePoolWithTag(v4, 0x74705041u);
      if ( v5 )
        ExFreePoolWithTag(v5, 0x74705041u);
      return (unsigned int)MergeSdbsDisabled;
    }
    v14 = 0;
    v15 = (wchar_t *)KeyValueInformation;
    while ( 1 )
    {
      v16 = ZwEnumerateValueKey(KeyHandle[0], v14, KeyValuePartialInformation, v15, Length, &ResultLength);
      MergeSdbsDisabled = v16;
      if ( v16 == -2147483643 || v16 == -1073741789 )
        goto LABEL_25;
      if ( v16 == -2147483622 )
      {
        v4 = (wchar_t *)KeyValueInformation;
        goto LABEL_47;
      }
      if ( v16 < 0 )
        goto LABEL_44;
      v15 = (wchar_t *)KeyValueInformation;
      if ( *((_DWORD *)KeyValueInformation + 1) == 1 )
        break;
LABEL_26:
      Length = v28;
      ++v14;
    }
    if ( !wcsicmp(a2, KeyValueInformation + 6) )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a2[v17] );
      v18 = 2 * v17 + 538;
      v19 = v18;
      v5 = (wchar_t *)AslAlloc(0LL, v18);
      if ( !v5 )
      {
        MergeSdbsDisabled = -1073741801;
        goto LABEL_44;
      }
      MergeSdbsDisabled = ZwEnumerateValueKey(KeyHandle[0], v14, KeyValueBasicInformation, v5, v18, &ResultLength);
      if ( MergeSdbsDisabled >= 0 )
      {
        if ( (unsigned __int64)ResultLength + 2 > v19 )
        {
          MergeSdbsDisabled = -1073741789;
          goto LABEL_44;
        }
        NtSystemRoot = RtlGetNtSystemRoot();
        v21 = NtSystemRoot;
        v22 = -1LL;
        do
          ++v22;
        while ( NtSystemRoot[v22] );
        if ( wcsnicmp(NtSystemRoot, v5 + 6, v22) )
        {
          MergeSdbsDisabled = AslStringDuplicate(&v24, v5 + 6);
          if ( MergeSdbsDisabled < 0 )
            goto LABEL_39;
        }
        else
        {
          do
            ++v11;
          while ( v21[v11] );
          MergeSdbsDisabled = AslPathToSystemPath(&v24, &v5[v11 + 6]);
          if ( MergeSdbsDisabled < 0 )
          {
LABEL_39:
            AslLogCallPrintf(1LL);
            v3 = v24;
LABEL_45:
            v4 = (wchar_t *)KeyValueInformation;
            goto LABEL_48;
          }
        }
        v3 = v24;
        if ( v24 )
        {
          MergeSdbsDisabled = 0;
          *a1 = v24;
          v3 = 0LL;
          goto LABEL_45;
        }
        MergeSdbsDisabled = -1073741801;
      }
LABEL_44:
      AslLogCallPrintf(1LL);
      goto LABEL_45;
    }
LABEL_25:
    v15 = (wchar_t *)KeyValueInformation;
    goto LABEL_26;
  }
  AslLogCallPrintf(1LL);
  return (unsigned int)MergeSdbsDisabled;
}
