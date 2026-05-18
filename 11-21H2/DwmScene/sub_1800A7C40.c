/*
 * XREFs of sub_1800A7C40 @ 0x1800A7C40
 * Callers:
 *     sub_18007AD28 @ 0x18007AD28 (sub_18007AD28.c)
 *     sub_18007B2D0 @ 0x18007B2D0 (sub_18007B2D0.c)
 *     sub_18007B774 @ 0x18007B774 (sub_18007B774.c)
 *     sub_1801046C9 @ 0x1801046C9 (sub_1801046C9.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 */

__int64 __fastcall sub_1800A7C40(__int64 a1)
{
  __int64 result; // rax

  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 48));
  result = sub_180010910(a1 + 32);
  if ( *(_QWORD *)a1 )
  {
    sub_1800126E8(*(_QWORD *)a1, *(_QWORD *)(a1 + 8));
    result = sub_180010884(*(char **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
