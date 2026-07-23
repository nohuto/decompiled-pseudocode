/*
 * XREFs of sub_14052C880 @ 0x14052C880
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140252344 @ 0x140252344 (sub_140252344.c)
 *     sub_14038A0CC @ 0x14038A0CC (sub_14038A0CC.c)
 *     sub_14038A10C @ 0x14038A10C (sub_14038A10C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14052C880(int a1, int *a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  int v6; // esi
  unsigned __int8 v7; // al
  struct _KPRCB *v8; // r10
  __int64 v9; // r8
  int v10; // eax
  bool v11; // zf
  __int64 v13; // r8
  unsigned int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // r8
  __int64 i; // rcx
  __int64 v24; // rdx
  __int64 v25; // [rsp+40h] [rbp+18h] BYREF

  v25 = 0LL;
  v4 = sub_140252344(&qword_140C4D048);
  v6 = sub_14038A10C(a1, v5, &v25);
  if ( v6 >= 0 )
  {
    v13 = v25;
    v14 = *a2;
    v15 = *(unsigned __int8 *)(v25 + 28);
    v16 = HIDWORD(qword_14003AB58[v15]);
    if ( *a2 < v16 )
    {
      *a2 = v16;
      v14 = v16;
    }
    v17 = qword_14003AB58[v15];
    if ( v14 > v17 )
    {
      *a2 = v17;
      v14 = v17;
    }
    *(_DWORD *)(v13 + 24) = v14;
    KeReleaseSpinLockFromDpcLevel(&qword_140C4D048);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v20 = *((_QWORD *)CurrentPrcb + 4375);
          v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v11 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
          *(_DWORD *)(v20 + 20) &= v21;
          if ( v11 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
    if ( !a1 )
      sub_14038A0CC(*a2, (unsigned int)*a2 * (unsigned __int64)*((unsigned int *)KeGetCurrentPrcb() + 17) / 0xA);
    if ( off_140C02520 == &off_1400032A0 )
      v22 = qword_140C4D0A8;
    else
      v22 = qword_140C4D0A8 + 8LL * (unsigned int)(dword_140C4D044 * HIDWORD(KeGetPcr()[1].LockArray));
    for ( i = 0LL; (unsigned int)i < dword_140C49FE0; i = (unsigned int)(i + 1) )
    {
      v24 = *(_QWORD *)(v22 + 8 * i);
      if ( *(_DWORD *)(v24 + 32) == a1 && !*(_DWORD *)(v24 + 24) )
        *(_QWORD *)v24 = (unsigned int)*a2;
    }
    return 0LL;
  }
  else
  {
    KeReleaseSpinLockFromDpcLevel(&qword_140C4D048);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v7 = KeGetCurrentIrql();
        if ( v7 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v7 >= 2u )
        {
          v8 = KeGetCurrentPrcb();
          v9 = *((_QWORD *)v8 + 4375);
          v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
          *(_DWORD *)(v9 + 20) &= v10;
          if ( v11 )
            sub_140418E4C((__int64)v8);
        }
      }
    }
    __writecr8(v4);
    return (unsigned int)v6;
  }
}
