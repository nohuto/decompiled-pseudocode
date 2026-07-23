/*
 * XREFs of sub_14055EBF8 @ 0x14055EBF8
 * Callers:
 *     sub_140552A60 @ 0x140552A60 (sub_140552A60.c)
 * Callees:
 *     sub_1403C55B0 @ 0x1403C55B0 (sub_1403C55B0.c)
 *     sub_1403DF0B8 @ 0x1403DF0B8 (sub_1403DF0B8.c)
 *     sub_14055E2F4 @ 0x14055E2F4 (sub_14055E2F4.c)
 *     sub_14055EDD4 @ 0x14055EDD4 (sub_14055EDD4.c)
 *     sub_1405F3CD0 @ 0x1405F3CD0 (sub_1405F3CD0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 sub_14055EBF8()
{
  int v1; // ebx

  if ( byte_140D00A88 || !byte_140C0C6B9 )
    return 3221225473LL;
  if ( (unsigned int)(dword_140C4EFD0 - 2) > 1 )
    return 3221225860LL;
  if ( !DWORD1(xmmword_140C4EFD8) || !byte_140D01504 )
    return 3221225488LL;
  if ( qword_140C4F008 )
  {
    sub_1403C55B0(qword_140C4F008);
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
  v1 = sub_1403DF0B8();
  if ( v1 < 0 || (v1 = sub_14055EDD4(), v1 < 0) || (v1 = sub_14055E2F4(), v1 < 0) )
  {
    byte_140C4EFD4 = 0;
    if ( qword_140C4F008 )
    {
      sub_1403C55B0(qword_140C4F008);
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
  else
  {
    byte_140C4EFD4 = 1;
    dword_140C4EFD0 = 2;
    dword_140C4F020 = (DWORD1(xmmword_140C4EFE8) + dword_140C4F000 + 8279) & 0xFFFFF000;
  }
  return (unsigned int)v1;
}
