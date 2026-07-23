/*
 * XREFs of sub_140A9CAB4 @ 0x140A9CAB4
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 *     sub_140A7C248 @ 0x140A7C248 (sub_140A7C248.c)
 * Callees:
 *     sub_140603390 @ 0x140603390 (sub_140603390.c)
 *     sub_1406045C8 @ 0x1406045C8 (sub_1406045C8.c)
 *     sub_140604D28 @ 0x140604D28 (sub_140604D28.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140A82240 @ 0x140A82240 (sub_140A82240.c)
 */

__int64 sub_140A9CAB4()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( byte_140C1AD98 || (dword_140C1AA7C & 0x800) != 0 )
  {
    sub_1406045C8();
    if ( qword_140C1ACB0 )
    {
      ExFreePoolWithTag(qword_140C1ACB0, 0x6D4D7644u);
      qword_140C1ACB0 = 0LL;
    }
    sub_140603390();
    byte_140C1AD98 = 0;
    sub_140604D28(0);
    qword_140C1AD30 = 0LL;
    qword_140D01450 = 0LL;
    dword_140C29FC0 = 0;
    if ( dword_140C1AD3C )
    {
      sub_140A82240();
      dword_140C1AD3C = 0;
    }
  }
  else
  {
    return (unsigned int)-1073738628;
  }
  return v0;
}
