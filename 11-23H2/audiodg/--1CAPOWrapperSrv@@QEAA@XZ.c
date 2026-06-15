/*
 * XREFs of ??1CAPOWrapperSrv@@QEAA@XZ @ 0x14000DD40
 * Callers:
 *     ??1?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ @ 0x140015F54 (--1-$CComObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ @ 0x14004B1D4 (--1-$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CAPOWrapperSrv::~CAPOWrapperSrv(CAPOWrapperSrv *this)
{
  char *v2; // rcx
  __int64 v3; // rcx
  __int64 *v4; // rsi
  int v5; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (char *)*((_QWORD *)this + 15);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 15) = 0LL;
  }
  v3 = *((_QWORD *)this + 11);
  if ( v3 )
  {
    if ( *((_DWORD *)this + 34) )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 48LL))(v3, *((_QWORD *)this + 16));
      if ( v5 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8C,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
          (const char *)(unsigned int)v5,
          v6);
    }
    v4 = (__int64 *)((char *)this + 96);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 11) + 32LL))(
      *((_QWORD *)this + 11),
      *((_QWORD *)this + 12));
  }
  else
  {
    v4 = (__int64 *)((char *)this + 96);
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 16);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 14);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 13);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(v4);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 11);
  if ( *((_BYTE *)this + 80) )
  {
    *((_BYTE *)this + 80) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)this + 1);
  }
}
