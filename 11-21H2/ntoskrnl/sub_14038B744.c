/*
 * XREFs of sub_14038B744 @ 0x14038B744
 * Callers:
 *     sub_1407FEA60 @ 0x1407FEA60 (sub_1407FEA60.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer2 @ 0x1402D3FB0 (KeCancelTimer2.c)
 *     sub_1402D6004 @ 0x1402D6004 (sub_1402D6004.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14038B744(int a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v4; // r9
  bool v5; // zf

  result = (unsigned int)(a1 - 3);
  if ( (unsigned int)result <= 3 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C22160);
    KeCancelTimer2((__int64)&unk_140C22170);
    byte_140C221F8 = 0;
    sub_1402D6004(0xAu);
    KeReleaseSpinLockFromDpcLevel(&qword_140C22160);
    result = (unsigned int)dword_140D06B08;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v4 = *((_QWORD *)CurrentPrcb + 4375);
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v5 = ((unsigned int)result & *(_DWORD *)(v4 + 20)) == 0;
          *(_DWORD *)(v4 + 20) &= result;
          if ( v5 )
            result = sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
  }
  return result;
}
