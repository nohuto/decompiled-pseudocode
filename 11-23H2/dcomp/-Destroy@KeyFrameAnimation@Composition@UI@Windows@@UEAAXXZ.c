/*
 * XREFs of ?Destroy@KeyFrameAnimation@Composition@UI@Windows@@UEAAXXZ @ 0x18003E270
 * Callers:
 *     ?Destroy@PathKeyFrameAnimation@Composition@UI@Windows@@UEAAXXZ @ 0x180178360 (-Destroy@PathKeyFrameAnimation@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ @ 0x1800292C0 (-Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?Attach@?$RefPtr@VExpressionAnimation@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAXPEAVExpressionAnimation@Composition@UI@Windows@@@Z @ 0x18003E4F8 (-Attach@-$RefPtr@VExpressionAnimation@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAXPEAVExpressi.c)
 *     ?EnsureReferenceCleared@ParameterEntry@@QEAAXPEAVContextSession@WRL2@Microsoft@@@Z @ 0x18003E52C (-EnsureReferenceCleared@ParameterEntry@@QEAAXPEAVContextSession@WRL2@Microsoft@@@Z.c)
 *     ?RemoveElement@?$CGenericTableMap@PEAUHSTRING__@@VParameterEntry@@@@QEAAXPEAVParameterEntry@@@Z @ 0x18003FD0C (-RemoveElement@-$CGenericTableMap@PEAUHSTRING__@@VParameterEntry@@@@QEAAXPEAVParameterEntry@@@Z.c)
 *     ?EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4DeferredOperationKind@123@@Z @ 0x180065280 (-EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4Defe.c)
 *     ??$_Destroy_range@V?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@std@@@std@@YAXPEAUAnimationObjectInfo@Composition@UI@Windows@@QEAU1234@AEAV?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@0@@Z @ 0x180068CA4 (--$_Destroy_range@V-$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@std@@@std@@YAXPEAUA.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180080BA8 (-InternalUnlock@-$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEA.c)
 *     ?ClearWeakReference@CompositorCommon@Composition@UI@Windows@@QEAAXPEAVCompositionObject@234@@Z @ 0x18008C0BC (-ClearWeakReference@CompositorCommon@Composition@UI@Windows@@QEAAXPEAVCompositionObject@234@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     ?GetSparse_CompositionPropertySet@CompositionObject@Composition@UI@Windows@@AEBAPEAVCompositionPropertySet@234@XZ @ 0x180109704 (-GetSparse_CompositionPropertySet@CompositionObject@Composition@UI@Windows@@AEBAPEAVCompositionP.c)
 *     ?SetSparse_CompositionPropertySet@CompositionObject@Composition@UI@Windows@@AEAAXPEAVCompositionPropertySet@234@@Z @ 0x1801098F0 (-SetSparse_CompositionPropertySet@CompositionObject@Composition@UI@Windows@@AEAAXPEAVComposition.c)
 */

