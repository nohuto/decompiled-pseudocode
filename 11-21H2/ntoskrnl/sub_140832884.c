/*
 * XREFs of sub_140832884 @ 0x140832884
 * Callers:
 *     PsSetCreateThreadNotifyRoutineEx @ 0x140832440 (PsSetCreateThreadNotifyRoutineEx.c)
 *     PsSetCreateThreadNotifyRoutine @ 0x1408325E0 (PsSetCreateThreadNotifyRoutine.c)
 * Callees:
 *     sub_1403C7678 @ 0x1403C7678 (sub_1403C7678.c)
 *     sub_140832A20 @ 0x140832A20 (sub_140832A20.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140832884(__int64 a1, unsigned int a2)
{
  char v2; // si
  struct _EX_RUNDOWN_REF *v3; // rdi
  __int64 v4; // rbx

  v2 = a2;
  v3 = (struct _EX_RUNDOWN_REF *)sub_140832A20(a1, a2);
  if ( !v3 )
    return 3221225626LL;
  v4 = 0LL;
  while ( !sub_1403C7678((signed __int64 *)&stru_140CF6040.Ptr + v4, v3, 0LL) )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= 0x40 )
    {
      ExFreePoolWithTag(v3, 0);
      return 3221225626LL;
    }
  }
  if ( (v2 & 1) != 0 )
  {
    _InterlockedIncrement(&dword_140D3CD48);
    if ( (dword_140D3CA20 & 0x10) == 0 )
      _interlockedbittestandset(&dword_140D3CA20, 4u);
  }
  else
  {
    _InterlockedIncrement(&dword_140D3CD54);
    if ( (dword_140D3CA20 & 8) == 0 )
      _interlockedbittestandset(&dword_140D3CA20, 3u);
  }
  return 0LL;
}
