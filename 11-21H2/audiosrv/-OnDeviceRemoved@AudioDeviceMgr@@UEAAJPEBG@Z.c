/*
 * XREFs of ?OnDeviceRemoved@AudioDeviceMgr@@UEAAJPEBG@Z @ 0x18015CA70
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180008710 (--2@YAPEAX_K@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x1800E6190 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ?AddWorkItemToQueue@AudioDeviceMgr@@AEAAJPEAVWorkItemBase@@@Z @ 0x18015C460 (-AddWorkItemToQueue@AudioDeviceMgr@@AEAAJPEAVWorkItemBase@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioDeviceMgr::OnDeviceRemoved(AudioDeviceMgr *this, char *a2)
{
  unsigned int v4; // ebx
  void **v5; // rdi
  int v6; // eax

  v4 = 0;
  v5 = (void **)operator new(0x10uLL);
  if ( v5 )
  {
    *v5 = &WorkItemBase::`vftable';
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      v5 + 1,
      a2);
    *v5 = &DeviceRemovedWorkItem::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = AudioDeviceMgr::AddWorkItemToQueue((AudioDeviceMgr *)((char *)this - 8), (struct WorkItemBase *)v5);
    if ( v6 < 0 )
      return (unsigned int)v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
