/*
 * XREFs of RtlDeleteElementGenericTableAvlEx @ 0x140389560
 * Callers:
 *     <none>
 * Callees:
 *     sub_140253690 @ 0x140253690 (sub_140253690.c)
 *     sub_1402DEDA0 @ 0x1402DEDA0 (sub_1402DEDA0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall RtlDeleteElementGenericTableAvlEx(__int64 a1, _QWORD *a2)
{
  if ( a2 == *(_QWORD **)(a1 + 56) )
    *(_QWORD *)(a1 + 56) = sub_140253690(a2);
  ++*(_DWORD *)(a1 + 64);
  sub_1402DEDA0(a1, (__int64)a2);
  --*(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  return sub_14042A5E0(a1, a2);
}
