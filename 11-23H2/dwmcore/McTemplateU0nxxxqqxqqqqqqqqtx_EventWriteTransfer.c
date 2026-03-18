/*
 * XREFs of McTemplateU0nxxxqqxqqqqqqqqtx_EventWriteTransfer @ 0x180134278
 * Callers:
 *     ?ProcessSurfaceUpdate@CGlobalCompositionSurfaceInfo@@UEAAJAEBUCSM_SURFACE_UPDATE_@@@Z @ 0x180031EE0 (-ProcessSurfaceUpdate@CGlobalCompositionSurfaceInfo@@UEAAJAEBUCSM_SURFACE_UPDATE_@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 __fastcall McTemplateU0nxxxqqxqqqqqqqqtx_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        __int64 a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        __int64 a13,
        char a14,
        char a15,
        char a16,
        __int64 a17,
        char a18,
        char a19)
{
  int v20; // [rsp+30h] [rbp-D0h] BYREF
  int v21; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v23[37]; // [rsp+48h] [rbp-B8h] BYREF

  v23[3] = a4;
  v23[0] = 0LL;
  v23[5] = &a5;
  v21 = 0;
  v23[7] = &a6;
  v20 = 0;
  v23[9] = &v22;
  v22 = 0LL;
  v23[11] = &a8;
  v23[13] = &a9;
  v23[15] = &a10;
  v23[17] = &a11;
  v23[19] = &a12;
  v23[21] = &v20;
  v23[23] = &a14;
  v23[25] = &a15;
  v23[27] = &a16;
  v23[29] = &v21;
  v23[31] = &a18;
  v23[33] = &a19;
  v23[35] = v23;
  v23[4] = 8LL;
  v23[6] = 8LL;
  v23[8] = 8LL;
  v23[10] = 8LL;
  v23[12] = 4LL;
  v23[14] = 4LL;
  v23[16] = 8LL;
  v23[18] = 4LL;
  v23[20] = 4LL;
  v23[22] = 4LL;
  v23[24] = 4LL;
  v23[26] = 4LL;
  v23[28] = 4LL;
  v23[30] = 4LL;
  v23[32] = 4LL;
  v23[34] = 4LL;
  v23[36] = 8LL;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_SCHEDULE_SURFACEUPDATE);
}
