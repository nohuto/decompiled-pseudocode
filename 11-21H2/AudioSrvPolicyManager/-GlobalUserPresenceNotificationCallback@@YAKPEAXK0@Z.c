/*
 * XREFs of ?GlobalUserPresenceNotificationCallback@@YAKPEAXK0@Z @ 0x180009F40
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_225f813fb40d37af0641811230a2a49f_::operator() @ 0x180008ED8 (_lambda_225f813fb40d37af0641811230a2a49f_--operator().c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000E27C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall GlobalUserPresenceNotificationCallback(void *a1, __int64 a2, void *a3)
{
  int v3; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v7; // [rsp+40h] [rbp+18h] BYREF
  void **v8; // [rsp+48h] [rbp+20h] BYREF

  v7 = a3;
  v8 = &v7;
  v3 = lambda_225f813fb40d37af0641811230a2a49f_::operator()((__int64 **)&v8);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xE7,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)v3,
      v5);
  return 0LL;
}
