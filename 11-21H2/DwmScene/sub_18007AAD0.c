/*
 * XREFs of sub_18007AAD0 @ 0x18007AAD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002B024 @ 0x18002B024 (sub_18002B024.c)
 *     sub_18005C3E0 @ 0x18005C3E0 (sub_18005C3E0.c)
 *     sub_18005E1C0 @ 0x18005E1C0 (sub_18005E1C0.c)
 */

__int64 __fastcall sub_18007AAD0(__int64 a1, unsigned int a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rcx
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  sub_18005E1C0(*(_QWORD *)(a1 + 112), a2);
  v4 = (__int64 *)(a1 + 192);
  v5 = 4LL;
  do
  {
    v6 = *(v4 - 8);
    if ( v6 )
      sub_18005E1C0(v6, a2);
    if ( *v4 )
      sub_18005C3E0(*v4, a2);
    v4 += 2;
    --v5;
  }
  while ( v5 );
  v8 = a2;
  sub_18002B024((_QWORD *)(a1 + 256), &v8);
  return sub_18002B780(a1, a2);
}
