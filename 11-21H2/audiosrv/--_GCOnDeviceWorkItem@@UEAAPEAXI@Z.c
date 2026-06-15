/*
 * XREFs of ??_GCOnDeviceWorkItem@@UEAAPEAXI@Z @ 0x1800C2EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001CA60 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 */

COnDeviceWorkItem *__fastcall COnDeviceWorkItem::`scalar deleting destructor'(COnDeviceWorkItem *this, char a2)
{
  *(_QWORD *)this = &COnDeviceWorkItem::`vftable';
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 1) - 24LL));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
