/*
 * XREFs of sub_14082481C @ 0x14082481C
 * Callers:
 *     sub_14090A1A0 @ 0x14090A1A0 (sub_14090A1A0.c)
 *     sub_140A54E70 @ 0x140A54E70 (sub_140A54E70.c)
 *     sub_140AF8908 @ 0x140AF8908 (sub_140AF8908.c)
 * Callees:
 *     sub_1403BAE44 @ 0x1403BAE44 (sub_1403BAE44.c)
 *     sub_1403BAEA4 @ 0x1403BAEA4 (sub_1403BAEA4.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14082481C(__int64 a1, __int64 a2)
{
  __int64 v2; // r11
  int v4; // ebx
  _QWORD *v5; // rax
  bool v6; // dl
  bool v7; // zf
  _QWORD v9[5]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v10; // [rsp+48h] [rbp-38h] BYREF
  __int128 v11; // [rsp+58h] [rbp-28h]
  __int128 v12; // [rsp+68h] [rbp-18h]
  __int64 v13; // [rsp+78h] [rbp-8h]

  v13 = 0LL;
  v2 = a2;
  v9[0] = sub_1405181D0;
  v9[1] = MmLockPagableImageSection;
  v9[2] = MmLockPagableImageSection;
  v9[3] = MmLockPagableSectionByHandle;
  v9[4] = MmUnlockPagableImageSection;
  v4 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( !a1 || sub_1403BAEA4() )
  {
    v7 = v2 == 0;
  }
  else
  {
    v5 = sub_1403BAE44((_QWORD *)(a1 + 16));
    v6 = (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x40000000) != 0;
    byte_140C4AB90 = (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x8000000) != 0;
    v7 = v5 == 0LL;
    byte_140C4AB91 = v6;
  }
  if ( v7 || (v4 = sub_14042A5E0(&v10, v9), v4 < 0) )
  {
    qword_140C4ABC0 = 0LL;
    qword_140C4ABC8 = 0LL;
    qword_140C4AB98 = 0LL;
    qword_140C4ABB0 = 0LL;
    qword_140C4ABA0 = 0LL;
    qword_140C4ABE0 = 0LL;
  }
  else
  {
    qword_140C4ABA0 = *((_QWORD *)&v10 + 1);
    qword_140C4ABE0 = (PVOID)v10;
    qword_140C4ABB0 = *((_QWORD *)&v12 + 1);
    qword_140C4ABC8 = *((_QWORD *)&v11 + 1);
    qword_140C4AB98 = v11;
    qword_140C4ABC0 = v12;
  }
  return (unsigned int)v4;
}
