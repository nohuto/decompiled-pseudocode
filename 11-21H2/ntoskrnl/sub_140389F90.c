/*
 * XREFs of sub_140389F90 @ 0x140389F90
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140252344 @ 0x140252344 (sub_140252344.c)
 *     sub_14038A0CC @ 0x14038A0CC (sub_14038A0CC.c)
 *     sub_14038A10C @ 0x14038A10C (sub_14038A10C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140389F90(unsigned int a1, unsigned int *a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  int v6; // esi
  __int64 v7; // r8
  unsigned int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  __int64 v12; // r8
  __int64 i; // rcx
  __int64 v14; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v18; // r8
  int v19; // eax
  bool v20; // zf
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // [rsp+40h] [rbp+18h] BYREF

  v25 = 0LL;
  v4 = sub_140252344(&qword_140C4D048);
  v6 = sub_14038A10C(a1, v5, &v25);
  if ( v6 < 0 )
  {
    KeReleaseSpinLockFromDpcLevel(&qword_140C4D048);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v18 = *((_QWORD *)CurrentPrcb + 4375);
          v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
          *(_DWORD *)(v18 + 20) &= v19;
          if ( v20 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
    return (unsigned int)v6;
  }
  else
  {
    v7 = v25;
    v8 = *a2;
    v9 = *(unsigned __int8 *)(v25 + 28);
    v10 = HIDWORD(qword_140011A90[v9]);
    if ( *a2 < v10 )
    {
      *a2 = v10;
      v8 = v10;
    }
    v11 = qword_140011A90[v9];
    if ( v8 > v11 )
    {
      *a2 = v11;
      v8 = v11;
    }
    *(_DWORD *)(v7 + 24) = v8;
    KeReleaseSpinLockFromDpcLevel(&qword_140C4D048);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v21 = KeGetCurrentIrql();
        if ( v21 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v21 >= 2u )
        {
          v22 = KeGetCurrentPrcb();
          v23 = *((_QWORD *)v22 + 4375);
          v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v20 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
          *(_DWORD *)(v23 + 20) &= v24;
          if ( v20 )
            sub_140418E4C(v22);
        }
      }
    }
    __writecr8(v4);
    if ( !a1 )
      sub_14038A0CC(*a2, *a2 * (unsigned __int64)*((unsigned int *)KeGetCurrentPrcb() + 17) / 0xA);
    if ( off_140C02520 == &off_1400032A0 )
      v12 = qword_140C4D0A8;
    else
      v12 = qword_140C4D0A8 + 8LL * (unsigned int)(dword_140C4D044 * HIDWORD(KeGetPcr()[1].LockArray));
    for ( i = 0LL; (unsigned int)i < dword_140C4A404; i = (unsigned int)(i + 1) )
    {
      v14 = *(_QWORD *)(v12 + 8 * i);
      if ( *(_DWORD *)(v14 + 32) == a1 && !*(_DWORD *)(v14 + 24) )
        *(_QWORD *)v14 = *a2;
    }
    return 0LL;
  }
}
