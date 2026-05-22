/*
 * XREFs of ??4?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPropertyValue@Foundation@Windows@@@Z @ 0x1801A30E8
 * Callers:
 *     ?RuntimeClassInitializeWorker@DebugAnimationPropertyInfo@Private@Composition@UI@Windows@@IEAAJPEAVCompositor@345@PEAVDebugReference@2345@_KPEAUHSTRING__@@IPEAUIPropertyValue@Foundation@5@W4AnimationDebugPropertyInfoType@2345@@Z @ 0x1801A33A8 (-RuntimeClassInitializeWorker@DebugAnimationPropertyInfo@Private@Composition@UI@Windows@@IEAAJPE.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx

  if ( *a1 != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *a1;
    *a1 = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}
