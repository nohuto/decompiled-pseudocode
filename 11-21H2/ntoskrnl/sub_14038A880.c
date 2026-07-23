/*
 * XREFs of sub_14038A880 @ 0x14038A880
 * Callers:
 *     sub_14038A830 @ 0x14038A830 (sub_14038A830.c)
 *     sub_140A5B810 @ 0x140A5B810 (sub_140A5B810.c)
 * Callees:
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_140373BAC @ 0x140373BAC (sub_140373BAC.c)
 *     sub_14038A914 @ 0x14038A914 (sub_14038A914.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14038A880(__int64 a1, char a2)
{
  __int64 v4; // rax
  __int64 v5; // r11
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 result; // rax
  __int64 v9; // r9
  ULONG_PTR v10; // rbx
  _QWORD v11[6]; // [rsp+20h] [rbp-48h] BYREF

  v4 = sub_1402F5718();
  v6 = 10000000 * v5;
  v7 = v4;
  result = sub_14038A914(a1, v4, 10000000 * v5, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 1176) )
    {
      v10 = *(_QWORD *)(a1 + 1296);
      sub_14030D5C0(v10, 0LL, (__int64)v11, v9);
      sub_140373BAC(v10 + 1664, 0);
      sub_1402D0930((__int64)v11, 0LL);
      return sub_14038A914(a1, v7, v6, 0LL, v11[0], v11[1], v11[2], v11[3], v11[4], v11[5]);
    }
  }
  return result;
}
