/*
 * XREFs of ??4?$com_ptr_t@VBamoEdgyGestureRecognitionConfigurationProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBamoEdgyGestureRecognitionConfigurationProxy@@@Z @ 0x180105F98
 * Callers:
 *     ?UpdateGestureRecognitionConfiguration@BamoEdgyDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18011B4B0 (-UpdateGestureRecognitionConfiguration@BamoEdgyDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateGestureRecognitionConfiguration@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18011B650 (-UpdateGestureRecognitionConfiguration@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@QEAAJ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<BamoEdgyGestureRecognitionConfigurationProxy,wil::err_returncode_policy>::operator=(
        __int64 *a1,
        void (__fastcall ***a2)(_QWORD))
{
  __int64 v3; // rdi

  v3 = *a1;
  *a1 = (__int64)a2;
  if ( a2 )
    (**a2)(a2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a1;
}
