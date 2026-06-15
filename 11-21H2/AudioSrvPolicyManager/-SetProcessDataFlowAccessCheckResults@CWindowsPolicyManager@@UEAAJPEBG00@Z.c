/*
 * XREFs of ?SetProcessDataFlowAccessCheckResults@CWindowsPolicyManager@@UEAAJPEBG00@Z @ 0x18000D520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowsPolicyManager::SetProcessDataFlowAccessCheckResults(
        CWindowsPolicyManager *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  CApplicationManager *v6; // rbx
  struct _RTL_CRITICAL_SECTION *v7; // rdi
  _QWORD *v8; // rbx
  __int64 v9; // rsi
  unsigned int v10; // eax
  _DWORD *v11; // rcx

  v6 = g_ApplicationManager;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v8 = (_QWORD *)*((_QWORD *)v6 + 16);
  while ( v8 )
  {
    v9 = v8[2];
    v8 = (_QWORD *)*v8;
    if ( (!a3 || CompareStringOrdinal(a3, -1, *(LPCWCH *)(v9 + 200), -1, 1) == 2)
      && (!a4 || CompareStringOrdinal(a4, -1, *(LPCWCH *)(v9 + 184), -1, 1) == 2) )
    {
      v10 = 0;
      v11 = (_DWORD *)(v9 + 216);
      do
      {
        *v11 = -2147023728;
        ++v10;
        ++v11;
      }
      while ( v10 < 2 );
    }
  }
  if ( v7 )
    LeaveCriticalSection(v7);
  return 0LL;
}
