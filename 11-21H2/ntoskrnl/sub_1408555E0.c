/*
 * XREFs of sub_1408555E0 @ 0x1408555E0
 * Callers:
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x14024AE50 (KeRegisterBugCheckReasonCallback.c)
 *     KeAddTriageDumpDataBlock @ 0x1403D7DF0 (KeAddTriageDumpDataBlock.c)
 *     KeInitializeTriageDumpDataArray @ 0x1403D8040 (KeInitializeTriageDumpDataArray.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void sub_1408555E0()
{
  struct _KTRIAGE_DUMP_DATA_ARRAY *Pool2; // rax
  SIZE_T v1; // r9
  unsigned int v2; // ebx

  if ( !KtriageDumpDataArray )
  {
    Pool2 = (struct _KTRIAGE_DUMP_DATA_ARRAY *)ExAllocatePool2(64LL, 16432LL, 1918136137LL);
    KtriageDumpDataArray = Pool2;
    if ( Pool2 )
    {
      if ( KeInitializeTriageDumpDataArray(Pool2, 0x4030u) < 0 )
        goto LABEL_9;
      if ( dword_140C47500 )
      {
        v2 = 0;
        do
        {
          KeAddTriageDumpDataBlock(
            KtriageDumpDataArray,
            qword_140C47520[2 * v2],
            (PVOID)(_mm_srli_si128(*(__m128i *)&qword_140C47520[2 * v2], 8).m128i_u64[0] - qword_140C47520[2 * v2]),
            v1);
          ++v2;
        }
        while ( v2 < dword_140C47500 );
      }
      stru_140C54E48.State = 0;
      if ( !KeRegisterBugCheckReasonCallback(
              &stru_140C54E48,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)sub_140551D40,
              KbCallbackTriageDumpData,
              (PUCHAR)"IoTriageDumpData") )
      {
LABEL_9:
        if ( KtriageDumpDataArray )
        {
          ExFreePoolWithTag(KtriageDumpDataArray, 0x72546F49u);
          KtriageDumpDataArray = 0LL;
        }
      }
    }
  }
}
