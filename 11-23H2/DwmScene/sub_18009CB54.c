/*
 * XREFs of sub_18009CB54 @ 0x18009CB54
 * Callers:
 *     sub_18009CB30 @ 0x18009CB30 (sub_18009CB30.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011BA0 @ 0x180011BA0 (sub_180011BA0.c)
 *     sub_1800134DC @ 0x1800134DC (sub_1800134DC.c)
 *     sub_1800161AC @ 0x1800161AC (sub_1800161AC.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_180026618 @ 0x180026618 (sub_180026618.c)
 *     sub_180029824 @ 0x180029824 (sub_180029824.c)
 *     sub_180034870 @ 0x180034870 (sub_180034870.c)
 *     sub_1800502A4 @ 0x1800502A4 (sub_1800502A4.c)
 *     sub_180054950 @ 0x180054950 (sub_180054950.c)
 *     sub_180060148 @ 0x180060148 (sub_180060148.c)
 *     sub_180060CAC @ 0x180060CAC (sub_180060CAC.c)
 */

char __fastcall sub_18009CB54(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 *v7; // rax
  __int64 *v8; // rbx
  __int64 *v9; // rax
  __int64 *v10; // rax
  int v11; // eax
  void **v12; // rdx
  __int64 v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rbx
  void **v16; // rax
  __int64 v17; // rcx
  __int64 v19; // [rsp+20h] [rbp-50h] BYREF
  __int64 v20; // [rsp+28h] [rbp-48h]
  __m128i si128; // [rsp+30h] [rbp-40h] BYREF
  int v22; // [rsp+40h] [rbp-30h]
  int v23; // [rsp+44h] [rbp-2Ch]
  int v24; // [rsp+48h] [rbp-28h]
  __int128 v25; // [rsp+4Ch] [rbp-24h]
  int v26; // [rsp+5Ch] [rbp-14h]
  int v27; // [rsp+60h] [rbp-10h]

  v4 = sub_180026618(a2);
  v5 = sub_180034870(v4);
  v6 = sub_180017648(&si128, (__int64)&unk_1801D7EC8);
  v7 = sub_1800502A4(v5, &v19, v6);
  v8 = (__int64 *)(a1 + 304);
  sub_180011020((_QWORD *)(a1 + 304), v7);
  if ( v20 )
    sub_180010530(v20);
  v9 = (__int64 *)sub_180060CAC(*v8, &v19);
  sub_180011020((_QWORD *)(a1 + 288), v9);
  if ( v20 )
    sub_180010530(v20);
  v10 = sub_180060148(*v8, &v19);
  sub_180011020((_QWORD *)(a1 + 272), v10);
  if ( v20 )
    sub_180010530(v20);
  sub_180011BA0((void **)(a1 + 336), byte_180106082, 0LL);
  v11 = *(_DWORD *)(a1 + 372);
  switch ( v11 )
  {
    case 8:
      v12 = (void **)&unk_1801D8168;
      break;
    case 16:
      v12 = (void **)&unk_1801D8188;
      break;
    case 32:
      v12 = (void **)&unk_1801D81A8;
      break;
    default:
      goto LABEL_14;
  }
  sub_1800134DC((void **)(a1 + 336), v12);
LABEL_14:
  v13 = sub_180026618(a2);
  v14 = sub_1800161AC(v13, &v19);
  sub_180011020((_QWORD *)(a1 + 320), v14);
  if ( v20 )
    sub_180010530(v20);
  v15 = *(_QWORD *)(a1 + 320);
  v16 = (void **)sub_180010DD0(&si128, (__int64)"Image Processing Blur Sampler");
  sub_180029824(v15, v16);
  v22 = 0;
  v26 = 0;
  v17 = *(_QWORD *)(a1 + 320);
  v27 = 2139095039;
  v25 = 0LL;
  v23 = 1;
  v24 = 7;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18019B800);
  return sub_180054950(v17, &si128, 0LL);
}
