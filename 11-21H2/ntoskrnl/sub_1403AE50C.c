/*
 * XREFs of sub_1403AE50C @ 0x1403AE50C
 * Callers:
 *     sub_140274E94 @ 0x140274E94 (sub_140274E94.c)
 *     sub_1402EEC18 @ 0x1402EEC18 (sub_1402EEC18.c)
 *     sub_1402F5AEC @ 0x1402F5AEC (sub_1402F5AEC.c)
 *     sub_14035D970 @ 0x14035D970 (sub_14035D970.c)
 *     sub_140389670 @ 0x140389670 (sub_140389670.c)
 *     sub_140539A1C @ 0x140539A1C (sub_140539A1C.c)
 * Callees:
 *     sub_140230680 @ 0x140230680 (sub_140230680.c)
 *     sub_14027A1B4 @ 0x14027A1B4 (sub_14027A1B4.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1403AE50C(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v4; // r10
  char v7; // bl
  char v8; // cl
  __int64 v9; // rsi
  unsigned __int8 CurrentIrql; // al
  __int64 v11; // rax
  char v12; // al
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int128 v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+40h] [rbp-20h]
  __int128 *v17; // [rsp+48h] [rbp-18h] BYREF
  int v18; // [rsp+50h] [rbp-10h]
  int v19; // [rsp+54h] [rbp-Ch]

  v4 = *(_QWORD *)(a2 + 152);
  v16 = 0LL;
  v15 = 0LL;
  if ( a1 == v4 + 72 )
  {
    v7 = 1;
  }
  else if ( a1 == v4 + 120 )
  {
    v7 = 7;
  }
  else if ( a1 == v4 + 88 )
  {
    v7 = 2;
  }
  else if ( a1 == v4 + 104 )
  {
    v7 = 3;
  }
  else if ( a1 == *(_QWORD *)(a2 + 136) + 784LL )
  {
    v7 = 4;
  }
  else
  {
    v13 = *(_QWORD *)(v4 + 256);
    if ( a1 == v13 || a1 == v13 + 16 || a1 == v13 + 32 )
      v7 = 5;
    else
      v7 = a1 == 0 ? 6 : 0;
  }
  v8 = *(_BYTE *)(a2 + 128);
  switch ( v8 )
  {
    case 2:
      v9 = *(_QWORD *)(a2 + 16);
      BYTE1(v16) = 2;
      if ( a4 )
      {
        *((_QWORD *)&v15 + 1) = *(_QWORD *)((*(_QWORD *)(v9 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
      }
      else
      {
        v14 = sub_14027A1B4(v9);
        *((_QWORD *)&v15 + 1) = *(_QWORD *)(v14 + 24);
        sub_140230680((signed __int64 *)(v9 + 96), v14, 0x63536343u);
      }
      break;
    case 1:
      v11 = *(_QWORD *)(a2 + 16);
      BYTE1(v16) = 1;
      *((_QWORD *)&v15 + 1) = *(_QWORD *)(v11 + 24);
      break;
    case 3:
      BYTE1(v16) = 3;
      break;
    default:
      v12 = BYTE1(v16);
      if ( v8 == 4 )
        v12 = 4;
      BYTE1(v16) = v12;
      break;
  }
  LOBYTE(v16) = v7;
  *(_QWORD *)&v15 = a2;
  BYTE2(v16) = a3;
  CurrentIrql = KeGetCurrentIrql();
  v19 = 0;
  v18 = 24;
  v17 = &v15;
  if ( CurrentIrql < 2u )
    sub_14035EDE4((__int64)&v17, 1u, 0x80020000, 0x1600u, 0x401902u);
  else
    sub_14035EDE4((__int64)&v17, 1u, 0x80020000, 0x1600u, 0x400102u);
}
