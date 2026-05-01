/*
 * XREFs of ?IsSearchButtonMode@TaskbarSearchAppPositioner@@UEAA_NAEBUtagRECT@@@Z @ 0x180169000
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall TaskbarSearchAppPositioner::IsSearchButtonMode(
        TaskbarSearchAppPositioner *this,
        const struct tagRECT *a2)
{
  const char *v2; // r9
  bool result; // al
  _BYTE v4[80]; // [rsp+20h] [rbp-78h] BYREF
  int v5; // [rsp+70h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  try
  {
    (*(void (__fastcall **)(_QWORD, _BYTE *, const struct tagRECT *))(**((_QWORD **)this + 1) + 8LL))(
      *((_QWORD *)this + 1),
      v4,
      a2);
    result = v5 == 1;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x180,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\taskbarsearchapppositioner.cpp",
      v2);
    return 1;
  }
  return result;
}
