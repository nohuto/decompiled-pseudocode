/*
 * XREFs of sub_1C00AEEC4 @ 0x1C00AEEC4
 * Callers:
 *     sub_1C00AD3A8 @ 0x1C00AD3A8 (sub_1C00AD3A8.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C003EC88 @ 0x1C003EC88 (sub_1C003EC88.c)
 *     sub_1C00AEFFC @ 0x1C00AEFFC (sub_1C00AEFFC.c)
 */

__int64 __fastcall sub_1C00AEEC4(__int64 a1, char a2)
{
  __int64 result; // rax
  __int64 v4; // rax
  void *v5; // rdi
  _DWORD Dst[10]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v7; // [rsp+88h] [rbp-20h]
  unsigned int v8; // [rsp+B0h] [rbp+8h] BYREF
  int v9; // [rsp+B8h] [rbp+10h]

  LOBYTE(v9) = a2;
  memset_0(Dst, 0, 0x40uLL);
  v9 = 0;
  if ( (*(_BYTE *)(a1 + 111) & 1) == 0 )
    return 3221225659LL;
  if ( *(_QWORD *)(a1 + 6032) )
    return 0LL;
  v4 = sub_1C0007CF4(64LL, 512LL, 1179476306LL, *(_QWORD *)(a1 + 8));
  v5 = (void *)v4;
  if ( !v4 )
    return 3221225626LL;
  Dst[0] = 10;
  v7 = v7 & 0xFFFFFF00 | 0xD2;
  result = sub_1C00AEFFC(a1, v4, 0, 512, (__int64)Dst);
  v8 = result;
  if ( (int)result < 0 )
  {
    sub_1C003EC88(v9, &v8);
    ExFreePoolWithTag(v5, 0x464D6152u);
    return v8;
  }
  else
  {
    *(_QWORD *)(a1 + 6032) = v5;
  }
  return result;
}
