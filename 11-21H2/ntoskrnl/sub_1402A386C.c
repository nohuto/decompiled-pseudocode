/*
 * XREFs of sub_1402A386C @ 0x1402A386C
 * Callers:
 *     FsRtlUninitializeOplock @ 0x14023A260 (FsRtlUninitializeOplock.c)
 *     sub_1402A2490 @ 0x1402A2490 (sub_1402A2490.c)
 *     sub_1402A2E8C @ 0x1402A2E8C (sub_1402A2E8C.c)
 *     sub_1402A30D0 @ 0x1402A30D0 (sub_1402A30D0.c)
 *     FsRtlCheckOplockEx2 @ 0x1402A5D00 (FsRtlCheckOplockEx2.c)
 *     sub_1403857EC @ 0x1403857EC (sub_1403857EC.c)
 *     sub_14039F3B0 @ 0x14039F3B0 (sub_14039F3B0.c)
 *     sub_1404173E4 @ 0x1404173E4 (sub_1404173E4.c)
 *     sub_14071C610 @ 0x14071C610 (sub_14071C610.c)
 * Callees:
 *     sub_1402A39EC @ 0x1402A39EC (sub_1402A39EC.c)
 */

__int64 __fastcall sub_1402A386C(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // r10
  __int64 result; // rax
  _QWORD *v4; // rcx

  v1 = sub_1402A39EC(*(_QWORD *)(a1 + 24));
  if ( v1 )
    *(_QWORD *)(v1 + 40) = 0LL;
  result = *v2;
  if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v4 = (_QWORD *)v2[1], (_QWORD *)*v4 != v2) )
    __fastfail(3u);
  *v4 = result;
  *(_QWORD *)(result + 8) = v4;
  return result;
}
