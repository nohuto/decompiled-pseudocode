/*
 * XREFs of sub_1C00ACFB0 @ 0x1C00ACFB0
 * Callers:
 *     sub_1C003A010 @ 0x1C003A010 (sub_1C003A010.c)
 *     sub_1C00AD678 @ 0x1C00AD678 (sub_1C00AD678.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C003EC88 @ 0x1C003EC88 (sub_1C003EC88.c)
 *     sub_1C00AEFFC @ 0x1C00AEFFC (sub_1C00AEFFC.c)
 */

__int64 __fastcall sub_1C00ACFB0(__int64 *a1, char a2)
{
  void *v4; // rcx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  void *v8; // rdi
  _DWORD Dst[15]; // [rsp+60h] [rbp+17h] BYREF
  __int16 v10; // [rsp+9Ch] [rbp+53h]
  unsigned int v11; // [rsp+C0h] [rbp+77h] BYREF

  memset_0(Dst, 0, 0x40uLL);
  v4 = (void *)a1[746];
  if ( v4 && !a2 )
    return 0LL;
  v6 = a1[71];
  if ( (*(_DWORD *)(v6 + 184) & 0x4000) == 0 || (*(_DWORD *)(v6 + 188) & 2) == 0 )
    return 3221225659LL;
  if ( a2 && v4 )
  {
    ExFreePoolWithTag(v4, 0x464D6152u);
    a1[746] = 0LL;
  }
  v7 = sub_1C0007CF4(64LL, 128LL, 1179476306LL, a1[1]);
  v8 = (void *)v7;
  if ( !v7 )
    return 3221225626LL;
  Dst[10] = 32;
  v10 = 1;
  Dst[0] = Dst[0] & 0xFFFFFF00 | 0xD2;
  result = sub_1C00AEFFC((_DWORD)a1, v7, 0, 128, (__int64)Dst);
  v11 = result;
  if ( (int)result < 0 )
  {
    sub_1C003EC88(0, &v11);
    ExFreePoolWithTag(v8, 0x464D6152u);
    return v11;
  }
  else
  {
    a1[746] = (__int64)v8;
  }
  return result;
}
