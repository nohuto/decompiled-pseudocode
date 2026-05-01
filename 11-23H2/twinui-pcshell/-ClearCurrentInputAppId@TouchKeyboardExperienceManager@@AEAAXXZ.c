/*
 * XREFs of ?ClearCurrentInputAppId@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18050EA78
 * Callers:
 *     _lambda_4efd027938208ec783bf057b80dc7741_::operator() @ 0x180207794 (_lambda_4efd027938208ec783bf057b80dc7741_--operator().c)
 *     _lambda_ca8ece6d0ba6e230db3589fff51d060c_::operator() @ 0x18020866C (_lambda_ca8ece6d0ba6e230db3589fff51d060c_--operator().c)
 *     ?OnApplicationStateChanged_Old@TouchKeyboardExperienceManager@@AEAAJPEBGW4PLM_STATE_CHANGE@@@Z @ 0x18020AA5C (-OnApplicationStateChanged_Old@TouchKeyboardExperienceManager@@AEAAJPEBGW4PLM_STATE_CHANGE@@@Z.c)
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 */

void __fastcall TouchKeyboardExperienceManager::ClearCurrentInputAppId(struct _RTL_CRITICAL_SECTION *this)
{
  LONG *p_LockCount; // rax
  struct _RTL_CRITICAL_SECTION *v3; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  wil::EnterCriticalSection(&lpCriticalSection, this + 13);
  p_LockCount = &this[12].LockCount;
  if ( this[12].SpinCount >= 8 )
    p_LockCount = *(LONG **)&this[12].LockCount;
  v3 = lpCriticalSection;
  this[12].LockSemaphore = 0LL;
  *(_WORD *)p_LockCount = 0;
  if ( v3 )
    LeaveCriticalSection(v3);
}
