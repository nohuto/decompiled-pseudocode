/*
 * XREFs of LdrpAccessResourceData @ 0x180038740
 * Callers:
 *     RtlFindMessage @ 0x180035010 (RtlFindMessage.c)
 *     LdrAccessResource @ 0x1800385F0 (LdrAccessResource.c)
 *     RtlLoadString @ 0x180061E40 (RtlLoadString.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18003A234 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpGetImageSize @ 0x18003A4FC (LdrpGetImageSize.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x18003C720 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800EC3DC (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpTraceLoadMUIDll @ 0x1800EC820 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpAccessResourceData(unsigned __int64 BaseOfImage, unsigned __int64 a2)
{
  __int64 v4; // r14
  _DWORD *SharedData; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdi
  unsigned int ImageSize; // ebp
  _DWORD *v9; // rcx
  unsigned __int64 v11; // r15
  int v12; // eax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  char *AlternateResourceModuleHandle; // rax
  __int64 v17; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 OutHeaders; // [rsp+38h] [rbp-40h] BYREF
  __int64 v19; // [rsp+40h] [rbp-38h] BYREF

  v19 = 0LL;
  v17 = 0LL;
  v4 = 2147353477LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v6 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v6 = 2147353477LL;
  v7 = 2147353476LL;
  if ( (*(_BYTE *)v6 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v15 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v15 = 2147353476LL;
    LdrpTraceLoadMUIDll(L",.", *(unsigned __int8 *)v15);
  }
  if ( !BaseOfImage || !a2 )
    return 3221225485LL;
  if ( NtCurrentTeb()->ResourceRetValue
    && *(_QWORD *)NtCurrentTeb()->ResourceRetValue == BaseOfImage
    && *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 1) == a2 )
  {
    BaseOfImage = *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2);
LABEL_10:
    ImageSize = LdrpAccessResourceDataNoMultipleLanguage((PVOID)BaseOfImage);
    goto LABEL_11;
  }
  v11 = BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL;
  v12 = RtlpImageDirectoryEntryToDataEx((PVOID)BaseOfImage, (PIMAGE_NT_HEADERS)&OutHeaders);
  v14 = OutHeaders;
  if ( v12 < 0 )
    v14 = 0LL;
  if ( v14 )
  {
    if ( a2 < v14 )
      goto LABEL_30;
    ImageSize = LdrpGetImageSize(BaseOfImage, &v17);
    if ( ImageSize != -1073741701 )
    {
      if ( !v17 || a2 >= v11 && a2 < v11 + v17 )
        goto LABEL_10;
LABEL_30:
      AlternateResourceModuleHandle = (char *)LdrpGetAlternateResourceModuleHandleEx(BaseOfImage, v13, a2, &v19);
      if ( (unsigned __int64)(AlternateResourceModuleHandle - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        BaseOfImage = (unsigned __int64)AlternateResourceModuleHandle;
      goto LABEL_10;
    }
  }
  else
  {
    ImageSize = -1073741687;
  }
LABEL_11:
  v9 = NtCurrentPeb()->SharedData;
  if ( v9 && *v9 )
    v4 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v4 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(L"*,", *(unsigned __int8 *)v7);
  }
  return ImageSize;
}
