/*
 * XREFs of ?SetPath@CompositionPathGeometry@Composition@UI@Windows@@QEAAJPEAVCompositionPath@234@@Z @ 0x1800403B8
 * Callers:
 *     ?CreatePathGeometry@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVCompositionPath@234@PEAPEAVCompositionPathGeometry@234@@Z @ 0x1800407B8 (-CreatePathGeometry@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVCompositionPath@234@PEAPEA.c)
 *     ?put_Path@Api@CompositionPathGeometry@Composition@UI@Windows@@UEAAJPEAUICompositionPath@345@@Z @ 0x18008D410 (-put_Path@Api@CompositionPathGeometry@Composition@UI@Windows@@UEAAJPEAUICompositionPath@345@@Z.c)
 *     ?OnAnimatedPropertyChanged@CompositionPathGeometry@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x18016F8C0 (-OnAnimatedPropertyChanged@CompositionPathGeometry@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?DetachConsumer@CompositionPath@Composition@UI@Windows@@QEAAXPEAVCompositor@234@@Z @ 0x180010B88 (-DetachConsumer@CompositionPath@Composition@UI@Windows@@QEAAXPEAVCompositor@234@@Z.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?AttachConsumer@CompositionPath@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAPEAVCSharedAllocation@DirectComposition@@PEAI@Z @ 0x1800404C4 (-AttachConsumer@CompositionPath@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAPEAVCSharedAl.c)
 *     ?SetSharedSectionReferenceProperties@ProxyObject@Composition@UI@Windows@@IEAAXIIIPEAVCSharedAllocationBase@DirectComposition@@_K@Z @ 0x180040620 (-SetSharedSectionReferenceProperties@ProxyObject@Composition@UI@Windows@@IEAAXIIIPEAVCSharedAllo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPathGeometry::SetPath(
        struct Windows::UI::Composition::CompositionPath **this,
        struct Windows::UI::Composition::CompositionPath *a2)
{
  struct DirectComposition::CSharedAllocation *v4; // rbp
  unsigned int v5; // r14d
  int v6; // eax
  unsigned int v7; // ebp
  Windows::UI::Composition::CompositionPath *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v11; // [rsp+50h] [rbp+8h] BYREF
  struct DirectComposition::CSharedAllocation *v12; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 == this[23] )
    return 0LL;
  v4 = 0LL;
  v5 = 0;
  v12 = 0LL;
  LODWORD(v11) = 0;
  if ( !a2 )
  {
LABEL_5:
    v8 = this[23];
    if ( v8 )
      Windows::UI::Composition::CompositionPath::DetachConsumer(v8, this[3]);
    if ( this[23] != a2 )
    {
      if ( a2 )
        Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(a2);
      v11 = this[23];
      this[23] = a2;
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v11);
    }
    Windows::UI::Composition::ProxyObject::SetSharedSectionReferenceProperties(
      (Windows::UI::Composition::ProxyObject *)this,
      4u,
      5u,
      6u,
      v4,
      v5);
    if ( *((_DWORD *)v4 + 6) != 3 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v4 + 2) + 40LL))((__int64)v4 + 16, 3LL);
      *((_DWORD *)v4 + 6) = 3;
    }
    return 0LL;
  }
  v6 = Windows::UI::Composition::CompositionPath::AttachConsumer(a2, this[3], &v12, (unsigned int *)&v11);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v4 = v12;
    v5 = (unsigned int)v11;
    goto LABEL_5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x62,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionpathgeometry.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
