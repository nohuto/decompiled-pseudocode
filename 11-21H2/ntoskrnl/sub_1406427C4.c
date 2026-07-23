/*
 * XREFs of sub_1406427C4 @ 0x1406427C4
 * Callers:
 *     sub_140A90C80 @ 0x140A90C80 (sub_140A90C80.c)
 * Callees:
 *     sub_140366FB0 @ 0x140366FB0 (sub_140366FB0.c)
 *     sub_14063BC14 @ 0x14063BC14 (sub_14063BC14.c)
 */

__int64 __fastcall sub_1406427C4(unsigned __int64 a1)
{
  int v1; // eax
  int v2; // edx
  ULONG_PTR v3; // r10
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF
  int v6; // [rsp+58h] [rbp+10h] BYREF
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  v7 = 0LL;
  v6 = 0;
  LODWORD(v5) = 0;
  v8 = 0LL;
  if ( (a1 & 0xFFF) != 0 )
    return 16LL * (unsigned __int8)*(_WORD *)(a1 - 14);
  v1 = sub_140366FB0(a1);
  if ( v1 != 32 )
    v2 = v1;
  sub_14063BC14(v3, v2, 0, &v6, (int *)&v5, &v7, (ULONG_PTR *)&v8);
  return v7;
}
