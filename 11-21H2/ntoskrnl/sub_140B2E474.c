/*
 * XREFs of sub_140B2E474 @ 0x140B2E474
 * Callers:
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     sub_14086172C @ 0x14086172C (sub_14086172C.c)
 *     sub_140B2E514 @ 0x140B2E514 (sub_140B2E514.c)
 */

__int64 __fastcall sub_140B2E474(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v4; // rax
  void *v5; // rcx

  if ( a2 )
    return 0LL;
  qword_140D3CB78 = 0LL;
  qword_140D3CDD8 = 0LL;
  qword_140D3CC68 = 0LL;
  qword_140D3CDD0 = 0LL;
  ExInitializeResourceLite(&stru_140C45F40);
  sub_140B2E514();
  if ( byte_140C4E508 )
    return 3221225473LL;
  result = sub_14086172C(
             *(void **)(*(_QWORD *)(a1 + 240) + 64LL),
             *(unsigned int *)(*(_QWORD *)(a1 + 240) + 72LL),
             &qword_140D3CDD8,
             &qword_140D3CB78);
  if ( (int)result >= 0 )
  {
    v4 = *(_QWORD *)(a1 + 240);
    v5 = *(void **)(v4 + 80);
    if ( v5 )
      sub_14086172C(v5, *(unsigned int *)(v4 + 88), &qword_140D3CDD0, &qword_140D3CC68);
    byte_140D3B044 = 1;
    return 0LL;
  }
  return result;
}
