/*
 * XREFs of sub_1402ED750 @ 0x1402ED750
 * Callers:
 *     sub_1402ED194 @ 0x1402ED194 (sub_1402ED194.c)
 * Callees:
 *     sub_140285FE0 @ 0x140285FE0 (sub_140285FE0.c)
 *     sub_14097C814 @ 0x14097C814 (sub_14097C814.c)
 */

__int64 __fastcall sub_1402ED750(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 48) & 0x200000) == 0 )
  {
    *(_QWORD *)(a1 + 112) = *((_QWORD *)KeGetCurrentThread() + 23) | 1LL;
    result = sub_140285FE0(*(__int64 **)(a1 + 72), (_QWORD *)(a1 + 96), 3);
  }
  if ( a3 )
    return sub_14097C814(*((_QWORD *)KeGetCurrentThread() + 23), a3);
  return result;
}
