/*
 * XREFs of sub_140528320 @ 0x140528320
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_14051B4F4 @ 0x14051B4F4 (sub_14051B4F4.c)
 *     sub_140529200 @ 0x140529200 (sub_140529200.c)
 */

__int64 __fastcall sub_140528320(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 24) && (v5 = 0LL, (unsigned __int8)sub_140529200(a1, &v5)) )
  {
    v2 = sub_14051B4F4(a1, *(_QWORD *)(a1 + 24));
    if ( v2 >= 0 )
      sub_1403B1B5C(v3, v5);
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return (unsigned int)v2;
}
