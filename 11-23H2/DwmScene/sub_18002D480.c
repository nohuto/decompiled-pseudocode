/*
 * XREFs of sub_18002D480 @ 0x18002D480
 * Callers:
 *     sub_18002AC04 @ 0x18002AC04 (sub_18002AC04.c)
 *     sub_18002AD28 @ 0x18002AD28 (sub_18002AD28.c)
 *     sub_180073F6C @ 0x180073F6C (sub_180073F6C.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18002AA98 @ 0x18002AA98 (sub_18002AA98.c)
 */

__int64 __fastcall sub_18002D480(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    sub_18002AA98((__int64)v6, *(_QWORD *)(a1 + 8));
    sub_1800100E8(*(void **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 152 * a3;
  result = a2 + 152 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
