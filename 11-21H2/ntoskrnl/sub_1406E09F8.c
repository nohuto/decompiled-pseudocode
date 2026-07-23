/*
 * XREFs of sub_1406E09F8 @ 0x1406E09F8
 * Callers:
 *     sub_14075C588 @ 0x14075C588 (sub_14075C588.c)
 *     sub_14075C68C @ 0x14075C68C (sub_14075C68C.c)
 * Callees:
 *     sub_14026D048 @ 0x14026D048 (sub_14026D048.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406E0A70 @ 0x1406E0A70 (sub_1406E0A70.c)
 */

void __fastcall sub_1406E09F8(__int64 a1)
{
  void *v2; // rcx
  ULONG_PTR v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_1406E0A70(v2);
    *(_QWORD *)a1 = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    sub_14026D048(v3, 1);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  v4 = *(void **)(a1 + 32);
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  v5 = *(void **)(a1 + 24);
  if ( v5 )
  {
    ZwClose(v5);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  v6 = *(void **)(a1 + 16);
  if ( v6 )
  {
    ZwClose(v6);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
