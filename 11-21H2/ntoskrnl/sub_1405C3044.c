/*
 * XREFs of sub_1405C3044 @ 0x1405C3044
 * Callers:
 *     sub_14032C1B0 @ 0x14032C1B0 (sub_14032C1B0.c)
 *     sub_1405C0828 @ 0x1405C0828 (sub_1405C0828.c)
 * Callees:
 *     sub_1405C19F8 @ 0x1405C19F8 (sub_1405C19F8.c)
 */

unsigned __int64 __fastcall sub_1405C3044(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rcx

  v4 = (_QWORD *)(a1 + 24LL * a2);
  if ( (_QWORD *)*v4 == v4 )
    sub_1405C19F8(a1, a2, 3LL * a2, a4);
  v5 = (_QWORD *)*v4;
  if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = *v5, *(_QWORD **)(*v5 + 8LL) != v5) )
    __fastfail(3u);
  *v4 = v6;
  *(_QWORD *)(v6 + 8) = v4;
  --v4[2];
  return 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v5 + 0x44000000000LL) >> 4);
}
