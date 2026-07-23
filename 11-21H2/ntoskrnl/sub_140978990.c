/*
 * XREFs of sub_140978990 @ 0x140978990
 * Callers:
 *     sub_140814360 @ 0x140814360 (sub_140814360.c)
 * Callees:
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405A6204 @ 0x1405A6204 (sub_1405A6204.c)
 *     sub_1405B2D58 @ 0x1405B2D58 (sub_1405B2D58.c)
 *     sub_1409E9D54 @ 0x1409E9D54 (sub_1409E9D54.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140978990(__int64 a1, unsigned int a2)
{
  __int64 v3; // r14
  _QWORD *v4; // rbx
  unsigned __int64 v5; // r15
  size_t v6; // rsi
  char *v7; // r12
  char *v8; // rbp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdi
  int v12; // ecx
  int v13; // eax
  __int64 v14; // rcx
  _DWORD v16[4]; // [rsp+28h] [rbp-50h]

  v16[0] = 2;
  v16[1] = 3;
  v3 = 0LL;
  v16[2] = 4;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = sub_14026DFC0(0);
  v8 = v7;
  v9 = sub_1405B2D58((__int64)v7);
  if ( v9 <= v10 )
    v11 = 64LL;
  else
    v11 = v9 - v10 + 64;
  do
  {
    if ( v16[v3] == 2 )
    {
      v8 = v7;
    }
    else
    {
      if ( v16[v3] == 3 )
      {
        v12 = 2;
      }
      else
      {
        if ( v16[v3] != 4 )
          goto LABEL_11;
        v12 = 1;
      }
      v8 = sub_14026DFC0(v12);
    }
LABEL_11:
    if ( v5 >= v11 )
    {
      memset(v4, 0, v6);
    }
    else
    {
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
      v6 = 32 * v11 + 16;
      v4 = sub_1402828F0(64, v6, 0x4D777445u);
      if ( !v4 )
        return;
      v5 = v11;
    }
    v13 = sub_1405A6204((__int64)v8, 0, v4, v6);
    v14 = v4[1];
    if ( v13 >= 0 )
    {
      if ( v14 )
        sub_1409E9D54(0LL, a1, a2, v4);
      v3 = (unsigned int)(v3 + 1);
    }
    else
    {
      v11 = v14 + 64;
    }
  }
  while ( (unsigned int)v3 < 3 );
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
}
