/*
 * XREFs of ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18006CAA4
 * Callers:
 *     ?RemoveInvalidWeakPointersNoLock@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x1800723F0 (-RemoveInvalidWeakPointersNoLock@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagem.c)
 *     ?CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z @ 0x1800B4560 (-CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z.c)
 *     ?GetSharedExtendedExecutionSession@UniqueExtendedExecutionSession@@SAJPEAPEAUIInspectable@@@Z @ 0x1800B5848 (-GetSharedExtendedExecutionSession@UniqueExtendedExecutionSession@@SAJPEAPEAUIInspectable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::WeakRef::As<IInspectable>(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // edi

  v4 = *a2;
  v5 = 0;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *a2 = 0LL;
  if ( *a1 )
    return (*(unsigned int (__fastcall **)(_QWORD, GUID *, __int64 *))(*(_QWORD *)*a1 + 24LL))(
             *a1,
             &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
             a2);
  return v5;
}
