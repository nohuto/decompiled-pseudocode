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

__int64 __fastcall LdrpAccessResourceData(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r13
  unsigned __int64 v7; // rsi
  __int64 v8; // r14
  _DWORD *SharedData; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdi
  unsigned int ImageSize; // ebp
  _DWORD *v13; // rcx
  unsigned __int64 v15; // r15
  int v16; // eax
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 AlternateResourceModuleHandle; // rax
  __int64 v21; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-40h] BYREF
  __int64 v23; // [rsp+40h] [rbp-38h] BYREF
  char v24; // [rsp+80h] [rbp+8h] BYREF

  v23 = 0LL;
  v21 = 0LL;
  v6 = a3;
  v7 = a2;
  v8 = 2147353477LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v10 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v10 = 2147353477LL;
  v11 = 2147353476LL;
  if ( (*(_BYTE *)v10 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v19 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v19 = 2147353476LL;
    LdrpTraceLoadMUIDll(L",.", *(unsigned __int8 *)v19);
  }
  if ( !a1 || !v7 )
    return 3221225485LL;
  if ( NtCurrentTeb()->ResourceRetValue
    && *(_QWORD *)NtCurrentTeb()->ResourceRetValue == a1
    && *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 1) == v7 )
  {
    a1 = *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2);
LABEL_10:
    ImageSize = LdrpAccessResourceDataNoMultipleLanguage(a1, v7, v6, a4);
    goto LABEL_11;
  }
  LOWORD(a3) = 2;
  LOBYTE(a2) = 1;
  v15 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  v16 = RtlpImageDirectoryEntryToDataEx(a1, a2, a3, (unsigned int)&v24, (__int64)&v22);
  v18 = v22;
  if ( v16 < 0 )
    v18 = 0LL;
  if ( v18 )
  {
    if ( v7 < v18 )
      goto LABEL_30;
    ImageSize = LdrpGetImageSize(a1, &v21);
    if ( ImageSize != -1073741701 )
    {
      if ( !v21 || v7 >= v15 && v7 < v15 + v21 )
        goto LABEL_10;
LABEL_30:
      AlternateResourceModuleHandle = LdrpGetAlternateResourceModuleHandleEx(a1, v17, v7, &v23);
      if ( (unsigned __int64)(AlternateResourceModuleHandle - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        a1 = AlternateResourceModuleHandle;
      goto LABEL_10;
    }
  }
  else
  {
    ImageSize = -1073741687;
  }
LABEL_11:
  v13 = NtCurrentPeb()->SharedData;
  if ( v13 && *v13 )
    v8 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v8 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v11 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(L"*,", *(unsigned __int8 *)v11);
  }
  return ImageSize;
}
