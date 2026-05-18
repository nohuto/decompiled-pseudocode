/*
 * XREFs of sub_1800275F0 @ 0x1800275F0
 * Callers:
 *     sub_180028650 @ 0x180028650 (sub_180028650.c)
 *     sub_180029130 @ 0x180029130 (sub_180029130.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 */

__int64 __fastcall sub_1800275F0(__int64 a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rbx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = (__int64 *)(v2 + 40);
    if ( *(_QWORD *)(v2 + 40) )
    {
      sub_1800126E8(*v3, *(_QWORD *)(v2 + 48));
      result = sub_180010884((char *)*v3, (v3[2] - *v3) & 0xFFFFFFFFFFFFFFF0uLL);
      *v3 = 0LL;
      v3[1] = 0LL;
      v3[2] = 0LL;
      v2 = *(_QWORD *)(a1 + 8);
    }
    if ( v2 )
      return sub_180010884((char *)v2, 0x40uLL);
  }
  return result;
}
