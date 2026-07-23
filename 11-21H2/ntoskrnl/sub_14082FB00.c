/*
 * XREFs of sub_14082FB00 @ 0x14082FB00
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1403C62EC @ 0x1403C62EC (sub_1403C62EC.c)
 */

void __fastcall sub_14082FB00(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rcx

  if ( a1 )
  {
    v2 = sub_1403C62EC(
           (ULONG_PTR *)(a1 + 8),
           (_DWORD *)(a1 + 16),
           (_DWORD *)(a1 + 20),
           *(_DWORD *)(a1 + 24),
           (_DWORD *)(a1 + 28),
           *(_DWORD *)(a1 + 32),
           (_DWORD *)(a1 + 36));
    *(_DWORD *)(a1 + 40) = v2;
    if ( v2 >= 0 )
    {
      v3 = *(_QWORD *)(a1 + 8);
      if ( v3 )
        *(_DWORD *)(v3 + 12) = MEMORY[0xFFFFF780000003A4];
    }
    if ( *(_QWORD *)a1 )
      KeSetEvent(*(PRKEVENT *)a1, 1, 0);
  }
}
