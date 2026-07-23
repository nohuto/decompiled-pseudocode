/*
 * XREFs of sub_1403D2BFC @ 0x1403D2BFC
 * Callers:
 *     sub_1403990C0 @ 0x1403990C0 (sub_1403990C0.c)
 *     sub_140A5AA64 @ 0x140A5AA64 (sub_140A5AA64.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     sub_1403B37B0 @ 0x1403B37B0 (sub_1403B37B0.c)
 *     sub_1403BAEA4 @ 0x1403BAEA4 (sub_1403BAEA4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char sub_1403D2BFC()
{
  unsigned __int64 v0; // rbx
  int v1; // eax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v3; // r9
  bool v4; // zf

  if ( !sub_1403B37B0() || (LOBYTE(v1) = sub_1403BAEA4(), (_BYTE)v1) )
  {
    v0 = KeAcquireSpinLockRaiseToDpc(&qword_140CF7440);
    if ( byte_140C54999 )
    {
      if ( (byte_140D014B9 || dword_140D014B4 || byte_140D014B8 != (_BYTE)dword_140D014B4) && !byte_140D0158D )
      {
        sub_1402E2D20(
          (unsigned __int64)&qword_140C549C8,
          -10000LL * (unsigned int)dword_140C549C0,
          dword_140C549C0,
          0,
          (__int64)&dword_140C54A08);
        byte_140D0158D = 1;
      }
    }
    else
    {
      byte_140D014B8 = 1;
    }
    KeReleaseSpinLockFromDpcLevel(&qword_140CF7440);
    LOBYTE(v1) = dword_140D06B08;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        LOBYTE(v1) = KeGetCurrentIrql();
        if ( (unsigned __int8)v1 <= 0xFu && (unsigned __int8)v0 <= 0xFu && (unsigned __int8)v1 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v3 = *((_QWORD *)CurrentPrcb + 4375);
          v1 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
          v4 = (v1 & *(_DWORD *)(v3 + 20)) == 0;
          *(_DWORD *)(v3 + 20) &= v1;
          if ( v4 )
            LOBYTE(v1) = sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v0);
  }
  return v1;
}
