/*
 * XREFs of ?HrFindInterface@CPresentationManager@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801ADCB0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18000BE3C (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??8@YA_NAEBU_GUID@@0@Z @ 0x18002B6E8 (--8@YA_NAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall CPresentationManager::HrFindInterface(CPresentationManager *this, struct _GUID *a2, void **a3)
{
  unsigned int v6; // edi
  _QWORD *v7; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
  v6 = 0;
  if ( operator==(a2, &GUID_fb562f82_6292_470a_88b1_843661e7f20c) )
  {
    *a3 = this;
  }
  else if ( operator==(v7, &GUID_d6ae97ae_0d90_401a_af03_2ee8c6f858ee) )
  {
    *a3 = (void *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
  }
  else
  {
    v6 = -2147467262;
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
