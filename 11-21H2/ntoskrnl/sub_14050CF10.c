/*
 * XREFs of sub_14050CF10 @ 0x14050CF10
 * Callers:
 *     sub_1403AEA08 @ 0x1403AEA08 (sub_1403AEA08.c)
 * Callees:
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14050CF10(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 result; // rax

  v2 = sub_140303720(a1);
  LOBYTE(v3) = 1;
  result = sub_14042A5E0(v2, v3);
  if ( (int)result < 0 )
  {
    *(_DWORD *)(a1 + 256) = result;
    dword_140C4E844 = 24;
    *(_DWORD *)(a1 + 252) = 24;
    *(_QWORD *)(a1 + 264) = "minkernel\\hals\\lib\\timers\\common\\timersup.c";
    *(_DWORD *)(a1 + 272) = 2366;
  }
  return result;
}
