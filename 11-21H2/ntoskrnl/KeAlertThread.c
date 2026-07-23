/*
 * XREFs of KeAlertThread @ 0x1402ECB90
 * Callers:
 *     sub_140253C70 @ 0x140253C70 (sub_140253C70.c)
 *     sub_1402ECD10 @ 0x1402ECD10 (sub_1402ECD10.c)
 *     IoDecrementKeepAliveCount @ 0x140558640 (IoDecrementKeepAliveCount.c)
 *     sub_14056B0EC @ 0x14056B0EC (sub_14056B0EC.c)
 *     sub_1409B2D50 @ 0x1409B2D50 (sub_1409B2D50.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402F6ED0 @ 0x1402F6ED0 (sub_1402F6ED0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall KeAlertThread(__int64 a1, char a2)
{
  __int64 v2; // r14
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r15
  __int64 v6; // rcx
  char v7; // si
  __int64 v9; // r9
  char v10; // al
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  int v14; // [rsp+68h] [rbp+10h] BYREF

  v2 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v9 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v9 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v14 = 0;
  while ( 1 )
  {
    v6 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v6 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v12 = *(_DWORD *)(v6 + 24);
        *(_DWORD *)(v6 + 24) = v12 + 1;
        if ( v12 == -1 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v11 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v11 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v13 = *(_DWORD *)(v11 + 24) - 1;
        *(_DWORD *)(v11 + 24) = v13;
        if ( !v13 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v14);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v7 = *(_BYTE *)(v2 + a1 + 114);
  if ( !v7 )
  {
    if ( *(_BYTE *)(a1 + 388) != 5
      || (unsigned __int8)((*(_BYTE *)(a1 + 112) & 7) - 3) <= 1u
      || (*(_DWORD *)(a1 + 116) & 0x10) == 0
      || (char)v2 > *(char *)(a1 + 391)
      || (v10 = sub_1402F6ED0(CurrentPrcb, a1, 257LL, 0LL), *(_BYTE *)(a1 + 112) |= 0x80u, !v10) )
    {
      *(_BYTE *)(v2 + a1 + 114) = 1;
    }
  }
  sub_140224100(a1);
  sub_1402B0820((__int64)CurrentPrcb, 0, 1, 2, CurrentIrql);
  return v7;
}
