/*
 * XREFs of sub_14090A3F0 @ 0x14090A3F0
 * Callers:
 *     sub_140824960 @ 0x140824960 (sub_140824960.c)
 *     sub_14090A1A0 @ 0x14090A1A0 (sub_14090A1A0.c)
 * Callees:
 *     MmReturnChargesToLockPagedPool @ 0x14096CA90 (MmReturnChargesToLockPagedPool.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 sub_14090A3F0()
{
  PVOID v0; // rbx

  qword_140C4ABB8 = 0LL;
  qword_140C4ABE0 = 0LL;
  qword_140C4ABA0 = 0LL;
  qword_140C4AB98 = 0LL;
  qword_140C4ABC8 = 0LL;
  qword_140C4ABC0 = 0LL;
  qword_140C4ABB0 = 0LL;
  v0 = qword_140C4ABD8;
  if ( qword_140C4ABD8 )
  {
    qword_140C4ABD8 = 0LL;
    if ( byte_140C4ABD0 )
    {
      MmReturnChargesToLockPagedPool(v0, (unsigned int)Length);
      byte_140C4ABD0 = 0;
    }
    LODWORD(Length) = 0;
    ExFreePoolWithTag(v0, 0);
  }
  return 0LL;
}
