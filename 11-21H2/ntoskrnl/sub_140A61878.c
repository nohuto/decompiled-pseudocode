/*
 * XREFs of sub_140A61878 @ 0x140A61878
 * Callers:
 *     sub_1403D57DC @ 0x1403D57DC (sub_1403D57DC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A616F8 @ 0x140A616F8 (sub_140A616F8.c)
 */

__int64 __fastcall sub_140A61878(__int64 a1, __int64 a2, int *a3, char a4, __int64 a5, unsigned int a6)
{
  unsigned int v6; // edi
  __int64 v7; // rbx
  int v8; // r10d
  int v9; // r8d
  __int64 v10; // rcx
  int v11; // r9d
  __int64 v12; // rdx
  int v13; // eax
  __int64 v15; // [rsp+30h] [rbp-40h] BYREF
  __int128 v16; // [rsp+38h] [rbp-38h]
  __int64 v17; // [rsp+48h] [rbp-28h] BYREF
  unsigned int v18; // [rsp+50h] [rbp-20h]
  int v19; // [rsp+54h] [rbp-1Ch]
  int v20; // [rsp+58h] [rbp-18h]
  __int64 v21; // [rsp+5Ch] [rbp-14h]
  int v22; // [rsp+64h] [rbp-Ch]

  v6 = 0;
  v15 = 0LL;
  v16 = 0LL;
  sub_140A616F8(a1, a3, a4, (__int64)&v15);
  v7 = v15;
  v20 = *(_DWORD *)(a5 + 4);
  v19 = 0;
  v21 = 0LL;
  v22 = 0;
  v17 = 0LL;
  v18 = a6;
  v8 = sub_14042A5E0(v15, &v17);
  if ( v8 >= 0 && a6 )
  {
    v9 = HIDWORD(v16);
    v10 = a5 + 52;
    v11 = DWORD2(v16);
    v12 = a5 + 44;
    do
    {
      *(_QWORD *)v12 = 0LL;
      *(_DWORD *)(v12 + 8) = 0;
      v12 += 88LL;
      v13 = v9 + v6;
      *(_DWORD *)(v10 - 4) = v11;
      ++v6;
      *(_DWORD *)v10 = v13;
      *(_QWORD *)(v10 + 12) = v7;
      v10 += 88LL;
    }
    while ( v6 < a6 );
  }
  return (unsigned int)v8;
}
