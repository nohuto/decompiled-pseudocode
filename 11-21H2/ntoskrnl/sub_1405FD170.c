/*
 * XREFs of sub_1405FD170 @ 0x1405FD170
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     IoFreeIrp @ 0x140348610 (IoFreeIrp.c)
 *     sub_14035F5E8 @ 0x14035F5E8 (sub_14035F5E8.c)
 *     sub_14037D2EC @ 0x14037D2EC (sub_14037D2EC.c)
 */

__int64 __fastcall sub_1405FD170(__int64 a1, IRP *a2, unsigned __int64 a3)
{
  int Status; // eax
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  struct _EX_RUNDOWN_REF *v8; // rax

  Status = a2->IoStatus.Status;
  v5 = *(_QWORD *)(a3 + 40);
  if ( Status >= 0 )
  {
    if ( a2->IoStatus.Information < *(unsigned int *)(a3 + 32) )
    {
      *(_DWORD *)(a3 + 28) |= 1u;
      v7 = *(_QWORD *)(a3 + 16);
      if ( v7 )
        *(_DWORD *)(v7 + 4) = -1073741435;
      else
        *(_DWORD *)(a3 + 8) = -1073741435;
    }
  }
  else
  {
    *(_DWORD *)(a3 + 28) |= 1u;
    v6 = *(_QWORD *)(a3 + 16);
    if ( v6 )
      *(_DWORD *)(v6 + 4) = Status;
    else
      *(_DWORD *)(a3 + 8) = Status;
  }
  IoFreeIrp(a2);
  if ( *(_QWORD *)(a3 + 16) )
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 6104));
  if ( (*(_DWORD *)(a3 + 28) & 4) != 0 )
  {
    KeSetEvent((PRKEVENT)(v5 + 6176), 1, 0);
  }
  else
  {
    sub_14037D2EC(v5, a3, 1);
    v8 = (struct _EX_RUNDOWN_REF *)sub_14035F5E8((__int64)&unk_140D31A00, *(_DWORD *)(v5 + 6016) & 0x3FF);
    sub_1402AD030(v8 + 1);
  }
  return 3221225494LL;
}
