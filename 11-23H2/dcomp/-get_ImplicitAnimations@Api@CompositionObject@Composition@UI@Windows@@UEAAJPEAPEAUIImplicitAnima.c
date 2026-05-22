/*
 * XREFs of ?get_ImplicitAnimations@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAPEAUIImplicitAnimationCollection@345@@Z @ 0x18001EDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionObject::Api::get_ImplicitAnimations(
        Windows::UI::Composition::CompositionObject::Api *this,
        struct Windows::UI::Composition::IImplicitAnimationCollection **a2)
{
  char *v2; // r14
  Microsoft::WRL2::ContextSession *v4; // rbx
  unsigned int v5; // esi
  struct Windows::UI::Composition::IImplicitAnimationCollection *v6; // rdi
  Microsoft::WRL2::NestableRuntimeClass *v7; // rax

  v2 = (char *)this - 48;
  v4 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)this - 3);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (v2[32] & 2) != 0 )
  {
    v5 = 0;
    v6 = 0LL;
    v7 = (Microsoft::WRL2::NestableRuntimeClass *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v2 + 232LL))(v2);
    if ( v7 )
    {
      v6 = (Microsoft::WRL2::NestableRuntimeClass *)((char *)v7 + 128);
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v7);
    }
    *a2 = v6;
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}
