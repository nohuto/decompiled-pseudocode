/*
 * XREFs of sub_1403B839C @ 0x1403B839C
 * Callers:
 *     sub_140AF71F0 @ 0x140AF71F0 (sub_140AF71F0.c)
 * Callees:
 *     sub_1403C55B0 @ 0x1403C55B0 (sub_1403C55B0.c)
 *     sub_14055E2F4 @ 0x14055E2F4 (sub_14055E2F4.c)
 *     sub_14055EDD4 @ 0x14055EDD4 (sub_14055EDD4.c)
 *     sub_1405F3CD0 @ 0x1405F3CD0 (sub_1405F3CD0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 sub_1403B839C()
{
  int v0; // ebx

  v0 = 0;
  if ( dword_140C4EFD0 == 1 )
  {
    if ( !DWORD1(xmmword_140C4EFD8) )
    {
      byte_140C4EFD4 = 0;
LABEL_4:
      dword_140C4EFD0 = 2;
      goto LABEL_5;
    }
    byte_140C4EFD4 = 1;
    v0 = sub_14055EDD4();
    if ( v0 >= 0 )
    {
      v0 = sub_14055E2F4();
      if ( v0 >= 0 )
      {
        dword_140C4F020 = (DWORD1(xmmword_140C4EFE8) + dword_140C4F000 + 8279) & 0xFFFFF000;
        goto LABEL_4;
      }
    }
  }
LABEL_5:
  switch ( dword_140C4EFD0 )
  {
    case 3:
      v0 = -1073741823;
      break;
    case 2:
      return 0LL;
    case 0:
      return 3221225488LL;
    default:
      if ( v0 < 0 )
      {
        byte_140C4EFD4 = 0;
        if ( qword_140C4F008 )
        {
          sub_1403C55B0();
          qword_140C4F008 = 0LL;
        }
        if ( hKey )
        {
          sub_1405F3CD0();
          hKey = 0LL;
        }
        if ( qword_140C4EFF8 )
        {
          ExFreePoolWithTag(qword_140C4EFF8, 0);
          qword_140C4EFF8 = 0LL;
        }
        if ( *((_QWORD *)&xmmword_140C4EFE8 + 1) )
        {
          ExFreePoolWithTag(*((PVOID *)&xmmword_140C4EFE8 + 1), 0);
          *((_QWORD *)&xmmword_140C4EFE8 + 1) = 0LL;
        }
        if ( *((_QWORD *)&xmmword_140C4EFD8 + 1) )
        {
          ExFreePoolWithTag(*((PVOID *)&xmmword_140C4EFD8 + 1), 0);
          *((_QWORD *)&xmmword_140C4EFD8 + 1) = 0LL;
        }
        dword_140C4EFD0 = 3;
      }
      break;
  }
  return (unsigned int)v0;
}
