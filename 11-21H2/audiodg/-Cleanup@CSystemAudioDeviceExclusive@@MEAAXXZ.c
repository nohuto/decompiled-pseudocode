/*
 * XREFs of ?Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ @ 0x140055430
 * Callers:
 *     ??1CSystemAudioDeviceExclusive@@UEAA@XZ @ 0x14005518C (--1CSystemAudioDeviceExclusive@@UEAA@XZ.c)
 * Callees:
 *     ?Cleanup@CSystemAudioDeviceBase@@MEAAXXZ @ 0x140003970 (-Cleanup@CSystemAudioDeviceBase@@MEAAXXZ.c)
 *     ?Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z @ 0x1400039F4 (-Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ?Release@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ @ 0x140007828 (-Release@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSystemAudioDeviceExclusive::Cleanup(CSystemAudioDeviceExclusive *this)
{
  char *v2; // rcx
  __int128 v3; // [rsp+30h] [rbp-28h] BYREF

  v3 = *(_OWORD *)((char *)this + 248);
  EtwEventActivityIdControl(4LL, &v3);
  if ( *((_DWORD *)this + 95) )
    CSystemAudioDeviceCollection::Remove(this);
  CSystemAudioDeviceBase::Cleanup(this);
  ATL::CComPtrBase<IAudioProcessingObject>::Release((_QWORD *)this + 29);
  v2 = (char *)*((_QWORD *)this + 44);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 44) = 0LL;
  }
  EtwEventActivityIdControl(4LL, &v3);
}
