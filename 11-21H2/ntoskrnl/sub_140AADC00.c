/*
 * XREFs of sub_140AADC00 @ 0x140AADC00
 * Callers:
 *     sub_140AADBBC @ 0x140AADBBC (sub_140AADBBC.c)
 * Callees:
 *     sub_1403A7BF0 @ 0x1403A7BF0 (sub_1403A7BF0.c)
 *     sub_1403A7C40 @ 0x1403A7C40 (sub_1403A7C40.c)
 *     sub_1403A8CB4 @ 0x1403A8CB4 (sub_1403A8CB4.c)
 *     sub_1403AA2B8 @ 0x1403AA2B8 (sub_1403AA2B8.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

void sub_140AADC00()
{
  void *v0; // rbx

  if ( (dword_140C0DF90 & 0xC00) != 0xC00 && (dword_140C0DF90 & 0x100000) == 0 )
  {
    if ( qword_140C0DFE0 )
    {
      v0 = (void *)sub_1403AA2B8((unsigned int)dword_140C0DFE8);
      if ( v0 )
      {
        sub_1403A7BF0();
        memmove(v0, qword_140C0DFE0, (unsigned int)dword_140C0DFE8);
        sub_1403A7C40();
        if ( qword_140C0DFD8 )
          sub_1403A8CB4((__int64)v0);
        else
          _InterlockedExchange64((volatile __int64 *)&qword_140C0DFD8, (__int64)v0);
      }
    }
  }
}
