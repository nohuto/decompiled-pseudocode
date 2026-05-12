/*
 * XREFs of sub_1C00642A8 @ 0x1C00642A8
 * Callers:
 *     sub_1C0010614 @ 0x1C0010614 (sub_1C0010614.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C00642A8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( *(_WORD *)(a4 + 2 * v4) );
  }
  return ((__int64 (__fastcall *)(__int64, __int64, void *))qword_1C0093C08)(a1, 43LL, &unk_1C0083530);
}
