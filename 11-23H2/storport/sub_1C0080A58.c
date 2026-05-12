/*
 * XREFs of sub_1C0080A58 @ 0x1C0080A58
 * Callers:
 *     sub_1C007FF28 @ 0x1C007FF28 (sub_1C007FF28.c)
 *     sub_1C00800D4 @ 0x1C00800D4 (sub_1C00800D4.c)
 *     sub_1C0080584 @ 0x1C0080584 (sub_1C0080584.c)
 *     sub_1C0080710 @ 0x1C0080710 (sub_1C0080710.c)
 * Callees:
 *     sub_1C003EE60 @ 0x1C003EE60 (sub_1C003EE60.c)
 */

__int64 __fastcall sub_1C0080A58(__int64 a1, char *a2, int *a3)
{
  __int64 v3; // rbx
  unsigned int v4; // r11d
  unsigned int v5; // r9d
  char v6; // r10
  int v7; // eax

  v3 = *(unsigned int *)(a1 + 12);
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 8);
  v6 = *(_BYTE *)(v3 + *(_QWORD *)a1);
  if ( (unsigned int)v3 < v5 )
  {
    if ( a2 )
      *a2 = v6;
    if ( a3 )
    {
      if ( (unsigned __int8)(v6 + 5) <= 1u )
      {
        *a3 = 2;
        return v4;
      }
      switch ( v6 )
      {
        case -6:
          *a3 = 3;
          return v4;
        case -8:
          *a3 = 4;
          return v4;
        case -16:
          *a3 = 5;
          return v4;
        case -14:
          *a3 = 6;
          return v4;
      }
      if ( v6 < 0 )
      {
        if ( (v6 & 0xC0) == 0x80 )
        {
          if ( (v6 & 0x20) != 0 )
          {
            *a3 = 15;
            return v4;
          }
          v7 = 10 - ((v6 & 0xA) != 0);
        }
        else if ( (v6 & 0xE0) == 0xC0 )
        {
          if ( (v6 & 0x10) != 0 )
          {
            *a3 = 16;
            return v4;
          }
          v7 = 12 - ((v6 & 8) != 0);
        }
        else
        {
          if ( (v6 & 0xFC) != 0xE0 )
          {
            *a3 = (unsigned __int8)(v6 + 28) > 0xBu && (unsigned __int8)(v6 + 12) > 3u && (unsigned __int8)(v6 + 3) > 1u;
            return v4;
          }
          if ( (v6 & 2) != 0 )
          {
            *a3 = 17;
            return v4;
          }
          v7 = 14 - ((v6 & 1) != 0);
        }
      }
      else
      {
        v7 = 8 - ((v6 & 0x40) != 0);
      }
      *a3 = v7;
    }
  }
  else
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
      sub_1C003EE60((__int64)off_1C0093070->AttachedDevice, 0x25u, (__int64)&unk_1C008B728, v5, v3);
    return (unsigned int)-2147483622;
  }
  return v4;
}
