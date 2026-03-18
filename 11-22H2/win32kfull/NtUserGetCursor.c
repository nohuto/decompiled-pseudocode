/*
 * XREFs of NtUserGetCursor @ 0x1C0154350
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall NtUserGetCursor(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9

  EnterSharedCrit(a1, a2, a3);
  v7 = 0LL;
  v9 = *((_QWORD *)PtiCurrentShared(v4, v3, v5, v6) + 54);
  if ( *(_QWORD *)(v9 + 384) )
  {
    v9 = *((_QWORD *)PtiCurrentShared(v9, v8, v10, v11) + 54);
    v7 = **(_QWORD **)(v9 + 384);
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v7;
}
