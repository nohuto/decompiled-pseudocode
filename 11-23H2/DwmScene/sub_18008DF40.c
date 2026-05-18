/*
 * XREFs of sub_18008DF40 @ 0x18008DF40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_1800134DC @ 0x1800134DC (sub_1800134DC.c)
 *     sub_18005AF50 @ 0x18005AF50 (sub_18005AF50.c)
 *     sub_180063158 @ 0x180063158 (sub_180063158.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18008DF40(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  v4 = sub_18001246C(&v8, a2);
  sub_18005AF50(a1, v4);
  sub_180063158(&v8, a2);
  v5 = v8;
  sub_1800124F8((__int64 *)(v8 + 1896), (_QWORD *)(a1 + 1896));
  *(_DWORD *)(v5 + 1940) = *(_DWORD *)(a1 + 1940);
  *(_DWORD *)(v5 + 1944) = *(_DWORD *)(a1 + 1944);
  *(_BYTE *)(v5 + 1952) = *(_BYTE *)(a1 + 1952);
  *(_DWORD *)(v5 + 1948) = *(_DWORD *)(a1 + 1948);
  *(_DWORD *)(v5 + 1956) = *(_DWORD *)(a1 + 1956);
  *(_DWORD *)(v5 + 1964) = *(_DWORD *)(a1 + 1964);
  *(_DWORD *)(v5 + 1960) = *(_DWORD *)(a1 + 1960);
  *(_DWORD *)(v5 + 1968) = *(_DWORD *)(a1 + 1968);
  sub_1800134DC((void **)(v5 + 1768), (void **)(a1 + 1768));
  result = (__int64)sub_1800134DC((void **)(v5 + 1848), (void **)(a1 + 1848));
  if ( v9 )
    result = sub_180010530(v9);
  v7 = a2[1];
  if ( v7 )
    return sub_180010530(v7);
  return result;
}
