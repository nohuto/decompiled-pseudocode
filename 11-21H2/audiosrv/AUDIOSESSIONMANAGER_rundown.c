/*
 * XREFs of AUDIOSESSIONMANAGER_rundown @ 0x180010350
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B4B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall AUDIOSESSIONMANAGER_rundown(char *a1)
{
  _QWORD *v1; // rsi
  void (__fastcall *v3)(struct IAudioDuckingManager *, _QWORD, _QWORD); // rbx
  unsigned int v4; // eax

  v1 = a1 + 8;
  if ( g_DuckingManager )
  {
    v3 = *(void (__fastcall **)(struct IAudioDuckingManager *, _QWORD, _QWORD))(*(_QWORD *)g_DuckingManager + 40LL);
    v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 40LL))(*v1);
    v3(g_DuckingManager, v4, 0LL);
  }
  if ( a1 )
  {
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v1);
    if ( *(_QWORD *)a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(*(_QWORD *)a1);
    operator delete(a1, 0x10uLL);
  }
}
