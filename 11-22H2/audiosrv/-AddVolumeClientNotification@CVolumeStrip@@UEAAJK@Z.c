/*
 * XREFs of ?AddVolumeClientNotification@CVolumeStrip@@UEAAJK@Z @ 0x18000B060
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qD @ 0x1801119B4 (WPP_SF_qD.c)
 */

__int64 __fastcall CVolumeStrip::AddVolumeClientNotification(CVolumeStrip *this, int a2)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      16LL,
      &WPP_3a53c1b98d243e7fdf5f1bbdfd5ff184_Traceguids,
      (char *)this - 8,
      a2);
  }
  return CLockedList<CMasterVolumeNotificationProcess,1,0>::AddInterface((LPCRITICAL_SECTION)((char *)this + 16));
}
