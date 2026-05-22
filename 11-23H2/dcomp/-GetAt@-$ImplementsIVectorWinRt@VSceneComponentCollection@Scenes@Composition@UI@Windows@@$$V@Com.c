/*
 * XREFs of ?GetAt@?$ImplementsIVectorWinRt@VSceneComponentCollection@Scenes@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJIPEAPEAUISceneComponent@Scenes@234@@Z @ 0x180142660
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ImplementsIVectorWinRt<Windows::UI::Composition::Scenes::SceneComponentCollection,>::GetAt(
        __int64 a1,
        unsigned int a2,
        __int64 *a3)
{
  unsigned __int64 v4; // rbp
  unsigned int v5; // esi
  struct _RTL_CRITICAL_SECTION *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = a2;
  v5 = 0;
  *a3 = 0LL;
  v7 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 152);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v7);
  if ( (*(_BYTE *)(a1 - 144) & 2) != 0 )
  {
    v8 = *(_QWORD *)(a1 - 40);
    if ( v4 < (*(_QWORD *)(a1 - 32) - v8) >> 3 )
    {
      v9 = *(_QWORD *)(v8 + 8 * v4);
      if ( v9 )
        Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(*(Microsoft::WRL2::NestableRuntimeClass **)(v8 + 8 * v4));
      v12 = 0LL;
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v12);
      *a3 = (v9 + 152) & -(__int64)(v9 != 0);
    }
    else
    {
      Windows::UI::Composition::OriginateInvalidArgument(17LL, L"index");
      v5 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\VectorBasedCollection.inl",
        (const char *)0x80070057LL);
      DoStackCaptureDirect(-2147024809, 0xFu);
    }
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v7);
  return v5;
}
