/*
 * XREFs of sub_1C0014E30 @ 0x1C0014E30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1C0014E30(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  PVOID DeviceExtension; // rdi
  void (__fastcall *v4)(__int64, _QWORD, PVOID); // rax

  DeviceExtension = DeviceObject->DeviceExtension;
  if ( DeviceExtension )
  {
    if ( Context )
    {
      _InterlockedExchange((volatile __int32 *)Context + 6, 1);
      v4 = (void (__fastcall *)(__int64, _QWORD, PVOID))_InterlockedExchange64((volatile __int64 *)Context + 1, 0LL);
      if ( v4 )
      {
        v4(*((_QWORD *)DeviceExtension + 72) + 16LL, *((_QWORD *)Context + 2), Context);
        if ( _InterlockedExchange((volatile __int32 *)Context + 6, 0) == 2 )
        {
          IoFreeWorkItem(*(PIO_WORKITEM *)Context);
          *(_QWORD *)Context = 0LL;
          ExFreePoolWithTag(Context, 0x49576152u);
          _InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 1206);
        }
      }
    }
    ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)DeviceExtension + 37));
  }
}
