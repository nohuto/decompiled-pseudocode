/*
 * XREFs of ??1CAPOServiceProvider@@UEAA@XZ @ 0x14006EFD4
 * Callers:
 *     ??_ECAPOServiceProvider@@UEAAPEAXI@Z @ 0x14006F0B0 (--_ECAPOServiceProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400381A0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnlockMmcssWorkQueue@CRTThreadManager@@QEAAJK@Z @ 0x140075244 (-UnlockMmcssWorkQueue@CRTThreadManager@@QEAAJK@Z.c)
 */

void __fastcall CAPOServiceProvider::~CAPOServiceProvider(CAPOServiceProvider *this)
{
  bool v1; // zf
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  CRTThreadManager *v4; // rcx
  HRESULT v5; // eax
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)this + 24) == 0;
  *(_QWORD *)this = &CAPOServiceProvider::`vftable';
  *((_QWORD *)this + 1) = &CAPOServiceProvider::`vftable'{for `IAudioProcessingObjectLoggingService'};
  *((_QWORD *)this + 2) = &CAPOServiceProvider::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObjectRTQueueService>'};
  if ( v1 )
    goto LABEL_10;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v4 = (CRTThreadManager *)*((_QWORD *)this + 11);
  if ( v4 )
  {
    v5 = CRTThreadManager::UnlockMmcssWorkQueue(v4, *((_DWORD *)this + 24));
    if ( v5 >= 0 )
      goto LABEL_8;
    v6 = 157LL;
  }
  else
  {
    v5 = RtwqUnlockWorkQueue(*((_DWORD *)this + 24));
    if ( v5 >= 0 )
      goto LABEL_8;
    v6 = 161LL;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)v6,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\aposerviceprovider.cpp",
    (const char *)(unsigned int)v5);
LABEL_8:
  if ( v3 )
    LeaveCriticalSection(v3);
LABEL_10:
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 11);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  *((_DWORD *)this + 7) = -1073741823;
}
