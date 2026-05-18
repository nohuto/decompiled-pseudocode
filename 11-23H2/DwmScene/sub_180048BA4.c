/*
 * XREFs of sub_180048BA4 @ 0x180048BA4
 * Callers:
 *     sub_180048B00 @ 0x180048B00 (sub_180048B00.c)
 * Callees:
 *     sub_180049130 @ 0x180049130 (sub_180049130.c)
 *     sub_180049288 @ 0x180049288 (sub_180049288.c)
 *     sub_180049360 @ 0x180049360 (sub_180049360.c)
 *     sub_18004951C @ 0x18004951C (sub_18004951C.c)
 *     sub_1800496A8 @ 0x1800496A8 (sub_1800496A8.c)
 *     sub_1800497F8 @ 0x1800497F8 (sub_1800497F8.c)
 *     sub_180049938 @ 0x180049938 (sub_180049938.c)
 *     sub_180049B14 @ 0x180049B14 (sub_180049B14.c)
 *     sub_180049C54 @ 0x180049C54 (sub_180049C54.c)
 */

__int64 __fastcall sub_180048BA4(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 result; // rax

  v2 = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(a1 + 292) = v2;
  *(_DWORD *)(a1 + 296) = v2;
  if ( (v2 & 0x100) != 0 )
    result = sub_1800497F8(a1);
  if ( (v2 & 0x80u) != 0 )
    result = sub_180049130(a1);
  if ( (v2 & 1) != 0 )
    result = sub_180049B14(a1);
  if ( (v2 & 2) != 0 )
    result = sub_180049C54(a1);
  if ( (v2 & 0x10000000) != 0 )
  {
    result = sub_180049360(a1);
  }
  else if ( (v2 & 0x40) != 0 )
  {
    result = sub_180049288(a1);
  }
  if ( (v2 & 0x10) != 0 )
    result = sub_1800496A8(a1, *(_QWORD *)(a2 + 64), 0LL);
  if ( (v2 & 0x20) != 0 )
    result = sub_180049938(a1, *(_QWORD *)(a2 + 80), 0LL);
  if ( (v2 & 0x400) != 0 )
    return sub_18004951C(a1, *(_QWORD *)(a2 + 104), *(_QWORD *)(a2 + 96));
  return result;
}
