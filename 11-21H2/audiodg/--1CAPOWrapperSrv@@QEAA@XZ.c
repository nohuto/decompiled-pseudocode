/*
 * XREFs of ??1CAPOWrapperSrv@@QEAA@XZ @ 0x140017308
 * Callers:
 *     ??1?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ @ 0x1400173E0 (--1-$CComObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ @ 0x14004D4E0 (--1-$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     ??1?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAA@XZ @ 0x14000A41C (--1-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAA@XZ.c)
 *     ??1?$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ @ 0x1400172FC (--1-$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ.c)
 *     ?UnregisterAPONotifications@CAPOWrapperSrv@@AEAAJXZ @ 0x140031F8C (-UnregisterAPONotifications@CAPOWrapperSrv@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAPOWrapperSrv::~CAPOWrapperSrv(CAPOWrapperSrv *this)
{
  char *v2; // rcx
  __int64 *v3; // rdi
  __int64 v4; // rcx

  v2 = (char *)*((_QWORD *)this + 14);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 14) = 0LL;
  }
  if ( *((_QWORD *)this + 11) )
  {
    CAPOWrapperSrv::UnregisterAPONotifications(this);
    v3 = (__int64 *)((char *)this + 96);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 11) + 32LL))(
      *((_QWORD *)this + 11),
      *((_QWORD *)this + 12));
  }
  else
  {
    v3 = (__int64 *)((char *)this + 96);
  }
  ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((__int64 *)this + 15);
  ATL::CComPtrBase<IAudioProcessingObject>::~CComPtrBase<IAudioProcessingObject>((__int64 *)this + 13);
  ATL::CComPtrBase<IAudioProcessingObject>::~CComPtrBase<IAudioProcessingObject>(v3);
  v4 = *((_QWORD *)this + 11);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( *((_BYTE *)this + 80) )
  {
    *((_BYTE *)this + 80) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)this + 1);
  }
}
