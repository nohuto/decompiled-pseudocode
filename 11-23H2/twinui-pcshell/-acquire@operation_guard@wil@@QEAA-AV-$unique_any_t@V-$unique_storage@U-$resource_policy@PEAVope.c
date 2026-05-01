/*
 * XREFs of ?acquire@operation_guard@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180191734
 * Callers:
 *     ??1operation_guard@wil@@QEAA@XZ @ 0x180191708 (--1operation_guard@wil@@QEAA@XZ.c)
 *     ?DoAsyncInvoke@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@AEAAJ$$QEAV?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@@Z@wistd@@@Z @ 0x1804AB140 (-DoAsyncInvoke@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Int.c)
 *     ?DoAsyncInvoke@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_exception_policy@wil@@@wil@@AEAAJ$$QEAV?$function@$$A6AJPEAU?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@@Z@wistd@@@Z @ 0x18061C7A4 (-DoAsyncInvoke@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@Fam.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wil::operation_guard::acquire(__int64 a1, _QWORD *a2)
{
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 4));
  if ( *(_BYTE *)(a1 + 8) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4), 0xFFFFFFFF) == 1 )
    {
      *(_DWORD *)a1 = 1;
      WakeByAddressAll((PVOID)a1);
    }
    *a2 = 0LL;
  }
  else
  {
    *a2 = a1;
  }
  return a2;
}
