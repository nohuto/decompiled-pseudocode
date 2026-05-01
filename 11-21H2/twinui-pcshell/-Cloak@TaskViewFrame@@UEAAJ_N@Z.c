/*
 * XREFs of ?Cloak@TaskViewFrame@@UEAAJ_N@Z @ 0x18060FF40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall TaskViewFrame::Cloak(TaskViewFrame *this)
{
  signed int v1; // eax
  const char *v2; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 104LL))(*((_QWORD *)this + 7));
  try
  {
    if ( v1 < 0 )
      winrt::throw_hresult(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xC8,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewframe.cpp",
                           v2);
  }
  return result;
}
