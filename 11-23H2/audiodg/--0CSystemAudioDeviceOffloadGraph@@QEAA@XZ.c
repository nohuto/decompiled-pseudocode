/*
 * XREFs of ??0CSystemAudioDeviceOffloadGraph@@QEAA@XZ @ 0x14005A914
 * Callers:
 *     ??0?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@QEAA@PEAX@Z @ 0x14005A7C0 (--0-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@QEAA@PEAX@Z @ 0x14005A864 (--0-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CSystemAudioDeviceSharedBase@@QEAA@XZ @ 0x140004830 (--0CSystemAudioDeviceSharedBase@@QEAA@XZ.c)
 */

CSystemAudioDeviceOffloadGraph *__fastcall CSystemAudioDeviceOffloadGraph::CSystemAudioDeviceOffloadGraph(
        CSystemAudioDeviceOffloadGraph *this)
{
  CSystemAudioDeviceOffloadGraph *result; // rax

  *((_DWORD *)this + 98) = 0;
  *((_OWORD *)this + 25) = 0LL;
  *((_OWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_BYTE *)this + 440) = 0;
  CSystemAudioDeviceSharedBase::CSystemAudioDeviceSharedBase(this);
  *((_QWORD *)this + 56) = 0LL;
  result = this;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  return result;
}
