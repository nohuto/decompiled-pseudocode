/*
 * XREFs of sub_14036FB38 @ 0x14036FB38
 * Callers:
 *     sub_14036EEAC @ 0x14036EEAC (sub_14036EEAC.c)
 *     sub_1403C445C @ 0x1403C445C (sub_1403C445C.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     RtlRunOnceInitialize @ 0x1407F3B30 (RtlRunOnceInitialize.c)
 */

void __fastcall sub_14036FB38(_RTL_RUN_ONCE *a1, _RTL_RUN_ONCE *a2)
{
  __int64 v4; // rax
  _RTL_RUN_ONCE *v5; // rdi
  _RTL_RUN_ONCE *v6; // rbx
  __int64 v7; // rdi

  memset(a1, 0, 0x38E0uLL);
  a1->Ptr = &qword_140C5A5C0;
  memset(&a1[2], 0, 0x48uLL);
  a1[6].Ptr = (PVOID)-1LL;
  HIDWORD(a1[8].Ptr) = 16;
  memset(&a1[11], 0, 0x3840uLL);
  memset(&a1[13], 0, 0x50uLL);
  memset(&a1[15], 0, 0x840uLL);
  a1[19].Ptr = (PVOID)-1LL;
  v4 = 255LL;
  HIDWORD(a1[21].Ptr) = 2056;
  v5 = a1 + 282;
  do
  {
    v5[-1].Ptr = 0LL;
    v5[2].Ptr = 0LL;
    v5[3].Ptr = 0LL;
    v5[4].Ptr = 0LL;
    v5->Ptr = 0LL;
    v5[1].Ptr = 0LL;
    v5 += 6;
    --v4;
  }
  while ( v4 );
  v6 = a1 + 1812;
  a1[1819].Ptr = a2->Ptr;
  v7 = 4LL;
  do
  {
    RtlRunOnceInitialize(v6);
    v6 += 2;
    --v7;
  }
  while ( v7 );
}
