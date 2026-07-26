/*
 * XREFs of ?Open@DriverService@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@@Z @ 0x1C0141E7C
 * Callers:
 *     ?RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_CHARACTERISTICS@@@Z @ 0x1C0141BCC (-RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_C.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_Z @ 0x1C0026ED8 (WPP_RECORDER_SF_Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@P6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C00D02D0 (-reset@-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@P6A_JPEAX@Z$1-ObfDereferenceObject@.c)
 *     ?GetDeviceObjectPointer@@YAJPEAU_UNICODE_STRING@@KPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C00D030C (-GetDeviceObjectPointer@@YAJPEAU_UNICODE_STRING@@KPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 */

__int64 __fastcall DriverService::Open(void **this, struct _DRIVER_OBJECT *a2, struct _UNICODE_STRING *a3)
{
  __int64 v7; // rdx
  unsigned int DeviceObjectPointer; // ebx
  struct _DEVICE_OBJECT *v9; // [rsp+50h] [rbp+8h] BYREF

  if ( this[3] )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xEu,
        (struct _GUID *)&WPP_306c5f62fe7235e3b3f6b40a211ce2fc_Traceguids);
    return 3221227288LL;
  }
  else
  {
    v9 = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (*)(void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
      this + 4,
      0LL);
    DeviceObjectPointer = GetDeviceObjectPointer(a3, v7, (struct _FILE_OBJECT **)this + 4, &v9);
    if ( DeviceObjectPointer )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Z(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          0xFu,
          (struct _GUID *)&WPP_306c5f62fe7235e3b3f6b40a211ce2fc_Traceguids,
          &a3->Length);
      return DeviceObjectPointer;
    }
    else if ( a2 == v9->DriverObject )
    {
      this[3] = a2;
      return 0LL;
    }
    else
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          0x10u,
          (struct _GUID *)&WPP_306c5f62fe7235e3b3f6b40a211ce2fc_Traceguids,
          (char)a2,
          v9->DriverObject);
      return 3221225485LL;
    }
  }
}
