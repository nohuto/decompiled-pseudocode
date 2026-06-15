/*
 * XREFs of ?AddVolumeClientNotification@CVolumeStrip@@UEAAJK@Z @ 0x18000F010
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qD @ 0x1800CB3E0 (WPP_SF_qD.c)
 */

__int64 __fastcall CVolumeStrip::AddVolumeClientNotification(CVolumeStrip *this, unsigned int a2)
{
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      21LL,
      &WPP_63a4fa3387a03256ea8ee70028ce711d_Traceguids,
      (char *)this - 8,
      a2);
  }
  return CLockedList<CMasterVolumeNotificationProcess,1,0>::AddInterface((char *)this + 16, a2);
}
