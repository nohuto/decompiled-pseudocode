/*
 * XREFs of ?RuntimeClassInitialize@CompositionIslandTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionIsland@234@@Z @ 0x18015A0CC
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionIslandTarget@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVCompositionIsland@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionIslandTarget@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAVCompositionIsland@456@@Z @ 0x18010DD8C (--$MakeAndInitialize2@VCompositionIslandTarget@Composition@UI@Windows@@V1234@PEAVCompositor@234@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIslandTarget::RuntimeClassInitialize(
        volatile signed __int32 **this,
        struct Windows::UI::Composition::Compositor *a2,
        struct Windows::UI::Composition::CompositionIsland *a3)
{
  int v5; // eax
  __int64 v6; // rdx
  unsigned int v7; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v10; // [rsp+48h] [rbp+20h] BYREF

  v5 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(
         (Windows::UI::Composition::CompositionObject *)this,
         a2);
  v7 = v5;
  if ( v5 >= 0 )
  {
    if ( this[20] != (volatile signed __int32 *)a3 )
    {
      if ( a3 )
        Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(a3);
      v10 = (Microsoft::WRL2::NestableRuntimeClass *)this[20];
      this[20] = (volatile signed __int32 *)a3;
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v10);
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(this + 21, v6);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionislandtarget.cpp",
      (const char *)(unsigned int)v5);
    return v7;
  }
}
