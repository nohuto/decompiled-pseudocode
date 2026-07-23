/*
 * XREFs of sub_1406E5AA0 @ 0x1406E5AA0
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     sub_1406E5B58 @ 0x1406E5B58 (sub_1406E5B58.c)
 *     sub_1406ED528 @ 0x1406ED528 (sub_1406ED528.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_14085E334 @ 0x14085E334 (sub_14085E334.c)
 *     sub_1409D3E54 @ 0x1409D3E54 (sub_1409D3E54.c)
 *     sub_1409D42F8 @ 0x1409D42F8 (sub_1409D42F8.c)
 *     sub_1409D4698 @ 0x1409D4698 (sub_1409D4698.c)
 *     sub_1409D4BC0 @ 0x1409D4BC0 (sub_1409D4BC0.c)
 *     sub_1409D4E10 @ 0x1409D4E10 (sub_1409D4E10.c)
 *     sub_1409D4FF8 @ 0x1409D4FF8 (sub_1409D4FF8.c)
 *     sub_1409D52C0 @ 0x1409D52C0 (sub_1409D52C0.c)
 *     sub_1409D5408 @ 0x1409D5408 (sub_1409D5408.c)
 */

__int64 __fastcall sub_1406E5AA0(__int64 a1, __int128 *a2, int a3, KPROCESSOR_MODE a4)
{
  __int64 v5; // r8
  __int64 v6; // r9
  __int128 v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  if ( a3 != 24 )
    return 3221225476LL;
  v8 = *a2;
  v9 = *((_QWORD *)a2 + 2);
  if ( (unsigned int)*a2 != 1 )
    return 3221225485LL;
  if ( !SeSinglePrivilegeCheck(stru_140D3CA90, a4) )
    return 3221225506LL;
  if ( SDWORD1(v8) <= 12 )
  {
    switch ( DWORD1(v8) )
    {
      case 0xC:
        LOBYTE(v6) = a4;
        return sub_1409D5408(&unk_140D32200, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
      case 3:
        LOBYTE(v6) = a4;
        return sub_1406ED528(&unk_140D31A00, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
      case 4:
        LOBYTE(v6) = a4;
        return sub_1409D3E54(&unk_140D31A00, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
      case 9:
        LOBYTE(v6) = a4;
        return sub_1409D4BC0(&unk_140D32200, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
      case 0xA:
        LOBYTE(v6) = a4;
        return sub_1409D4E10(&unk_140D32200, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
      case 0xB:
        LOBYTE(v6) = a4;
        return sub_1409D52C0(&unk_140D32200, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
      default:
        return 3221225475LL;
    }
  }
  else
  {
    switch ( DWORD1(v8) )
    {
      case 0x11:
        LOBYTE(v6) = a4;
        return sub_1409D42F8(&unk_140D31A00, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
      case 0x12:
        LOBYTE(v6) = a4;
        return sub_1409D4FF8(&unk_140D32200, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
      case 0x13:
        LOBYTE(v5) = a4;
        return sub_14085E334(*((_QWORD *)&v8 + 1), (unsigned int)v9, v5);
      case 0x14:
        LOBYTE(v5) = a4;
        return sub_1406E5B58(*((_QWORD *)&v8 + 1), (unsigned int)v9, v5);
      case 0x15:
        LOBYTE(v5) = a4;
        return sub_1409D4698(*((_QWORD *)&v8 + 1), (unsigned int)v9, v5);
      default:
        return 3221225475LL;
    }
  }
}
