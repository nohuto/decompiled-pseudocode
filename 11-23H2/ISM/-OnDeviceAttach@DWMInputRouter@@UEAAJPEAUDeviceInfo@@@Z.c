/*
 * XREFs of ?OnDeviceAttach@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x18004CE80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z @ 0x18004CF0C (-OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::OnDeviceAttach(__int64 **this, struct DeviceInfo *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 *v6; // rbx
  __int64 *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct DeviceInfo *v12; // [rsp+40h] [rbp+18h] BYREF

  v4 = DWMInputRouter::OnDeviceChange((DWMInputRouter *)this, a2, 1);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x489,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  else
  {
    v6 = this[82];
    v7 = this[83];
    while ( v6 != v7 )
    {
      v8 = *v6;
      v12 = a2;
      v9 = *(_QWORD *)(v8 + 56);
      if ( !v9 )
      {
        std::_Xbad_function_call();
        __debugbreak();
        JUMPOUT(0x18008CF8BLL);
      }
      (*(void (__fastcall **)(__int64, struct DeviceInfo **))(*(_QWORD *)v9 + 16LL))(v9, &v12);
      ++v6;
    }
    return 0LL;
  }
}
