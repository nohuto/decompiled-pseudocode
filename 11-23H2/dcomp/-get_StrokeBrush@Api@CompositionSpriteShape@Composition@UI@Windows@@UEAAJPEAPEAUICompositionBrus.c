/*
 * XREFs of ?get_StrokeBrush@Api@CompositionSpriteShape@Composition@UI@Windows@@UEAAJPEAPEAUICompositionBrush@345@@Z @ 0x180171C60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalUnlock@?$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008282C (-InternalUnlock@-$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSpriteShape::Api::get_StrokeBrush(
        Windows::UI::Composition::CompositionSpriteShape::Api *this,
        struct Windows::UI::Composition::ICompositionBrush **a2)
{
  unsigned int v3; // esi
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rbx
  volatile signed __int32 *v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  *a2 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 21);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)this - 160) & 2) != 0 )
  {
    v7 = *((_QWORD *)this + 3);
    v9 = (volatile signed __int32 *)v7;
    if ( v7 )
    {
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef((Microsoft::WRL2::NestableRuntimeClass *)v7);
      v9 = 0LL;
      *a2 = (struct Windows::UI::Composition::ICompositionBrush *)(v7 + 136);
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(&v9, v6);
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
