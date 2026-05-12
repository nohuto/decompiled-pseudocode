/*
 * XREFs of sub_1C0074540 @ 0x1C0074540
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C00745B0 @ 0x1C00745B0 (sub_1C00745B0.c)
 *     sub_1C0074730 @ 0x1C0074730 (sub_1C0074730.c)
 */

__int64 __fastcall sub_1C0074540(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+38h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 64);
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  result = *(unsigned int *)(a2 + 48);
  if ( (int)result >= 0 )
  {
    result = sub_1C0074730(v3, &v7);
    if ( (int)result >= 0 )
      result = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int128 *))sub_1C00745B0)(v3, a2, a3, &v7);
  }
  *(_DWORD *)(a2 + 48) = result;
  return result;
}
