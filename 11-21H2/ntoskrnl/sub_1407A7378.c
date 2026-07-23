/*
 * XREFs of sub_1407A7378 @ 0x1407A7378
 * Callers:
 *     sub_1406A61B0 @ 0x1406A61B0 (sub_1406A61B0.c)
 *     sub_1406CBB84 @ 0x1406CBB84 (sub_1406CBB84.c)
 *     sub_1407A7300 @ 0x1407A7300 (sub_1407A7300.c)
 *     sub_1407A74A4 @ 0x1407A74A4 (sub_1407A74A4.c)
 *     sub_1407A7B98 @ 0x1407A7B98 (sub_1407A7B98.c)
 *     sub_1407AC020 @ 0x1407AC020 (sub_1407AC020.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1402331E0 (PsReturnProcessPagedPoolQuota.c)
 */

unsigned __int64 __fastcall sub_1407A7378(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax

  if ( a1 )
  {
    result = a2 + *(_QWORD *)(a1 + 2072);
    if ( result >= 0x1000 )
      return PsReturnProcessPagedPoolQuota(a1, a2);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2072), a2);
  }
  return result;
}
