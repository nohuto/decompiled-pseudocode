/*
 * XREFs of ??1CAPOInstance@@QEAA@XZ @ 0x14005A4F4
 * Callers:
 *     ??_GCAPOInstance@@QEAAPEAXI@Z @ 0x14005A56C (--_GCAPOInstance@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAPOInstance::~CAPOInstance(CAPOInstance *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = 0LL;
  if ( v2 )
    CoTaskMemFree(v2);
  ATL::CComPtrBase<IAudioProcessingObject>::~CComPtrBase<IAudioProcessingObject>((__int64 *)this + 5);
}
