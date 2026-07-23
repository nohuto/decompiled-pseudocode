/*
 * XREFs of sub_140213A40 @ 0x140213A40
 * Callers:
 *     sub_140213A20 @ 0x140213A20 (sub_140213A20.c)
 *     sub_1403B1D20 @ 0x1403B1D20 (sub_1403B1D20.c)
 *     sub_1403B8380 @ 0x1403B8380 (sub_1403B8380.c)
 *     sub_1403B85D0 @ 0x1403B85D0 (sub_1403B85D0.c)
 *     sub_1403BE664 @ 0x1403BE664 (sub_1403BE664.c)
 *     sub_1403D24A0 @ 0x1403D24A0 (sub_1403D24A0.c)
 *     sub_1403D4880 @ 0x1403D4880 (sub_1403D4880.c)
 *     HalAcpiGetTableEx @ 0x140505310 (HalAcpiGetTableEx.c)
 *     sub_140505330 @ 0x140505330 (sub_140505330.c)
 *     sub_1405053B0 @ 0x1405053B0 (sub_1405053B0.c)
 *     sub_140505430 @ 0x140505430 (sub_140505430.c)
 *     sub_140510760 @ 0x140510760 (sub_140510760.c)
 *     sub_140AF9490 @ 0x140AF9490 (sub_140AF9490.c)
 *     sub_140AF968C @ 0x140AF968C (sub_140AF968C.c)
 *     sub_140AFA228 @ 0x140AFA228 (sub_140AFA228.c)
 *     sub_140AFA274 @ 0x140AFA274 (sub_140AFA274.c)
 *     sub_140AFA320 @ 0x140AFA320 (sub_140AFA320.c)
 *     sub_140AFA7A8 @ 0x140AFA7A8 (sub_140AFA7A8.c)
 *     sub_140B014B0 @ 0x140B014B0 (sub_140B014B0.c)
 *     sub_140B17304 @ 0x140B17304 (sub_140B17304.c)
 *     sub_140B182A0 @ 0x140B182A0 (sub_140B182A0.c)
 *     sub_140B2388C @ 0x140B2388C (sub_140B2388C.c)
 *     sub_140B26CFC @ 0x140B26CFC (sub_140B26CFC.c)
 *     sub_140B27788 @ 0x140B27788 (sub_140B27788.c)
 *     sub_140B2AB30 @ 0x140B2AB30 (sub_140B2AB30.c)
 * Callees:
 *     sub_140213AC0 @ 0x140213AC0 (sub_140213AC0.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_140AF9A94 @ 0x140AF9A94 (sub_140AF9A94.c)
 */

__int64 __fastcall sub_140213A40(__int64 a1, int a2, int a3, int a4)
{
  __int64 v8; // rdi

  if ( a1 )
  {
    if ( (int)sub_140AF9A94() < 0 )
      return 0LL;
  }
  else
  {
    ExAcquireFastMutex(&Mutex);
  }
  v8 = sub_140213AC0(a1, a2, a3, a4);
  if ( !a1 )
    KeReleaseGuardedMutex(&Mutex);
  return v8;
}
