/*
 * XREFs of ?TryGetGeometryUsingFactory@Interop@CompositionPath@Composition@UI@Windows@@UEAAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z @ 0x18012FDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@PEAPEAV123@@Z @ 0x18006BB3C (-ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@P.c)
 *     ?Deserialize@CompositionPath@Composition@UI@Windows@@QEAAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z @ 0x18012FB40 (-Deserialize@CompositionPath@Composition@UI@Windows@@QEAAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPath::Interop::TryGetGeometryUsingFactory(
        struct IUnknown *this,
        struct ID2D1Factory *a2,
        struct ID2D1Geometry **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Microsoft::WRL2::NestableRuntimeClass *v11; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  v11 = 0LL;
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v11);
  v6 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
         this,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionPath::s_InterfaceType,
         &v11);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v6 = Windows::UI::Composition::CompositionPath::Deserialize((CPathData **)v11, a2, a3);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v7 = 0;
      goto LABEL_7;
    }
    v8 = 303LL;
  }
  else
  {
    v8 = 301LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionpath.cpp",
    (const char *)(unsigned int)v6);
LABEL_7:
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v11);
  return v7;
}
