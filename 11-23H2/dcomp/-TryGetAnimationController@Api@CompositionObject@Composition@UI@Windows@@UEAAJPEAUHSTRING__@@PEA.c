/*
 * XREFs of ?TryGetAnimationController@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIAnimationController@345@@Z @ 0x180005F70
 * Callers:
 *     <none>
 * Callees:
 *     ?TryGetAnimationController@CompositionObject@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAPEAVAnimationController@234@@Z @ 0x180006020 (-TryGetAnimationController@CompositionObject@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAPEAV.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionObject::Api::TryGetAnimationController(
        Windows::UI::Composition::CompositionObject::Api *this,
        HSTRING a2,
        struct Windows::UI::Composition::IAnimationController **a3)
{
  Windows::UI::Composition::CompositionObject *v3; // rbx
  Microsoft::WRL2::ContextSession *v5; // rdi
  int AnimationController; // eax
  unsigned int v8; // ebx
  Microsoft::WRL2::NestableRuntimeClass *v9; // rcx
  struct Windows::UI::Composition::IAnimationController *v10; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = (Windows::UI::Composition::CompositionObject::Api *)((char *)this - 64);
  v5 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)this - 5);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)v3 + 32) & 2) == 0 )
  {
    v8 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_6;
  }
  v12 = 0LL;
  AnimationController = Windows::UI::Composition::CompositionObject::TryGetAnimationController(v3, a2, &v12);
  v8 = AnimationController;
  if ( AnimationController < 0 )
  {
    DoStackCaptureDirect(AnimationController, 0x408u);
    v9 = v12;
    if ( !v12 )
      goto LABEL_6;
    v12 = 0LL;
    goto LABEL_8;
  }
  v9 = v12;
  v10 = 0LL;
  if ( v12 )
  {
    v10 = (Microsoft::WRL2::NestableRuntimeClass *)((char *)v12 + 168);
    Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v12);
    v9 = v12;
  }
  *a3 = v10;
  v8 = 0;
  if ( v9 )
  {
    v12 = 0LL;
LABEL_8:
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v9);
  }
LABEL_6:
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v8;
}
