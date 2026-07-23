/*
 * XREFs of sub_1402A2E8C @ 0x1402A2E8C
 * Callers:
 *     sub_1402A2490 @ 0x1402A2490 (sub_1402A2490.c)
 *     sub_1404173E4 @ 0x1404173E4 (sub_1404173E4.c)
 * Callees:
 *     sub_1402A2EF0 @ 0x1402A2EF0 (sub_1402A2EF0.c)
 *     sub_1402A386C @ 0x1402A386C (sub_1402A386C.c)
 */

__int64 __fastcall sub_1402A2E8C(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  int v5; // r11d
  _OWORD v7[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]
  _QWORD *v9; // [rsp+48h] [rbp-10h]

  v2 = *a1;
  if ( *(__int64 **)(*a1 + 8) != a1 )
    __fastfail(3u);
  *a2 = v2;
  a2[1] = a1;
  *(_QWORD *)(v2 + 8) = a2;
  *a1 = (__int64)a2;
  v4 = a2[3];
  v8 = 0LL;
  v9 = a2;
  memset(v7, 0, sizeof(v7));
  v5 = sub_1402A2EF0(v4, v7);
  if ( v5 < 0 )
    sub_1402A386C(a2);
  return (unsigned int)v5;
}
