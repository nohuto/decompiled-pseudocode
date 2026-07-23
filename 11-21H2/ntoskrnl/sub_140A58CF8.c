/*
 * XREFs of sub_140A58CF8 @ 0x140A58CF8
 * Callers:
 *     sub_140A580F0 @ 0x140A580F0 (sub_140A580F0.c)
 * Callees:
 *     KeAttachProcess @ 0x140252530 (KeAttachProcess.c)
 *     sub_140291010 @ 0x140291010 (sub_140291010.c)
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     KeInitializeTimer2 @ 0x1403588D0 (KeInitializeTimer2.c)
 *     sub_14035C560 @ 0x14035C560 (sub_14035C560.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140A58F00 @ 0x140A58F00 (sub_140A58F00.c)
 *     sub_140A59068 @ 0x140A59068 (sub_140A59068.c)
 *     sub_140A5B8A4 @ 0x140A5B8A4 (sub_140A5B8A4.c)
 */

__int64 __fastcall sub_140A58CF8(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 CurrentIrql; // cl
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // si
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v13; // rcx
  bool v14; // zf
  struct _KPRCB *v15; // rcx
  __int64 v16; // rdx
  int v18; // eax
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  int v23; // eax
  int v24; // [rsp+60h] [rbp+18h] BYREF

  if ( !a3 )
  {
    *(_DWORD *)(a1 + 13224) = dword_140D05094;
    *(_DWORD *)(a1 + 13232) = dword_140D050C4;
    *(_DWORD *)(a1 + 33108) = dword_140D05098;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v19 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v19 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  _enable();
  KeAttachProcess(PsInitialSystemProcess);
  if ( !a3 )
  {
    qword_140C2BB58 = 0LL;
    qword_140C2BB50 = (__int64)&qword_140C2BB48;
    qword_140C2BB48 = (__int64)&qword_140C2BB48;
    KeInitializeTimer2((__int64)&unk_140C2BA40, (__int64)sub_14039FF50, 0LL, 8LL);
    KeInitializeDpc((PRKDPC)&stru_140C2BAC8, (PKDEFERRED_ROUTINE)sub_14039EE50, 0LL);
    KeInitializeDpc(&stru_140C2BB08, (PKDEFERRED_ROUTINE)sub_14039FE50, 0LL);
    KeInitializeDpc(&stru_140C2B9E0, (PKDEFERRED_ROUTINE)sub_1405777C0, 0LL);
    qword_140C2BB60 = 0LL;
    qword_140C2BA28 = (__int64)&qword_140C2BA20;
    qword_140C2BA20 = (__int64)&qword_140C2BA20;
    stru_140C2B9E0.Importance = 2;
    v18 = sub_140A5B8A4();
    if ( v18 < 0 )
      KeBugCheckEx(0x31u, v18, 0xDuLL, 0LL, 0LL);
  }
  v7 = sub_140A59068(a1);
  if ( v7 < 0 )
    KeBugCheckEx(0x31u, v7, 0xCuLL, 0LL, 0LL);
  v11 = 0;
  _interlockedbittestandset64((volatile signed __int32 *)(*(_QWORD *)(a1 + 192) + 80LL), *(unsigned __int8 *)(a1 + 209));
  _interlockedbittestandset64((volatile signed __int32 *)(*(_QWORD *)(a1 + 192) + 96LL), *(unsigned __int8 *)(a1 + 209));
  CurrentPrcb = KeGetCurrentPrcb();
  v24 = 0;
  while ( 1 )
  {
    v13 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v13 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v20 = *(_DWORD *)(v13 + 24);
        *(_DWORD *)(v13 + 24) = v20 + 1;
        if ( v20 == -1 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      break;
    v21 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v21 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v22 = *(_DWORD *)(v21 + 24) - 1;
        *(_DWORD *)(v21 + 24) = v22;
        if ( !v22 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v24, v8, v9, v10);
    while ( *(_QWORD *)(a1 + 48) );
  }
  v14 = *(_QWORD *)(a1 + 16) == 0LL;
  *(_BYTE *)(a1 + 35) = 1;
  if ( v14 )
  {
    v11 = 1;
    sub_14035C560(a1, 1LL, 1LL, v10);
  }
  sub_140291010(a1, a2, 0LL, v11);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  v15 = KeGetCurrentPrcb();
  v16 = *((_QWORD *)v15 + 4375);
  if ( v16 )
  {
    if ( *((_BYTE *)v15 + 32) <= 1u )
    {
      v23 = *(_DWORD *)(v16 + 24) - 1;
      *(_DWORD *)(v16 + 24) = v23;
      if ( !v23 )
        sub_140418E4C((__int64)v15);
    }
  }
  return sub_140A58F00(a1);
}
