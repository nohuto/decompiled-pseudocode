/*
 * XREFs of ??1CAPOProcessingHostObject@@UEAA@XZ @ 0x140004418
 * Callers:
 *     ??_ECAPOProcessingHostObject@@UEAAPEAXI@Z @ 0x140002970 (--_ECAPOProcessingHostObject@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400381A0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14003833E (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?ShutdownWorkQueue@CAPOProcessingHostObject@@AEAAJXZ @ 0x14007031C (-ShutdownWorkQueue@CAPOProcessingHostObject@@AEAAJXZ.c)
 */

void __fastcall CAPOProcessingHostObject::~CAPOProcessingHostObject(CAPOProcessingHostObject *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  std::_Ref_count_base *v3; // rcx
  int v4; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 40);
  *(_QWORD *)this = &CAPOProcessingHostObject::`vftable';
  EnterCriticalSection((LPCRITICAL_SECTION)this + 1);
  if ( *((_QWORD *)this + 10) )
  {
    v4 = CAPOProcessingHostObject::ShutdownWorkQueue(this);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x44,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
        (const char *)(unsigned int)v4,
        v5);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 11);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  DeleteCriticalSection(v2);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((char *)this + 32);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((char *)this + 24);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
