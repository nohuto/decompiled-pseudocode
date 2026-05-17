/*
 * XREFs of LdrpAccessResourceData @ 0x180022B10
 * Callers:
 *     RtlLoadString @ 0x180003070 (RtlLoadString.c)
 *     LdrAccessResource @ 0x1800219B0 (LdrAccessResource.c)
 *     RtlFindMessage @ 0x18002ABC0 (RtlFindMessage.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1800219BC (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180023940 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     LdrpGetImageSize @ 0x180088E08 (LdrpGetImageSize.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800ECFCC (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpTraceLoadMUIDll @ 0x1800ED41C (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpAccessResourceData(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // r14
  _DWORD *SharedData; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdx
  unsigned int ImageSize; // ebp
  __int64 v14; // r8
  __int64 v15; // r9
  _DWORD *v16; // rcx
  unsigned __int64 v18; // r15
  int v19; // eax
  unsigned __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 AlternateResourceModuleHandle; // rax
  __int64 v23; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-40h] BYREF
  __int64 v25; // [rsp+40h] [rbp-38h] BYREF
  int v26; // [rsp+80h] [rbp+8h] BYREF

  v25 = 0LL;
  v23 = 0LL;
  v8 = 2147353477LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v10 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v10 = 2147353477LL;
  v11 = 2147353476LL;
  if ( (*(_BYTE *)v10 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v10, a2, a3, a4) )
      v21 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v21 = 2147353476LL;
    LdrpTraceLoadMUIDll(L",.", *(unsigned __int8 *)v21);
  }
  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( NtCurrentTeb()->ResourceRetValue
    && *(_QWORD *)NtCurrentTeb()->ResourceRetValue == a1
    && *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 1) == a2 )
  {
    a1 = *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2);
LABEL_10:
    ImageSize = LdrpAccessResourceDataNoMultipleLanguage(a1, a2, a3, a4);
    goto LABEL_11;
  }
  v18 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  v19 = RtlpImageDirectoryEntryToDataEx(a1, 1, 2u, &v26, (__int64 *)&v24);
  v20 = v24;
  if ( v19 < 0 )
    v20 = 0LL;
  if ( v20 )
  {
    if ( a2 < v20 )
      goto LABEL_30;
    ImageSize = LdrpGetImageSize(a1, &v23);
    if ( ImageSize != -1073741701 )
    {
      if ( !v23 || a2 >= v18 && a2 < v18 + v23 )
        goto LABEL_10;
LABEL_30:
      AlternateResourceModuleHandle = LdrpGetAlternateResourceModuleHandleEx(a1, v12, a2, &v25);
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
  v16 = NtCurrentPeb()->SharedData;
  if ( v16 && *v16 )
    v8 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v8 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v16, v12, v14, v15) )
      v11 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(L"*,", *(unsigned __int8 *)v11);
  }
  return ImageSize;
}
