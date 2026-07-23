/*
 * XREFs of sub_1402DE5C0 @ 0x1402DE5C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140259568 @ 0x140259568 (sub_140259568.c)
 *     sub_1402D2080 @ 0x1402D2080 (sub_1402D2080.c)
 *     sub_1402D2774 @ 0x1402D2774 (sub_1402D2774.c)
 *     sub_1402DE684 @ 0x1402DE684 (sub_1402DE684.c)
 *     sub_1402DE734 @ 0x1402DE734 (sub_1402DE734.c)
 *     IoFreeIrp @ 0x140348610 (IoFreeIrp.c)
 */

__int64 __fastcall sub_1402DE5C0(__int64 a1, IRP *a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v6; // rcx
  __int64 v8; // rax

  v3 = 0LL;
  *(_QWORD *)(*(_QWORD *)(a3 + 16) + 72LL) = 0LL;
  if ( a2->PendingReturned )
    *(_DWORD *)(a3 + 36) = 1;
  *(_QWORD *)(a3 + 48) = a2->IoStatus.Information;
  *(_DWORD *)(a3 + 40) = a2->IoStatus.Status;
  _InterlockedIncrement((volatile signed __int32 *)(a3 + 56));
  if ( *(int *)(a3 + 40) < 0 )
  {
    v8 = sub_140259568((__int64)a2);
    if ( v8 )
      v3 = *(_QWORD *)(v8 + 8);
  }
  sub_1402DE734(a1, a3);
  v6 = *(_QWORD *)(a3 + 16);
  if ( *(_DWORD *)(a3 + 32) == 783 )
    sub_1402D2774(&stru_14000E0B0, (unsigned __int16 *)(v6 + 40));
  else
    sub_1402D2080(v6, *(unsigned int *)(a3 + 40), v3);
  sub_1402DE684(a3);
  IoFreeIrp(a2);
  return 3221225494LL;
}
