/*
 * XREFs of ?Destroy@ExpressionAnimation@Composition@UI@Windows@@UEAAXXZ @ 0x180029AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearMatrixValue@ParameterEntry@@QEAAXXZ @ 0x180029BFC (-ClearMatrixValue@ParameterEntry@@QEAAXXZ.c)
 *     ?Reset@AnimationObjectInfoCache@CompositionAnimation@Composition@UI@Windows@@QEAAXPEAVContextSession@WRL2@Microsoft@@@Z @ 0x180029C40 (-Reset@AnimationObjectInfoCache@CompositionAnimation@Composition@UI@Windows@@QEAAXPEAVContextSes.c)
 *     ?EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4DeferredOperationKind@123@@Z @ 0x180065280 (-EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4Defe.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::ExpressionAnimation::Destroy(
        Windows::UI::Composition::ExpressionAnimation *this)
{
  HSTRING v2; // rcx
  HSTRING v3; // rcx
  ULONG v4; // esi
  HSTRING *ElementGenericTable; // rax
  HSTRING *v6; // rdi
  HSTRING v7; // rdx
  HSTRING v8; // r14
  __int64 v9; // rcx
  HSTRING v10; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v11; // rcx
  struct Microsoft::WRL2::ContextSession *v12; // rdx

  v2 = (HSTRING)*((_QWORD *)this + 124);
  if ( v2 )
  {
    WindowsDeleteString(v2);
    *((_QWORD *)this + 124) = 0LL;
  }
  v3 = (HSTRING)*((_QWORD *)this + 23);
  if ( v3 )
  {
    WindowsDeleteString(v3);
    *((_QWORD *)this + 23) = 0LL;
  }
  v4 = RtlNumberGenericTableElements((PRTL_GENERIC_TABLE)((char *)this + 192));
  while ( (--v4 & 0x80000000) == 0 )
  {
    ElementGenericTable = (HSTRING *)RtlGetElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 192), v4);
    v6 = ElementGenericTable;
    if ( ElementGenericTable )
    {
      v7 = ElementGenericTable[3];
      v8 = *ElementGenericTable;
      v9 = *((_QWORD *)this + 3);
      if ( v7 )
      {
        ElementGenericTable[3] = 0LL;
        Microsoft::WRL2::ContextSession::EnqueueOperationAndPassOwnershipWorker(v9, v7);
      }
      *((_DWORD *)v6 + 8) = 0;
      ParameterEntry::ClearMatrixValue((ParameterEntry *)v6);
      v10 = v6[3];
      if ( v10 )
      {
        v6[3] = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v10 + 16LL))(v10);
      }
      v11 = (Microsoft::WRL2::NestableRuntimeClass *)v6[2];
      if ( v11 )
      {
        v6[2] = 0LL;
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v11);
      }
      if ( !RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 192), v6) )
        RaiseFailFastException(0LL, 0LL, 1u);
      WindowsDeleteString(v8);
    }
  }
  v12 = (struct Microsoft::WRL2::ContextSession *)*((_QWORD *)this + 3);
  *((_DWORD *)this + 76) = 0;
  Windows::UI::Composition::CompositionAnimation::AnimationObjectInfoCache::Reset(
    (Windows::UI::Composition::ExpressionAnimation *)((char *)this + 312),
    v12);
  Windows::UI::Composition::CompositionObject::Destroy(this);
}
