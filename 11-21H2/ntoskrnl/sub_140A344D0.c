/*
 * XREFs of sub_140A344D0 @ 0x140A344D0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

__int64 __fastcall sub_140A344D0(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 4) - 0x11D046F0CB3A4004LL;
  if ( *(_QWORD *)(a1 + 4) == 0x11D046F0CB3A4004LL )
    v1 = *(_QWORD *)(a1 + 12) - 0x3F05139760008FB0LL;
  if ( !v1 )
    KeSetEvent(&stru_140C0DE20, 0, 0);
  return 0LL;
}
