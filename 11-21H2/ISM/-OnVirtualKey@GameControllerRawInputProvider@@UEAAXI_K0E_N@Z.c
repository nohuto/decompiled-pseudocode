/*
 * XREFs of ?OnVirtualKey@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z @ 0x1800B45A0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetTimestampsFromInput@GameControllerRawInputProvider@@AEAAX_KPEAUInputInfo@@@Z @ 0x1800B47AC (-SetTimestampsFromInput@GameControllerRawInputProvider@@AEAAX_KPEAUInputInfo@@@Z.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800B4938 (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall GameControllerRawInputProvider::OnVirtualKey(
        GameControllerRawInputProvider *this,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int8 a5,
        bool a6)
{
  _DWORD *v10; // rax
  unsigned int v11; // r8d
  const char *v12; // r9
  _DWORD *v13; // rbx
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v10 = operator new(0x170uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v10;
  if ( v10 )
  {
    memset_0(v10, 0, 0x170uLL);
    *v13 = 4;
    v13[6] = 368;
    v13[1] = a2;
    *((_WORD *)v13 + 30) = a5;
    *((_WORD *)v13 + 47) = !a6 | 0x40;
    *((_QWORD *)v13 + 4) = a3;
    GameControllerRawInputProvider::SetTimestampsFromInput(
      (GameControllerRawInputProvider *)((char *)this - 16),
      a4,
      (struct InputInfo *)v13);
    v14 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *), _DWORD *, __int64))(**((_QWORD **)this + 4)
                                                                                               + 152LL))(
            *((_QWORD *)this + 4),
            GameControllerRawInputProvider::InputReportCallback,
            v13,
            4LL);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        587LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawinputprovider.cpp",
        (const char *)(unsigned int)v14);
      operator delete(v13);
    }
  }
  else
  {
    wil::details::in1diag3::_Log_NullAlloc(retaddr, (void *)0x241, v11, v12);
  }
}
