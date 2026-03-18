/*
 * XREFs of McTemplateU0dffffq_EventWriteTransfer @ 0x180130046
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180057090 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005BF70 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 __fastcall McTemplateU0dffffq_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        int a3,
        float a4,
        char a5,
        char a6,
        char a7)
{
  int v8; // [rsp+30h] [rbp-59h] BYREF
  int *v9; // [rsp+50h] [rbp-39h]
  __int64 v10; // [rsp+58h] [rbp-31h]
  float *v11; // [rsp+60h] [rbp-29h]
  __int64 v12; // [rsp+68h] [rbp-21h]
  char *v13; // [rsp+70h] [rbp-19h]
  __int64 v14; // [rsp+78h] [rbp-11h]
  char *v15; // [rsp+80h] [rbp-9h]
  __int64 v16; // [rsp+88h] [rbp-1h]
  char *v17; // [rsp+90h] [rbp+7h]
  __int64 v18; // [rsp+98h] [rbp+Fh]
  int *v19; // [rsp+A0h] [rbp+17h]
  __int64 v20; // [rsp+A8h] [rbp+1Fh]
  int v21; // [rsp+E0h] [rbp+57h] BYREF
  float v22; // [rsp+E8h] [rbp+5Fh] BYREF

  v22 = a4;
  v21 = a3;
  v10 = 4LL;
  v8 = 0;
  v9 = &v21;
  v12 = 4LL;
  v11 = &v22;
  v14 = 4LL;
  v13 = &a5;
  v16 = 4LL;
  v15 = &a6;
  v17 = &a7;
  v19 = &v8;
  v18 = 4LL;
  v20 = 4LL;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_ETWGUID_OCCLUSIONEVENT);
}
