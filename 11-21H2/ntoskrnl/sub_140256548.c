/*
 * XREFs of sub_140256548 @ 0x140256548
 * Callers:
 *     sub_14030C260 @ 0x14030C260 (sub_14030C260.c)
 *     sub_14036D62C @ 0x14036D62C (sub_14036D62C.c)
 *     sub_140373BAC @ 0x140373BAC (sub_140373BAC.c)
 *     sub_140583D44 @ 0x140583D44 (sub_140583D44.c)
 *     sub_14059676C @ 0x14059676C (sub_14059676C.c)
 *     sub_14096CF40 @ 0x14096CF40 (sub_14096CF40.c)
 * Callees:
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_14030CF90 @ 0x14030CF90 (sub_14030CF90.c)
 *     sub_140333AA0 @ 0x140333AA0 (sub_140333AA0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140256548(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  int v8; // esi
  __int64 v9; // rcx
  int v10; // eax
  char v11; // al
  __int64 v12; // rdx
  bool v13; // zf
  unsigned int v14; // ebx
  _QWORD v16[22]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v17[24]; // [rsp+D0h] [rbp-30h] BYREF

  memset(v17, 0, sizeof(v17));
  memset(v16, 0, sizeof(v16));
  v8 = 0;
  LODWORD(v17[1]) = sub_140333AA0(a1);
  v16[21] = v17;
  v16[19] = sub_140226E30;
  v16[20] = sub_140250B00;
  v10 = v17[0];
  WORD2(v17[1]) = 4;
  v17[3] = 0LL;
  LODWORD(v17[2]) = 20;
  v17[4] = 0LL;
  LODWORD(v16[0]) = 6;
  v16[3] = a1;
  if ( (a2 & 1) != 0 )
  {
    v10 = LODWORD(v17[0]) | 1;
  }
  else
  {
    if ( (a2 & 2) == 0 )
      goto LABEL_5;
    v10 = LODWORD(v17[0]) | 2;
  }
  LODWORD(v17[0]) = v10;
LABEL_5:
  if ( (a2 & 4) != 0 )
    LODWORD(v17[0]) = v10 | 4;
  v16[4] = a3;
  v16[5] = a4;
  v11 = sub_1402CF4F0(v9);
  v13 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  HIBYTE(v16[0]) = v11;
  if ( v13 && (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1124LL) & 0x20) != 0 )
  {
    v14 = -1073741558;
  }
  else
  {
    if ( (unsigned int)sub_14030CF90(v16) == 5 )
      v8 = -1073741558;
    v14 = v8;
  }
  LOBYTE(v12) = HIBYTE(v16[0]);
  sub_1402B0CE0(a1, v12);
  return v14;
}
