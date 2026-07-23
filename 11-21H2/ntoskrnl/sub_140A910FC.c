/*
 * XREFs of sub_140A910FC @ 0x140A910FC
 * Callers:
 *     sub_140A8B840 @ 0x140A8B840 (sub_140A8B840.c)
 * Callees:
 *     sub_140A819C8 @ 0x140A819C8 (sub_140A819C8.c)
 *     sub_140A89D2C @ 0x140A89D2C (sub_140A89D2C.c)
 *     sub_140A8ACE8 @ 0x140A8ACE8 (sub_140A8ACE8.c)
 */

__int64 __fastcall sub_140A910FC(
        __int16 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int8 *a4,
        __int64 a5,
        unsigned __int64 a6)
{
  unsigned int v6; // ebx
  unsigned __int64 v9; // rcx
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  bool v16; // zf

  v6 = 0;
  if ( (a1 & 0x200) != 0
    && a2 < 2u
    && !*(_QWORD *)(a5 + 216)
    && !sub_140A89D2C(a6)
    && (unsigned int)sub_140A8ACE8(v9)
    && (*(_DWORD *)(a3 + 16) & 0xC0) == 0
    && !*(_BYTE *)(a3 + 65)
    && sub_140A819C8(0, 0x64u) < dword_140C0D8C8 )
  {
    v10 = *a4;
    if ( v10 == 13 )
    {
      v11 = *((_DWORD *)a4 + 6);
    }
    else
    {
      v11 = a4[1];
      v13 = v10 - 12;
      if ( !v13 )
        return v11 != 2;
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 4;
        if ( v15 )
        {
          if ( v15 != 10 )
            return 1;
          v16 = v11 == 2;
        }
        else
        {
          v16 = v11 == 1;
        }
        LOBYTE(v6) = !v16;
        return v6;
      }
    }
    if ( v11 != 589916 && v11 != 589904 )
    {
      if ( (unsigned int)(v11 - 589824) > 0x14 || (v12 = 1118481, !_bittest(&v12, v11 - 589824)) )
      {
        if ( v11 != 590400 )
          return 1;
      }
    }
  }
  return v6;
}
