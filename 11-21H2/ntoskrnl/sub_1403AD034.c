/*
 * XREFs of sub_1403AD034 @ 0x1403AD034
 * Callers:
 *     sub_1402F3AD0 @ 0x1402F3AD0 (sub_1402F3AD0.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_140A4FE40 @ 0x140A4FE40 (sub_140A4FE40.c)
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 *     sub_140B1AE4C @ 0x140B1AE4C (sub_140B1AE4C.c)
 * Callees:
 *     sub_14039DA34 @ 0x14039DA34 (sub_14039DA34.c)
 *     sub_14039E48C @ 0x14039E48C (sub_14039E48C.c)
 *     sub_1403A35B8 @ 0x1403A35B8 (sub_1403A35B8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14056F694 @ 0x14056F694 (sub_14056F694.c)
 *     sub_14056F6CC @ 0x14056F6CC (sub_14056F6CC.c)
 */

struct _KTHREAD *__fastcall sub_1403AD034(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // r8
  char v7[8]; // [rsp+20h] [rbp-138h] BYREF
  __int64 v8; // [rsp+28h] [rbp-130h] BYREF
  _BYTE v9[272]; // [rsp+30h] [rbp-128h] BYREF

  v8 = 0LL;
  memset(v9, 0, 0x108uLL);
  v7[0] = 0;
  if ( (dword_140D0689C & 0x800000) == 0 || (dword_140D0689C & 2) == 0 && !(unsigned __int8)sub_14056F694(a1) )
    return sub_1403A35B8(a1, v2, v3, v4);
  sub_14039E48C(a1, (unsigned __int64 *)&v8, v7);
  sub_14056F6CC(v9);
  LOBYTE(v6) = v7[0];
  return (struct _KTHREAD *)sub_14039DA34(v8, (__int64)v9, v6);
}
