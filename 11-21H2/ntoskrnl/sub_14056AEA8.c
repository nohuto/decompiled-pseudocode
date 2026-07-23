/*
 * XREFs of sub_14056AEA8 @ 0x14056AEA8
 * Callers:
 *     sub_140577D00 @ 0x140577D00 (sub_140577D00.c)
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_14056AEA8(__int64 a1, _BYTE *a2)
{
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v5; // rdx
  int v6; // eax
  struct _KPRCB *v8; // rcx
  __int64 v9; // rdx
  int v10; // eax

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v5 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v6 = *(_DWORD *)(v5 + 24);
      *(_DWORD *)(v5 + 24) = v6 + 1;
      if ( v6 == -1 )
        sub_140418E4C((__int64)CurrentPrcb);
    }
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
  {
    v8 = KeGetCurrentPrcb();
    v9 = *((_QWORD *)v8 + 4375);
    if ( v9 )
    {
      if ( *((_BYTE *)v8 + 32) <= 1u )
      {
        v10 = *(_DWORD *)(v9 + 24) - 1;
        *(_DWORD *)(v9 + 24) = v10;
        if ( !v10 )
          sub_140418E4C((__int64)v8);
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
