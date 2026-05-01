/*
 * XREFs of ?RmpEnforcementEmptyProcess@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180085610
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpEnforcementEmptyProcessAndLog@@YAKPEAU_RM_ACTIVITY_HOST@@PEAXKKK@Z @ 0x180055F9A (-RmpEnforcementEmptyProcessAndLog@@YAKPEAU_RM_ACTIVITY_HOST@@PEAXKKK@Z.c)
 */

__int64 __fastcall RmpEnforcementEmptyProcess(struct _RM_ACTIVITY_HOST *a1, void *a2, int a3, void *a4)
{
  char v4; // bl
  __int64 result; // rax
  bool v9; // cc
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v4 = (char)a4;
  if ( ((unsigned __int8)a4 & 2) == 0
    || (result = RmpEnforcementEmptyProcessAndLog(a1, a2, a3, 0, v10), v9 = (int)result <= 0, !(_DWORD)result) )
  {
    if ( (v4 & 4) == 0
      || (result = RmpEnforcementEmptyProcessAndLog(a1, a2, a3, 1u, v10), v9 = (int)result <= 0, !(_DWORD)result) )
    {
      if ( (v4 & 0x20) == 0 )
        return 0LL;
      result = RmpEnforcementEmptyProcessAndLog(a1, a2, a3, 8u, v10);
      v9 = (int)result <= 0;
      if ( !(_DWORD)result )
        return 0LL;
    }
  }
  if ( !v9 )
    return (unsigned __int16)result | 0xC0070000;
  return result;
}
