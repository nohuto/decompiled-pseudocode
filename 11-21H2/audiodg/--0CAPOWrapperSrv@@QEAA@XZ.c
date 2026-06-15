/*
 * XREFs of ??0CAPOWrapperSrv@@QEAA@XZ @ 0x1400174B4
 * Callers:
 *     ??0?$CComObject@VCAPOWrapperSrv@@@ATL@@QEAA@PEAX@Z @ 0x14001744C (--0-$CComObject@VCAPOWrapperSrv@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComAggObject@VCAPOWrapperSrv@@@ATL@@QEAA@PEAX@Z @ 0x14004D2B4 (--0-$CComAggObject@VCAPOWrapperSrv@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0?$CComPtr@UIAudioProcessingObjectNotifications@@@ATL@@QEAA@XZ @ 0x14002E400 (--0-$CComPtr@UIAudioProcessingObjectNotifications@@@ATL@@QEAA@XZ.c)
 */

CAPOWrapperSrv *__fastcall CAPOWrapperSrv::CAPOWrapperSrv(CAPOWrapperSrv *this)
{
  CAPOWrapperSrv *v1; // rdx
  CAPOWrapperSrv *result; // rax
  int v3; // r8d

  *((_DWORD *)this + 8) = 0;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *(_OWORD *)((char *)this + 56) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_BYTE *)this + 80) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  ATL::CComPtr<IAudioProcessingObjectNotifications>::CComPtr<IAudioProcessingObjectNotifications>((char *)this + 120);
  result = v1;
  *((_DWORD *)v1 + 32) = v3;
  return result;
}
