/*
 * XREFs of sub_14036E290 @ 0x14036E290
 * Callers:
 *     sub_14036E174 @ 0x14036E174 (sub_14036E174.c)
 * Callees:
 *     sub_14034D5C0 @ 0x14034D5C0 (sub_14034D5C0.c)
 *     sub_14034ED40 @ 0x14034ED40 (sub_14034ED40.c)
 *     sub_14034F9E0 @ 0x14034F9E0 (sub_14034F9E0.c)
 *     sub_14036E388 @ 0x14036E388 (sub_14036E388.c)
 *     sub_14036E8E0 @ 0x14036E8E0 (sub_14036E8E0.c)
 */

__int64 __fastcall sub_14036E290(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v6; // r12
  unsigned int i; // r14d
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned int v14; // [rsp+58h] [rbp+10h] BYREF

  v14 = 0;
  v6 = a5;
  for ( i = 0; ; i = v14 )
  {
    a3 = sub_14034D5C0(a1, a2, a3, &v14);
    if ( v14 == *(unsigned __int16 *)(a2 + 32) )
    {
      sub_14036E8E0(a1, a2);
      return a2;
    }
    if ( v14 <= i || !(unsigned int)sub_14036E388(a1, a2, a3, a4, v6) )
      break;
  }
  if ( (*(_DWORD *)(a1 + 176) & 1) != 0 && ((a3 + 32) & 0xFFF) != 0 )
  {
    v12 = sub_14034ED40(v11, a2, a3);
    if ( v12 )
      sub_14034F9E0((_RTL_RB_TREE *)a1, a2, v12);
  }
  sub_14034F9E0((_RTL_RB_TREE *)a1, a2, a3);
  return 0LL;
}
