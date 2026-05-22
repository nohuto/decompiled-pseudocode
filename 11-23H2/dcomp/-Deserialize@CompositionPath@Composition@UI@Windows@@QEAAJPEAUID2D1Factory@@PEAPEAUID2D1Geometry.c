/*
 * XREFs of ?Deserialize@CompositionPath@Composition@UI@Windows@@QEAAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z @ 0x18012FB40
 * Callers:
 *     ?GetGeometry@Interop@CompositionPath@Composition@UI@Windows@@UEAAJPEAPEAUID2D1Geometry@@@Z @ 0x18012FC10 (-GetGeometry@Interop@CompositionPath@Composition@UI@Windows@@UEAAJPEAPEAUID2D1Geometry@@@Z.c)
 *     ?TryGetGeometryUsingFactory@Interop@CompositionPath@Composition@UI@Windows@@UEAAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z @ 0x18012FDD0 (-TryGetGeometryUsingFactory@Interop@CompositionPath@Composition@UI@Windows@@UEAAJPEAUID2D1Factor.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetGlobalD2DFactoryNoRef@@YAJPEAPEAUID2D1Factory1@@@Z @ 0x1801067F4 (-GetGlobalD2DFactoryNoRef@@YAJPEAPEAUID2D1Factory1@@@Z.c)
 *     ?GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z @ 0x1801B2FD0 (-GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPath::Deserialize(
        CPathData **this,
        struct ID2D1Factory *a2,
        struct ID2D1Geometry **a3)
{
  int GlobalD2DFactoryNoRef; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ID2D1Factory *v9; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
  {
    GlobalD2DFactoryNoRef = GetGlobalD2DFactoryNoRef(&v9);
    if ( GlobalD2DFactoryNoRef < 0 )
    {
      v6 = 153LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionpath.cpp",
        (const char *)(unsigned int)GlobalD2DFactoryNoRef);
      return (unsigned int)GlobalD2DFactoryNoRef;
    }
    a2 = v9;
  }
  GlobalD2DFactoryNoRef = CPathData::GetD2DGeometry(this[8], a2, a3);
  if ( GlobalD2DFactoryNoRef < 0 )
  {
    v6 = 157LL;
    goto LABEL_4;
  }
  return 0LL;
}
