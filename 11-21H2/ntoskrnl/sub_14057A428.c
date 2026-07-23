/*
 * XREFs of sub_14057A428 @ 0x14057A428
 * Callers:
 *     sub_140294110 @ 0x140294110 (sub_140294110.c)
 *     KeClockInterruptNotify @ 0x140305780 (KeClockInterruptNotify.c)
 *     sub_140308240 @ 0x140308240 (sub_140308240.c)
 *     sub_140579CD4 @ 0x140579CD4 (sub_140579CD4.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     sub_1403542B8 @ 0x1403542B8 (sub_1403542B8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14057A5A8 @ 0x14057A5A8 (sub_14057A5A8.c)
 *     sub_1405D0B58 @ 0x1405D0B58 (sub_1405D0B58.c)
 */

char __fastcall sub_14057A428(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // di
  char v5; // si
  __int16 v7; // di
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  struct _KPRCB *v15; // rcx
  __int64 v16; // rdx
  __int16 v18; // [rsp+30h] [rbp-8h]
  int v19; // [rsp+48h] [rbp+10h] BYREF
  LARGE_INTEGER v20; // [rsp+50h] [rbp+18h] BYREF

  v20.QuadPart = 0LL;
  v4 = 0;
  v5 = a2;
  if ( !(_BYTE)a2 )
  {
    v7 = v18;
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    v4 = (v7 & 0x200) != 0;
    v19 = 0;
    while ( 1 )
    {
      v9 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v9 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v10 = *(_DWORD *)(v9 + 24);
          *(_DWORD *)(v9 + 24) = v10 + 1;
          if ( v10 == -1 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&qword_140C2BC60, 0LL) )
        break;
      v11 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v11 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v12 = *(_DWORD *)(v11 + 24) - 1;
          *(_DWORD *)(v11 + 24) = v12;
          if ( !v12 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
      do
        sub_1402F32E0(&v19, a2, a3, a4);
      while ( qword_140C2BC60 );
    }
  }
  LOBYTE(v13) = sub_1403542B8();
  if ( (_BYTE)v13 )
  {
    sub_14057A5A8(3LL);
    if ( a1 == 3 )
      v14 = 0LL;
    else
      v14 = 10000000LL * (unsigned int)dword_140D05174 + KeQueryInterruptTimePrecise(&v20);
    qword_140C2BC58 = v14;
    if ( !stru_140C2B940.DpcData )
      stru_140C2B940.Number = dword_140C2B1C0 + 2048;
    KeInsertQueueDpc(&stru_140C2B940, 0LL, 0LL);
    LOBYTE(v13) = sub_1405D0B58(a1);
  }
  if ( !v5 )
  {
    _InterlockedAnd64(&qword_140C2BC60, 0LL);
    v15 = KeGetCurrentPrcb();
    v16 = *((_QWORD *)v15 + 4375);
    if ( v16 )
    {
      if ( *((_BYTE *)v15 + 32) <= 1u )
      {
        v13 = *(_DWORD *)(v16 + 24) - 1;
        *(_DWORD *)(v16 + 24) = v13;
        if ( !v13 )
          LOBYTE(v13) = sub_140418E4C((__int64)v15);
      }
    }
    if ( v4 )
      _enable();
  }
  return v13;
}
