/*
 * XREFs of ??_EDeviceRemovedWorkItem@@UEAAPEAXI@Z @ 0x180001980
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001CE68 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 */

DeviceRemovedWorkItem *__fastcall DeviceRemovedWorkItem::`vector deleting destructor'(
        DeviceRemovedWorkItem *this,
        char a2)
{
  *(_QWORD *)this = &WorkItemBase::`vftable';
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 1) - 24LL));
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x10uLL);
  return this;
}
