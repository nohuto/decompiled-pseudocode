/*
 * XREFs of ?ndisInvokeOidRequestComplete@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0008580
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qDqd @ 0x1C00092E0 (WPP_RECORDER_SF_qDqd.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisInvokeOidRequestComplete(_QWORD *a1, struct _NDIS_OID_REQUEST *a2, unsigned int a3)
{
  __int64 v3; // rbp
  int v7; // edx

  v3 = a1[3];
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      a3,
      103,
      (struct _GUID *)&WPP_fdc5294f2db637a048b8ad24a033bc88_Traceguids,
      (char)a1,
      a2->DATA.QUERY_INFORMATION.Oid,
      (char)a2,
      a3);
  (*(void (__fastcall **)(_QWORD, struct _NDIS_OID_REQUEST *, _QWORD))(v3 + 320))(a1[4], a2, a3);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      11,
      104,
      (struct _GUID *)&WPP_fdc5294f2db637a048b8ad24a033bc88_Traceguids,
      (char)a1,
      (char)a2);
  }
}
