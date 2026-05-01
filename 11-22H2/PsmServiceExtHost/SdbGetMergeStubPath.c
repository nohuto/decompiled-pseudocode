/*
 * XREFs of SdbGetMergeStubPath @ 0x180051C70
 * Callers:
 *     SdbInitDatabaseEx @ 0x180090D70 (SdbInitDatabaseEx.c)
 * Callees:
 *     SdbGetMergeRedirectPath @ 0x180051804 (SdbGetMergeRedirectPath.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x180052070 (SdbpGetManifestedMergeStubAlloc.c)
 *     AslPathGetFileNamePart @ 0x180053434 (AslPathGetFileNamePart.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 *     AslFree @ 0x1800988D0 (AslFree.c)
 */

__int64 __fastcall SdbGetMergeStubPath(unsigned __int64 *a1, __int64 a2)
{
  unsigned int v5; // ebx
  __int64 FileNamePart; // rax
  int ManifestedMergeStubAlloc; // eax
  unsigned __int64 v8; // rdi
  int MergeRedirectPath; // eax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // [rsp+50h] [rbp+20h] BYREF
  unsigned __int64 v12; // [rsp+60h] [rbp+30h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  if ( !a1 )
    return 3221225711LL;
  *a1 = 0LL;
  v5 = -1073741772;
  FileNamePart = AslPathGetFileNamePart(a2);
  if ( FileNamePart != a2 )
  {
    ManifestedMergeStubAlloc = SdbpGetManifestedMergeStubAlloc(&v11, FileNamePart);
    v5 = ManifestedMergeStubAlloc;
    if ( ManifestedMergeStubAlloc != -1073741772 )
    {
      if ( ManifestedMergeStubAlloc >= 0 )
      {
        v8 = v11;
        MergeRedirectPath = SdbGetMergeRedirectPath(&v12, v11);
        v5 = MergeRedirectPath;
        if ( MergeRedirectPath == -1073741772 )
        {
          *a1 = v8;
          v8 = 0LL;
          v11 = 0LL;
        }
        else
        {
          if ( MergeRedirectPath < 0 )
          {
            AslLogCallPrintf(
              1,
              (unsigned int)"SdbGetMergeStubPath",
              1253,
              (unsigned int)"Failed to get manifested stub [%x]",
              MergeRedirectPath);
            goto LABEL_8;
          }
          v10 = v12;
          v12 = 0LL;
          *a1 = v10;
        }
        v5 = 0;
        goto LABEL_8;
      }
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbGetMergeStubPath",
        1237,
        (unsigned int)"Failed to get manifested stub [%x]",
        ManifestedMergeStubAlloc);
    }
    v8 = v11;
LABEL_8:
    if ( v8 )
      AslFree(NtCurrentPeb()->ProcessHeap, v11);
    if ( v12 )
      AslFree(NtCurrentPeb()->ProcessHeap, v12);
  }
  return v5;
}
