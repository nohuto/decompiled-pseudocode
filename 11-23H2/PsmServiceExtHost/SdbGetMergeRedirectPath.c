/*
 * XREFs of SdbGetMergeRedirectPath @ 0x180051604
 * Callers:
 *     SdbGetMergeStubPath @ 0x180051A70 (SdbGetMergeStubPath.c)
 *     SdbOpenDatabaseEx @ 0x180090084 (SdbOpenDatabaseEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     RtlStringCchCopyNW @ 0x180051588 (RtlStringCchCopyNW.c)
 *     SdbpGetFileTimestamp @ 0x180051BEC (SdbpGetFileTimestamp.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x180051E70 (SdbpGetManifestedMergeStubAlloc.c)
 *     AslRegistryGetString @ 0x180052FD0 (AslRegistryGetString.c)
 *     AslPathGetFileNamePart @ 0x180053234 (AslPathGetFileNamePart.c)
 *     RtlStringCchCatW @ 0x18008FB1C (RtlStringCchCatW.c)
 *     RtlStringCchLengthW @ 0x18008FCD8 (RtlStringCchLengthW.c)
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 *     AslFree @ 0x180098570 (AslFree.c)
 *     AslRegistryGetKey @ 0x18009876C (AslRegistryGetKey.c)
 */

