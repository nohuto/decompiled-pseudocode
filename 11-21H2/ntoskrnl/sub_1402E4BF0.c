/*
 * XREFs of sub_1402E4BF0 @ 0x1402E4BF0
 * Callers:
 *     sub_1403122F0 @ 0x1403122F0 (sub_1403122F0.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     sub_14038EF10 @ 0x14038EF10 (sub_14038EF10.c)
 * Callees:
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 *     sub_1402E4D28 @ 0x1402E4D28 (sub_1402E4D28.c)
 *     sub_1402E4D70 @ 0x1402E4D70 (sub_1402E4D70.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall sub_1402E4BF0(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  ULONG v4; // edi

  v2 = 48 * a1 - 0x220000000000LL;
  if ( (*(_BYTE *)(v2 + 35) & 8) == 0 )
  {
    sub_1402E4D70(48 * a1 - 0x220000000000LL);
    v3 = sub_1402E4D28(a1, 4LL);
    v4 = a1 - qword_140C52CE0;
    *(_QWORD *)(v2 + 16) = v3;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C52D00);
    RtlSetBits(&stru_140C52D08, v4, 1u);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C52D00);
  }
}
