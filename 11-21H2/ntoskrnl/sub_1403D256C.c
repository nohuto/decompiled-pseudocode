/*
 * XREFs of sub_1403D256C @ 0x1403D256C
 * Callers:
 *     sub_140A5AA64 @ 0x140A5AA64 (sub_140A5AA64.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1403D2818 @ 0x1403D2818 (sub_1403D2818.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1403D256C(__int64 a1)
{
  unsigned __int64 v2; // rbx
  int v3; // ecx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v6; // r9
  bool v7; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140CF7440);
  if ( !byte_140C54999 )
  {
    qword_140C54970 = (__int64)&unk_140CF7450;
    sub_1403D2818();
    v3 = *(_DWORD *)(a1 + 52);
    qword_140C54A20 = (__int64)sub_1405062C0;
    qword_140C54A58 = (__int64)sub_140908680;
    dword_140C549C0 = v3;
    qword_140C549C8 = 8LL;
    qword_140C549D8 = (__int64)&qword_140C549D0;
    qword_140C549D0 = (__int64)&qword_140C549D0;
    dword_140C54A08 = 275;
    qword_140C54A28 = (__int64)&dword_140C549C0;
    qword_140C54A40 = 0LL;
    qword_140C54A18 = 0LL;
    qword_140C54A60 = (__int64)&dword_140C549C0;
    qword_140C54A48 = 0LL;
    qword_140C549E0 = 0LL;
    dword_140C54A04 = 0;
    word_140C54A00 = 0;
    byte_140C54999 = 1;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140CF7440);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v6 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v7 = ((unsigned int)result & *(_DWORD *)(v6 + 20)) == 0;
        *(_DWORD *)(v6 + 20) &= result;
        if ( v7 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return result;
}
