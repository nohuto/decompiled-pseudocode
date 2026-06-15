/*
 * XREFs of ?NotifyAudioDGTerminated@CVolumeStrip@@UEAAXXZ @ 0x1800D0410
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800C61A0 (WPP_SF_.c)
 */

void __fastcall CVolumeStrip::NotifyAudioDGTerminated(CVolumeStrip *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_63a4fa3387a03256ea8ee70028ce711d_Traceguids);
  }
  v2 = *((_QWORD *)this + 20);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 72LL))(v2);
  v3 = *((_QWORD *)this + 21);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
  v4 = *((_QWORD *)this + 22);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 104LL))(v4);
}
