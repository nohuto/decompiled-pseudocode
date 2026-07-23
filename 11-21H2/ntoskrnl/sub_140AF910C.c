/*
 * XREFs of sub_140AF910C @ 0x140AF910C
 * Callers:
 *     sub_140AF8ED0 @ 0x140AF8ED0 (sub_140AF8ED0.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 *     MmUnmapVideoDisplay @ 0x140215660 (MmUnmapVideoDisplay.c)
 */

__int64 __fastcall sub_140AF910C(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  unsigned int *v5; // rax
  unsigned int v6; // ebx

  v5 = (unsigned int *)MmMapIoSpaceEx(1856LL, 8LL, 4u);
  v6 = 0;
  if ( v5 )
  {
    if ( *(_QWORD *)v5 )
    {
      *a2 = *v5;
      *a3 = v5[1];
    }
    else
    {
      v6 = -1073741823;
    }
    MmUnmapVideoDisplay(v5, 8uLL);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v6;
}
