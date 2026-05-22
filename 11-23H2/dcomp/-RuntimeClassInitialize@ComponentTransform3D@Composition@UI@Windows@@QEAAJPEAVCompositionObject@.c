/*
 * XREFs of ?RuntimeClassInitialize@ComponentTransform3D@Composition@UI@Windows@@QEAAJPEAVCompositionObject@234@@Z @ 0x18005A7E0
 * Callers:
 *     ??$MakeAndInitialize2@VComponentTransform3D@Composition@UI@Windows@@V1234@PEAVVisual@234@@Details@WRL2@Microsoft@@YAJPEAPEAVComponentTransform3D@Composition@UI@Windows@@$$QEAPEAVVisual@456@@Z @ 0x18005A68C (--$MakeAndInitialize2@VComponentTransform3D@Composition@UI@Windows@@V1234@PEAVVisual@234@@Detail.c)
 *     ??$MakeAndInitialize2@VComponentTransform3D@Composition@UI@Windows@@V1234@PEAVCompositionSkyBoxBrush@Private@234@@Details@WRL2@Microsoft@@YAJPEAPEAVComponentTransform3D@Composition@UI@Windows@@$$QEAPEAVCompositionSkyBoxBrush@Private@456@@Z @ 0x180180CF8 (--$MakeAndInitialize2@VComponentTransform3D@Composition@UI@Windows@@V1234@PEAVCompositionSkyBoxB.c)
 *     ??$MakeAndInitialize2@VComponentTransform3D@Composition@UI@Windows@@V1234@PEAVSceneModelTransform@Scenes@234@@Details@WRL2@Microsoft@@YAJPEAPEAVComponentTransform3D@Composition@UI@Windows@@$$QEAPEAVSceneModelTransform@Scenes@456@@Z @ 0x1801929B8 (--$MakeAndInitialize2@VComponentTransform3D@Composition@UI@Windows@@V1234@PEAVSceneModelTransfor.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ @ 0x18001E0A8 (-EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ @ 0x1800292C0 (-Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?AllocateHandle@CHandleAllocator@DirectComposition@@QEAAJPEAI@Z @ 0x180058970 (-AllocateHandle@CHandleAllocator@DirectComposition@@QEAAJPEAI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqxqttx_EventWriteTransfer @ 0x1800F7268 (McTemplateU0qqxqttx_EventWriteTransfer.c)
 */

__int64 __fastcall Windows::UI::Composition::ComponentTransform3D::RuntimeClassInitialize(
        Windows::UI::Composition::ComponentTransform3D *this,
        struct Windows::UI::Composition::CompositionObject *a2)
{
  __int64 v2; // rbx
  unsigned int v5; // ecx
  int v6; // eax
  __int64 v7; // rdx
  int v8; // r8d
  int v9; // r9d
  int v10; // edi
  char v11; // al
  __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // eax
  _DWORD *v15; // rax
  unsigned int v16; // ecx
  int v17; // edi
  int v18; // r14d
  DirectComposition::CDevice *v19; // rbx
  _DWORD *v20; // rax
  void (__fastcall ***v21)(_QWORD); // rcx
  __int64 v22; // xmm0_8
  int v23; // eax
  int v24; // eax
  int v25; // xmm1_4
  __int64 result; // rax
  unsigned int v27; // edx
  unsigned int v28; // ebx
  bool v29; // zf
  __int64 v30; // rcx
  int v31; // edi
  __int64 v32; // rcx
  int v33; // eax
  int v34; // edx
  int v35; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v37; // [rsp+88h] [rbp+10h] BYREF
  void *v38; // [rsp+90h] [rbp+18h] BYREF
  void *v39; // [rsp+98h] [rbp+20h] BYREF

  v2 = *((_QWORD *)a2 + 3);
  *((_QWORD *)this + 3) = v2;
  if ( (Windows::UI::Composition::ComponentTransform3D *)v2 != this
    && _InterlockedIncrement((volatile signed __int32 *)(v2 + 16)) == 1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 80LL))(v2);
  }
  v5 = *((_DWORD *)this + 8) & 0xFFFFFF00 | 0x1F;
  *((_DWORD *)this + 8) = v5;
  *((_DWORD *)this + 8) = v5 ^ (*(_DWORD *)(v2 + 32) ^ v5) & 0x100;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, Windows::UI::Composition::ComponentTransform3D *, char *))(**(_QWORD **)(*(_QWORD *)(v2 + 424) + 32LL) + 24LL))(
         *(_QWORD *)(*(_QWORD *)(v2 + 424) + 32LL),
         *(unsigned int *)(*(_QWORD *)(v2 + 424) + 64LL),
         this,
         (char *)this + 120);
  v10 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x55,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionobject.cpp",
      (const char *)(unsigned int)v6);
    v27 = 56;
    v28 = v10;
