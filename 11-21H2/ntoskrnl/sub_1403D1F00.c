/*
 * XREFs of sub_1403D1F00 @ 0x1403D1F00
 * Callers:
 *     sub_1403D1DE4 @ 0x1403D1DE4 (sub_1403D1DE4.c)
 * Callees:
 *     sub_14029394C @ 0x14029394C (sub_14029394C.c)
 */

unsigned __int64 __fastcall sub_1403D1F00(__int64 *a1)
{
  __int64 *v1; // r9
  __int64 v2; // rbx
  unsigned __int64 v3; // r8
  char v4; // dl
  char v5; // al
  unsigned __int64 result; // rax

  v1 = off_140C03040;
  v2 = *a1;
  v3 = 534LL * dword_140C232CC;
  *((_BYTE *)a1 + 68) = BYTE4(off_140C03040[v3 + 23]);
  v4 = BYTE4(v1[v3 + 24]);
  *((_BYTE *)a1 + 67) = v4;
  v5 = BYTE5(v1[v3 + 24]);
  *((_BYTE *)a1 + 65) = v4;
  *((_BYTE *)a1 + 66) = v5;
  *((_BYTE *)a1 + 64) = v5;
  result = sub_14029394C(LODWORD(v1[v3 + 24]), 0xF4240uLL, qword_140D069F8);
  *(_DWORD *)(v2 + 724) = result;
  return result;
}
