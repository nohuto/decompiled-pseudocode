/*
 * XREFs of sub_140B313B8 @ 0x140B313B8
 * Callers:
 *     sub_140B02300 @ 0x140B02300 (sub_140B02300.c)
 * Callees:
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140756AD4 @ 0x140756AD4 (sub_140756AD4.c)
 *     sub_140B533E0 @ 0x140B533E0 (sub_140B533E0.c)
 */

bool __fastcall sub_140B313B8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // [rsp+20h] [rbp-69h] BYREF
  __int64 v9; // [rsp+28h] [rbp-61h] BYREF
  _OWORD v10[3]; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v11[14]; // [rsp+60h] [rbp-29h] BYREF

  memset(v10, 0, sizeof(v10));
  v9 = 0LL;
  if ( !byte_140D06888 )
    return 1;
  sub_14030D5C0(qword_140D06A30, 0LL, (__int64)v10, a4);
  v5 = sub_140B533E0(*off_140D3B180[0], &v9);
  if ( v5 >= 0 )
  {
    v5 = sub_140756AD4((struct _KPROCESS *)qword_140D06A30, (__int64)off_140D3B180[0], 0, 0);
    if ( v5 >= 0 )
    {
      v8 = 0LL;
      if ( (int)sub_140B533E0(*off_140D3B1A8, &v8) < 0 )
      {
        v7 = v8;
      }
      else
      {
        v6 = sub_140756AD4((struct _KPROCESS *)qword_140D06A30, (__int64)off_140D3B1A8, 0, 0);
        v7 = v8;
        if ( v6 < 0 )
          v7 = 0LL;
      }
      memset(v11, 0, 0x68uLL);
      v11[1] = v9;
      v11[2] = v7;
      v5 = sub_140358A20(2u, 4, 0, (__int64)v11);
    }
  }
  sub_1402D0930((__int64)v10, 0LL);
  return v5 >= 0;
}
