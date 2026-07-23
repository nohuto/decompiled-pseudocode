/*
 * XREFs of sub_1405D77A0 @ 0x1405D77A0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     sub_140224C34 @ 0x140224C34 (sub_140224C34.c)
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405D2E34 @ 0x1405D2E34 (sub_1405D2E34.c)
 *     sub_1405D2EE4 @ 0x1405D2EE4 (sub_1405D2EE4.c)
 */

__int64 sub_1405D77A0()
{
  KIRQL i; // al
  __int64 v1; // rcx
  KIRQL v2; // bl
  BOOL v3; // r9d
  bool v4; // di
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r9
  int v8; // eax
  bool v9; // zf
  unsigned __int8 v10; // al
  struct _KPRCB *v11; // r9
  __int64 v12; // r8
  int v13; // eax
  __int64 result; // rax

  for ( i = KeAcquireSpinLockRaiseToDpc(&qword_140C1FB98); ; i = KeAcquireSpinLockRaiseToDpc(&qword_140C1FB98) )
  {
    v2 = i;
    LOBYTE(v1) = -byte_140D068F9;
    v3 = byte_140D068F9 != 0;
    v4 = dword_140C1FB94 == 0;
    if ( byte_140C1FB81 == (dword_140C1FB94 == 0) )
      break;
    if ( dword_140C1FB94 )
      sub_1405D2E34(v1, v3 + 2);
    else
      sub_1405D2EE4(v1, v3 + 2, 0x1E / DesiredTime + 1);
    byte_140C1FB81 = v4;
    KeReleaseSpinLockFromDpcLevel(&qword_140C1FB98);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v2 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v7 = *((_QWORD *)CurrentPrcb + 4375);
          v8 = ~(unsigned __int16)(-1LL << (v2 + 1));
          v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
          *(_DWORD *)(v7 + 20) &= v8;
          if ( v9 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
    sub_140224E90(&qword_140C23EE0);
    sub_140224C34();
    sub_140224C00((__int64 *)&qword_140C23EE0);
  }
  byte_140C1FB80 = 0;
  KeReleaseSpinLockFromDpcLevel(&qword_140C1FB98);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v10 = KeGetCurrentIrql();
      if ( v10 <= 0xFu && v2 <= 0xFu && v10 >= 2u )
      {
        v11 = KeGetCurrentPrcb();
        v12 = *((_QWORD *)v11 + 4375);
        v13 = ~(unsigned __int16)(-1LL << (v2 + 1));
        v9 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
        *(_DWORD *)(v12 + 20) &= v13;
        if ( v9 )
          sub_140418E4C((__int64)v11);
      }
    }
  }
  result = v2;
  __writecr8(v2);
  return result;
}
