/*
 * XREFs of SmpGetVolumeDescriptorForPath @ 0x140017130
 * Callers:
 *     SmpCreateWorkingSetSwapPagingFile @ 0x14000A930 (SmpCreateWorkingSetSwapPagingFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpGetVolumeDescriptorForPath(unsigned __int16 *a1, __int64 **a2)
{
  int v2; // r9d
  __int64 v3; // r8
  WCHAR v5; // r10
  __int64 v6; // r11
  WCHAR v7; // ax
  __int64 *v8; // rcx
  __int64 *v9; // rdx

  v2 = *a1;
  v3 = 0LL;
  v5 = 63;
  if ( *a1 )
  {
    v6 = *((_QWORD *)a1 + 1);
    do
    {
      if ( *(_WORD *)(v6 + 2 * v3) == 58 )
        break;
      v5 = *(_WORD *)(v6 + 2 * v3);
      v3 = (unsigned int)(v3 + 1);
    }
    while ( v2 != (_DWORD)v3 );
    if ( v2 != (_DWORD)v3 )
    {
      v7 = RtlUpcaseUnicodeChar(v5);
      v8 = (__int64 *)SmpVolumeDescriptorList;
      while ( v8 != &SmpVolumeDescriptorList )
      {
        v9 = v8;
        v8 = (__int64 *)*v8;
        if ( *((_WORD *)v9 + 14) == v7 )
        {
          *a2 = v9;
          return 0LL;
        }
      }
    }
  }
  return 3221225524LL;
}
