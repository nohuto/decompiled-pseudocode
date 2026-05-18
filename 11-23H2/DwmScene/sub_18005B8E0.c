/*
 * XREFs of sub_18005B8E0 @ 0x18005B8E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_180054CC0 @ 0x180054CC0 (sub_180054CC0.c)
 *     sub_18005D0B8 @ 0x18005D0B8 (sub_18005D0B8.c)
 *     sub_18005D26C @ 0x18005D26C (sub_18005D26C.c)
 */

__int64 __fastcall sub_18005B8E0(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 128) )
  {
    v7 = 0LL;
    sub_18005D26C(a1, &v7);
    v7 = 0LL;
    sub_18005D0B8(a1, &v7);
  }
  v8 = sub_180026650(*a2);
  sub_180054CC0((__int64 *)(a1 + 448), &v8);
  result = (__int64)sub_18001246C(&v7, a2);
  v5 = *(_QWORD *)(result + 8);
  if ( v5 )
    result = sub_180010530(v5);
  v6 = a2[1];
  if ( v6 )
    return sub_180010530(v6);
  return result;
}
