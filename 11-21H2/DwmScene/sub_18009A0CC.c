/*
 * XREFs of sub_18009A0CC @ 0x18009A0CC
 * Callers:
 *     sub_18009A310 @ 0x18009A310 (sub_18009A310.c)
 * Callees:
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18009A154 @ 0x18009A154 (sub_18009A154.c)
 */

__int64 *__fastcall sub_18009A0CC(__int64 *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  __int64 v10; // rcx
  __int64 v11; // rax

  v10 = sub_18001D684();
  v11 = 0LL;
  if ( v10 )
    v11 = sub_18009A154(v10, *a2, *a3, *a4, *a5, *a6);
  *a1 = v11;
  return a1;
}
