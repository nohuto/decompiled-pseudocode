/*
 * XREFs of sub_140AADBBC @ 0x140AADBBC
 * Callers:
 *     sub_1403AA8D8 @ 0x1403AA8D8 (sub_1403AA8D8.c)
 *     sub_140AAB07C @ 0x140AAB07C (sub_140AAB07C.c)
 *     sub_140AAE918 @ 0x140AAE918 (sub_140AAE918.c)
 *     sub_140AAE9F4 @ 0x140AAE9F4 (sub_140AAE9F4.c)
 * Callees:
 *     sub_1403A7BF0 @ 0x1403A7BF0 (sub_1403A7BF0.c)
 *     sub_1403A7C40 @ 0x1403A7C40 (sub_1403A7C40.c)
 *     sub_1403A8CB4 @ 0x1403A8CB4 (sub_1403A8CB4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140AAB7D4 @ 0x140AAB7D4 (sub_140AAB7D4.c)
 *     sub_140AADC00 @ 0x140AADC00 (sub_140AADC00.c)
 */

void __fastcall sub_140AADBBC(int a1)
{
  int v1; // ecx
  void *v2; // rcx
  PVOID v3; // rbx

  if ( a1 )
  {
    v1 = a1 - 1;
    if ( v1 )
    {
      if ( v1 == 1 && (dword_140C0DF90 & 0xC00) != 0xC00 )
      {
        v2 = qword_140C0DFD8;
        if ( qword_140C0DFD8 )
        {
          _InterlockedExchange64((volatile __int64 *)&qword_140C0DFD8, 0LL);
          sub_1403A8CB4((__int64)v2);
        }
        v3 = qword_140C0DFE0;
        if ( qword_140C0DFE0 )
        {
          _InterlockedExchange64((volatile __int64 *)&qword_140C0DFE0, 0LL);
          sub_1403A7BF0();
          ExFreePoolWithTag(v3, 0x4B494742u);
          sub_1403A7C40();
        }
        LODWORD(dword_140C0DFE8) = 0;
      }
    }
    else
    {
      sub_140AAB7D4();
    }
  }
  else
  {
    sub_140AADC00();
  }
}
