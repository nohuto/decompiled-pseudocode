/*
 * XREFs of sub_14054CBD0 @ 0x14054CBD0
 * Callers:
 *     sub_14054CD1C @ 0x14054CD1C (sub_14054CD1C.c)
 * Callees:
 *     HvlInvokeFastExtendedHypercall @ 0x14039DD80 (HvlInvokeFastExtendedHypercall.c)
 *     sub_14039DE18 @ 0x14039DE18 (sub_14039DE18.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140459C44 @ 0x140459C44 (sub_140459C44.c)
 *     sub_14054C8F0 @ 0x14054C8F0 (sub_14054C8F0.c)
 */

void __fastcall sub_14054CBD0(__int64 *a1, __int64 a2, char a3, char a4, unsigned int a5, unsigned __int64 *a6, int a7)
{
  __int64 v9; // rdx
  int v10; // eax
  int v11; // edi
  __int64 v12; // [rsp+30h] [rbp-98h]
  __int64 v13; // [rsp+40h] [rbp-88h] BYREF
  __int64 v14; // [rsp+48h] [rbp-80h]
  _QWORD v15[12]; // [rsp+50h] [rbp-78h] BYREF

  if ( a4 )
  {
    v9 = a1[1];
    v13 = *a1;
    v14 = v9;
    if ( (dword_140D0688C & 0x2000) == 0 )
      v14 = v9 | 8;
    v10 = sub_14054C8F0(a2, v15, 0x50u);
    v11 = v10 + 32;
    LODWORD(v12) = ((v10 + 7) << 14) & 0x3FE0000 | 0x14;
    HIDWORD(v12) = a7 & 0xFFF;
    sub_14039DE18(a5, a6, (dword_140D0688C & 0x2000) != 0, (__int64 *)((char *)&v13 + (unsigned int)(v10 + 32)));
    LODWORD(v12) = v12 | 0x10000;
    HvlInvokeFastExtendedHypercall(v12, (__int64)&v13, v11 + 8 * a7, 0LL, 0);
  }
  if ( a3 )
    sub_140459C44(a6, a5);
}
