/*
 * XREFs of sub_1405777C0 @ 0x1405777C0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402ADD00 @ 0x1402ADD00 (sub_1402ADD00.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140340300 @ 0x140340300 (sub_140340300.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405779D0 @ 0x1405779D0 (sub_1405779D0.c)
 */

void __fastcall sub_1405777C0(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  __int64 *v4; // rbx
  __int64 **v5; // rcx
  __int64 *v6; // rdx
  __int64 **v7; // rax
  __int64 **v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // rsi
  ULONG_PTR v13; // rsi
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  struct _KPRCB *v19; // rbx
  char v20; // si
  _QWORD *v21; // rdi
  signed __int32 v22[8]; // [rsp+0h] [rbp-50h] BYREF
  int v23; // [rsp+20h] [rbp-30h] BYREF
  _QWORD *v24; // [rsp+28h] [rbp-28h] BYREF
  int v25[8]; // [rsp+30h] [rbp-20h] BYREF

  v4 = 0LL;
  KeAcquireSpinLockAtDpcLevel(&qword_140C2BB60);
  v5 = (__int64 **)qword_140C2BA20;
  if ( (__int64 *)qword_140C2BA20 != &qword_140C2BA20 )
  {
    do
    {
      v6 = *v5;
      v7 = v5;
      v5 = (__int64 **)v6;
      v8 = (__int64 **)v7[1];
      if ( (__int64 **)v6[1] != v7 || *v8 != (__int64 *)v7 )
        __fastfail(3u);
      *v8 = v6;
      v6[1] = (__int64)v8;
      v7[1] = 0LL;
      *v7 = v4;
      v4 = (__int64 *)v7;
      _InterlockedAdd16((volatile signed __int16 *)v7 - 70, 1u);
    }
    while ( v6 != &qword_140C2BA20 );
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C2BB60);
  v24 = 0LL;
  while ( v4 )
  {
    v12 = v4;
    v4 = (__int64 *)*v4;
    v13 = (ULONG_PTR)(v12 - 126);
    *(_QWORD *)(v13 + 1008) = 1LL;
    _InterlockedOr(v22, 0);
    CurrentPrcb = KeGetCurrentPrcb();
    v23 = 0;
    while ( 1 )
    {
      v15 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v15 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v16 = *(_DWORD *)(v15 + 24);
          *(_DWORD *)(v15 + 24) = v16 + 1;
          if ( v16 == -1 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v13 + 64), 0LL) )
        break;
      v17 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v17 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v18 = *(_DWORD *)(v17 + 24) - 1;
          *(_DWORD *)(v17 + 24) = v18;
          if ( !v18 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
      do
        sub_1402F32E0(&v23, v9, v10, v11);
      while ( *(_QWORD *)(v13 + 64) );
    }
    if ( (*(_DWORD *)(v13 + 120) & 0x400000) != 0 )
      sub_1405779D0(v13);
    sub_140224100(v13);
    _InterlockedDecrement16((volatile signed __int16 *)(v13 + 868));
  }
  v19 = KeGetCurrentPrcb();
  v20 = 0;
  v21 = v24;
  if ( v24 )
  {
    v24 = (_QWORD *)*v24;
    do
    {
      sub_1403405E0((__int64)v19, (ULONG_PTR)(v21 - 27), (__int64)&v24);
      v21 = v24;
      ++v20;
      if ( v24 )
        v24 = (_QWORD *)*v24;
      if ( (v20 & 0xF) == 0 )
        sub_140340300((unsigned __int8 *)v19 + 12760);
    }
    while ( v21 );
  }
  sub_140340300((unsigned __int8 *)v19 + 12760);
  if ( *((_QWORD *)v19 + 2) && !*((_BYTE *)v19 + 13242) )
  {
    if ( *((_BYTE *)v19 + 32) )
    {
      *((_BYTE *)v19 + 6) = 1;
    }
    else
    {
      v25[0] = 5;
      *(_OWORD *)&v25[1] = 0LL;
      sub_1402ADD00(v25, 0x2Fu);
    }
  }
}
