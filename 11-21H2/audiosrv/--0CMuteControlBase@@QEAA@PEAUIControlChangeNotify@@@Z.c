/*
 * XREFs of ??0CMuteControlBase@@QEAA@PEAUIControlChangeNotify@@@Z @ 0x180045208
 * Callers:
 *     ?Make@CMuteHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIMuteControlHandler@@@Z @ 0x1800450D0 (-Make@CMuteHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIMuteCon.c)
 *     ?Make@CMuteSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIMuteControlHandler@@@Z @ 0x1800CA5BC (-Make@CMuteSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIMuteControlHandler@@@Z.c)
 * Callees:
 *     WPP_SF_q @ 0x1800C9BAC (WPP_SF_q.c)
 */

CMuteControlBase *__fastcall CMuteControlBase::CMuteControlBase(
        CMuteControlBase *this,
        struct IControlChangeNotify *a2)
{
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CMuteControlBase::`vftable';
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_c3ad8c7f2ffb3e627dd5155130aa6484_Traceguids, this);
  }
  return this;
}
