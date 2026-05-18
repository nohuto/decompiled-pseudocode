/*
 * XREFs of sub_18002A8E0 @ 0x18002A8E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002B024 @ 0x18002B024 (sub_18002B024.c)
 *     sub_18005E1C0 @ 0x18005E1C0 (sub_18005E1C0.c)
 */

__int64 __fastcall sub_18002A8E0(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  sub_18002B024(a1 + 120, &v7);
  v4 = *(_QWORD *)(a1 + 136);
  if ( v4 )
    sub_18005E1C0(v4, a2);
  v5 = *(_QWORD *)(a1 + 152);
  if ( v5 )
    sub_18005E1C0(v5, a2);
  return sub_18002B780(a1, a2);
}
