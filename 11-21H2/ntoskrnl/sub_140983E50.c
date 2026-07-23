/*
 * XREFs of sub_140983E50 @ 0x140983E50
 * Callers:
 *     <none>
 * Callees:
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     sub_1409C750C @ 0x1409C750C (sub_1409C750C.c)
 */

char __fastcall sub_140983E50(__int64 a1, volatile signed __int64 *a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // rbx
  volatile __int64 *v7; // rcx
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  v6 = ((__int64)*(unsigned int *)a2 >> 17) & 4;
  _InterlockedExchangeAdd64(a2, 1uLL);
  v7 = (volatile __int64 *)(a1 + 48);
  _InterlockedOr(v9, 0);
  if ( *v7 )
    ExfUnblockPushLock(v7, 0LL);
  if ( (_DWORD)v6 )
    sub_1409C750C(a3, a3, a4[1], *a4);
  return 0;
}
