/*
 * XREFs of sub_1C004BA94 @ 0x1C004BA94
 * Callers:
 *     sub_1C004C82C @ 0x1C004C82C (sub_1C004C82C.c)
 * Callees:
 *     sub_1C0004C64 @ 0x1C0004C64 (sub_1C0004C64.c)
 *     sub_1C0008870 @ 0x1C0008870 (sub_1C0008870.c)
 *     sub_1C0008C44 @ 0x1C0008C44 (sub_1C0008C44.c)
 *     sub_1C0008DB8 @ 0x1C0008DB8 (sub_1C0008DB8.c)
 *     sub_1C0008E14 @ 0x1C0008E14 (sub_1C0008E14.c)
 *     sub_1C003F0C4 @ 0x1C003F0C4 (sub_1C003F0C4.c)
 */

__int64 __fastcall sub_1C004BA94(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v7; // rbp
  __int64 v10; // r15
  char v11; // al
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // r8
  unsigned int v15; // esi

  v5 = *(_QWORD *)(a4 + 16);
  v7 = *(_QWORD *)(a1 + 64);
  v10 = 0LL;
  sub_1C0004C64(v5, a2, 0, 0LL);
  v11 = *(_BYTE *)(v5 + 16);
  *(_QWORD *)(v5 + 104) = 0LL;
  *(_QWORD *)(v5 + 160) = a2;
  *(_BYTE *)(v5 + 16) = v11 & 0xE3 | 4;
  *(_QWORD *)(v5 + 168) = a3;
  *(_QWORD *)(v5 + 216) = v7;
  if ( *(_BYTE *)(a3 + 2) == 40 )
  {
    v10 = a3;
    *(_QWORD *)(v5 + 176) = *(_QWORD *)(a3 + 80);
    *(_QWORD *)(v5 + 184) = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(a3 + 96) = v5;
    *(_QWORD *)(a3 + 80) = a2;
  }
  else
  {
    *(_QWORD *)(v5 + 176) = *(_QWORD *)(a3 + 48);
    *(_QWORD *)(v5 + 184) = *(_QWORD *)(a3 + 24);
    *(_QWORD *)(a3 + 48) = v5;
  }
  sub_1C0008870(v7, a3, *(_QWORD *)(a4 + 8));
  *(_QWORD *)(v5 + 656) = a5;
  if ( *(_BYTE *)(v7 + 4306) )
    v13 = sub_1C0008DB8(v7, v5);
  else
    v13 = sub_1C0008E14(v7, (_QWORD *)v5, v12);
  v15 = v13;
  if ( v13 < 0 )
  {
    if ( *(_BYTE *)(a3 + 2) == 40 )
    {
      *(_QWORD *)(v10 + 64) = *(_QWORD *)(v5 + 184);
    }
    else
    {
      *(_QWORD *)(a3 + 48) = *(_QWORD *)(v5 + 176);
      *(_QWORD *)(a3 + 24) = *(_QWORD *)(v5 + 184);
    }
    sub_1C0008C44(v5, 0, v14);
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 4) != 0
      && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      sub_1C003F0C4((__int64)off_1C0093070->AttachedDevice, 0xAu, (__int64)&unk_1C008A080, v7, a2, *(_DWORD *)(a2 + 48));
    }
  }
  return v15;
}
