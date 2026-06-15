/*
 * XREFs of ??_GCAPOEndpointNotificationsDelegator@@UEAAPEAXI@Z @ 0x1400695B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 */

CAPOEndpointNotificationsDelegator *__fastcall CAPOEndpointNotificationsDelegator::`scalar deleting destructor'(
        CAPOEndpointNotificationsDelegator *this,
        char a2)
{
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
