/*
 * XREFs of sub_1409C5B80 @ 0x1409C5B80
 * Callers:
 *     sub_1409ABED8 @ 0x1409ABED8 (sub_1409ABED8.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402D6A98 @ 0x1402D6A98 (sub_1402D6A98.c)
 *     sub_1409CD41C @ 0x1409CD41C (sub_1409CD41C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409C5B80(__int64 a1, __int64 a2)
{
  void *v4; // rcx
  void *v5; // rcx
  _QWORD *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx

  v4 = *(void **)(a2 + 16);
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    *(_QWORD *)(a2 + 16) = 0LL;
  }
  v5 = *(void **)(a2 + 24);
  if ( v5 )
  {
    ObfDereferenceObject(v5);
    *(_QWORD *)(a2 + 24) = 0LL;
  }
  if ( *(_QWORD *)a2 )
  {
    sub_1402D6A98(*(_QWORD **)a2);
    *(_QWORD *)a2 = 0LL;
  }
  v6 = *(_QWORD **)(a2 + 8);
  if ( v6 )
  {
    sub_1402D6A98(v6);
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  v7 = *(void **)(a2 + 40);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x63734943u);
    *(_QWORD *)(a2 + 40) = 0LL;
  }
  v8 = *(void **)(a2 + 32);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x63734943u);
    *(_QWORD *)(a2 + 32) = 0LL;
  }
  return sub_1409CD41C(a1);
}
