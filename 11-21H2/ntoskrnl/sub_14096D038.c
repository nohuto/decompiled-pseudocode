/*
 * XREFs of sub_14096D038 @ 0x14096D038
 * Callers:
 *     sub_1405954F4 @ 0x1405954F4 (sub_1405954F4.c)
 * Callees:
 *     sub_14027456C @ 0x14027456C (sub_14027456C.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     sub_1402EE0C8 @ 0x1402EE0C8 (sub_1402EE0C8.c)
 *     sub_14033C424 @ 0x14033C424 (sub_14033C424.c)
 *     sub_14033C4D0 @ 0x14033C4D0 (sub_14033C4D0.c)
 */

__int64 __fastcall sub_14096D038(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  __int64 v3; // rdi

  v1 = sub_1402EE0C8(a1, 8LL);
  v2 = *(_QWORD *)(v1 + 8);
  while ( *(_DWORD *)(v2 + 176) != 1 )
  {
    v3 = sub_14033C424(0);
    if ( v3 )
    {
      sub_14027456C((PSLIST_ENTRY)v2);
      *(_QWORD *)(v1 + 8) = v3;
      v2 = v3;
      break;
    }
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&stru_1400156D0);
  }
  sub_14033C4D0(v2, 0);
  return v2;
}
