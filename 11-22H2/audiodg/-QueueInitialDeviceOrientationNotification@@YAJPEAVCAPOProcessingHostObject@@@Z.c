/*
 * XREFs of ?QueueInitialDeviceOrientationNotification@@YAJPEAVCAPOProcessingHostObject@@@Z @ 0x14006D70C
 * Callers:
 *     ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x1400227E0 (-RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1400280E4 (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14003833E (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140064CBC (--1-$shared_any_t@V-$shared_storage@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6A.c)
 *     ??$wnf_query_nothrow@UWNF_AUDIO_ORIENTATION_STATE@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_AUDIO_ORIENTATION_STATE@@PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x14006B118 (--$wnf_query_nothrow@UWNF_AUDIO_ORIENTATION_STATE@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_AU.c)
 *     ?QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV?$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z @ 0x140070080 (-QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV-$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z.c)
 *     ?ConvertOrientationType@@YAJW4DisplayRotation@Core@Display@Devices@Windows@@PEAW4DEVICE_ORIENTATION_TYPE@@@Z @ 0x140076E84 (-ConvertOrientationType@@YAJW4DisplayRotation@Core@Display@Devices@Windows@@PEAW4DEVICE_ORIENTAT.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall QueueInitialDeviceOrientationNotification(
        struct CAPOProcessingHostObject *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _DWORD *v5; // rdi
  _DWORD *v6; // rbx
  int v8; // eax
  unsigned int v9; // edi
  _QWORD v10[2]; // [rsp+20h] [rbp-20h] BYREF
  char v11; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  char v13; // [rsp+68h] [rbp+28h] BYREF
  unsigned int v14; // [rsp+70h] [rbp+30h] BYREF
  _DWORD *v15; // [rsp+78h] [rbp+38h]

  if ( (int)wil::wnf_query_nothrow<WNF_AUDIO_ORIENTATION_STATE>((__int64)a1, &v13, &v14, a4) >= 0 && v13 )
  {
    v5 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    v13 = 0;
    v11 = 1;
    v6 = operator new(0x18uLL);
    v15 = v6;
    *(_OWORD *)v6 = 0LL;
    v6[2] = 1;
    v6[3] = 1;
    *(_QWORD *)v6 = off_1400A7D08;
    *((_QWORD *)v6 + 2) = v5;
    v10[0] = v5;
    v10[1] = v6;
    if ( !v5 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14E,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
        (const char *)0x8007000ELL);
      wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>::~shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>((__int64)v10);
      return 2147942414LL;
    }
    memset_0(v5, 0, 0x48uLL);
    *v5 = 5;
    v8 = ConvertOrientationType(v14, v5 + 2);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x153,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
        (const char *)(unsigned int)v8);
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v6);
      return v9;
    }
    CAPOProcessingHostObject::QueueNotification(a1, v10);
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v6);
  }
  return 0LL;
}