void __fastcall Windows::UI::Composition::KeyFrameAnimation::Destroy(Windows::UI::Composition::KeyFrameAnimation *this)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  __int64 v4; // rcx
  HSTRING v5; // rcx
  ULONG v6; // esi
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 i; // rbx
  Windows::UI::Composition::AnimationObjectInfo *v10; // rcx
  unsigned int *v11; // rbx
  unsigned int *v12; // rsi
  unsigned int *j; // rax
  int v14; // ecx
  int v15; // edx
  __int64 v16; // rdx
  ParameterEntry *ElementGenericTable; // rax
  ParameterEntry *v18; // r14
  HSTRING v19; // rbx
  __int64 v20; // rdx
  Microsoft::WRL2::ContextRuntimeClass *Sparse_CompositionPropertySet; // rax
  Microsoft::WRL2::NestableRuntimeClass *v22; // rax
  __int64 v23; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 53);
  if ( v1 )
  {
    do
    {
      v3 = *(_QWORD *)(v1 + 48);
      if ( *(_DWORD *)(v1 + 24) == 2 )
      {
        v16 = *(_QWORD *)(v1 + 32);
        v23 = 0LL;
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::ExpressionAnimation>::Attach(&v23, v16);
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(&v23);
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(&v23);
      }
      operator delete((void *)v1, 0x38uLL);
      v1 = v3;
    }
    while ( v3 );
  }
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_DWORD *)this + 119) = 0;
  v4 = *((_QWORD *)this + 61);
  if ( v4 )
  {
    *((_QWORD *)this + 61) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = (HSTRING)*((_QWORD *)this + 23);
  if ( v5 )
  {
    WindowsDeleteString(v5);
    *((_QWORD *)this + 23) = 0LL;
  }
  v6 = RtlNumberGenericTableElements((PRTL_GENERIC_TABLE)((char *)this + 192));
  while ( (--v6 & 0x80000000) == 0 )
  {
    ElementGenericTable = (ParameterEntry *)RtlGetElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 192), v6);
    v18 = ElementGenericTable;
    if ( ElementGenericTable )
    {
      v19 = *(HSTRING *)ElementGenericTable;
      ParameterEntry::EnsureReferenceCleared(
        ElementGenericTable,
        *((struct Microsoft::WRL2::ContextSession **)this + 3));
      CGenericTableMap<HSTRING__ *,ParameterEntry>::RemoveElement((PRTL_GENERIC_TABLE)((char *)this + 192), v18);
      WindowsDeleteString(v19);
    }
  }
  *((_DWORD *)this + 76) = 0;
  v7 = *((_QWORD *)this + 3);
  *((_BYTE *)this + 336) &= 0xFCu;
  v8 = *((_QWORD *)this + 40);
  for ( i = *((_QWORD *)this + 39); i != v8; i += 40LL )
  {
    v20 = *(_QWORD *)(i + 8);
    *(_QWORD *)(i + 8) = 0LL;
    Microsoft::WRL2::ContextSession::EnqueueOperationAndPassOwnershipWorker(v7, v20);
  }
  v10 = (Windows::UI::Composition::AnimationObjectInfo *)*((_QWORD *)this + 39);
  if ( 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)this + 40) - (_QWORD)v10) >> 3) )
  {
    std::_Destroy_range<std::allocator<Windows::UI::Composition::AnimationObjectInfo>>(v10);
    *((_QWORD *)this + 40) = *((_QWORD *)this + 39);
    ++*((_DWORD *)this + 85);
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 14) + 4LL) & 0x10000000) != 0 )
  {
    Sparse_CompositionPropertySet = Windows::UI::Composition::CompositionObject::GetSparse_CompositionPropertySet(this);
    Microsoft::WRL2::ContextRuntimeClass::Dispose(Sparse_CompositionPropertySet);
    v22 = Windows::UI::Composition::CompositionObject::GetSparse_CompositionPropertySet(this);
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v22);
    Windows::UI::Composition::CompositionObject::SetSparse_CompositionPropertySet(this, 0LL);
  }
  v11 = (unsigned int *)*((_QWORD *)this + 14);
  if ( *((_BYTE *)v11 + 8) )
  {
    v12 = v11 + 3;
    for ( j = v11 + 4; j <= (unsigned int *)((char *)v11 + *v11); j = v12 + 1 )
    {
      v14 = HIBYTE(*v12) & 0x7F;
      if ( !v14 )
        break;
      v15 = *v12;
      if ( (__ROR4__(1, v14) & v11[1]) != 0 && v15 < 0 )
      {
        (*(void (__fastcall **)(_QWORD))(_mm_srli_si128(*(__m128i *)(v12 + 1), 8).m128i_u64[0] + 8))(*(_QWORD *)(v12 + 1));
        *v12 &= ~0x80000000;
        v15 = *v12;
      }
      v12 = (unsigned int *)((char *)v12 + (v15 & 0xFFFFFF) + 4);
    }
  }
  v11[1] = 0;
  if ( (*((_BYTE *)this + 124) & 2) != 0 )
  {
    Windows::UI::Composition::CompositorCommon::ClearWeakReference(
      *((Windows::UI::Composition::CompositorCommon **)this + 3),
      this);
    *((_DWORD *)this + 31) &= ~2u;
  }
  *((_DWORD *)this + 8) &= ~2u;
  if ( (*((_BYTE *)this + 32) & 1) != 0 )
    Microsoft::WRL2::FailFast::Unexpected("Destroy preconditions");
}
