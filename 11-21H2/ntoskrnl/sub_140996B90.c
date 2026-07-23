/*
 * XREFs of sub_140996B90 @ 0x140996B90
 * Callers:
 *     <none>
 * Callees:
 *     KeCancelTimer2 @ 0x1402D3FB0 (KeCancelTimer2.c)
 *     sub_14036AAC4 @ 0x14036AAC4 (sub_14036AAC4.c)
 *     sub_1405D8880 @ 0x1405D8880 (sub_1405D8880.c)
 *     sub_140998474 @ 0x140998474 (sub_140998474.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_140996B90(int a1)
{
  char v1; // bl
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx

  v1 = a1;
  sub_140A48330(a1);
  sub_1405D8880(v1);
  if ( v1 )
  {
    byte_140C1F8F8 = 1;
    sub_140998474(v2, (unsigned int)_InterlockedExchange(&dword_140D00BC0, 1));
  }
  else
  {
    byte_140C1F8F8 = 0;
    KeCancelTimer2((__int64)&unk_140C1F840);
    _InterlockedExchange(&dword_140D00BC0, 0);
    sub_14036AAC4((__int64)&unk_140C1F8C8, DelayedWorkQueue);
  }
  return sub_140A47CF8(v4, v3);
}
