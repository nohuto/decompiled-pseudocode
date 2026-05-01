/*
 * XREFs of ?CImmersiveApplicationWindow_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1800257A8
 * Callers:
 *     ?GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x180014BF0 (-GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@P.c)
 *     _lambda_f70600182f61e42d33a098fa6c0f9983_::operator() @ 0x180025670 (_lambda_f70600182f61e42d33a098fa6c0f9983_--operator().c)
 *     ?GetDestinationInformation@CImmersiveApp@@UEAAJPEAPEAUIImmersiveApplicationWindow@@PEAUtagRECT@@@Z @ 0x1803C0CA0 (-GetDestinationInformation@CImmersiveApp@@UEAAJPEAPEAUIImmersiveApplicationWindow@@PEAUtagRECT@@.c)
 * Callees:
 *     ??$Make@VCImmersiveApplicationWindow@@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCImmersiveApplicationWindow@@@12@AEAPEAUHWND__@@@Z @ 0x18002583C (--$Make@VCImmersiveApplicationWindow@@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCImm.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApplicationWindow_CreateInstance(HWND a1, const struct _GUID *a2, void **a3)
{
  const struct _GUID *v4; // rbx
  unsigned int v5; // edi
  HWND v7; // [rsp+30h] [rbp+8h] BYREF
  const struct _GUID *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v7 = a1;
  *a3 = 0LL;
  Microsoft::WRL::Details::Make<CImmersiveApplicationWindow,HWND__ * &>(&v8, &v7);
  v4 = v8;
  if ( v8 )
    v5 = (**(__int64 (__fastcall ***)(const struct _GUID *, GUID *, void **))&v8->Data1)(
           v8,
           &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
           a3);
  else
    v5 = -2147024882;
  if ( v4 )
    (*(void (__fastcall **)(const struct _GUID *))(*(_QWORD *)&v4->Data1 + 16LL))(v4);
  return v5;
}
