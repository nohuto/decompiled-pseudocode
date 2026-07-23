/*
 * XREFs of sub_1405FD250 @ 0x1405FD250
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_14035F5E8 @ 0x14035F5E8 (sub_14035F5E8.c)
 *     sub_14037D2EC @ 0x14037D2EC (sub_14037D2EC.c)
 */

void __fastcall sub_1405FD250(__int64 a1, int *a2)
{
  int v2; // eax
  unsigned __int64 v3; // r9
  __int64 v5; // rcx
  struct _EX_RUNDOWN_REF *v6; // rax

  v2 = *a2;
  v3 = (unsigned __int64)(a2 - 8);
  if ( *a2 < 0 )
  {
    *(_DWORD *)(v3 + 28) |= 1u;
    v5 = *(_QWORD *)(v3 + 16);
    if ( v5 )
      *(_DWORD *)(v5 + 4) = v2;
    else
      *(_DWORD *)(v3 + 8) = v2;
  }
  if ( *(_QWORD *)(v3 + 16) )
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 6104));
  if ( (*(_DWORD *)(v3 + 28) & 4) != 0 )
  {
    KeSetEvent((PRKEVENT)(a1 + 6176), 1, 0);
  }
  else
  {
    sub_14037D2EC(a1, v3, 1);
    v6 = (struct _EX_RUNDOWN_REF *)sub_14035F5E8((__int64)&unk_140D31A00, *(_DWORD *)(a1 + 6016) & 0x3FF);
    sub_1402AD030(v6 + 1);
  }
}
