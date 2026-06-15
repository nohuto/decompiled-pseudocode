/*
 * XREFs of ?ClearReplacements@CRegObject@ATL@@UEAAJXZ @ 0x140091490
 * Callers:
 *     ??1CRegObject@ATL@@UEAA@XZ @ 0x1400902E4 (--1CRegObject@ATL@@UEAA@XZ.c)
 * Callees:
 *     ?ClearReplacements@CExpansionVector@ATL@@QEAAJXZ @ 0x140091404 (-ClearReplacements@CExpansionVector@ATL@@QEAAJXZ.c)
 */

__int64 __fastcall ATL::CRegObject::ClearReplacements(ATL::CRegObject *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  ATL::CRegObject *v2; // rbx

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  v2 = this;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  LODWORD(v2) = ATL::CExpansionVector::ClearReplacements((ATL::CRegObject *)((char *)v2 + 8));
  LeaveCriticalSection(v1);
  return (unsigned int)v2;
}
