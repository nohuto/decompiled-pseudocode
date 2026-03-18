/*
 * XREFs of ?xxxGetMinMaxTrackInfo@@YAXPEAUMOVESIZEDATA@@H@Z @ 0x1C01ED7EC
 * Callers:
 *     ?EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C01E955C (-EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C01ED858 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 * Callees:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00ED180 (xxxInitSendValidateMinMaxInfoEx.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

void __fastcall xxxGetMinMaxTrackInfo(struct MOVESIZEDATA *a1)
{
  struct tagWND *v2; // rcx
  __int128 v3; // [rsp+20h] [rbp-38h] BYREF
  __int128 v4; // [rsp+30h] [rbp-28h]
  __int64 v5; // [rsp+40h] [rbp-18h]

  v2 = (struct tagWND *)*((_QWORD *)a1 + 2);
  v5 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  xxxInitSendValidateMinMaxInfoEx(v2, (__int64)&v3, 0LL);
  *((_QWORD *)a1 + 13) = *((_QWORD *)&v4 + 1);
  *((_QWORD *)a1 + 14) = v5;
}
