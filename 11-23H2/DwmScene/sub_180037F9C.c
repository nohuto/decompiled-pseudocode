/*
 * XREFs of sub_180037F9C @ 0x180037F9C
 * Callers:
 *     sub_18002E7AC @ 0x18002E7AC (sub_18002E7AC.c)
 *     sub_18003A3A4 @ 0x18003A3A4 (sub_18003A3A4.c)
 *     sub_180056CD4 @ 0x180056CD4 (sub_180056CD4.c)
 *     sub_18005F0EC @ 0x18005F0EC (sub_18005F0EC.c)
 *     sub_18006EA80 @ 0x18006EA80 (sub_18006EA80.c)
 *     sub_18009844C @ 0x18009844C (sub_18009844C.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18002E2EC @ 0x18002E2EC (sub_18002E2EC.c)
 */

__int64 __fastcall sub_180037F9C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    sub_18002E2EC((__int64)v6, *(_QWORD *)(a1 + 8));
    result = sub_1800100E8(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
  return result;
}
