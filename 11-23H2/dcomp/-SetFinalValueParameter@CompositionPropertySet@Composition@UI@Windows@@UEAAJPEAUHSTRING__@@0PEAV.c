/*
 * XREFs of ?SetFinalValueParameter@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x180148FA0
 * Callers:
 *     ?SetFinalValueParameter@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x180109830 (-SetFinalValueParameter@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetVector3Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector3@Numerics@Foundation@4@@Z @ 0x180029908 (-SetVector3Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector.c)
 *     ?SetScalarParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@M@Z @ 0x18003DD58 (-SetScalarParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@M@Z.c)
 *     ?GetPropertyIdFromName@CompositionPropertySet@Composition@UI@Windows@@AEAA_NPEAUHSTRING__@@PEAI@Z @ 0x18006EDD4 (-GetPropertyIdFromName@CompositionPropertySet@Composition@UI@Windows@@AEAA_NPEAUHSTRING__@@PEAI@.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?SetFinalValueParameter@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x180109830 (-SetFinalValueParameter@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompo.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x180148F20 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ?SetColorParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@U_D3DCOLORVALUE@@@Z @ 0x18014F66C (-SetColorParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@U_D3DCOLORVA.c)
 *     ?SetQuaternionParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUQuaternion@Numerics@Foundation@4@@Z @ 0x18014FA88 (-SetQuaternionParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUQua.c)
 *     ?SetVector2Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector2@Numerics@Foundation@4@@Z @ 0x18014FD04 (-SetVector2Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector.c)
 *     ?SetVector4Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector4@Numerics@Foundation@4@@Z @ 0x18014FE58 (-SetVector4Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertySet::SetFinalValueParameter(
        Windows::UI::Composition::CompositionPropertySet *this,
        HSTRING a2,
        HSTRING a3,
        struct Windows::UI::Composition::CompositionAnimation *a4)
{
  __int64 v8; // rdx
  _QWORD *v9; // r10
  int v10; // ebx
  __int64 v11; // rdx
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // r10
  unsigned int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // r10
  unsigned int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r9
  __int64 v26; // r10
  unsigned int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r9
  __int64 v31; // r10
  unsigned int v32; // edx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // r9
  __int64 v36; // r10
  unsigned int v37; // edx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // r9
  __int64 v41; // r10
  unsigned int v43[4]; // [rsp+20h] [rbp-28h] BYREF
  struct _D3DCOLORVALUE v44; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( Windows::UI::Composition::CompositionPropertySet::GetPropertyIdFromName(this, a2, v43) )
  {
    if ( !PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
            (__int64)this + 208,
            v43[0]) )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    switch ( *(_DWORD *)(*v9 + 8 * v8) )
    {
      case 0x12:
        if ( !PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((__int64)v9, v8) )
          ModuleFailFastForHRESULT(-2147024809, retaddr);
        if ( !PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v38, v37) )
          ModuleFailFastForHRESULT(-2147024809, retaddr);
        v10 = Windows::UI::Composition::CompositionAnimation::SetScalarParameter(
                a4,
                a3,
                *(float *)(*(_QWORD *)(v41 + 32) + (*(_DWORD *)(v40 + 8 * v39 + 4) & 0x1FFFFFFF)));
        if ( v10 < 0 )
        {
          v11 = 1443LL;
          goto LABEL_35;
        }
        break;
      case 0x23:
        if ( !PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((__int64)v9, v8) )
          ModuleFailFastForHRESULT(-2147024809, retaddr);
        if ( !PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v33, v32) )
          ModuleFailFastForHRESULT(-2147024809, retaddr);
        v10 = Windows::UI::Composition::CompositionAnimation::SetVector2Parameter(
                a4,
                a3,
                (const struct Windows::Foundation::Numerics::Vector2 *)(*(_QWORD *)(v36 + 32)
                                                                      + (*(_DWORD *)(v35 + 8 * v34 + 4) & 0x1FFFFFFF)));
        if ( v10 < 0 )
        {
          v11 = 1450LL;
          goto LABEL_35;
        }
        break;
      case 0x34:
        if ( !PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((__int64)v9, v8) )
          ModuleFailFastForHRESULT(-2147024809, retaddr);
        if ( !PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v28, v27) )
          ModuleFailFastForHRESULT(-2147024809, retaddr);
        v10 = Windows::UI::Composition::CompositionAnimation::SetVector3Parameter(
                a4,
                a3,
                (const struct Windows::Foundation::Numerics::Vector3 *)(*(_QWORD *)(v31 + 32)
                                                                      + (*(_DWORD *)(v30 + 8 * v29 + 4) & 0x1FFFFFFF)));
        if ( v10 < 0 )
        {
          v11 = 1457LL;
          goto LABEL_35;
        }
        break;
      case 0x45:
        if ( !PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((__int64)v9, v8) )
          ModuleFailFastForHRESULT(-2147024809, retaddr);
        if ( !PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v23, v22) )
          ModuleFailFastForHRESULT(-2147024809, retaddr);
        v10 = Windows::UI::Composition::CompositionAnimation::SetVector4Parameter(
                a4,
                a3,
                (const struct Windows::Foundation::Numerics::Vector4 *)(*(_QWORD *)(v26 + 32)
                                                                      + (*(_DWORD *)(v25 + 8 * v24 + 4) & 0x1FFFFFFF)));
        if ( v10 < 0 )
        {
          v11 = 1464LL;
          goto LABEL_35;
        }
        break;
      case 0x46:
        if ( !PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((__int64)v9, v8) )
          ModuleFailFastForHRESULT(-2147024809, retaddr);
        if ( !PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v18, v17) )
          ModuleFailFastForHRESULT(-2147024809, retaddr);
        *(struct _D3DCOLORVALUE *)&v44.r = *(struct _D3DCOLORVALUE *)((*(_DWORD *)(v20 + 8 * v19 + 4) & 0x1FFFFFFF)
                                                                    + *(_QWORD *)(v21 + 32));
        v10 = Windows::UI::Composition::CompositionAnimation::SetColorParameter(a4, a3, &v44);
        if ( v10 < 0 )
        {
          v11 = 1471LL;
          goto LABEL_35;
        }
        break;
      case 0x47:
        if ( !PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((__int64)v9, v8) )
          ModuleFailFastForHRESULT(-2147024809, retaddr);
        if ( !PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v13, v12) )
          ModuleFailFastForHRESULT(-2147024809, retaddr);
        v10 = Windows::UI::Composition::CompositionAnimation::SetQuaternionParameter(
                a4,
                a3,
                (const struct Windows::Foundation::Numerics::Quaternion *)(*(_QWORD *)(v16 + 32)
                                                                         + (*(_DWORD *)(v15 + 8 * v14 + 4) & 0x1FFFFFFF)));
        if ( v10 < 0 )
        {
          v11 = 1478LL;
          goto LABEL_35;
        }
        break;
      default:
        v10 = Windows::UI::Composition::CompositionObject::SetFinalValueParameter(this, a2, a3, a4);
        if ( v10 < 0 )
        {
          v11 = 1483LL;
LABEL_35:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v11,
            (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionpropertyset.cpp",
            (const char *)(unsigned int)v10);
          return (unsigned int)v10;
        }
        break;
    }
  }
  else
  {
    v10 = Windows::UI::Composition::CompositionObject::SetFinalValueParameter(this, a2, a3, a4);
    if ( v10 < 0 )
    {
      v11 = 1488LL;
      goto LABEL_35;
    }
  }
  return 0LL;
}
