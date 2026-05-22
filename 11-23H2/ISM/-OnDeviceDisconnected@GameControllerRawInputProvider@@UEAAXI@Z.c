/*
 * XREFs of ?OnDeviceDisconnected@GameControllerRawInputProvider@@UEAAXI@Z @ 0x1800CCE50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall GameControllerRawInputProvider::OnDeviceDisconnected(GameControllerRawInputProvider *this, int a2)
{
  _DWORD *i; // rbx
  __int64 v3; // rax
  _QWORD *v4; // rdx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  for ( i = (_DWORD *)*((_QWORD *)this + 8); i != (_DWORD *)((char *)this + 64); i = *(_DWORD **)i )
  {
    v3 = *(_QWORD *)i;
    if ( i[4] == a2 )
    {
      v4 = (_QWORD *)*((_QWORD *)i + 1);
      if ( *(_DWORD **)(v3 + 8) != i || (_DWORD *)*v4 != i )
        __fastfail(3u);
      *v4 = v3;
      *(_QWORD *)(v3 + 8) = v4;
      --*((_QWORD *)this + 10);
      v5 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(char *), _DWORD *, __int64))(**((_QWORD **)this + 4)
                                                                                                + 152LL))(
             *((_QWORD *)this + 4),
             GameControllerRawInputProvider::DeviceRemovalCallback,
             i,
             4LL);
      if ( v5 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          384LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawinputprovider.cpp",
          (const char *)(unsigned int)v5);
        operator delete(i);
      }
      return;
    }
  }
}
