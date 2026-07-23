/*
 * XREFs of sub_140764CE4 @ 0x140764CE4
 * Callers:
 *     sub_1403DB668 @ 0x1403DB668 (sub_1403DB668.c)
 *     ntoskrnl_16 @ 0x140764AE0 (ntoskrnl_16.c)
 *     sub_140764C94 @ 0x140764C94 (sub_140764C94.c)
 *     sub_140827F54 @ 0x140827F54 (sub_140827F54.c)
 *     sub_140946400 @ 0x140946400 (sub_140946400.c)
 *     sub_140947C9C @ 0x140947C9C (sub_140947C9C.c)
 *     sub_14094F920 @ 0x14094F920 (sub_14094F920.c)
 * Callees:
 *     sub_140764D6C @ 0x140764D6C (sub_140764D6C.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_14077572C @ 0x14077572C (sub_14077572C.c)
 */

__int64 __fastcall sub_140764CE4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v6[0] = a2;
  v6[1] = a3;
  sub_14077572C(0LL);
  LODWORD(a1) = sub_140764D6C(a1, v4, v6);
  sub_140775698(0LL);
  return (unsigned int)a1;
}
