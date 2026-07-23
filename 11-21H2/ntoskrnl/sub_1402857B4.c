/*
 * XREFs of sub_1402857B4 @ 0x1402857B4
 * Callers:
 *     sub_1402858A0 @ 0x1402858A0 (sub_1402858A0.c)
 *     sub_1403D1490 @ 0x1403D1490 (sub_1403D1490.c)
 * Callees:
 *     sub_140285868 @ 0x140285868 (sub_140285868.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 *__fastcall sub_1402857B4(__int64 a1, char a2)
{
  __int64 *v2; // rbx
  __int64 *v3; // rdx
  int *v4; // r8
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 **v7; // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // rax

  v2 = 0LL;
  if ( a2 )
  {
    v3 = (__int64 *)(a1 + 1168);
    v4 = (int *)(a1 + 1184);
  }
  else
  {
    v3 = &qword_140C49AD0;
    v4 = &dword_140C49AB8;
  }
  v5 = (__int64 *)*v3;
  if ( (__int64 *)*v3 != v3 )
  {
    v6 = *v5;
    v2 = v5 - 2;
    ++dword_140C4E880;
    if ( *(__int64 **)(v6 + 8) != v5 || (v7 = (__int64 **)v5[1], *v7 != v5) )
      __fastfail(3u);
    *v7 = (__int64 *)v6;
    *(_QWORD *)(v6 + 8) = v7;
    if ( !*v4 )
      KeBugCheckEx(0x34u, 0x35DuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    --*v4;
    v8 = v2[4];
    v9 = 0xCCCCCCCCCCCCCCCDuLL * (((__int64)v2 - v8 - 16) >> 3);
    if ( (unsigned int)v9 > *(_DWORD *)(v8 + 8) )
      *(_DWORD *)(v8 + 8) = v9;
    if ( !*v2 )
      sub_140285868(*(unsigned int *)v2[4]);
    v2[1] = -1LL;
  }
  return v2;
}
