/*
 * XREFs of sub_140564940 @ 0x140564940
 * Callers:
 *     <none>
 * Callees:
 *     sub_140259568 @ 0x140259568 (sub_140259568.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     IoFreeIrp @ 0x140348610 (IoFreeIrp.c)
 */

__int64 __fastcall sub_140564940(__int64 a1, IRP *a2, __int64 a3)
{
  int Status; // eax
  __int64 v5; // rax

  Status = a2->IoStatus.Status;
  *(_DWORD *)(a3 + 32) = Status;
  if ( Status < 0 )
  {
    v5 = sub_140259568((__int64)a2);
    if ( v5 )
      *(_QWORD *)a3 = *(_QWORD *)(v5 + 8);
  }
  IoFreeIrp(a2);
  KeSetEvent((PRKEVENT)(a3 + 8), 0, 0);
  return 3221225494LL;
}
