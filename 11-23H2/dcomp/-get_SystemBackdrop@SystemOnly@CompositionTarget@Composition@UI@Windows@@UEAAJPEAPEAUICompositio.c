/*
 * XREFs of ?get_SystemBackdrop@SystemOnly@CompositionTarget@Composition@UI@Windows@@UEAAJPEAPEAUICompositionBrush@345@@Z @ 0x180197130
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalUnlock@?$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008282C (-InternalUnlock@-$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionTarget::SystemOnly::get_SystemBackdrop(
        Windows::UI::Composition::CompositionTarget::SystemOnly *this,
        struct Windows::UI::Composition::ICompositionBrush **a2)
{
  char *v2; // rbx
  unsigned int v3; // esi
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  volatile signed __int32 *v6; // rax
  __int64 v7; // rdx
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)this - 160;
  v3 = 0;
  *a2 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 17);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (v2[32] & 2) != 0 )
  {
    v6 = (volatile signed __int32 *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v2 + 280LL))(v2);
    v10 = v6;
    v8 = v6;
    if ( v6 )
    {
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef((Microsoft::WRL2::NestableRuntimeClass *)v6);
      v7 = (__int64)(v8 + 34);
      v10 = 0LL;
      *a2 = (struct Windows::UI::Composition::ICompositionBrush *)((unsigned __int64)(v8 + 34) & -(__int64)(v8 != 0LL));
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(&v10, v7);
  }
  else
  {
    v3 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v3;
}
