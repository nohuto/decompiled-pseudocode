/*
 * XREFs of sub_14039EE50 @ 0x14039EE50
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140340300 @ 0x140340300 (sub_140340300.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     sub_14035CAD8 @ 0x14035CAD8 (sub_14035CAD8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_14039EE50(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  __int64 *v4; // rbx
  unsigned int v5; // esi
  int v6; // edi
  __int64 *v7; // rcx
  __int64 *v8; // rax
  unsigned int v9; // edx
  __int64 **v10; // rdx
  bool v11; // di
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // rsi
  __int64 v16; // rsi
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v18; // rcx
  struct _KPRCB *v19; // rdi
  char v20; // si
  _QWORD *v21; // rbx
  __int64 v22; // rcx
  int v23; // eax
  int v24; // eax
  int v25; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v26; // [rsp+28h] [rbp-18h] BYREF
  __int128 v27; // [rsp+30h] [rbp-10h] BYREF

  v26 = 0LL;
  v4 = 0LL;
  v27 = 0LL;
  v5 = 0;
  v6 = MEMORY[0xFFFFF78000000320];
  KeAcquireSpinLockAtDpcLevel(&qword_140C2BB58);
  v7 = (__int64 *)qword_140C2BB48;
  while ( v7 != &qword_140C2BB48 )
  {
    v8 = v7;
    v7 = (__int64 *)*v7;
    v9 = v6 - *((_DWORD *)v8 - 2);
    if ( v9 < dword_140D05190 )
    {
      if ( v9 > v5 )
        v5 = v6 - *((_DWORD *)v8 - 2);
    }
    else
    {
      v10 = (__int64 **)v8[1];
      if ( (__int64 *)v7[1] != v8 || *v10 != v8 )
        __fastfail(3u);
      *v10 = v7;
      v7[1] = (__int64)v10;
      *v8 = (__int64)v4;
      v4 = v8;
      v8[1] = 0LL;
      _InterlockedAdd16((volatile signed __int16 *)v8 - 6, 1u);
    }
  }
  v11 = qword_140C2BB48 != (_QWORD)&qword_140C2BB48;
  KeReleaseSpinLockFromDpcLevel(&qword_140C2BB58);
  if ( v11 )
  {
    *((_QWORD *)&v27 + 1) = -1LL;
    KeSetTimer2((__int64)&unk_140C2BA40, -150000LL * (dword_140D05190 - v5), 0LL, (__int64)&v27);
  }
  while ( v4 )
  {
    v15 = v4;
    v4 = (__int64 *)*v4;
    v16 = (__int64)(v15 - 110);
    *(_QWORD *)(v16 + 880) = 1LL;
    CurrentPrcb = KeGetCurrentPrcb();
    v25 = 0;
    while ( 1 )
    {
      v18 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v18 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v23 = *(_DWORD *)(v18 + 24);
          *(_DWORD *)(v18 + 24) = v23 + 1;
          if ( v23 == -1 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v16 + 64), 0LL) )
        break;
      v22 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v22 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v24 = *(_DWORD *)(v22 + 24) - 1;
          *(_DWORD *)(v22 + 24) = v24;
          if ( !v24 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      do
        sub_1402F32E0(&v25, v12, v13, v14);
      while ( *(_QWORD *)(v16 + 64) );
    }
    sub_14035CAD8(v16, (__int64)&v26, v13, v14);
    sub_140224100(v16);
    _InterlockedAdd16((volatile signed __int16 *)(v16 + 868), 0xFFFFu);
  }
  v19 = KeGetCurrentPrcb();
  v20 = 0;
  v21 = v26;
  if ( v26 )
  {
    v26 = (_QWORD *)*v26;
    do
    {
      sub_1403405E0((__int64)v19, (ULONG_PTR)(v21 - 27), (__int64)&v26);
      v21 = v26;
      ++v20;
      if ( v26 )
        v26 = (_QWORD *)*v26;
      if ( (v20 & 0xF) == 0 )
        sub_140340300((unsigned __int8 *)v19 + 12760);
    }
    while ( v21 );
  }
  sub_140340300((unsigned __int8 *)v19 + 12760);
}
