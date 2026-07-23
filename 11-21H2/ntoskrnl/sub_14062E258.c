/*
 * XREFs of sub_14062E258 @ 0x14062E258
 * Callers:
 *     sub_14020F360 @ 0x14020F360 (sub_14020F360.c)
 *     sub_1402112F8 @ 0x1402112F8 (sub_1402112F8.c)
 *     sub_140294574 @ 0x140294574 (sub_140294574.c)
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     sub_140340390 @ 0x140340390 (sub_140340390.c)
 * Callees:
 *     sub_140281380 @ 0x140281380 (sub_140281380.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406371D4 @ 0x1406371D4 (sub_1406371D4.c)
 */

__int64 __fastcall sub_14062E258(__int64 a1, char a2, char a3, char a4)
{
  int v5; // edi
  __int64 v6; // rax
  char v7; // dl
  void (__noreturn *v8)(); // rax
  __int64 v9; // rcx
  int v11; // [rsp+30h] [rbp-20h] BYREF
  char v12; // [rsp+34h] [rbp-1Ch]
  char v13; // [rsp+35h] [rbp-1Bh]
  char v14; // [rsp+36h] [rbp-1Ah]
  char v15; // [rsp+37h] [rbp-19h]
  int *v16; // [rsp+38h] [rbp-18h] BYREF
  int v17; // [rsp+40h] [rbp-10h]
  int v18; // [rsp+44h] [rbp-Ch]

  v11 = *(_DWORD *)(a1 + 1232);
  v5 = 5249538;
  v13 = a3;
  v12 = a2;
  v15 = 0;
  v6 = *(_QWORD *)(a1 + 184);
  v14 = ~*(_BYTE *)(a1 + 122) & 2 | KeGetPcr()[36].Unused0[2] & 1;
  v7 = (*(_DWORD *)(v6 + 840) & 7) != 0 ? 4 : 0;
  v8 = *(void (__noreturn **)())(a1 + 1312);
  v14 = (v7 | v14 & 0xFB) ^ ((8 * a4) ^ (v14 | v7)) & 8;
  if ( (a4 & 2) != 0 || v8 == sub_1403C6D20 || (char *)v8 == (char *)sub_140799440 )
  {
    v5 = 5245442;
  }
  else if ( qword_140D05008 != -4572 && (*(_DWORD *)(qword_140D05008 + 4576) & 0x200) != 0 )
  {
    sub_1406371D4(a1);
  }
  v9 = *(_QWORD *)(a1 + 544);
  v18 = 0;
  v16 = &v11;
  v17 = 8;
  return sub_140281380(*(_QWORD *)(v9 + 2160), (int)&v16, 1, 0x20000200u, 1330, v5);
}