__int64 __fastcall SdbGetMergeRedirectPath(_QWORD *a1, unsigned __int64 a2)
{
  _WORD *v4; // r14
  unsigned int String; // ebx
  __int64 FileNamePart; // rax
  const wchar_t *v8; // r15
  const wchar_t *i; // rdi
  int Key; // eax
  int v11; // eax
  __int64 v12; // r11
  int v13; // eax
  __int64 v14; // r11
  unsigned __int64 v15; // rdi
  int v16; // eax
  unsigned __int64 v17; // rcx
  __int64 v18; // r12
  _WORD *Heap; // rax
  int v20; // eax
  int v21; // eax
  int FileTimestamp; // eax
  int v23; // eax
  int ManifestedMergeStubAlloc; // eax
  unsigned __int64 v25; // rax
  int v26; // eax
  const char *v27; // r9
  int v28; // r8d
  wchar_t *String1; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-31h] BYREF
  __int64 v31; // [rsp+40h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int64 v33; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int64 v34; // [rsp+58h] [rbp-11h] BYREF
  unsigned __int64 v35; // [rsp+60h] [rbp-9h] BYREF
  unsigned __int64 v36; // [rsp+68h] [rbp-1h] BYREF
  wchar_t String2[12]; // [rsp+70h] [rbp+7h] BYREF

  v4 = 0LL;
  Handle = 0LL;
  String1 = 0LL;
  v33 = 0LL;
  v30 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v34 = 0LL;
  v31 = 0LL;
  wcscpy(String2, L"\\AppPatch\\");
  if ( !a1 )
    return 3221225711LL;
  *a1 = 0LL;
  String = -1073741772;
  FileNamePart = AslPathGetFileNamePart(a2);
  v8 = (const wchar_t *)FileNamePart;
  if ( FileNamePart != a2 )
  {
    for ( i = (const wchar_t *)(FileNamePart - 4); ; --i )
    {
      if ( (unsigned __int64)i < a2 )
        return String;
      if ( (*i == 92 || *i == 47) && !_wcsnicmp(i, String2, 0xAuLL) )
        break;
    }
    Key = AslRegistryGetKey(
            &Handle,
            L"Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\SdbUpdates",
            2147483904LL);
    String = Key;
    if ( Key < 0 )
    {
      if ( Key != -1073741772 )
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbGetMergeRedirectPath",
          1496,
          (unsigned int)"AslRegistryGetKey failed to open SdbUpdates key [%x]",
          Key);
      goto LABEL_50;
    }
    String = AslRegistryGetString(&String1, Handle, v8);
    if ( (String & 0x80000000) != 0 )
    {
LABEL_50:
      if ( (char *)Handle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        ZwClose(Handle);
      if ( String1 )
        AslFree(NtCurrentPeb()->ProcessHeap, String1);
      if ( v4 )
        AslFree(NtCurrentPeb()->ProcessHeap, v4);
      if ( v31 )
        AslFree(NtCurrentPeb()->ProcessHeap, v31);
      return String;
    }
    if ( !_wcsicmp(String1, v8) )
    {
LABEL_16:
      String = -1073741772;
      goto LABEL_50;
    }
    v11 = RtlStringCchLengthW(a2, 0x7FFFFFFFLL, &v33);
    String = v11;
    if ( v11 < 0 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbGetMergeRedirectPath",
        1518,
        (unsigned int)"RtlStringCchLengthW failed [%x]",
        v11);
      goto LABEL_50;
    }
    v13 = RtlStringCchLengthW(v8, v12, &v30);
    String = v13;
    if ( v13 < 0 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbGetMergeRedirectPath",
        1525,
        (unsigned int)"RtlStringCchLengthW failed [%x]",
        v13);
      goto LABEL_50;
    }
    if ( v33 < v30 )
    {
      v27 = "RtlSizeTSub failed [%x]";
      v28 = 1532;
    }
    else
    {
      v15 = v33 - v30;
      v16 = RtlStringCchLengthW(String1, v14, &v30);
      String = v16;
      if ( v16 < 0 )
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbGetMergeRedirectPath",
          1542,
          (unsigned int)"RtlStringCchLengthW failed [%x]",
          v16);
        goto LABEL_50;
      }
      v17 = v15 + v30;
      if ( v15 + v30 >= v15 )
      {
        v18 = v17 + 1;
        if ( v17 + 1 < v17 )
        {
          String = -1073741675;
          AslLogCallPrintf(
            1,
            (unsigned int)"SdbGetMergeRedirectPath",
            1556,
            (unsigned int)"RtlSizeTAdd failed [%x]",
            149);
          goto LABEL_50;
        }
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2 * v18);
        v4 = Heap;
        if ( !Heap )
        {
          String = -1073741801;
          goto LABEL_50;
        }
        v20 = RtlStringCchCopyNW(Heap, v18, a2, v15);
        String = v20;
        if ( v20 < 0 )
        {
          AslLogCallPrintf(
            1,
            (unsigned int)"SdbGetMergeRedirectPath",
            1571,
            (unsigned int)"RtlStringCchCopyNW failed to copy path [%x]",
            v20);
          goto LABEL_50;
        }
        v21 = RtlStringCchCatW(v4, v18, String1);
        String = v21;
        if ( v21 < 0 )
        {
          AslLogCallPrintf(
            1,
            (unsigned int)"SdbGetMergeRedirectPath",
            1579,
            (unsigned int)"RtlStringCchCatW failed to cat file to path [%x]",
            v21);
          goto LABEL_50;
        }
        FileTimestamp = SdbpGetFileTimestamp(&v35, v4);
        String = FileTimestamp;
        if ( FileTimestamp < 0 )
        {
          AslLogCallPrintf(
            1,
            (unsigned int)"SdbGetMergeRedirectPath",
            1589,
            (unsigned int)"Failed to check timestamp [%x]",
            FileTimestamp);
          goto LABEL_50;
        }
        v23 = SdbpGetFileTimestamp(&v36, a2);
        String = v23;
        if ( v23 < 0 )
        {
          AslLogCallPrintf(
            1,
            (unsigned int)"SdbGetMergeRedirectPath",
            1599,
            (unsigned int)"Failed to check timestamp [%x]",
            v23);
          goto LABEL_50;
        }
        ManifestedMergeStubAlloc = SdbpGetManifestedMergeStubAlloc(&v31, v8);
        String = ManifestedMergeStubAlloc;
        if ( ManifestedMergeStubAlloc == -1073741772 )
        {
          v25 = 0LL;
        }
        else
        {
          if ( ManifestedMergeStubAlloc < 0 )
          {
            AslLogCallPrintf(
              1,
              (unsigned int)"SdbGetMergeRedirectPath",
              1613,
              (unsigned int)"Failed to get manifested stub [%x]",
              ManifestedMergeStubAlloc);
            goto LABEL_50;
          }
          v26 = SdbpGetFileTimestamp(&v34, v31);
          String = v26;
          if ( v26 < 0 )
          {
            AslLogCallPrintf(
              1,
              (unsigned int)"SdbGetMergeRedirectPath",
              1623,
              (unsigned int)"Failed to check timestamp [%x]",
              v26);
            goto LABEL_50;
          }
          v25 = v34;
        }
        if ( v35 >= v36 && v35 >= v25 )
        {
          *a1 = v4;
          String = 0;
          v4 = 0LL;
          goto LABEL_50;
        }
        goto LABEL_16;
      }
      v27 = "RtlSizeTAdd failed [%x]";
      v28 = 1549;
    }
    String = -1073741675;
    AslLogCallPrintf(1, (unsigned int)"SdbGetMergeRedirectPath", v28, (_DWORD)v27, 149);
    goto LABEL_50;
  }
  return String;
}
