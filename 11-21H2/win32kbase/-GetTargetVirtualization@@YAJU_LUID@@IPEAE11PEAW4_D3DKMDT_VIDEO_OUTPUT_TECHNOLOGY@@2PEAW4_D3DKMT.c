/*
 * XREFs of ?GetTargetVirtualization@@YAJU_LUID@@IPEAE11PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C0172584
 * Callers:
 *     DrvSetDisplayConfigValidateParams @ 0x1C00DEB70 (DrvSetDisplayConfigValidateParams.c)
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N1PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C016FCAC (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetTargetVirtualization(
        struct _LUID a1,
        __int64 a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a6,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a7,
        enum _D3DKMT_DISPLAY_TARGET_USAGE *a8)
{
  int v10; // eax
  __int64 v11; // rbx
  int v12; // eax
  struct _LUID v14; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+68h] [rbp+10h] BYREF

  v15 = a2;
  v14 = a1;
  v10 = ((__int64 (__fastcall *)(struct _LUID *, __int64, struct _LUID *, unsigned int *))qword_1C0296888)(
          &v14,
          a2,
          &v14,
          &v15);
  v11 = v10;
  if ( v10 < 0
    || (v12 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))qword_1C0296898)(
                v14,
                v15,
                a3,
                a4,
                a5,
                a6,
                a7,
                a8),
        v11 = v12,
        v12 < 0) )
  {
    WdLogSingleEntry1(2LL, v11);
  }
  return (unsigned int)v11;
}
