/*
 * XREFs of ??_EColorKeyFrameAnimation@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180060730
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveElement@?$CGenericTableMap@PEAUHSTRING__@@VParameterEntry@@@@QEAAXPEAVParameterEntry@@@Z @ 0x18003FD0C (-RemoveElement@-$CGenericTableMap@PEAUHSTRING__@@VParameterEntry@@@@QEAAXPEAVParameterEntry@@@Z.c)
 *     ??1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ @ 0x180052E40 (--1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@std@@@std@@YAXPEAUAnimationObjectInfo@Composition@UI@Windows@@QEAU1234@AEAV?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@0@@Z @ 0x180068CA4 (--$_Destroy_range@V-$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@std@@@std@@YAXPEAUA.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

Windows::UI::Composition::ColorKeyFrameAnimation *__fastcall Windows::UI::Composition::ColorKeyFrameAnimation::`vector deleting destructor'(
        Windows::UI::Composition::ColorKeyFrameAnimation *this,
        char a2)
{
  __int64 v4; // rcx
  Windows::UI::Composition::AnimationObjectInfo *v5; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v6; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v7; // rcx
  ParameterEntry *v8; // rax
  __int64 v9; // rdx
  HANDLE ProcessHeap; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 61);
  if ( v4 )
  {
    *((_QWORD *)this + 61) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = (Windows::UI::Composition::AnimationObjectInfo *)*((_QWORD *)this + 39);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<Windows::UI::Composition::AnimationObjectInfo>>(v5);
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 39),
      8 * ((__int64)(*((_QWORD *)this + 41) - *((_QWORD *)this + 39)) >> 3));
    *((_QWORD *)this + 39) = 0LL;
    *((_QWORD *)this + 40) = 0LL;
    *((_QWORD *)this + 41) = 0LL;
  }
  v6 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 34);
  if ( v6 )
  {
    *((_QWORD *)this + 34) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v6);
  }
  v7 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 33);
  if ( v7 )
  {
    *((_QWORD *)this + 33) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v7);
  }
  while ( 1 )
  {
    RestartKey = 0LL;
    v8 = (ParameterEntry *)RtlEnumerateGenericTableWithoutSplaying(
                             (PRTL_GENERIC_TABLE)((char *)this + 192),
                             &RestartKey);
    if ( !v8 )
      break;
    CGenericTableMap<HSTRING__ *,ParameterEntry>::RemoveElement((PRTL_GENERIC_TABLE)((char *)this + 192), v8);
  }
  CSparseStorage::~CSparseStorage((Windows::UI::Composition::ColorKeyFrameAnimation *)((char *)this + 112));
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v9);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(this, 0x200uLL);
    }
    else if ( this )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, this);
    }
  }
  return this;
}
