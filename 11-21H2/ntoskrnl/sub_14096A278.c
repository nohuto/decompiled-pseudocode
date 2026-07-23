/*
 * XREFs of sub_14096A278 @ 0x14096A278
 * Callers:
 *     sub_1409DA070 @ 0x1409DA070 (sub_1409DA070.c)
 * Callees:
 *     sub_140319F70 @ 0x140319F70 (sub_140319F70.c)
 *     sub_14031A4F0 @ 0x14031A4F0 (sub_14031A4F0.c)
 *     sub_14031B810 @ 0x14031B810 (sub_14031B810.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140584258 @ 0x140584258 (sub_140584258.c)
 */

__int64 __fastcall sub_14096A278(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 result; // rax
  int v13; // eax
  __int64 v14; // [rsp+48h] [rbp-C0h] BYREF
  int v15; // [rsp+50h] [rbp-B8h]
  __int128 v16; // [rsp+54h] [rbp-B4h]
  int v17; // [rsp+64h] [rbp-A4h]
  unsigned __int64 v18; // [rsp+68h] [rbp-A0h]
  __int64 v19; // [rsp+70h] [rbp-98h]
  _QWORD v20[22]; // [rsp+78h] [rbp-90h] BYREF

  memset(v20, 0, sizeof(v20));
  v17 = 0;
  v8 = (a1 & 0xFFF) + a2 + 4095;
  v16 = 0LL;
  v9 = a1 & 0xFFFFFFFFFFFFF000uLL;
  if ( !(unsigned int)sub_140584258(v11, v10, a3) )
    return 3221225659LL;
  v14 = 0LL;
  v15 = 56;
  v18 = v9;
  v19 = 1LL;
  result = sub_140319F70((__int64)v20, (__int64)&v14, v9, v8 & 0xFFFFFFFFFFFFF000uLL, 1, a4, 3);
  if ( (int)result >= 0 )
  {
    v20[16] = a3;
    v13 = sub_14031B810((__int64)v20);
    return sub_14031A4F0((__int64)v20, v13);
  }
  return result;
}
