/*
 * XREFs of sub_14050EB20 @ 0x14050EB20
 * Callers:
 *     <none>
 * Callees:
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void sub_14050EB20()
{
  __int64 v0; // rax
  __int64 v1; // rdx

  if ( qword_140C4E3E8 )
  {
    ++dword_140C4C698;
    if ( byte_140C4C6A8 )
    {
      v0 = sub_140303720(qword_140C4E3E8);
      sub_14042A5E0(v0, v1);
      qword_140C4C6B8 = 0LL;
      byte_140C4C6A8 = 0;
    }
  }
}
