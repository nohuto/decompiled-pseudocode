/*
 * XREFs of MiVaIsPageFileHash @ 0x14027B604
 * Callers:
 *     MiLockStealSystemVm @ 0x140230F28 (MiLockStealSystemVm.c)
 *     MiActivePageClaimCandidate @ 0x140278960 (MiActivePageClaimCandidate.c)
 *     MiStealPage @ 0x1402E97D4 (MiStealPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVaIsPageFileHash(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r11d
  int v3; // r10d
  __int64 i; // r9
  unsigned __int64 v6; // rdx

  v2 = *(_DWORD *)(a1 + 16728);
  v3 = 0;
  if ( !v2 )
    return 0LL;
  for ( i = a1 + 16736; ; i += 8LL )
  {
    v6 = *(_QWORD *)(*(_QWORD *)i + 216LL);
    if ( v6 )
    {
      if ( a2 >= v6 && a2 < v6 + (unsigned int)dword_140C531CC * *(_QWORD *)(*(_QWORD *)i + 8LL) )
        break;
    }
    if ( ++v3 >= v2 )
      return 0LL;
  }
  return *(_QWORD *)i;
}
