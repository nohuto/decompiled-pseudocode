/*
 * XREFs of sub_140962BA0 @ 0x140962BA0
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueApc @ 0x1402ED9E0 (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x1402F47B0 (KeInitializeApc.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_140962BA0(__int64 a1, __int64 *a2, __int64 *a3, __int64 *a4, __int64 *a5)
{
  __int64 v6; // rsi
  __int64 v8; // r10
  char v9; // bl
  char result; // al

  v6 = *(_QWORD *)(a1 + 40);
  if ( *(_BYTE *)(a1 + 81) )
    return sub_14042A5E0(a1, a2);
  v8 = *a2;
  v9 = *(_BYTE *)(a1 + 1);
  *a2 = 0LL;
  KeInitializeApc(a1, (__int64)KeGetCurrentThread(), 0, (__int64)sub_140962BA0, v6, v8, 1, *a3);
  if ( (v9 & 1) != 0 )
    *(_BYTE *)(a1 + 1) |= 1u;
  result = KeInsertQueueApc(a1, *a4, *a5, 0);
  if ( !result )
    return sub_14042A5E0(a1, a2);
  return result;
}
