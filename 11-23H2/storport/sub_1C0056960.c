/*
 * XREFs of sub_1C0056960 @ 0x1C0056960
 * Callers:
 *     sub_1C0058DD0 @ 0x1C0058DD0 (sub_1C0058DD0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C0056960(__int64 a1, __int64 (__fastcall *a2)(__int64, void *, __int64, _QWORD), __int64 a3)
{
  __int64 result; // rax

  if ( !*(_QWORD *)(a3 + 144) || !*(_DWORD *)(a3 + 140) )
    return 3221225485LL;
  result = a2(a1, &unk_1C008A500, a3, *(unsigned int *)(a3 + 4));
  if ( (int)result >= 0 )
    return a2(a1, &unk_1C008A4F0, *(_QWORD *)(a3 + 144), *(unsigned int *)(a3 + 140));
  return result;
}
