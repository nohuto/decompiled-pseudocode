/*
 * XREFs of ?MarshalEffectDescription@CompositionEffectFactory@Composition@UI@Windows@@AEAAJXZ @ 0x18001A5B4
 * Callers:
 *     ?RuntimeClassInitialize@CompositionEffectFactory@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAUIGraphicsEffect@Effects@Graphics@4@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@@Z @ 0x180019CDC (-RuntimeClassInitialize@CompositionEffectFactory@Composition@UI@Windows@@QEAAJPEAVCompositor@234.c)
 *     ?RuntimeClassInitialize@CompositionEffectFactory@Composition@UI@Windows@@QEAAJPEAV1234@@Z @ 0x18001A114 (-RuntimeClassInitialize@CompositionEffectFactory@Composition@UI@Windows@@QEAAJPEAV1234@@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Destroy@SharedAllocationHolder@Composition@UI@Windows@@QEAAXXZ @ 0x1800191D0 (-Destroy@SharedAllocationHolder@Composition@UI@Windows@@QEAAXXZ.c)
 *     ?Release@CDelayedDestructionObject@DirectComposition@@UEAAKXZ @ 0x180028CC0 (-Release@CDelayedDestructionObject@DirectComposition@@UEAAKXZ.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?AllocateSharedMemory@CDevice@DirectComposition@@QEAAJ_KPEAPEAVCSharedAllocation@2@@Z @ 0x1800520F0 (-AllocateSharedMemory@CDevice@DirectComposition@@QEAAJ_KPEAPEAVCSharedAllocation@2@@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     memcpy_0 @ 0x1800A812C (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionEffectFactory::MarshalEffectDescription(
        Windows::UI::Composition::CompositionEffectFactory *this)
{
  __int64 v1; // rax
  struct DirectComposition::CSharedAllocation *v3; // rbx
  __int64 v4; // rcx
  DirectComposition::CDevice *v5; // r14
  int v6; // edi
  unsigned __int64 v7; // r12
  DirectComposition::CDelayedDestructionObject *v8; // rcx
  __int64 *v9; // rdi
  __int64 v10; // rcx
  const void *v11; // rax
  _QWORD *v12; // r14
  int v13; // r15d
  int v14; // r13d
  DirectComposition::CDevice *v15; // rdi
  _DWORD *v16; // rax
  void (__fastcall ***v17)(_QWORD); // rcx
  DirectComposition::CDevice *v18; // rdi
  __int64 v19; // rax
  int v20; // r14d
  __int64 v21; // r15
  _DWORD *v22; // rcx
  void (__fastcall ***v23)(_QWORD); // rcx
  int v24; // r14d
  DirectComposition::CDevice *v25; // rdi
  _DWORD *v26; // rax
  void (__fastcall ***v27)(_QWORD); // rcx
  unsigned int v28; // eax
  int v29; // r14d
  __int64 v30; // r15
  DirectComposition::CDevice *v31; // rdi
  _DWORD *v32; // rax
  void (__fastcall ***v33)(_QWORD); // rcx
  __int64 v34; // rdi
  __int64 v35; // rcx
  __int64 v37; // rcx
  unsigned int v38; // edx
  void *v39; // [rsp+20h] [rbp-18h] BYREF
  void *v40; // [rsp+28h] [rbp-10h] BYREF
  void *v41; // [rsp+80h] [rbp+48h] BYREF
  __int64 v42; // [rsp+88h] [rbp+50h] BYREF
  struct DirectComposition::CSharedAllocation *v43; // [rsp+90h] [rbp+58h] BYREF
  void *v44; // [rsp+98h] [rbp+60h] BYREF

  v1 = *((_QWORD *)this + 3);
  v3 = 0LL;
  v4 = *((_QWORD *)this + 19);
  v43 = 0LL;
  v5 = *(DirectComposition::CDevice **)(v1 + 456);
  v42 = 0LL;
  v6 = SerializeEffectDescription(v4, &v42);
  if ( v6 < 0 )
  {
    v38 = 272;
    goto LABEL_30;
  }
  v7 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  v6 = DirectComposition::CDevice::AllocateSharedMemory(v5, v7, &v43);
  if ( v6 < 0 )
  {
    v3 = v43;
    v38 = 277;
LABEL_30:
    DoStackCaptureDirect(v6, v38);
    Windows::UI::Composition::SharedAllocationHolder::Destroy((DirectComposition::CDelayedDestructionObject **)this + 20);
    goto LABEL_22;
  }
  v8 = (DirectComposition::CDelayedDestructionObject *)*((_QWORD *)this + 20);
  v9 = (__int64 *)((char *)this + 168);
  if ( v8 )
  {
    DirectComposition::CDelayedDestructionObject::Release(v8);
    v37 = *v9;
    *((_QWORD *)this + 20) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
    *v9 = 0LL;
  }
  v3 = v43;
  *((_QWORD *)this + 20) = v43;
  if ( v3 )
  {
    CMILRefCountImpl::AddReference((struct DirectComposition::CSharedAllocation *)((char *)v3 + 8));
    v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 20) + 48LL) + 24LL);
    *v9 = v10;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  }
  v11 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v42 + 24LL))(v42);
  memcpy_0((void *)(*((_QWORD *)this + 20) + 56LL), v11, v7);
  v12 = (_QWORD *)*((_QWORD *)this + 20);
  v13 = *((_DWORD *)this + 32);
  v14 = *(_DWORD *)(*(_QWORD *)(v12[6] + 32LL) + 12LL);
  if ( v13 )
  {
    v15 = *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL);
    DirectComposition::CDevice::BeginKernelCommand(v15, 0x10u, &v41, 0);
    v16 = v41;
    *(_DWORD *)v41 = 13;
    v16[1] = v13;
    v16[2] = 0;
    v16[3] = v14;
    v17 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v15 + 10);
    if ( v17 )
      (**v17)(v17);
  }
  v18 = *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL);
  v19 = (*(__int64 (__fastcall **)(_QWORD *))(*v12 + 40LL))(v12);
  v20 = *((_DWORD *)this + 32);
  v21 = v19;
  if ( v20 )
  {
    DirectComposition::CDevice::BeginKernelCommand(v18, 0x18u, &v44, 0);
    v22 = v44;
    *(_DWORD *)v44 = 8;
    v22[1] = v20;
    v22[2] = 1;
    *((_QWORD *)v22 + 2) = v21;
    v23 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v18 + 10);
    if ( v23 )
      (**v23)(v23);
  }
  v24 = *((_DWORD *)this + 32);
  if ( v24 )
  {
    v25 = *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL);
    DirectComposition::CDevice::BeginKernelCommand(v25, 0x18u, &v39, 0);
    v26 = v39;
    *(_DWORD *)v39 = 8;
    v26[1] = v24;
    v26[2] = 2;
    *((_QWORD *)v26 + 2) = v7;
    v27 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v25 + 10);
    if ( v27 )
      (**v27)(v27);
  }
  v28 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 24LL))(*((_QWORD *)this + 19));
  v29 = *((_DWORD *)this + 32);
  v30 = v28;
  if ( v29 )
  {
    v31 = *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL);
    DirectComposition::CDevice::BeginKernelCommand(v31, 0x18u, &v40, 0);
    v32 = v40;
    *(_DWORD *)v40 = 8;
    v32[1] = v29;
    v32[2] = 3;
    *((_QWORD *)v32 + 2) = v30;
    v33 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v31 + 10);
    if ( v33 )
      (**v33)(v33);
  }
  v34 = *((_QWORD *)this + 20);
  if ( *(_DWORD *)(v34 + 24) != 3 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v34 + 16) + 40LL))(v34 + 16, 3LL);
    *(_DWORD *)(v34 + 24) = 3;
  }
  v6 = 0;
LABEL_22:
  v35 = v42;
  if ( v42 )
  {
    v42 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35);
  }
  if ( v3 && _InterlockedExchangeAdd((volatile signed __int32 *)v3 + 2, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(struct DirectComposition::CSharedAllocation *))(*(_QWORD *)v43 + 24LL))(v43);
  return (unsigned int)v6;
}
