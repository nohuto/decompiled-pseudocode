/*
 * XREFs of sub_1406939A4 @ 0x1406939A4
 * Callers:
 *     sub_140693A28 @ 0x140693A28 (sub_140693A28.c)
 * Callees:
 *     sub_140216A4C @ 0x140216A4C (sub_140216A4C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void sub_1406939A4()
{
  _QWORD *v0; // rbx
  ULONG_PTR v1; // rcx
  void *v2; // rcx

  v0 = *(_QWORD **)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL);
  v1 = v0[101];
  if ( v1 )
  {
    sub_140216A4C(v1, (80LL * v0[102] + 4095) & 0xFFFFFFFFFFFFF000uLL);
    v0[101] = 0LL;
    v0[102] = 0LL;
  }
  v2 = (void *)v0[103];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    v0[103] = 0LL;
  }
}
