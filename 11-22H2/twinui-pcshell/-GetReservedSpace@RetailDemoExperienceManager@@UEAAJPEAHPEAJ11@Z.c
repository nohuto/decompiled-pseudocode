/*
 * XREFs of ?GetReservedSpace@RetailDemoExperienceManager@@UEAAJPEAHPEAJ11@Z @ 0x1804577A0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 */

__int64 __fastcall RetailDemoExperienceManager::GetReservedSpace(
        RetailDemoExperienceManager *this,
        int *a2,
        int *a3,
        int *a4,
        int *a5)
{
  int *v9; // r10
  int v10; // eax
  int v11; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)((char *)this + 336));
  v9 = (int *)((char *)this + 280);
  if ( *((_DWORD *)this + 68) || (v10 = 0, *v9) )
    v10 = 1;
  *a2 = v10;
  *a5 = *((_DWORD *)this + 57);
  if ( *((_DWORD *)this + 74) )
  {
    *a3 = 0;
    v11 = 0;
  }
  else
  {
    *a3 = *((_DWORD *)this + 68);
    v11 = *v9;
  }
  *a4 = v11;
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
