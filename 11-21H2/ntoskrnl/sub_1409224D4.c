/*
 * XREFs of sub_1409224D4 @ 0x1409224D4
 * Callers:
 *     sub_140677810 @ 0x140677810 (sub_140677810.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14065B900 @ 0x14065B900 (sub_14065B900.c)
 *     sub_14065CB84 @ 0x14065CB84 (sub_14065CB84.c)
 *     sub_14069F024 @ 0x14069F024 (sub_14069F024.c)
 *     sub_14069F1CC @ 0x14069F1CC (sub_14069F1CC.c)
 *     sub_14069F1F4 @ 0x14069F1F4 (sub_14069F1F4.c)
 *     sub_1406D2154 @ 0x1406D2154 (sub_1406D2154.c)
 *     sub_140718B68 @ 0x140718B68 (sub_140718B68.c)
 *     sub_14071BC04 @ 0x14071BC04 (sub_14071BC04.c)
 *     sub_140721CE0 @ 0x140721CE0 (sub_140721CE0.c)
 *     sub_1407C063C @ 0x1407C063C (sub_1407C063C.c)
 *     sub_1407C07F4 @ 0x1407C07F4 (sub_1407C07F4.c)
 *     sub_14091514C @ 0x14091514C (sub_14091514C.c)
 *     sub_140920F1C @ 0x140920F1C (sub_140920F1C.c)
 *     sub_140922984 @ 0x140922984 (sub_140922984.c)
 *     sub_140922B20 @ 0x140922B20 (sub_140922B20.c)
 */

__int64 __fastcall sub_1409224D4(__int64 a1)
{
  __int16 v2; // dx
  __int64 v3; // rdi
  __int16 v4; // dx
  __int64 v5; // r8
  struct _LOOKASIDE_LIST_EX *v6; // r9
  int v7; // ebx
  __int16 v8; // dx
  __int64 v9; // rax
  __int16 v10; // r9
  __int64 v11; // r10
  __int64 v12; // rax
  int v13; // ebx
  unsigned __int8 *v14; // r14
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __m128i v21; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v22; // [rsp+40h] [rbp-C0h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+50h] [rbp-B0h]
  __int16 v24[176]; // [rsp+60h] [rbp-A0h] BYREF

  memset(v24, 0, sizeof(v24));
  v21 = 0LL;
  sub_14069F1F4((char *)v24);
  v2 = *(_WORD *)(a1 + 2);
  v22 = 0LL;
  WORD1(v22) = -1;
  *(_OWORD *)Privileges = 0LL;
  v3 = sub_140721CE0(a1, v2);
  v7 = sub_1407C07F4((__int64)&v22, v4, v5, v6);
  if ( v7 >= 0 )
  {
    v7 = sub_140920F1C((__int64)v24, a1, 0LL, 0LL);
    if ( v7 >= 0 )
    {
      while ( 1 )
      {
        v19 = sub_14065B900(v24);
        v7 = v19;
        if ( v19 < 0 )
          break;
        v8 = *(_WORD *)(v3 + 66);
        if ( v8 >= 0 )
        {
          while ( 1 )
          {
            v9 = sub_14069F1CC((__int64)&v24[4], v8);
            if ( *(_QWORD *)(v9 + 16) )
              break;
            if ( --v8 < 0 )
              goto LABEL_9;
          }
          v11 = v9;
LABEL_9:
          if ( v8 != v10 )
          {
            v12 = *(_QWORD *)(v11 + 16);
            v13 = *(unsigned __int16 *)(v12 + 72);
            v14 = (unsigned __int8 *)(v12 + 76);
            LOBYTE(v12) = *(_BYTE *)(v12 + 2);
            v21.m128i_i64[1] = (__int64)v14;
            v21.m128i_i16[0] = v13;
            v21.m128i_i16[1] = v13;
            if ( (v12 & 0x20) != 0 )
            {
              v15 = sub_14071BC04(v14, v13);
              v16 = sub_14091514C(*(_QWORD *)(v3 + 32), v15 + 37 * *(_DWORD *)(v3 + 16), v3, v14, v13);
            }
            else
            {
              v17 = sub_140718B68(&v21);
              v16 = sub_1406D2154(*(_QWORD *)(v3 + 32), v17 + 37 * *(_DWORD *)(v3 + 16), v3, (__int64)&v21);
            }
            if ( v16 )
            {
              sub_1407C063C((__int64)&v22, v16);
              v18 = sub_140922984(a1, &v22, 0LL);
            }
            else
            {
              v18 = sub_140922B20(a1, &v24[4], 0LL);
            }
            v7 = v18;
            if ( v18 < 0 )
              goto LABEL_21;
            sub_14065CB84((__int64)v24);
          }
        }
      }
      if ( v19 == -2147483622 )
        v7 = 0;
    }
  }
LABEL_21:
  if ( Privileges[1] )
    SeFreePrivileges(Privileges[1]);
  sub_14069F024((__int64)v24);
  return (unsigned int)v7;
}
