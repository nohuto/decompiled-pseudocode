/*
 * XREFs of ?UpdateChannelVolumeLevel@CVolumeHardware@@MEAAJI@Z @ 0x1800CE9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x180043034 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180043548 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_dg @ 0x1800CF1E0 (WPP_SF_dg.c)
 */

__int64 __fastcall CVolumeHardware::UpdateChannelVolumeLevel(CVolumeHardware *this, unsigned int a2)
{
  unsigned __int64 v2; // rsi
  CVolumeUnit *v4; // rax
  float DB; // xmm0_4
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64, char *); // rbx
  CVolumeUnit *v8; // rax
  __int64 v9; // r8

  v2 = a2;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v4 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                          (_QWORD *)this + 10,
                          a2);
    DB = CVolumeUnit::GetDB(v4);
    WPP_SF_dg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      39LL,
      &WPP_972200849a753c8240eefd9f39169899_Traceguids,
      (unsigned int)v2,
      DB);
  }
  v6 = *((_QWORD *)this + 32);
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, char *))(*(_QWORD *)v6 + 48LL);
  v8 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)this + 10, v2);
  CVolumeUnit::GetDB(v8);
  return v7(v6, (unsigned int)v2, v9, (char *)this + 264);
}
