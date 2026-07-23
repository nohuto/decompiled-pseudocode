/*
 * XREFs of sub_140A0EB90 @ 0x140A0EB90
 * Callers:
 *     sub_1407E3868 @ 0x1407E3868 (sub_1407E3868.c)
 * Callees:
 *     sub_140704EF8 @ 0x140704EF8 (sub_140704EF8.c)
 */

__int64 __fastcall sub_140A0EB90(ULONG *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int16 v5; // si
  int v6; // eax
  int v7; // r8d
  int v8; // edx

  v4 = *((_QWORD *)KeGetCurrentThread() + 23);
  if ( !*(_QWORD *)(v4 + 1408) )
    return (unsigned int)-1073741637;
  v5 = *(_WORD *)(v4 + 2412);
  if ( !v5 )
    return (unsigned int)-1073741637;
  if ( v5 == 332 )
  {
    v6 = 65537;
    v7 = 716;
    goto LABEL_7;
  }
  if ( v5 != 452 )
    return (unsigned int)-1073741637;
  v6 = 2097153;
  v7 = 416;
LABEL_7:
  a1[12] = v6;
  v8 = sub_140704EF8((__int64)KeGetCurrentThread(), a1 + 12, v7, 0);
  if ( v8 >= 0 )
  {
    if ( v5 == 332 )
    {
      *(_QWORD *)(a2 + 8) = a1[58];
      *(_QWORD *)a2 = a1[61];
      *(_DWORD *)(a2 + 16) = a1[60];
    }
    else
    {
      *(_QWORD *)(a2 + 8) = a1[28];
      *(_QWORD *)a2 = a1[26];
      *(_DWORD *)(a2 + 16) = a1[29];
    }
  }
  return (unsigned int)v8;
}
