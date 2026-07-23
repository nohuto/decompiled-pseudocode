/*
 * XREFs of sub_140A1B718 @ 0x140A1B718
 * Callers:
 *     sub_1403CC5E8 @ 0x1403CC5E8 (sub_1403CC5E8.c)
 * Callees:
 *     sub_140A1B7E4 @ 0x140A1B7E4 (sub_140A1B7E4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A1B718(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        PVOID *a5,
        _BYTE *a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  int v13; // ebx

  v13 = sub_140A1B7E4(a1, a2, 0, (_DWORD)a5, a10, a11, (__int64)a6);
  if ( v13 >= 0 )
  {
    v13 = sub_140A1B7E4(a1, a3, 0, a8, a10, a11, a9);
    if ( v13 < 0 )
    {
      if ( *a6 )
      {
        *a6 = 0;
        ExFreePoolWithTag(*a5, 0);
      }
    }
  }
  return (unsigned int)v13;
}
