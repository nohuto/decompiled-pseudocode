/*
 * XREFs of sub_14028C14C @ 0x14028C14C
 * Callers:
 *     sub_14028B330 @ 0x14028B330 (sub_14028B330.c)
 *     sub_14028B8B0 @ 0x14028B8B0 (sub_14028B8B0.c)
 *     sub_14037E554 @ 0x14037E554 (sub_14037E554.c)
 *     sub_140385584 @ 0x140385584 (sub_140385584.c)
 *     sub_14045C0E8 @ 0x14045C0E8 (sub_14045C0E8.c)
 *     sub_14059AAF8 @ 0x14059AAF8 (sub_14059AAF8.c)
 *     sub_14059B62C @ 0x14059B62C (sub_14059B62C.c)
 * Callees:
 *     sub_14023CC50 @ 0x14023CC50 (sub_14023CC50.c)
 *     sub_140282160 @ 0x140282160 (sub_140282160.c)
 *     sub_140313B20 @ 0x140313B20 (sub_140313B20.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 */

__int64 __fastcall sub_14028C14C(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 v4; // rcx
  unsigned int v5; // esi
  char v6; // al
  char v7; // al
  __int64 result; // rax
  int v9; // r8d
  char v10; // dl

  v4 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL));
  if ( (a2 & 1) != 0 )
  {
    v5 = 1;
LABEL_3:
    if ( (a2 & 4) == 0 )
    {
      sub_140326870(BugCheckParameter2);
      *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
    }
    v6 = *(_BYTE *)(BugCheckParameter2 + 34);
    ++*(_WORD *)(BugCheckParameter2 + 32);
    v7 = v6 | 8;
    *(_BYTE *)(BugCheckParameter2 + 34) = v7;
    if ( (a2 & 8) == 0 )
      *(_BYTE *)(BugCheckParameter2 + 34) = v7 & 0xEF;
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0 && (sub_140313B20(BugCheckParameter2) & 0x10) != 0 )
      sub_14023CC50(BugCheckParameter2, 28);
    return v5;
  }
  v9 = (*(_DWORD *)(BugCheckParameter2 + 16) >> 10) & 1;
  v10 = v9 | 2;
  if ( (a2 & 2) == 0 )
    v10 = v9;
  result = sub_140282160(v4, v10);
  v5 = result;
  if ( (_DWORD)result )
    goto LABEL_3;
  return result;
}
