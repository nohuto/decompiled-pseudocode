/*
 * XREFs of sub_1406633A8 @ 0x1406633A8
 * Callers:
 *     sub_140662E08 @ 0x140662E08 (sub_140662E08.c)
 *     sub_14074E474 @ 0x14074E474 (sub_14074E474.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1406D7014 @ 0x1406D7014 (sub_1406D7014.c)
 *     sub_1407A5A54 @ 0x1407A5A54 (sub_1407A5A54.c)
 */

LONG_PTR __fastcall sub_1406633A8(__int64 a1, int a2)
{
  ULONG_PTR v4; // rcx
  ULONG_PTR v5; // rcx
  ULONG_PTR v6; // rcx
  unsigned __int64 v7; // rcx
  LONG_PTR result; // rax

  v4 = *(_QWORD *)(a1 + 136);
  if ( v4 )
  {
    result = sub_1407A5A54(v4);
    *(_QWORD *)(a1 + 136) = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 144);
  if ( v5 && (!a2 || (*(_DWORD *)(a1 + 40) & 0x4000) == 0) )
  {
    result = sub_1406D7014(v5);
    *(_QWORD *)(a1 + 144) = 0LL;
  }
  v6 = *(_QWORD *)(a1 + 152);
  if ( v6 )
  {
    result = sub_1407A5A54(v6);
    *(_QWORD *)(a1 + 152) = 0LL;
  }
  v7 = *(_QWORD *)(a1 + 160);
  if ( (v7 & 1) != 0 )
  {
    if ( v7 >= 4 && (v7 & 2) != 0 )
      result = ObfDereferenceObject((PVOID)(v7 & 0xFFFFFFFFFFFFFFFCuLL));
    *(_QWORD *)(a1 + 160) = 0LL;
  }
  return result;
}
