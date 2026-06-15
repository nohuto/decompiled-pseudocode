/*
 * XREFs of ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x180012934
 * Callers:
 *     ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x1800127A0 (--0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ.c)
 *     ?OpenSessionKey@@YAJPEAUIAudioSessionInfo@@PEAUHKEY__@@PEAPEAU2@@Z @ 0x18003DC54 (-OpenSessionKey@@YAJPEAUIAudioSessionInfo@@PEAUHKEY__@@PEAPEAU2@@Z.c)
 *     ??0CSid@ATL@@QEAA@AEBV01@@Z @ 0x180042E6C (--0CSid@ATL@@QEAA@AEBV01@@Z.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x180043890 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
        _QWORD *a1)
{
  *a1 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  return a1;
}
