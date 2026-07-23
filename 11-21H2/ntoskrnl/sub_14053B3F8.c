/*
 * XREFs of sub_14053B3F8 @ 0x14053B3F8
 * Callers:
 *     sub_1402858A0 @ 0x1402858A0 (sub_1402858A0.c)
 *     sub_140286210 @ 0x140286210 (sub_140286210.c)
 *     sub_1403CBBF0 @ 0x1403CBBF0 (sub_1403CBBF0.c)
 *     sub_14058BEE4 @ 0x14058BEE4 (sub_14058BEE4.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140276728 @ 0x140276728 (sub_140276728.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140363D98 @ 0x140363D98 (sub_140363D98.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14053B55C @ 0x14053B55C (sub_14053B55C.c)
 */

__int64 __fastcall sub_14053B3F8(_QWORD *a1)
{
  unsigned __int8 v1; // si
  KIRQL v2; // al
  __int64 v3; // rbx
  unsigned __int64 v4; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r9
  int v8; // eax
  bool v9; // zf
  _UNKNOWN **v10; // rdi
  __int64 v12; // rcx

  v1 = 0;
  if ( !dword_140C54C60 || !dword_140C4E880 )
    return 0LL;
  if ( a1 )
  {
    v12 = a1[1];
    if ( v12 )
      return sub_14053B55C(v12, 64LL);
    return 0LL;
  }
  while ( 1 )
  {
    v10 = sub_140363D98(a1);
    if ( !v10 )
      break;
    v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C49B20);
    v3 = (__int64)v10[1];
    v4 = v2;
    if ( v3 && *(_BYTE *)(v3 + 1230) < 2u )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v3 + 1232)) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
      v3 = 0LL;
    }
    KeReleaseSpinLockFromDpcLevel(&qword_140C49B20);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v7 = *((_QWORD *)CurrentPrcb + 4375);
          v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
          *(_DWORD *)(v7 + 20) &= v8;
          if ( v9 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
    if ( v3 )
    {
      v1 |= sub_14053B55C(v3, 64LL);
      sub_140276728(v3);
    }
    a1 = v10;
  }
  return v1;
}
