/*
 * XREFs of sub_140AD2320 @ 0x140AD2320
 * Callers:
 *     sub_140AD2210 @ 0x140AD2210 (sub_140AD2210.c)
 * Callees:
 *     sub_140ACCDF0 @ 0x140ACCDF0 (sub_140ACCDF0.c)
 */

// positive sp value has been detected, the output may be wrong!
void __spoils<rdx,rcx,r8,r9,r10,r11,xmm0,xmm4,xmm5> sub_140AD2320()
{
  __int64 retaddr; // [rsp+98h] [rbp+0h]
  __int64 v1; // [rsp+A0h] [rbp+8h] BYREF

  retaddr = sub_140ACCDF0(&v1, retaddr);
}
