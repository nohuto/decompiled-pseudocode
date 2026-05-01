/*
 * XREFs of SdbpGetManifestedMergeStubAlloc @ 0x180051E70
 * Callers:
 *     SdbGetMergeRedirectPath @ 0x180051604 (SdbGetMergeRedirectPath.c)
 *     SdbGetMergeStubPath @ 0x180051A70 (SdbGetMergeStubPath.c)
 * Callees:
 *     SdbpGetMergeSdbsDisabled @ 0x180052284 (SdbpGetMergeSdbsDisabled.c)
 *     AslPathToSystemPath @ 0x18005326C (AslPathToSystemPath.c)
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 *     AslFree @ 0x180098570 (AslFree.c)
 *     AslRegistryGetKey @ 0x18009876C (AslRegistryGetKey.c)
 *     AslStringDuplicate @ 0x180098DC8 (AslStringDuplicate.c)
 *     RtlDownlevelGetNtSystemRoot @ 0x1800A1174 (RtlDownlevelGetNtSystemRoot.c)
 */

__int64 __fastcall SdbpGetManifestedMergeStubAlloc(_QWORD *a1, const wchar_t *a2)
{
  ULONG v2; // r12d
  wchar_t *Heap; // r13
  wchar_t *v5; // r14
  int MergeSdbsDisabled; // eax
  NTSTATUS v8; // ebx
  int Key; // eax
  const wchar_t **v10; // rbx
  int v11; // esi
  __int64 v12; // rsi
  __int64 v13; // rax
  ULONG Length; // ebx
  const char *v15; // r9
  int v16; // r8d
  NTSTATUS v17; // eax
  __int64 v18; // rax
  ULONG v19; // ebx
  unsigned __int64 v20; // r15
  const wchar_t *NtSystemRoot; // rax
  const wchar_t *v22; // rbx
  size_t v23; // r8
  __int64 v24; // rax
  __int64 v25; // [rsp+30h] [rbp-10h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-8h] BYREF
  ULONG ResultLength; // [rsp+90h] [rbp+50h] BYREF
  ULONG v29; // [rsp+98h] [rbp+58h] BYREF

  v2 = 0;
  v25 = 0LL;
  Heap = 0LL;
  KeyHandle = 0LL;
  v5 = 0LL;
  if ( !a1 )
    return 3221225711LL;
  *a1 = 0LL;
  MergeSdbsDisabled = SdbpGetMergeSdbsDisabled(&v29);
  v8 = MergeSdbsDisabled;
  if ( MergeSdbsDisabled >= 0 )
  {
    if ( v29 )
    {
      return (unsigned int)-1073741772;
    }
    else
    {
      Key = AslRegistryGetKey(
              &KeyHandle,
              L"Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\SdbUpdates\\ManifestedMergeStubSdbs",
              2147483904LL);
      v8 = Key;
      if ( Key >= 0 )
      {
        v10 = (const wchar_t **)&off_1800AECB8;
        v11 = 1;
        do
        {
          if ( !_wcsicmp(a2, *v10) )
            break;
          ++v11;
          v10 += 4;
        }
        while ( (__int64)v10 < (__int64)&qword_1800AED78 );
        v5 = 0LL;
        if ( v11 >= 7 )
        {
LABEL_46:
          v8 = -1073741772;
        }
        else
        {
          v12 = -1LL;
          v13 = -1LL;
          do
            ++v13;
          while ( a2[v13] );
          Length = 2 * v13 + 18;
          v29 = Length;
          Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Length);
          if ( Heap )
          {
            while ( 1 )
            {
              v17 = ZwEnumerateValueKey(KeyHandle, v2, KeyValuePartialInformation, Heap, Length, &ResultLength);
              v8 = v17;
              if ( v17 != -2147483643 && v17 != -1073741789 )
              {
                if ( v17 == -2147483622 )
                  goto LABEL_46;
                if ( v17 < 0 )
                {
                  AslLogCallPrintf(
                    1,
                    (unsigned int)"SdbpGetManifestedMergeStubAlloc",
                    1082,
                    (unsigned int)"Failed to query partial info.");
                  goto LABEL_47;
                }
                if ( *((_DWORD *)Heap + 1) == 1 && !_wcsicmp(a2, Heap + 6) )
                  break;
              }
              Length = v29;
              ++v2;
            }
            v18 = -1LL;
            do
              ++v18;
            while ( a2[v18] );
            v19 = 2 * v18 + 538;
            v20 = v19;
            v5 = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v19);
            if ( !v5 )
            {
              v8 = -1073741801;
              AslLogCallPrintf(
                1,
                (unsigned int)"SdbpGetManifestedMergeStubAlloc",
                1099,
                (unsigned int)"Failed to allocate basic info.");
              goto LABEL_47;
            }
            v8 = ZwEnumerateValueKey(KeyHandle, v2, KeyValueBasicInformation, v5, v19, &ResultLength);
            if ( v8 < 0 )
            {
              AslLogCallPrintf(
                1,
                (unsigned int)"SdbpGetManifestedMergeStubAlloc",
                1110,
                (unsigned int)"Failed to query basic info.");
              goto LABEL_47;
            }
            if ( (unsigned __int64)ResultLength + 2 > v20 )
            {
              v8 = -1073741789;
              AslLogCallPrintf(
                1,
                (unsigned int)"SdbpGetManifestedMergeStubAlloc",
                1115,
                (unsigned int)"Buffer too small to query basic info.");
              goto LABEL_47;
            }
            NtSystemRoot = (const wchar_t *)RtlDownlevelGetNtSystemRoot();
            v22 = NtSystemRoot;
            v23 = -1LL;
            do
              ++v23;
            while ( NtSystemRoot[v23] );
            if ( _wcsnicmp(NtSystemRoot, v5 + 6, v23) )
            {
              v8 = AslStringDuplicate(&v25, v5 + 6);
              if ( v8 < 0 )
              {
                AslLogCallPrintf(
                  1,
                  (unsigned int)"SdbpGetManifestedMergeStubAlloc",
                  1142,
                  (unsigned int)"Failed to duplicate stub path.");
                goto LABEL_47;
              }
            }
            else
            {
              do
                ++v12;
              while ( v22[v12] );
              v8 = AslPathToSystemPath(&v25, &v5[v12 + 6]);
              if ( v8 < 0 )
              {
                AslLogCallPrintf(
                  1,
                  (unsigned int)"SdbpGetManifestedMergeStubAlloc",
                  1135,
                  (unsigned int)"Failed to allocate or convert stub path.");
                goto LABEL_47;
              }
            }
            if ( !v25 )
            {
              v15 = "Failed to allocate stub path.";
              v16 = 1149;
              goto LABEL_18;
            }
            v24 = v25;
            v8 = 0;
            v25 = 0LL;
            *a1 = v24;
          }
          else
          {
            v15 = "Failed to allocate partial info.";
            v16 = 1063;
LABEL_18:
            v8 = -1073741801;
            AslLogCallPrintf(1, (unsigned int)"SdbpGetManifestedMergeStubAlloc", v16, (_DWORD)v15);
          }
        }
      }
      else if ( Key != -1073741772 )
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbpGetManifestedMergeStubAlloc",
          1043,
          (unsigned int)"AslRegistryGetKey failed to open ManifestedMergeStubSdbs key [%x]",
          Key);
      }
LABEL_47:
      if ( (char *)KeyHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        ZwClose(KeyHandle);
      if ( v25 )
        AslFree(NtCurrentPeb()->ProcessHeap, v25);
      if ( Heap )
        AslFree(NtCurrentPeb()->ProcessHeap, Heap);
      if ( v5 )
        AslFree(NtCurrentPeb()->ProcessHeap, v5);
    }
  }
  else
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetManifestedMergeStubAlloc",
      1027,
      (unsigned int)"SdbpGetMergeSdbsDisabled failed [%x]",
      MergeSdbsDisabled);
  }
  return (unsigned int)v8;
}
