/*
 * XREFs of sub_1405351F0 @ 0x1405351F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A3038 @ 0x1403A3038 (sub_1403A3038.c)
 *     sub_1403A30B4 @ 0x1403A30B4 (sub_1403A30B4.c)
 *     sub_1403A340C @ 0x1403A340C (sub_1403A340C.c)
 *     sub_1403D75CC @ 0x1403D75CC (sub_1403D75CC.c)
 */

__int64 __fastcall sub_1405351F0(__int64 a1)
{
  unsigned __int16 *v2; // rdi
  bool v3; // zf
  int v4; // eax
  char v5; // dl
  int v6; // ecx
  __int64 result; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  v2 = (unsigned __int16 *)sub_1403A30B4(a1, &v8);
  LOBYTE(v4) = sub_1403A340C(a1);
  v3 = *(_BYTE *)(a1 + 142) == 0;
  v4 = (unsigned __int8)v4;
  *(_DWORD *)(a1 + 108) = (unsigned __int8)v4;
  if ( v3 )
  {
    v5 = -4;
    if ( *(_DWORD *)(a1 + 120) != 3 )
      v5 = -2;
    v2 = (unsigned __int16 *)sub_1403D75CC(a1, *(_DWORD *)(a1 + 128) + (((unsigned __int8)v4 >> 3) & *(_DWORD *)&v5));
    v4 = *(_DWORD *)(a1 + 108);
  }
  v6 = 31;
  if ( *(_DWORD *)(a1 + 120) != 3 )
    v6 = 15;
  *(_DWORD *)(a1 + 108) = v4 & v6;
  sub_1403A3038(a1, v2);
  result = 1LL;
  *(_DWORD *)(a1 + 124) += v8 & 3;
  return result;
}
