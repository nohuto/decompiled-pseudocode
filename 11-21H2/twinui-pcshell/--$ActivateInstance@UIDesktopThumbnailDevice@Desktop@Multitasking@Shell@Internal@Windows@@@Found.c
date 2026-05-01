/*
 * XREFs of ??$ActivateInstance@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@1@@Z @ 0x18003A4C4
 * Callers:
 *     ??$call_once@V_lambda_c676a23b08ff5d86622b6a68e8510924_@@$$V@std@@YAXAEAUonce_flag@0@$$QEAV_lambda_c676a23b08ff5d86622b6a68e8510924_@@@Z @ 0x18003A3F0 (--$call_once@V_lambda_c676a23b08ff5d86622b6a68e8510924_@@$$V@std@@YAXAEAUonce_flag@0@$$QEAV_lamb.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::ActivateInstance<Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice>(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v3 = RoActivateInstance(a1, &v6);
  if ( v3 >= 0 )
  {
    v4 = *(_QWORD *)&GUID_096a23dc_a2b9_45f2_9ad3_cc6f69ddd700.Data1
       - *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
    if ( *(_QWORD *)&GUID_096a23dc_a2b9_45f2_9ad3_cc6f69ddd700.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1 )
      v4 = *(_QWORD *)GUID_096a23dc_a2b9_45f2_9ad3_cc6f69ddd700.Data4
         - *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
    if ( v4 )
    {
      v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v6)(
             v6,
             &GUID_096a23dc_a2b9_45f2_9ad3_cc6f69ddd700,
             a2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    else
    {
      *a2 = v6;
    }
  }
  return (unsigned int)v3;
}
