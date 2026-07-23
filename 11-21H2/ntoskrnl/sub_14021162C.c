/*
 * XREFs of sub_14021162C @ 0x14021162C
 * Callers:
 *     sub_140211410 @ 0x140211410 (sub_140211410.c)
 *     sub_14021158C @ 0x14021158C (sub_14021158C.c)
 * Callees:
 *     sub_140211750 @ 0x140211750 (sub_140211750.c)
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_14021162C(__int64 a1, __int64 a2)
{
  char v2; // bp
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  _QWORD *v8; // rcx
  signed __int64 v9; // rax
  signed __int64 *v10; // rdi
  signed __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  int v16; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *(_DWORD *)(a1 + 436) = MEMORY[0xFFFFF78000000320];
  CurrentPrcb = KeGetCurrentPrcb();
  v16 = 0;
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
    v13 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v13 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v14 = *(_DWORD *)(v13 + 24) - 1;
        *(_DWORD *)(v13 + 24) = v14;
        if ( !v14 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v16);
    while ( *(_QWORD *)(a1 + 64) );
  }
  *(_BYTE *)(a1 + 388) = 9;
  if ( (*(_DWORD *)(a1 + 120) & 0x1000) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xCu);
  sub_140224100(a1);
  v7 = (_QWORD *)(a1 + 216);
  v8 = *(_QWORD **)(a2 + 352);
  if ( *v8 != a2 + 344 )
    __fastfail(3u);
  *v7 = a2 + 344;
  v7[1] = v8;
  *v8 = v7;
  *(_QWORD *)(a2 + 352) = v7;
  LOBYTE(v9) = *(_DWORD *)(a2 + 840) & 7;
  if ( (_BYTE)v9 == 1 )
  {
    _InterlockedXor((volatile signed __int32 *)(a2 + 840), 3u);
    v2 = 1;
  }
  _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
  if ( v2 )
  {
    sub_140211750(a2);
    v10 = (signed __int64 *)(a2 + 360);
    _m_prefetchw(&qword_140C2BBB8);
    v9 = qword_140C2BBB8;
    do
    {
      *v10 = v9;
      v11 = v9;
      v9 = _InterlockedCompareExchange64(&qword_140C2BBB8, (signed __int64)v10, v9);
    }
    while ( v9 != v11 );
    if ( !v9 )
      LOBYTE(v9) = KeSetEvent(&Event, 10, 0);
  }
  return v9;
}
