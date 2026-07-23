/*
 * XREFs of sub_1403BCAD0 @ 0x1403BCAD0
 * Callers:
 *     sub_1403BCA40 @ 0x1403BCA40 (sub_1403BCA40.c)
 * Callees:
 *     sub_1403BE0BC @ 0x1403BE0BC (sub_1403BE0BC.c)
 *     sub_1403BE664 @ 0x1403BE664 (sub_1403BE664.c)
 *     sub_1403BE838 @ 0x1403BE838 (sub_1403BE838.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 sub_1403BCAD0()
{
  __int64 v0; // rax
  __int64 v1; // rbx
  bool v2; // zf
  _QWORD v4[18]; // [rsp+20h] [rbp-69h] BYREF
  _OWORD v5[2]; // [rsp+B0h] [rbp+27h] BYREF

  v0 = sub_1403BE664(1346584902LL);
  v1 = v0;
  if ( v0 && (*(_BYTE *)(v0 + 8) < 5u || (*(_DWORD *)(v0 + 112) & 0x100000) == 0) )
  {
    memset(v4, 0, sizeof(v4));
    v4[0] = 0x9000000001LL;
    memset(v5, 0, sizeof(v5));
    if ( !(unsigned int)sub_1403BE838(v1, v5, v4) )
    {
      v2 = (*(_DWORD *)(v1 + 112) & 0x100) == 0;
      HIDWORD(v4[12]) = 24;
      if ( !v2 )
      {
        LOBYTE(v5[0]) = 1;
        HIDWORD(v4[12]) = 32;
      }
      LODWORD(v4[12]) = 32;
      v4[11] = v5;
      v4[13] = 3579545LL;
      v4[1] = sub_1403DF620;
      HIDWORD(v4[14]) = 2;
      LODWORD(v4[17]) = 1;
      sub_1403BE0BC(v4, 0LL);
    }
  }
  return 0LL;
}
