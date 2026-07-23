/*
 * XREFs of sub_14081C984 @ 0x14081C984
 * Callers:
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 * Callees:
 *     sub_140216E18 @ 0x140216E18 (sub_140216E18.c)
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 */

void __fastcall sub_14081C984(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rbx

  v2 = a2;
  if ( *a1 )
  {
    v3 = a1[25];
    v4 = a1[26];
  }
  else
  {
    v3 = *(unsigned int *)(*(_QWORD *)sub_140287970(a1[14]) + 8LL);
    v4 = v3;
  }
  _InterlockedExchangeAdd(&dword_140C53550, -(int)v3);
  sub_14028CE10((__int64)&StartContext, v3 - *(_QWORD *)(v2 + 8));
  if ( v4 )
    sub_140216E18((__int64)&StartContext, v4);
}
