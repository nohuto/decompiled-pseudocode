/*
 * XREFs of sub_140517DCC @ 0x140517DCC
 * Callers:
 *     sub_140A543D8 @ 0x140A543D8 (sub_140A543D8.c)
 * Callees:
 *     KeFindFirstSetRightGroupAffinity @ 0x1402FE230 (KeFindFirstSetRightGroupAffinity.c)
 *     sub_1403D57DC @ 0x1403D57DC (sub_1403D57DC.c)
 *     sub_1403D5B40 @ 0x1403D5B40 (sub_1403D5B40.c)
 *     sub_1403D8A98 @ 0x1403D8A98 (sub_1403D8A98.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A61BB0 @ 0x140A61BB0 (sub_140A61BB0.c)
 */

__int64 __fastcall sub_140517DCC(__int64 a1, int a2, __int128 *a3)
{
  __int128 v6; // xmm0
  unsigned int v7; // ebx
  int v8; // ecx
  __int64 v9; // rdx
  unsigned int v10; // ecx
  __int64 result; // rax
  __int64 v12; // [rsp+30h] [rbp-69h] BYREF
  int FirstSetRightGroupAffinity; // [rsp+38h] [rbp-61h]
  int v14; // [rsp+3Ch] [rbp-5Dh]
  __int128 *v15; // [rsp+40h] [rbp-59h]
  __int128 v16; // [rsp+48h] [rbp-51h] BYREF
  _QWORD v17[12]; // [rsp+60h] [rbp-39h] BYREF

  v14 = 0;
  v12 = 6LL;
  v16 = 0LL;
  memset(v17, 0, 0x58uLL);
  v6 = *a3;
  HIDWORD(v17[0]) = 206;
  LOBYTE(v17[1]) = 12;
  LODWORD(v17[5]) = a2 & 0x3FFFFFFF | v17[5] & 0xC0000000 | 0x40000000;
  *(_OWORD *)&v17[3] = v6;
  FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((__int64)a3);
  v15 = &v16;
  v7 = -1073741637;
  LODWORD(v16) = a2 & 0x3FFFFFFF;
  if ( (*(_DWORD *)(a1 + 472) & 2) == 0 )
    return v7;
  if ( !sub_1403D8A98(1) )
    return v7;
  v8 = *(_DWORD *)(a1 + 376);
  if ( (v8 & 3) == 1 )
    return v7;
  if ( (v8 & 1) != 0 )
    goto LABEL_10;
  if ( a2 == 1073741822 )
  {
    v7 = sub_1403D5B40((__int64)&v12, (__int64)v17, (_QWORD *)(a1 + 496), (_QWORD *)(a1 + 504));
    if ( (v7 & 0x80000000) == 0 )
      goto LABEL_9;
    return v7;
  }
  v9 = *(unsigned int *)(a1 + 488);
  v10 = *(_DWORD *)(a1 + 484);
  HIDWORD(v17[1]) = 0;
  LODWORD(v17[0]) = 3;
  LODWORD(v17[2]) = 1;
  v7 = sub_1403D57DC(v10, v9, 0, 0, (unsigned int *)v17, 1u);
  if ( (v7 & 0x80000000) != 0 )
    return v7;
  *(_DWORD *)(a1 + 500) = HIDWORD(v17[5]);
  *(_DWORD *)(a1 + 496) = v17[6];
  *(_QWORD *)(a1 + 504) = HIDWORD(v17[6]);
LABEL_9:
  *(_DWORD *)(a1 + 376) |= 1u;
LABEL_10:
  result = sub_140A61BB0(a1);
  if ( (int)result >= 0 )
    *(_DWORD *)(a1 + 376) |= 2u;
  return result;
}
