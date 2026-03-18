/*
 * XREFs of xxxSetClipboardViewer @ 0x1C014655C
 * Callers:
 *     NtUserSetClipboardViewer @ 0x1C01464C0 (NtUserSetClipboardViewer.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005BDE0 (PopAndFreeW32ThreadLock.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C00CD268 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C014664C (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 */

__int64 __fastcall xxxSetClipboardViewer(__int64 a1, __int64 a2)
{
  struct tagWINDOWSTATION *v3; // rax
  struct tagWINDOWSTATION *v4; // rdi
  _QWORD *v5; // rsi
  _QWORD v7[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  v9 = 0LL;
  v8 = 0LL;
  if ( a1 && *(char *)(*(_QWORD *)(a1 + 40) + 19LL) < 0 )
    goto LABEL_11;
  v3 = CheckClipboardAccess();
  v4 = v3;
  if ( !v3 )
    return 0LL;
  if ( a1 )
  {
    a2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL);
    if ( *(struct tagWINDOWSTATION **)(a2 + 664) != v3 )
    {
LABEL_11:
      UserSetLastError(87LL, a2);
      return 0LL;
    }
  }
  PushW32ThreadLock((__int64)v3, &v8, UserDereferenceObject);
  ObfReferenceObject(v4);
  v5 = (_QWORD *)*((_QWORD *)v4 + 13);
  if ( v5 )
    v5 = (_QWORD *)*v5;
  v7[0] = (char *)v4 + 104;
  v7[1] = a1;
  HMAssignmentLock(v7, 0LL);
  xxxDrawClipboard(v4);
  PopAndFreeW32ThreadLock((__int64)&v8);
  if ( !v5 )
    return 0LL;
  return HMValidateHandleNoSecure((int)v5, 1);
}
