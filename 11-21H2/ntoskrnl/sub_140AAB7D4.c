/*
 * XREFs of sub_140AAB7D4 @ 0x140AAB7D4
 * Callers:
 *     sub_140AADBBC @ 0x140AADBBC (sub_140AADBBC.c)
 * Callees:
 *     sub_1403A7BF0 @ 0x1403A7BF0 (sub_1403A7BF0.c)
 *     sub_1403A7C40 @ 0x1403A7C40 (sub_1403A7C40.c)
 *     sub_1403A8CB4 @ 0x1403A8CB4 (sub_1403A8CB4.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void sub_140AAB7D4()
{
  void *v0; // rsi
  void *Pool2; // rax
  void *v2; // rdi

  if ( (dword_140C0DF90 & 0xC00) != 0xC00 )
  {
    v0 = qword_140C0DFD8;
    if ( qword_140C0DFD8 )
    {
      if ( !qword_140C0DFE0 )
      {
        sub_1403A7BF0();
        Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)dword_140C0DFE8, 0x4B494742u);
        v2 = Pool2;
        if ( Pool2 )
        {
          memmove(Pool2, qword_140C0DFD8, (unsigned int)dword_140C0DFE8);
          sub_1403A7C40();
          if ( !qword_140C0DFE0 )
          {
            _InterlockedExchange64((volatile __int64 *)&qword_140C0DFE0, (__int64)v2);
            goto LABEL_7;
          }
          sub_1403A7BF0();
          ExFreePoolWithTag(v2, 0x4B494742u);
        }
        sub_1403A7C40();
        return;
      }
LABEL_7:
      _InterlockedExchange64((volatile __int64 *)&qword_140C0DFD8, 0LL);
      sub_1403A8CB4((__int64)v0);
    }
  }
}
