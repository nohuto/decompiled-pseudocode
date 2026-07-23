/*
 * XREFs of sub_140A7FA0C @ 0x140A7FA0C
 * Callers:
 *     sub_140A9A2D0 @ 0x140A9A2D0 (sub_140A9A2D0.c)
 * Callees:
 *     sub_1406022B8 @ 0x1406022B8 (sub_1406022B8.c)
 *     sub_140602358 @ 0x140602358 (sub_140602358.c)
 *     sub_140A81A74 @ 0x140A81A74 (sub_140A81A74.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 *     sub_140AA5DA4 @ 0x140AA5DA4 (sub_140AA5DA4.c)
 */

void __fastcall sub_140A7FA0C(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rbx
  KIRQL v3; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  if ( dword_140C1ADEC )
  {
    if ( (unsigned int)sub_140A81A74(
                         qword_140C1ADF8 + 16LL * (unsigned __int8)(-125 * (BugCheckParameter2 >> 12)),
                         BugCheckParameter2,
                         BugCheckParameter2 + 1) )
    {
      sub_1406022B8(&v3);
      v2 = sub_140AA5DA4(BugCheckParameter2);
      sub_140602358(v3);
      if ( v2 )
      {
        if ( (dword_140C29FC0 & 0x10) != 0 )
          sub_140A8C924(0xC4u, 0x105uLL, BugCheckParameter2, 0LL, 0LL);
      }
    }
  }
}
