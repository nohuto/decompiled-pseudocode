/*
 * XREFs of ?OnDeviceOrientationChanged@CDeviceOrientationNotificationsHandler@@UEAAJAEBUWNF_AUDIO_ORIENTATION_STATE@@@Z @ 0x140076F60
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1400280E4 (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14003833E (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140064CBC (--1-$shared_any_t@V-$shared_storage@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6A.c)
 *     ?QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV?$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z @ 0x140070080 (-QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV-$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z.c)
 *     ?ConvertOrientationType@@YAJW4DisplayRotation@Core@Display@Devices@Windows@@PEAW4DEVICE_ORIENTATION_TYPE@@@Z @ 0x140076E84 (-ConvertOrientationType@@YAJW4DisplayRotation@Core@Display@Devices@Windows@@PEAW4DEVICE_ORIENTAT.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceOrientationNotificationsHandler::OnDeviceOrientationChanged(
        CDeviceOrientationNotificationsHandler *this,
        const struct WNF_AUDIO_ORIENTATION_STATE *a2)
{
  _DWORD *v4; // rbx
  _DWORD *v5; // rsi
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  _QWORD *i; // rbx
  int v12[2]; // [rsp+20h] [rbp-18h] BYREF
  _DWORD *v13; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = operator new(0x18uLL);
  v5[2] = 1;
  v5[3] = 1;
  *(_QWORD *)v5 = off_1400A8348;
  *((_QWORD *)v5 + 2) = v4;
  *(_QWORD *)v12 = v4;
  v13 = v5;
  if ( !v4 )
  {
    v6 = -2147024882;
    v7 = 2147942414LL;
    v8 = 82LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apodevicenotificationshandler.cpp",
      (const char *)v7);
    wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>::~shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>((__int64)v12);
    return v6;
  }
  memset_0(v4, 0, 0x48uLL);
  *v4 = 5;
  v9 = ConvertOrientationType(*(_DWORD *)a2, v4 + 2);
  v6 = v9;
  if ( v9 < 0 )
  {
    v7 = (unsigned int)v9;
    v8 = 87LL;
    goto LABEL_5;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  for ( i = (_QWORD *)*((_QWORD *)this + 10); i; i = (_QWORD *)*i )
    CAPOProcessingHostObject::QueueNotification(i[1], v12);
  if ( this != (CDeviceOrientationNotificationsHandler *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
  return 0LL;
}
