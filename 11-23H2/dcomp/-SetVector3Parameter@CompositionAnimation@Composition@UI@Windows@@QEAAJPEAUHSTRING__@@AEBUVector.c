/*
 * XREFs of ?SetVector3Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector3@Numerics@Foundation@4@@Z @ 0x180029908
 * Callers:
 *     ?SetFinalValueParameter@AnimationHelper@Composition@UI@Windows@@YAJPEAUHSTRING__@@PEAVCompositionObject@234@PEAVCompositionAnimation@234@PEBUAnimationValueData@234@PEA_N@Z @ 0x18005C538 (-SetFinalValueParameter@AnimationHelper@Composition@UI@Windows@@YAJPEAUHSTRING__@@PEAVCompositio.c)
 *     ?SetVector3Parameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UVector3@Numerics@Foundation@5@@Z @ 0x180089380 (-SetVector3Parameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UVecto.c)
 *     ?SetFinalValueParameter@Visual@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x18010B970 (-SetFinalValueParameter@Visual@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnima.c)
 *     ?SetFinalValueParameter@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@345@@Z @ 0x18013ABF0 (-SetFinalValueParameter@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAUHSTRING.c)
 *     ?SetFinalValueParameterHelper@ProxyObject@Composition@UI@Windows@@IEAA_NPEAUHSTRING__@@0PEAVCompositionAnimation@234@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Windows@@$0?0@gsl@@@Z @ 0x1801471CC (-SetFinalValueParameterHelper@ProxyObject@Composition@UI@Windows@@IEAA_NPEAUHSTRING__@@0PEAVComp.c)
 *     ?SetFinalValueParameter@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x180148FA0 (-SetFinalValueParameter@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAV.c)
 *     ?SetFinalValueParameter@SceneModelTransform@Scenes@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@345@@Z @ 0x180192D00 (-SetFinalValueParameter@SceneModelTransform@Scenes@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?ClearMatrixValue@ParameterEntry@@QEAAXXZ @ 0x180029BFC (-ClearMatrixValue@ParameterEntry@@QEAAXXZ.c)
 *     ?Reset@AnimationObjectInfoCache@CompositionAnimation@Composition@UI@Windows@@QEAAXPEAVContextSession@WRL2@Microsoft@@@Z @ 0x180029C40 (-Reset@AnimationObjectInfoCache@CompositionAnimation@Composition@UI@Windows@@QEAAXPEAVContextSes.c)
 *     ?EnsureReferenceCleared@ParameterEntry@@QEAAXPEAVContextSession@WRL2@Microsoft@@@Z @ 0x18003E52C (-EnsureReferenceCleared@ParameterEntry@@QEAAXPEAVContextSession@WRL2@Microsoft@@@Z.c)
 *     ??1ParameterEntry@@QEAA@XZ @ 0x18003FEF4 (--1ParameterEntry@@QEAA@XZ.c)
 *     ?ValidateKey@CompositionAnimation@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@@Z @ 0x18005BCC4 (-ValidateKey@CompositionAnimation@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z @ 0x180108EB4 (-OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnimation::SetVector3Parameter(
        Windows::UI::Composition::CompositionAnimation *this,
        HSTRING a2,
        const struct Windows::Foundation::Numerics::Vector3 *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  Microsoft::WRL2::NestableRuntimeClass **v8; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v9; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v10; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v11; // rcx
  unsigned __int64 v13; // rcx
  Microsoft::WRL2::NestableRuntimeClass **inserted; // rax
  struct Microsoft::WRL2::ContextSession *v15; // rdx
  unsigned __int8 NewElement[8]; // [rsp+20h] [rbp-59h] BYREF
  HSTRING newString; // [rsp+28h] [rbp-51h] BYREF
  HSTRING Buffer; // [rsp+30h] [rbp-49h] BYREF
  int v19; // [rsp+38h] [rbp-41h]
  Microsoft::WRL2::NestableRuntimeClass *v20[2]; // [rsp+40h] [rbp-39h]
  int v21; // [rsp+50h] [rbp-29h]
  HSTRING v22; // [rsp+68h] [rbp-11h] BYREF
  int v23; // [rsp+70h] [rbp-9h]
  __int128 v24; // [rsp+78h] [rbp-1h]
  int v25; // [rsp+88h] [rbp+Fh]

  v6 = Windows::UI::Composition::CompositionAnimation::ValidateKey(this, a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    DoStackCaptureDirect(v6, 0x1B2u);
  }
  else
  {
    NewElement[0] = 0;
    newString = 0LL;
    v19 = 0;
    v21 = 0;
    *(_OWORD *)v20 = 0LL;
    Buffer = a2;
    v8 = (Microsoft::WRL2::NestableRuntimeClass **)RtlLookupElementGenericTable(
                                                     (PRTL_GENERIC_TABLE)((char *)this + 192),
                                                     &Buffer);
    ParameterEntry::ClearMatrixValue((ParameterEntry *)&Buffer);
    v9 = v20[1];
    if ( v20[1] )
    {
      v20[1] = 0LL;
      (*(void (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v10 = v20[0];
    if ( v20[0] )
    {
      v20[0] = 0LL;
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v10);
    }
    if ( !v8 )
    {
      v23 = 0;
      v25 = 0;
      v24 = 0LL;
      if ( WindowsDuplicateString(a2, &newString) < 0 )
        Microsoft::WRL2::FailFast::OutOfMemory(v13);
      v22 = newString;
      inserted = (Microsoft::WRL2::NestableRuntimeClass **)RtlInsertElementGenericTable(
                                                             (PRTL_GENERIC_TABLE)((char *)this + 192),
                                                             &v22,
                                                             0x38u,
                                                             NewElement);
      v8 = inserted;
      newString = 0LL;
      if ( !NewElement[0] || !inserted )
        Microsoft::WRL2::FailFast::Unexpected(0LL);
      ParameterEntry::~ParameterEntry((ParameterEntry *)&v22);
    }
    if ( !NewElement[0] && *((_DWORD *)v8 + 8) == 2 )
    {
      v15 = (struct Microsoft::WRL2::ContextSession *)*((_QWORD *)this + 3);
      --*((_DWORD *)this + 76);
      ParameterEntry::EnsureReferenceCleared((ParameterEntry *)v8, v15);
      Windows::UI::Composition::CompositionAnimation::AnimationObjectInfoCache::Reset(
        (Windows::UI::Composition::CompositionAnimation *)((char *)this + 312),
        *((struct Microsoft::WRL2::ContextSession **)this + 3));
    }
    ParameterEntry::ClearMatrixValue((ParameterEntry *)v8);
    v11 = v8[2];
    if ( v11 )
    {
      v8[2] = 0LL;
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v11);
    }
    *((_DWORD *)v8 + 2) = 52;
    v8[5] = *(Microsoft::WRL2::NestableRuntimeClass **)a3;
    *((_DWORD *)v8 + 12) = *((_DWORD *)a3 + 2);
    return 0;
  }
  return v7;
}
