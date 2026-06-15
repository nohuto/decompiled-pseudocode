/*
 * XREFs of ?IsVoipCallCapableAndCallIsActive@CApplication@@QEAAHXZ @ 0x180018910
 * Callers:
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x180020A38 (-OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplication::IsVoipCallCapableAndCallIsActive(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int v3; // esi
  _QWORD *v4; // rdx
  unsigned int v5; // edi
  __int64 v6; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  EnterCriticalSection(v2);
  v3 = 0;
  v4 = (_QWORD *)*((_QWORD *)this + 9);
  v5 = 1;
  while ( v4 )
  {
    v6 = v4[2];
    v4 = (_QWORD *)*v4;
    if ( !*(_DWORD *)(v6 + 416) && *(_DWORD *)(v6 + 428) )
    {
      v3 = 1;
      break;
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( !v3 || (*((_BYTE *)this + 208) & 0x10) == 0 )
    v5 = 0;
  if ( v2 )
    LeaveCriticalSection(v2);
  return v5;
}
