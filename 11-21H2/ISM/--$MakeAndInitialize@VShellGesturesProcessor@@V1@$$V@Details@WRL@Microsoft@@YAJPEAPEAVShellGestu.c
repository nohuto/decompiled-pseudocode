/*
 * XREFs of ??$MakeAndInitialize@VShellGesturesProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVShellGesturesProcessor@@@Z @ 0x180047020
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180035B8C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInstance@KernelContextProvider@@SAPEAV1@XZ @ 0x18001B208 (-GetInstance@KernelContextProvider@@SAPEAV1@XZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIContextualProcessor@@@WRL@Microsoft@@QEAA@XZ @ 0x1800470DC (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIContextualProcessor@@@WRL@Microsoft@.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180047390 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ShellGesturesProcessor,ShellGesturesProcessor,>(
        _QWORD *a1)
{
  unsigned int v2; // ebx
  _QWORD *v3; // rax
  _QWORD *v4; // rdi
  struct KernelContextProvider *Instance; // rax
  __int64 v6; // rcx
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v3 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( v3 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IContextualProcessor>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IContextualProcessor>(v3);
    *v4 = &ShellGesturesProcessor::`vftable';
    v4[2] = 0LL;
    v8 = v4;
    Instance = KernelContextProvider::GetInstance();
    v6 = v4[2];
    if ( (struct KernelContextProvider *)v6 != Instance )
    {
      if ( Instance )
      {
        _InterlockedIncrement((volatile signed __int32 *)Instance + 4);
        v6 = v4[2];
      }
      v4[2] = Instance;
      if ( v6 )
        RefCountedObject::Release((RefCountedObject *)(v6 + 8));
    }
    (*(void (__fastcall **)(_QWORD *))(*v4 + 8LL))(v4);
    *a1 = v4;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
