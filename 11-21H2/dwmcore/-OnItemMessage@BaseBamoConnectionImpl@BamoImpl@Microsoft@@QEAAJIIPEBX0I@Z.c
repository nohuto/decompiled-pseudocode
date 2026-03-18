/*
 * XREFs of ?OnItemMessage@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIPEBX0I@Z @ 0x180026890
 * Callers:
 *     ?OnItemMessage@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEBX0I@Z @ 0x180026880 (-OnItemMessage@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEBX0I@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VBamoPrincipalImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026978 (--1-$com_ptr_t@VBamoPrincipalImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180026A28 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180026A5C (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::OnItemMessage(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        int a2,
        int a3,
        const void *a4,
        const void *a5,
        unsigned int a6)
{
  struct Microsoft::BamoImpl::ConnectionIndirector *v8; // rdx
  unsigned int v9; // ebx
  _DWORD *i; // rax
  void (__fastcall ***v13)(_QWORD); // rax
  unsigned int v14; // eax
  _BYTE v16[40]; // [rsp+20h] [rbp-28h] BYREF
  void (__fastcall ***v17)(_QWORD); // [rsp+50h] [rbp+8h] BYREF

  v8 = (struct Microsoft::BamoImpl::ConnectionIndirector *)*((_QWORD *)this + 12);
  v9 = 0;
  v17 = 0LL;
  Microsoft::BamoImpl::InternalLock::InternalLock((Microsoft::BamoImpl::InternalLock *)v16, v8);
  for ( i = (_DWORD *)*((_QWORD *)this + 24); i != *((_DWORD **)this + 25); ++i )
  {
    if ( *i == a3 )
      goto LABEL_6;
  }
  v13 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(const void *))(*(_QWORD *)a4 + 40LL))(a4);
  v17 = v13;
  if ( v13 )
    (**v13)(v13);
  *((_DWORD *)this + 8) = a2;
  v14 = (*(__int64 (__fastcall **)(const void *, const void *, _QWORD))(*(_QWORD *)a4 + 32LL))(a4, a5, a6);
  *((_DWORD *)this + 8) = 0;
  v9 = v14;
LABEL_6:
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)v16);
  wil::com_ptr_t<Microsoft::BamoImpl::BamoPrincipalImpl,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::BamoPrincipalImpl,wil::err_returncode_policy>(&v17);
  return v9;
}
