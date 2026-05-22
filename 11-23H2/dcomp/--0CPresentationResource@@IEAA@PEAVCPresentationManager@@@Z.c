/*
 * XREFs of ??0CPresentationResource@@IEAA@PEAVCPresentationManager@@@Z @ 0x1801AFAE8
 * Callers:
 *     ??0CPresentationSurface@@IEAA@PEAVCPresentationManager@@_K@Z @ 0x1801AFB6C (--0CPresentationSurface@@IEAA@PEAVCPresentationManager@@_K@Z.c)
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18000BE3C (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??$_Emplace_reallocate@AEBQEAVCPresentationResource@@@?$vector@PEAVCPresentationResource@@V?$allocator@PEAVCPresentationResource@@@std@@@std@@QEAAPEAPEAVCPresentationResource@@QEAPEAV2@AEBQEAV2@@Z @ 0x1801ACC28 (--$_Emplace_reallocate@AEBQEAVCPresentationResource@@@-$vector@PEAVCPresentationResource@@V-$all.c)
 *     ??0?$com_ptr_t@VCPresentationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCPresentationManager@@@Z @ 0x1801AEFF8 (--0-$com_ptr_t@VCPresentationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCPresentationMa.c)
 */

CPresentationResource *__fastcall CPresentationResource::CPresentationResource(
        CPresentationResource *this,
        struct CPresentationManager *a2)
{
  _BYTE *v4; // rdx
  CPresentationResource *v6; // [rsp+30h] [rbp+8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp+10h] BYREF

  *(_QWORD *)this = &CPresentationResource::`vftable';
  wil::com_ptr_t<CPresentationManager,wil::err_returncode_policy>::com_ptr_t<CPresentationManager,wil::err_returncode_policy>(
    (_QWORD *)this + 1,
    (__int64)a2);
  v6 = this;
  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)((char *)a2 + 24));
  v4 = (_BYTE *)*((_QWORD *)a2 + 9);
  if ( v4 == *((_BYTE **)a2 + 10) )
  {
    std::vector<CPresentationResource *>::_Emplace_reallocate<CPresentationResource * const &>(
      (__int64)a2 + 64,
      v4,
      &v6);
  }
  else
  {
    *(_QWORD *)v4 = this;
    *((_QWORD *)a2 + 9) += 8LL;
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return this;
}
