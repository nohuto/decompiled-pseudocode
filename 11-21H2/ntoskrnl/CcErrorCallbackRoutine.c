/*
 * XREFs of CcErrorCallbackRoutine @ 0x14053A0B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140538B34 @ 0x140538B34 (sub_140538B34.c)
 */

__int64 __fastcall CcErrorCallbackRoutine(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 4) == -1073700856 )
    sub_140538B34();
  return 0LL;
}
