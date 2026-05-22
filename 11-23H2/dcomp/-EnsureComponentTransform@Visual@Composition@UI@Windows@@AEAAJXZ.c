/*
 * XREFs of ?EnsureComponentTransform@Visual@Composition@UI@Windows@@AEAAJXZ @ 0x18005B258
 * Callers:
 *     ?GetAnimatablePropertyInfo@Visual@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18005B860 (-GetAnimatablePropertyInfo@Visual@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBin.c)
 *     ?put_TransformMatrix@Api@Visual@Composition@UI@Windows@@UEAAJUMatrix4x4@Numerics@Foundation@5@@Z @ 0x18005D1F0 (-put_TransformMatrix@Api@Visual@Composition@UI@Windows@@UEAAJUMatrix4x4@Numerics@Foundation@5@@Z.c)
 *     ?SetCenterPoint@Visual@Composition@UI@Windows@@QEAAJAEBUVector3@Numerics@Foundation@4@@Z @ 0x18007DCC8 (-SetCenterPoint@Visual@Composition@UI@Windows@@QEAAJAEBUVector3@Numerics@Foundation@4@@Z.c)
 *     ?SetScale@Visual@Composition@UI@Windows@@QEAAJAEBUVector3@Numerics@Foundation@4@@Z @ 0x18007DE08 (-SetScale@Visual@Composition@UI@Windows@@QEAAJAEBUVector3@Numerics@Foundation@4@@Z.c)
 *     ?SetAnchorPoint@Visual@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@Z @ 0x18010B7F8 (-SetAnchorPoint@Visual@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@Z.c)
 *     ?SetOrientation@Visual@Composition@UI@Windows@@QEAAJAEBUQuaternion@Numerics@Foundation@4@@Z @ 0x18010BCD8 (-SetOrientation@Visual@Composition@UI@Windows@@QEAAJAEBUQuaternion@Numerics@Foundation@4@@Z.c)
 *     ?SetRotationAngle@Visual@Composition@UI@Windows@@QEAAJM@Z @ 0x18010BFD8 (-SetRotationAngle@Visual@Composition@UI@Windows@@QEAAJM@Z.c)
 *     ?SetRotationAngleInDegrees@Visual@Composition@UI@Windows@@QEAAJM@Z @ 0x18010C0B8 (-SetRotationAngleInDegrees@Visual@Composition@UI@Windows@@QEAAJM@Z.c)
 *     ?SetRotationAxis@Visual@Composition@UI@Windows@@QEAAJAEBUVector3@Numerics@Foundation@4@@Z @ 0x18010C1A8 (-SetRotationAxis@Visual@Composition@UI@Windows@@QEAAJAEBUVector3@Numerics@Foundation@4@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ??$MakeAndInitialize2@VComponentTransform3D@Composition@UI@Windows@@V1234@PEAVVisual@234@@Details@WRL2@Microsoft@@YAJPEAPEAVComponentTransform3D@Composition@UI@Windows@@$$QEAPEAVVisual@456@@Z @ 0x18005A68C (--$MakeAndInitialize2@VComponentTransform3D@Composition@UI@Windows@@V1234@PEAVVisual@234@@Detail.c)
 *     ?FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z @ 0x18005B3B4 (-FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z.c)
 *     ?InternalUnlock@?$RefPtr@VProxyObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x1800832B0 (-InternalUnlock@-$RefPtr@VProxyObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::EnsureComponentTransform(Windows::UI::Composition::Visual *this)
{
  CSparseStorage *v1; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  Windows::UI::Composition::ComponentTransform3D *v5; // rbx
  int v6; // ebp
  int v7; // r14d
  DirectComposition::CDevice *v8; // rdi
  _DWORD *v9; // rax
  void (__fastcall ***v10)(_QWORD); // rcx
  int v11; // edi
  struct CSparseStorage::DataInfo *SlotForData; // rax
  struct CSparseStorage::DataInfo *v13; // r14
  __int64 v14; // rdx
  unsigned int v15; // eax
  __int128 v17; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct Windows::UI::Composition::CompositionObject *v19; // [rsp+60h] [rbp+8h] BYREF
  Windows::UI::Composition::ComponentTransform3D *v20; // [rsp+68h] [rbp+10h] BYREF
  void *v21; // [rsp+70h] [rbp+18h] BYREF

  v1 = (Windows::UI::Composition::Visual *)((char *)this + 112);
  if ( (*(_DWORD *)(*((_QWORD *)this + 14) + 4LL) & 0x1000000) != 0 )
    return 0LL;
  v20 = 0LL;
  v19 = this;
  v3 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::ComponentTransform3D,Windows::UI::Composition::ComponentTransform3D,Windows::UI::Composition::Visual *>(
         &v20,
         &v19);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = v20;
    v6 = *((_DWORD *)this + 32);
    v7 = *((_DWORD *)v20 + 32);
    if ( v6 )
    {
      v8 = *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL);
      DirectComposition::CDevice::BeginKernelCommand(v8, 0x10u, &v21, 0);
      v9 = v21;
      *(_DWORD *)v21 = 13;
      v9[1] = v6;
      v9[2] = 3;
      v9[3] = v7;
      v10 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v8 + 10);
      if ( v10 )
        (**v10)(v10);
    }
    v11 = *(_DWORD *)(*(_QWORD *)v1 + 4LL);
    SlotForData = CSparseStorage::FindSlotForData(v1, 8u, 0x10u);
    v13 = SlotForData;
    if ( (v11 & 0x1000000) != 0 )
      (*(void (__fastcall **)(_QWORD))(_mm_srli_si128(*(__m128i *)((char *)SlotForData + 4), 8).m128i_u64[0] + 8))(*(_QWORD *)((char *)SlotForData + 4));
    Windows::UI::Composition::SparsePropertyStore::g_adapter_NestableRuntimeClass(v5, &v19);
    *(_QWORD *)&v17 = v19;
    *((_QWORD *)&v17 + 1) = &Windows::UI::Composition::SparsePropertyStore::g_adapter_NestableRuntimeClass;
    v15 = *(_DWORD *)v13 & 0xFFFFFF | 0x88000000;
    *(_OWORD *)((char *)v13 + 4) = v17;
    *(_DWORD *)v13 = v15;
    *(_DWORD *)(*(_QWORD *)v1 + 4LL) |= 0x1000000u;
    *(_BYTE *)(*(_QWORD *)v1 + 8LL) = 1;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5 + 4, 0xFFFFFFFF) == 1 )
    {
      LOBYTE(v14) = 1;
      (*(void (__fastcall **)(Windows::UI::Composition::ComponentTransform3D *, __int64))(*(_QWORD *)v20 + 64LL))(
        v20,
        v14);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x790,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
    (const char *)(unsigned int)v3);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::ProxyObject>::InternalUnlock(&v20);
  return v4;
}
