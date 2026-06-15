/*
 * XREFs of ?OnEndpointRemoved@CWindowsPolicyManager@@UEAAJPEBG@Z @ 0x18000B170
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18000A580 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowsPolicyManager::OnEndpointRemoved(CWindowsPolicyManager *this, const unsigned __int16 *a2)
{
  CApplicationManager *v2; // rbx
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  _QWORD *v4; // rdi
  __int64 v5; // rbx
  _QWORD *i; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp+18h] BYREF

  CWindowsPolicyManager::Lock((__int64)this, &lpCriticalSection);
  v2 = g_ApplicationManager;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v4 = (_QWORD *)*((_QWORD *)v2 + 9);
  while ( v4 )
  {
    v5 = v4[2];
    v4 = (_QWORD *)*v4;
    EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 32));
    for ( i = *(_QWORD **)(v5 + 72); i; i = (_QWORD *)*i )
      ;
    if ( v5 != -32 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v5 + 32));
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
