/*
 * XREFs of sub_14020E67C @ 0x14020E67C
 * Callers:
 *     sub_14020E464 @ 0x14020E464 (sub_14020E464.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     sub_140570750 @ 0x140570750 (sub_140570750.c)
 *     sub_140577D00 @ 0x140577D00 (sub_140577D00.c)
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_14020E67C(__int64 a1, _BYTE *a2)
{
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v5; // rdx
  struct _KPRCB *v7; // rcx
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v5 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v9 = *(_DWORD *)(v5 + 24);
      *(_DWORD *)(v5 + 24) = v9 + 1;
      if ( v9 == -1 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    v7 = KeGetCurrentPrcb();
    v8 = *((_QWORD *)v7 + 4375);
    if ( v8 )
    {
      if ( *((_BYTE *)v7 + 32) <= 1u )
      {
        v10 = *(_DWORD *)(v8 + 24) - 1;
        *(_DWORD *)(v8 + 24) = v10;
        if ( !v10 )
          sub_140418E4C(v7);
      }
    }
    return 0;
  }
  else
  {
    if ( a2 )
      *a2 = 1;
    return 1;
  }
}
