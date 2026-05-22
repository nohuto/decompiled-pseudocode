/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180097BB0
 * Callers:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180097BA4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-FreeProcessHeap@details@.c)
 *     ??_EBamoDockableDeviceProxy@@MEAAPEAXI@Z @ 0x180106140 (--_EBamoDockableDeviceProxy@@MEAAPEAXI@Z.c)
 *     ??_EBamoDockDeviceProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180106190 (--_EBamoDockDeviceProxyImpl@BamoImpl@@UEAAPEAXI@Z.c)
 *     ?CopyString@Util@BamoImpl@Microsoft@@YAJPEBGPEAPEAG@Z @ 0x180107388 (-CopyString@Util@BamoImpl@Microsoft@@YAJPEBGPEAPEAG@Z.c)
 *     ??_EBamoDockableDevicePrincipal@@MEAAPEAXI@Z @ 0x18017CD10 (--_EBamoDockableDevicePrincipal@@MEAAPEAXI@Z.c)
 *     ??_EBamoDockDevicePrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18017CD70 (--_EBamoDockDevicePrincipalImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800484B8 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void wil::details::FreeProcessHeap(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void wil::details::FreeProcessHeap(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(
        wil::details **a1,
        void *a2)
{
  wil::details *v2; // rcx

  v2 = *a1;
  if ( v2 )
    wil::details::FreeProcessHeap(v2, a2);
}
