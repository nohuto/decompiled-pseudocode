/*
 * XREFs of HalRequestSoftwareInterrupt @ 0x14022BAA0
 * Callers:
 *     sub_14020F360 @ 0x14020F360 (sub_14020F360.c)
 *     sub_14022BA6C @ 0x14022BA6C (sub_14022BA6C.c)
 *     sub_1402B59D0 @ 0x1402B59D0 (sub_1402B59D0.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_1402EE894 @ 0x1402EE894 (sub_1402EE894.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140307660 @ 0x140307660 (sub_140307660.c)
 *     sub_140307E90 @ 0x140307E90 (sub_140307E90.c)
 *     sub_1403419B0 @ 0x1403419B0 (sub_1403419B0.c)
 *     sub_140345B70 @ 0x140345B70 (sub_140345B70.c)
 *     sub_1403470F0 @ 0x1403470F0 (sub_1403470F0.c)
 *     sub_140420C10 @ 0x140420C10 (sub_140420C10.c)
 *     sub_1404215E0 @ 0x1404215E0 (sub_1404215E0.c)
 *     sub_140421A20 @ 0x140421A20 (sub_140421A20.c)
 *     sub_140421E60 @ 0x140421E60 (sub_140421E60.c)
 *     sub_1404222A0 @ 0x1404222A0 (sub_1404222A0.c)
 *     sub_1404226D0 @ 0x1404226D0 (sub_1404226D0.c)
 *     sub_140423360 @ 0x140423360 (sub_140423360.c)
 *     sub_140426820 @ 0x140426820 (sub_140426820.c)
 *     sub_140426C70 @ 0x140426C70 (sub_140426C70.c)
 *     sub_140427360 @ 0x140427360 (sub_140427360.c)
 *     sub_140428220 @ 0x140428220 (sub_140428220.c)
 *     sub_140428D90 @ 0x140428D90 (sub_140428D90.c)
 *     sub_140574678 @ 0x140574678 (sub_140574678.c)
 * Callees:
 *     sub_1402ADD00 @ 0x1402ADD00 (sub_1402ADD00.c)
 */

__int64 __fastcall HalRequestSoftwareInterrupt(char a1)
{
  __int64 v1; // rdx
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF

  v3[0] = 5LL;
  v1 = 31LL;
  if ( a1 != 1 )
    v1 = 47LL;
  *(_OWORD *)((char *)v3 + 4) = 0LL;
  return sub_1402ADD00(v3, v1);
}
