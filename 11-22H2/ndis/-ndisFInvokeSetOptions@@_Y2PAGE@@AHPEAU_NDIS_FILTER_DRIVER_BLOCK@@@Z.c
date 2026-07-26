/*
 * XREFs of ?ndisFInvokeSetOptions@@_Y2PAGE@@AHPEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z @ 0x1C011F7E0
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C0030530 (NdisFRegisterFilterDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0008318 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisFInvokeSetOptions(struct _NDIS_FILTER_DRIVER_BLOCK *a1)
{
  unsigned int v1; // esi
  int v3; // eax
  char v5[4]; // [rsp+30h] [rbp-18h]

  v1 = 0;
  if ( a1->DefaultFilterCharacteristics.SetOptionsHandler )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x5Au,
        (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
        a1);
    v3 = a1->DefaultFilterCharacteristics.SetOptionsHandler(a1, a1->FilterDriverContext);
    v1 = v3;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v5 = v3;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x5Bu,
        (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
        (char)a1,
        *(_DWORD *)v5);
    }
  }
  else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x5Cu,
      (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
      a1);
  }
  return v1;
}
