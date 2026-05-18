/*
 * XREFs of sub_18003F1B0 @ 0x18003F1B0
 * Callers:
 *     sub_18003F1B0 @ 0x18003F1B0 (sub_18003F1B0.c)
 *     sub_180040EEC @ 0x180040EEC (sub_180040EEC.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DA0 @ 0x180011DA0 (sub_180011DA0.c)
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 *     sub_18003F1B0 @ 0x18003F1B0 (sub_18003F1B0.c)
 *     sub_180040204 @ 0x180040204 (sub_180040204.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18003F1B0(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  char result; // al
  __int64 v6; // rdi
  __int64 i; // rbx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  sub_180011DA0(&v8, a2);
  sub_180040204(a1, &v8);
  if ( v9 )
    sub_180010530(v9);
  v4 = *a2;
  result = sub_18003E330(v4);
  v6 = *(_QWORD *)(v4 + 40);
  for ( i = *(_QWORD *)(v4 + 32); i != v6; i += 16LL )
    result = sub_18003F1B0(a1, i);
  return result;
}
