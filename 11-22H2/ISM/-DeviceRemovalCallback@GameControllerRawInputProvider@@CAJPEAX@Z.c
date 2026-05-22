/*
 * XREFs of ?DeviceRemovalCallback@GameControllerRawInputProvider@@CAJPEAX@Z @ 0x1800DBE50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall GameControllerRawInputProvider::DeviceRemovalCallback(char *a1)
{
  int v2; // eax
  unsigned int v3; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( GameControllerRawInputProvider::s_instance
    && (v2 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)GameControllerRawInputProvider::s_instance + 6)
                                                       + 56LL))(
               *((_QWORD *)GameControllerRawInputProvider::s_instance + 6),
               a1 + 16),
        v3 = v2,
        v2 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawinputprovider.cpp",
      (const char *)(unsigned int)v2);
    if ( a1 )
      operator delete(a1);
    return v3;
  }
  else
  {
    if ( a1 )
      operator delete(a1);
    return 0LL;
  }
}
