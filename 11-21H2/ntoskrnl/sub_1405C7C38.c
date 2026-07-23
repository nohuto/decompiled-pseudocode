/*
 * XREFs of sub_1405C7C38 @ 0x1405C7C38
 * Callers:
 *     sub_1405C8420 @ 0x1405C8420 (sub_1405C8420.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405C7078 @ 0x1405C7078 (sub_1405C7078.c)
 */

__int64 __fastcall sub_1405C7C38(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        char a6)
{
  __int64 v6; // r10
  __int64 result; // rax
  unsigned int v9; // r9d
  __int64 v10; // r8
  unsigned int v11; // eax
  __int64 v12; // r8
  unsigned int v13; // r11d

  v6 = *(_QWORD *)(a1 + 33600);
  if ( *(_DWORD *)(v6 + 36) == 3 && byte_140C095A4 )
    return 4294967294LL;
  v9 = a5;
  v10 = 344LL * a5;
  if ( *(_BYTE *)(v10 + v6 + 1447) )
    return 2147483658LL;
  if ( a2 != -1 && a5 > a2 )
    return 2147483656LL;
  if ( !*(_BYTE *)(v10 + v6 + 1442) && *(_BYTE *)(v6 + 731) )
    return 2147483655LL;
  if ( a6 )
    goto LABEL_19;
  v11 = sub_1405C7078(v10 + v6 + 1400);
  if ( v11 )
    return v11 | 0x100000000LL;
  if ( *(_DWORD *)(v12 + v6 + 1384) > v13 )
    return 2147483650LL;
  if ( *(unsigned int *)(v12 + v6 + 1388) > a4 )
    return 2147483651LL;
LABEL_19:
  result = *(_QWORD *)(v6 + 640);
  if ( result )
    return (unsigned int)sub_14042A5E0(*(_QWORD *)(v6 + 680), v9);
  return result;
}
