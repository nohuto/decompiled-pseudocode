/*
 * XREFs of ?OnDeviceConnected@GameControllerRawInputProvider@@UEAA_NI_N00@Z @ 0x1800DC020
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058434 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059DB0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800DCCC8 (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

char __fastcall GameControllerRawInputProvider::OnDeviceConnected(
        GameControllerRawInputProvider *this,
        int a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        bool a5)
{
  _OWORD *v9; // rax
  unsigned int v10; // r8d
  const char *v11; // r9
  _QWORD *v12; // rbx
  int v13; // eax
  int v14; // eax
  GameControllerRawInputProvider **v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v9 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v9;
  if ( !v9 )
  {
    wil::details::in1diag3::_Log_NullAlloc(retaddr, (void *)0x160, v10, v11);
    return 0;
  }
  *v9 = 0LL;
  v9[1] = 0LL;
  *((_DWORD *)v9 + 4) = a2;
  v13 = 64;
  *((_DWORD *)v12 + 5) = 64;
  *((_DWORD *)v12 + 6) = 12;
  if ( a4 | a3 )
  {
    v13 = 192;
    *((_DWORD *)v12 + 5) = 192;
  }
  if ( a5 )
    *((_DWORD *)v12 + 5) = v13 | 4;
  v14 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(char *), _QWORD *, __int64))(**((_QWORD **)this + 5)
                                                                                             + 152LL))(
          *((_QWORD *)this + 5),
          GameControllerRawInputProvider::DeviceAttachCallback,
          v12,
          4LL);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x170,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawinputprovider.cpp",
      (const char *)(unsigned int)v14);
    operator delete(v12);
    return 0;
  }
  v15 = (GameControllerRawInputProvider **)*((_QWORD *)this + 10);
  if ( *v15 != (GameControllerRawInputProvider *)((char *)this + 72) )
    __fastfail(3u);
  *v12 = (char *)this + 72;
  v12[1] = v15;
  *v15 = (GameControllerRawInputProvider *)v12;
  *((_QWORD *)this + 10) = v12;
  ++*((_QWORD *)this + 11);
  return 1;
}
