/*
 * XREFs of sub_1406FF378 @ 0x1406FF378
 * Callers:
 *     sub_1406F914C @ 0x1406F914C (sub_1406F914C.c)
 *     sub_1406FF0A4 @ 0x1406FF0A4 (sub_1406FF0A4.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406B79C8 @ 0x1406B79C8 (sub_1406B79C8.c)
 *     sub_1409E7718 @ 0x1409E7718 (sub_1409E7718.c)
 */

__int64 __fastcall sub_1406FF378(
        unsigned int a1,
        ULONG_PTR a2,
        ULONG_PTR a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        char a7,
        char a8,
        char a9)
{
  int v13; // edx
  __int64 v14; // r13
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // ebx
  int v19; // r8d
  int v20; // r9d
  int v21; // ecx
  __int64 v22; // [rsp+20h] [rbp-48h]

  if ( a1 < 2 )
  {
    if ( (a7 & 6) == 0 )
      return 0LL;
    v13 = a6 | 0x2000000;
    v14 = *((_QWORD *)KeGetCurrentThread() + 23);
    if ( (a7 & 2) != 0 )
      v13 = a6;
    v15 = v13 | 0x800000;
    if ( (a7 & 8) == 0 )
      v15 = v13;
    v18 = sub_1406B79C8(a2, a3, a4, a5, v15, a8, a9);
    if ( v18 < 0 )
    {
      v17 = (unsigned int)(a1 != 1) + 1;
      dword_140C4F3D0 = (a1 != 1) + 1;
    }
    if ( (a7 & 2) != 0 && v18 < 0 )
    {
      if ( v18 != -1073740760 || (a7 & 9) != 1 )
        return (unsigned int)v18;
      LOBYTE(v19) = a8;
      v22 = a2 + 88;
      v21 = 2;
    }
    else
    {
      if ( (a7 & 4) == 0 )
        return (unsigned int)v18;
      if ( v18 < 0 )
        return 0;
      if ( qword_140C1B8E0 )
      {
        LOBYTE(v16) = a9;
        LOBYTE(v17) = *(_BYTE *)(*(_QWORD *)a3 + 15LL) >> 4;
        if ( (unsigned int)sub_14042A5E0(v17, v16) )
          return (unsigned int)v18;
      }
      LOBYTE(v19) = a9;
      v22 = a2 + 88;
      v21 = 1;
    }
    LOBYTE(v20) = *(_BYTE *)(*(_QWORD *)a3 + 15LL) >> 4;
    sub_1409E7718(v21, v14, v19, v20, v22);
    return (unsigned int)v18;
  }
  return 3221225485LL;
}
