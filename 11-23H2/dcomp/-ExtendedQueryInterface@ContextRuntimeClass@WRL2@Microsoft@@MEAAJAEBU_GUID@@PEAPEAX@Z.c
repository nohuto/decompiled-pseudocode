/*
 * XREFs of ?ExtendedQueryInterface@ContextRuntimeClass@WRL2@Microsoft@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074210
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::ContextRuntimeClass::ExtendedQueryInterface(
        Microsoft::WRL2::ContextRuntimeClass *this,
        const struct _GUID *a2,
        void **a3)
{
  if ( a2->Data1 != -1796592748
    || *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
    || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
    || *(_DWORD *)&a2->Data4[4] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
  {
    return 2147500034LL;
  }
  *a3 = this;
  if ( _InterlockedIncrement((volatile signed __int32 *)this + 4) == 1 )
    (*(void (__fastcall **)(Microsoft::WRL2::ContextRuntimeClass *))(*(_QWORD *)this + 80LL))(this);
  return 0LL;
}
