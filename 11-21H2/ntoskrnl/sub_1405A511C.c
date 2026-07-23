/*
 * XREFs of sub_1405A511C @ 0x1405A511C
 * Callers:
 *     sub_1405A50AC @ 0x1405A50AC (sub_1405A50AC.c)
 *     sub_1405A5990 @ 0x1405A5990 (sub_1405A5990.c)
 *     sub_1405A5DF0 @ 0x1405A5DF0 (sub_1405A5DF0.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_140277C50 @ 0x140277C50 (sub_140277C50.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_14033C300 @ 0x14033C300 (sub_14033C300.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405A5940 @ 0x1405A5940 (sub_1405A5940.c)
 *     sub_140932068 @ 0x140932068 (sub_140932068.c)
 */

char __fastcall sub_1405A511C(_QWORD *a1, int a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  char *v4; // r12
  __int64 v5; // r9
  signed __int64 v6; // r15
  signed __int64 v7; // rdi
  int v8; // r13d
  __int64 v9; // rsi
  int v10; // edx
  int v11; // eax
  unsigned __int8 CurrentIrql; // bl
  __int64 v13; // r9
  BOOL v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _BOOL8 v18; // rbp
  unsigned __int8 v19; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v21; // r9
  int v22; // eax
  bool v23; // zf
  unsigned __int64 v24; // r8
  struct _KPRCB *v25; // r9
  __int64 v26; // rdx
  signed __int32 v27; // eax
  int v30; // [rsp+78h] [rbp+10h] BYREF
  __int64 v31; // [rsp+80h] [rbp+18h]

  v31 = a3;
  v30 = a2;
  v3 = (unsigned __int64)(a1 + 1);
  v4 = sub_14026DFC0(4);
  LOBYTE(v30) = sub_1402CF4F0((__int64)v4);
  sub_14031DE00((__int64)v4, ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0LL, v5);
  v6 = 48 * (((unsigned __int64)sub_140317A10(v3) >> 12) & 0xFFFFFFFFFFLL);
  v7 = v6 - 0x220000000000LL;
  sub_1405A5940(v3);
  v8 = 0;
  v9 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v6 - 0x220000000000LL + 40) >> 43) & 0x3FFLL));
  *(_QWORD *)(v6 - 0x220000000000LL) = 0LL;
  if ( sub_140317A80(v3) && (unsigned int)sub_140229550() )
    v8 = v10;
  *(_QWORD *)v3 = 0LL;
  if ( v8 )
    sub_1402294F0(v3, 0LL);
  if ( ((v3 >> 9) & 0x7FFFFFFFF8LL) != 0x98000000000LL )
    sub_14020D8D0((__int64)v4, ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  sub_1402B0CE0((__int64)v4, v30);
  if ( v31 )
  {
    if ( (_BYTE)byte_140E01841 )
    {
      v11 = sub_140932068(v31);
      if ( v11 < 0 )
        KeBugCheckEx(0x1Au, 0x3501uLL, (ULONG_PTR)a1, v11, 0LL);
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v13 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v13 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v14 = sub_140277C50(v6 - 0x220000000000LL);
  v30 = 0;
  v18 = !v14;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
      sub_1402F32E0(&v30, v15, v16, v17);
    while ( *(__int64 *)(v7 + 24) < 0 );
  }
  sub_14033C300(v6 - 0x220000000000LL, 0);
  *(_QWORD *)(v7 + 24) &= 0xC000000000000000uLL;
  *(_WORD *)(v7 + 32) = 0;
  sub_1402C6EB0(0xAAAAAAAAAAAAAAABuLL * (v6 >> 4), 2);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v19 = KeGetCurrentIrql();
      if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v21 = *((_QWORD *)CurrentPrcb + 4375);
        v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v23 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
        *(_DWORD *)(v21 + 20) &= v22;
        if ( v23 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v18 )
  {
    v24 = v18;
    if ( (ULONG_PTR *)v9 == &StartContext )
    {
      v25 = KeGetCurrentPrcb();
      v26 = *((int *)v25 + 8615);
      if ( (_DWORD)v26 != -1 )
      {
        if ( (unsigned __int64)(v26 + v18) <= 0x100 )
        {
          do
          {
            v27 = _InterlockedCompareExchange((volatile signed __int32 *)v25 + 8615, v26 + v18, v26);
            v23 = (_DWORD)v26 == v27;
            LODWORD(v26) = v27;
            if ( v23 )
              goto LABEL_38;
          }
          while ( v27 != -1 && (unsigned __int64)(v27 + v18) <= 0x100 );
        }
        if ( (int)v26 > 192
          && (_DWORD)v26 == _InterlockedCompareExchange((volatile signed __int32 *)v25 + 8615, 192, v26) )
        {
          v24 = (int)v26 - 192 + (unsigned __int64)v18;
        }
      }
    }
    if ( v24 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 16960), v24);
LABEL_38:
    sub_14028CE10(v9, v18);
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 17552), 0xFFFFFFFFFFFFFFFFuLL);
  return sub_1402BB6D0((__int64)&unk_140C52FF0, a1, 3u);
}
