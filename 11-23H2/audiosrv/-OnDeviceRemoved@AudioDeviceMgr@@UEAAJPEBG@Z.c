/*
 * XREFs of ?OnDeviceRemoved@AudioDeviceMgr@@UEAAJPEBG@Z @ 0x1800019D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddWorkItemToQueue@AudioDeviceMgr@@AEAAJPEAVWorkItemBase@@@Z @ 0x18000209C (-AddWorkItemToQueue@AudioDeviceMgr@@AEAAJPEAVWorkItemBase@@@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x180019318 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180026620 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioDeviceMgr::OnDeviceRemoved(AudioDeviceMgr *this, const unsigned __int16 *a2)
{
  unsigned int v4; // ebx
  struct WorkItemBase *v5; // rdi
  int v6; // eax

  v4 = 0;
  v5 = (struct WorkItemBase *)operator new(0x10uLL);
  if ( v5 )
  {
    *(_QWORD *)v5 = &WorkItemBase::`vftable';
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      (char *)v5 + 8,
      a2);
    *(_QWORD *)v5 = &DeviceRemovedWorkItem::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = AudioDeviceMgr::AddWorkItemToQueue((AudioDeviceMgr *)((char *)this - 8), v5);
    if ( v6 < 0 )
      return (unsigned int)v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
