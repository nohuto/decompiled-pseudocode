/*
 * XREFs of ?UpdateChannelVolumeLevel@CVolumeHardware@@MEAAJI@Z @ 0x180129980
 * Callers:
 *     <none>
 * Callees:
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18001BE9C (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x18001BFD8 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_dg @ 0x1800E3E88 (WPP_SF_dg.c)
 */

__int64 __fastcall CVolumeHardware::UpdateChannelVolumeLevel(CVolumeHardware *this, unsigned int a2)
{
  unsigned __int64 v2; // rsi
  CVolumeUnit *v4; // rax
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, _QWORD, __int64, char *, _QWORD); // rbx
  CVolumeUnit *v7; // rax
  __int64 v8; // r8
  double DB; // [rsp+20h] [rbp-18h]

  v2 = a2;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v4 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                          (_QWORD *)this + 10,
                          a2);
    DB = CVolumeUnit::GetDB(v4);
    WPP_SF_dg(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x27u, (__int64)&WPP_ae14f8769cc9386b95eddb3bc7f1f163_Traceguids, v2);
  }
  v5 = *((_QWORD *)this + 32);
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, char *, _QWORD))(*(_QWORD *)v5 + 48LL);
  v7 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)this + 10, v2);
  CVolumeUnit::GetDB(v7);
  return v6(v5, (unsigned int)v2, v8, (char *)this + 264, *(_QWORD *)&DB);
}
