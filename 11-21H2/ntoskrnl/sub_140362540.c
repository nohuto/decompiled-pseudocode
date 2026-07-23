/*
 * XREFs of sub_140362540 @ 0x140362540
 * Callers:
 *     sub_1403633A0 @ 0x1403633A0 (sub_1403633A0.c)
 * Callees:
 *     sub_1402491D0 @ 0x1402491D0 (sub_1402491D0.c)
 *     sub_140351880 @ 0x140351880 (sub_140351880.c)
 *     sub_1403625F8 @ 0x1403625F8 (sub_1403625F8.c)
 *     sub_14036843C @ 0x14036843C (sub_14036843C.c)
 */

__int64 __fastcall sub_140362540(__int64 a1, int a2, int a3)
{
  int v6; // r9d
  __int64 v7; // rbx
  __int64 v8; // rdi
  int v10; // [rsp+20h] [rbp-38h]
  unsigned int v11; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v13; // [rsp+78h] [rbp+20h] BYREF

  v11 = 0;
  v13 = 0;
  v12 = 0LL;
  if ( (int)sub_1403625F8(a1, a3, (unsigned int)&v12, (unsigned int)&v11, (__int64)&v13) < 0 )
  {
    v7 = v12;
    v8 = 0LL;
  }
  else
  {
    v6 = a2;
    v10 = a2;
    v7 = v12;
    if ( (int)sub_140351880(a1, v12, 0, v6, v10, 1073745920, a3) < 0 )
    {
      v8 = 0LL;
    }
    else
    {
      if ( v11 < v13 )
        sub_1402491D0(a1, v7);
      v8 = v7;
      v7 = 0LL;
    }
  }
  if ( v7 )
    sub_14036843C(a1);
  return v8;
}
