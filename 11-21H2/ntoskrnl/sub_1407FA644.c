/*
 * XREFs of sub_1407FA644 @ 0x1407FA644
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_1407FA72C @ 0x1407FA72C (sub_1407FA72C.c)
 *     sub_14085E8F4 @ 0x14085E8F4 (sub_14085E8F4.c)
 *     sub_1409D3EC0 @ 0x1409D3EC0 (sub_1409D3EC0.c)
 *     sub_1409D41CC @ 0x1409D41CC (sub_1409D41CC.c)
 *     sub_1409D43FC @ 0x1409D43FC (sub_1409D43FC.c)
 *     sub_1409D4E80 @ 0x1409D4E80 (sub_1409D4E80.c)
 *     sub_1409D50C0 @ 0x1409D50C0 (sub_1409D50C0.c)
 */

__int64 __fastcall sub_1407FA644(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  KPROCESSOR_MODE PreviousMode; // bl
  int v6; // ecx
  int v8[4]; // [rsp+30h] [rbp-28h]
  int v9[2]; // [rsp+40h] [rbp-18h]

  PreviousMode = a4;
  if ( (_DWORD)a3 != 24 )
    return 3221225476LL;
  *(_OWORD *)v8 = *(_OWORD *)a2;
  *(_QWORD *)v9 = *(_QWORD *)(a2 + 16);
  if ( (unsigned int)*(_OWORD *)a2 != 1 )
    return 3221225485LL;
  if ( v8[1] != 2 && v8[1] != 5 )
  {
    if ( v8[1] > 0x17u || (v6 = 12591360, !_bittest(&v6, v8[1])) )
    {
      if ( !SeSinglePrivilegeCheck(stru_140D3CA90, a4) )
        return 3221225506LL;
    }
  }
  switch ( v8[1] )
  {
    case 2:
      return sub_1409D43FC(0, v8[2], v9[0], a5, PreviousMode);
    case 5:
      return sub_1409D3EC0(&unk_140D31A00, *(_QWORD *)&v8[2], (unsigned int)v9[0], a5, PreviousMode);
    case 8:
      return sub_1409D4E80((unsigned int)&unk_140D32200, v8[2], v9[0], a5, PreviousMode);
    case 13:
      return sub_1409D50C0((unsigned int)&unk_140D32200, v8[2], v9[0], a5, PreviousMode);
    case 15:
      LOBYTE(a4) = PreviousMode;
      return sub_14085E8F4(*(_QWORD *)&v8[2], (unsigned int)v9[0], a5, a4);
    case 22:
      LOBYTE(a4) = PreviousMode;
      return sub_1407FA72C(*(_QWORD *)&v8[2], (unsigned int)v9[0], a5, a4);
    case 23:
      LOBYTE(a3) = PreviousMode;
      return sub_1409D41CC(*(_QWORD *)&v8[2], (unsigned int)v9[0], a3);
    default:
      return 3221225475LL;
  }
}
