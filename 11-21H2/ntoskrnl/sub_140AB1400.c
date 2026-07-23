/*
 * XREFs of sub_140AB1400 @ 0x140AB1400
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_1403A7BF0 @ 0x1403A7BF0 (sub_1403A7BF0.c)
 *     sub_1403A7C40 @ 0x1403A7C40 (sub_1403A7C40.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14064D4AC @ 0x14064D4AC (sub_14064D4AC.c)
 *     sub_140AAB7B4 @ 0x140AAB7B4 (sub_140AAB7B4.c)
 *     sub_140AABA70 @ 0x140AABA70 (sub_140AABA70.c)
 *     sub_140AB17C4 @ 0x140AB17C4 (sub_140AB17C4.c)
 */

void __fastcall sub_140AB1400(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  unsigned __int64 v4; // kr00_8
  unsigned __int64 v5; // rbx
  _BOOL8 v6; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v7[0] = 0LL;
  v4 = sub_14042A5E0(v7, DeferredContext);
  if ( is_mul_ok(v4, 0x3E8uLL) )
  {
    v5 = v4 * (unsigned __int128)0x3E8uLL / v7[0];
    sub_1403A7C40();
    if ( v5 >= qword_140C0E030 )
    {
      if ( byte_140D01570 )
      {
        sub_140AABA70(v6);
        DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v5);
        if ( qword_140C0DFD8 )
        {
          sub_14064D4AC(HIDWORD(qword_140C0E110));
          if ( (int)sub_140AB17C4(qword_140C0DFD8, &qword_140C0DFEC) < 0 )
            sub_14064D4AC(HIDWORD(qword_140C0E110));
        }
      }
      sub_140AAB7B4();
    }
    sub_1403A7BF0();
  }
}
