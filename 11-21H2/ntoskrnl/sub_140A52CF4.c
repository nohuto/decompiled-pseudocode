/*
 * XREFs of sub_140A52CF4 @ 0x140A52CF4
 * Callers:
 *     sub_1403B60E0 @ 0x1403B60E0 (sub_1403B60E0.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     sub_140A52D84 @ 0x140A52D84 (sub_140A52D84.c)
 */

__int64 __fastcall sub_140A52CF4(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdi

  result = (unsigned int)dword_140C4A780;
  if ( !dword_140C4A780 )
  {
    byte_140C09738 = 1;
    return result;
  }
  byte_140C09738 = 0;
  result = sub_1403B1F04(a1, (unsigned int)dword_140C4A780);
  qword_140C4A788 = result;
  if ( !result )
    goto LABEL_8;
  v2 = 0LL;
  if ( dword_140C4A660 )
  {
    while ( 1 )
    {
      result = MmMapIoSpaceEx(
                 *(_QWORD *)(qword_140C4A7C0 + 24 * v2),
                 *(unsigned int *)(qword_140C4A7C0 + 24 * v2 + 8),
                 0x204u);
      *(_QWORD *)(qword_140C4A7C0 + 24 * v2 + 16) = result;
      if ( !result )
        break;
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= dword_140C4A660 )
        return result;
    }
LABEL_8:
    DbgPrint("HALACPI:  The BIOS's non-volatile data will not be preserved\n");
    byte_140C09738 = 1;
    return sub_140A52D84();
  }
  return result;
}