LABEL_18:
    DoStackCaptureDirect(v10, v27);
    Microsoft::WRL2::ContextRuntimeClass::Dispose(this);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcomponenttransform3d.cpp",
      (const char *)v28);
    return v28;
  }
  v11 = *(_BYTE *)(v2 + 452);
  if ( (v11 & 1) == 0 )
  {
    v29 = *(_DWORD *)(v2 + 448) == 0;
    *(_BYTE *)(v2 + 452) = v11 | 1;
    if ( v29 )
      Windows::UI::Composition::CompositorCommon::EnableMessageGroup(
        (Windows::UI::Composition::CompositorCommon *)v2,
        v7);
  }
  v12 = *((_QWORD *)this + 3);
  *((_DWORD *)this + 31) |= 1u;
  v13 = *(_QWORD *)(v12 + 456);
  v14 = DirectComposition::CHandleAllocator::AllocateHandle(
          (DirectComposition::CHandleAllocator *)(v13 + 200),
          &v37,
          v8,
          v9);
  v10 = v14;
  if ( v14 < 0 )
  {
    v28 = v14;
    v27 = 66;
    goto LABEL_18;
  }
  DirectComposition::CDevice::BeginKernelCommand((DirectComposition::CDevice *)v13, 0x10u, &v38, 0);
  v15 = v38;
  v16 = v37;
  *(_DWORD *)v38 = 1;
  v15[1] = v16;
  v15[2] = 30;
  v15[3] = 0;
  *((_DWORD *)this + 32) = v16;
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 1) != 0 )
  {
    v30 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 456LL) + 160LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
    v31 = *((_DWORD *)this + 32);
    v32 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 456LL) + 160LL);
    v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 8LL))(v32);
    McTemplateU0qqxqttx_EventWriteTransfer(v35, v34, v33, v31, v31, 30, 0, 0, (char)this);
  }
  if ( (*(unsigned __int8 (__fastcall **)(Windows::UI::Composition::ComponentTransform3D *))(*(_QWORD *)this + 104LL))(this) )
  {
    v17 = *((_DWORD *)this + 32);
    v18 = *((_DWORD *)this + 30);
    if ( v17 )
    {
      v19 = *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL);
      DirectComposition::CDevice::BeginKernelCommand(v19, 0xCu, &v39, 0);
      v20 = v39;
      *(_DWORD *)v39 = 7;
      v20[1] = v17;
      v20[2] = v18;
      v21 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v19 + 10);
      if ( v21 )
        (**v21)(v21);
    }
  }
  *(_OWORD *)((char *)this + 200) = Windows::UI::Composition::ComponentTransform3D::sc_defaultOrientation;
  v22 = Windows::UI::Composition::ComponentTransform3D::sc_defaultOffset;
  *((_QWORD *)this + 27) = Windows::UI::Composition::ComponentTransform3D::sc_defaultCenterPoint;
  *((_DWORD *)this + 56) = dword_18021CEA0;
  v23 = dword_18021CE88;
  *(_QWORD *)((char *)this + 228) = v22;
  *((_DWORD *)this + 59) = v23;
  *((_QWORD *)this + 30) = Windows::UI::Composition::ComponentTransform3D::sc_defaultScale;
  *((_DWORD *)this + 62) = dword_18021AF08;
  *(_QWORD *)((char *)this + 252) = Windows::UI::Composition::ComponentTransform3D::sc_defaultRotationAxis;
  v24 = dword_18021AEF8;
  *((_DWORD *)this + 68) = 0;
  *((_DWORD *)this + 65) = v24;
  *((_DWORD *)this + 66) = Windows::UI::Composition::ComponentTransform3D::sc_defaultAnchorPoint;
  v25 = *(&Windows::UI::Composition::ComponentTransform3D::sc_defaultAnchorPoint + 1);
  *((_DWORD *)this + 34) = 1065353216;
  *((_DWORD *)this + 39) = 1065353216;
  *((_DWORD *)this + 44) = 1065353216;
  *((_DWORD *)this + 49) = 1065353216;
  result = 0LL;
  *((_DWORD *)this + 67) = v25;
  *((_QWORD *)this + 35) = a2;
  return result;
}
