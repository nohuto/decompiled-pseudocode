/*
 * XREFs of ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C0018758
 * Callers:
 *     xxxCloseClipboard @ 0x1C0011320 (xxxCloseClipboard.c)
 *     _OpenClipboard @ 0x1C00113CC (_OpenClipboard.c)
 *     NtUserIsClipboardFormatAvailable @ 0x1C0013120 (NtUserIsClipboardFormatAvailable.c)
 *     NtUserCountClipboardFormats @ 0x1C0016370 (NtUserCountClipboardFormats.c)
 *     NtUserGetOpenClipboardWindow @ 0x1C0017700 (NtUserGetOpenClipboardWindow.c)
 *     NtUserGetClipboardSequenceNumber @ 0x1C0017A10 (NtUserGetClipboardSequenceNumber.c)
 *     NtUserGetClipboardOwner @ 0x1C0018530 (NtUserGetClipboardOwner.c)
 *     NtUserRemoveClipboardFormatListener @ 0x1C0018580 (NtUserRemoveClipboardFormatListener.c)
 *     NtUserAddClipboardFormatListener @ 0x1C0018630 (NtUserAddClipboardFormatListener.c)
 *     xxxEmptyClipboard @ 0x1C00B935C (xxxEmptyClipboard.c)
 *     NtUserGetClipboardViewer @ 0x1C0154300 (NtUserGetClipboardViewer.c)
 *     NtUserGetClipboardData @ 0x1C01D0350 (NtUserGetClipboardData.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1C01D4190 (NtUserGetUpdatedClipboardFormats.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x1C01FCC58 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 *     InternalGetClipboardMetadata @ 0x1C01FD93C (InternalGetClipboardMetadata.c)
 *     _EnumClipboardFormats @ 0x1C01FDA88 (_EnumClipboardFormats.c)
 *     _GetPriorityClipboardFormat @ 0x1C01FDB28 (_GetPriorityClipboardFormat.c)
 *     _SetClipboardData @ 0x1C01FDC4C (_SetClipboardData.c)
 *     xxxChangeClipboardChain @ 0x1C01FDCF8 (xxxChangeClipboardChain.c)
 *     xxxSetClipboardViewer @ 0x1C01FDFC4 (xxxSetClipboardViewer.c)
 * Callees:
 *     ReferenceWindowStation @ 0x1C00187B0 (ReferenceWindowStation.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

struct tagWINDOWSTATION *CheckClipboardAccess(void)
{
  struct tagTHREADINFO *v0; // rax
  NTSTATUS v1; // eax
  ULONG v3; // eax
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  v0 = PtiCurrentShared();
  v1 = ReferenceWindowStation(KeGetCurrentThread(), 0LL, 4LL, &v4, (*((_DWORD *)v0 + 122) >> 3) & 1);
  if ( v1 >= 0 )
    return (struct tagWINDOWSTATION *)v4;
  v3 = RtlNtStatusToDosError(v1);
  UserSetLastError(v3);
  return 0LL;
}
