/*
 * XREFs of sub_14070AC28 @ 0x14070AC28
 * Callers:
 *     sub_140701218 @ 0x140701218 (sub_140701218.c)
 *     sub_1407DB734 @ 0x1407DB734 (sub_1407DB734.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1402A0800 (IoSetThreadHardErrorMode.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406C6268 @ 0x1406C6268 (sub_1406C6268.c)
 *     sub_1406F6CA4 @ 0x1406F6CA4 (sub_1406F6CA4.c)
 *     sub_14070AE08 @ 0x14070AE08 (sub_14070AE08.c)
 *     sub_140711DA8 @ 0x140711DA8 (sub_140711DA8.c)
 *     sub_140711E3C @ 0x140711E3C (sub_140711E3C.c)
 *     sub_140712BA0 @ 0x140712BA0 (sub_140712BA0.c)
 *     sub_1407136E8 @ 0x1407136E8 (sub_1407136E8.c)
 *     sub_1409E32A4 @ 0x1409E32A4 (sub_1409E32A4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14070AC28(ULONG_PTR BugCheckParameter1, __int16 a2)
{
  PVOID v4; // rbx
  BOOLEAN v5; // bl
  __int64 v6; // [rsp+30h] [rbp-D0h] BYREF
  PVOID v7; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v9[56]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v10[408]; // [rsp+C0h] [rbp-40h] BYREF

  v7 = 0LL;
  memset(v10, 0, sizeof(v10));
  v6 = 0LL;
  *(_OWORD *)P = 0LL;
  if ( a2 == 770 )
  {
    if ( (xmmword_140D06900[0] & 0xC004) != 0 )
    {
      v5 = IoSetThreadHardErrorMode(0);
      sub_1406F6CA4(BugCheckParameter1, 0LL, (int *)xmmword_140D06900);
      IoSetThreadHardErrorMode(v5);
    }
    if ( (xmmword_140D06900[0] & 8) != 0 )
      sub_1409E32A4(BugCheckParameter1);
  }
  sub_14070AE08(BugCheckParameter1, (__int64)P, (__int64)&v7);
  v4 = v7;
  if ( a2 == 769 && dword_140C043A8 && sub_1402A2000((__int64)&dword_140C043A8, 0x600000000003LL) )
  {
    memset(v9, 0, 0x62uLL);
    sub_1407136E8(BugCheckParameter1, (unsigned int)&v6, (unsigned int)v10, (unsigned int)P, (__int64)v4);
    sub_140711E3C(BugCheckParameter1, v9);
    v9[0] = 0;
    sub_140711DA8(v9);
    if ( !sub_1406C6268(BugCheckParameter1) )
      LOWORD(P[0]) = 0;
    sub_140712BA0(BugCheckParameter1, (unsigned int)v9, 0, (unsigned int)v10, (__int64)&v6, (__int64)P);
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
}
