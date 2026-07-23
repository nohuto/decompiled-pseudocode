/*
 * XREFs of sub_1403C7918 @ 0x1403C7918
 * Callers:
 *     sub_1403C78DC @ 0x1403C78DC (sub_1403C78DC.c)
 *     sub_14053FE50 @ 0x14053FE50 (sub_14053FE50.c)
 * Callees:
 *     sub_14029F5C0 @ 0x14029F5C0 (sub_14029F5C0.c)
 *     sub_140369634 @ 0x140369634 (sub_140369634.c)
 */

int __fastcall sub_1403C7918(volatile signed __int64 *a1, unsigned int a2)
{
  __int64 v2; // r11
  __int64 v3; // r10
  volatile signed __int64 *v4; // r9
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  signed __int64 v7; // rax
  volatile signed __int64 v8; // rtt
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = a2;
  v11 = 0;
  v4 = a1;
  while ( 1 )
  {
    _m_prefetchw((const void *)v4);
    v5 = *v4;
    v6 = *v4 & 1;
    if ( v6 != v3 )
      break;
    if ( !(v5 >> 1) )
      __fastfail(0xEu);
    v8 = *v4;
    v7 = _InterlockedCompareExchange64(v4, v6 | (2 * (v5 >> 1) - 2), v5);
    if ( v8 == v7 )
      return v7;
    sub_14029F5C0(&v11);
  }
  v7 = _InterlockedExchangeAdd64(v4 + 1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( v7 == 1 )
  {
    _InterlockedOr(v10, v2);
    if ( *((_QWORD *)v4 + 2) != v2 )
      LODWORD(v7) = sub_140369634(v4 + 2, 0LL, 0);
  }
  return v7;
}
