/*
 * XREFs of sub_1407BE280 @ 0x1407BE280
 * Callers:
 *     sub_14028DF40 @ 0x14028DF40 (sub_14028DF40.c)
 *     sub_14028E238 @ 0x14028E238 (sub_14028E238.c)
 *     sub_1403199E0 @ 0x1403199E0 (sub_1403199E0.c)
 *     sub_140319F70 @ 0x140319F70 (sub_140319F70.c)
 *     sub_14032C1B0 @ 0x14032C1B0 (sub_14032C1B0.c)
 *     sub_14032D1C0 @ 0x14032D1C0 (sub_14032D1C0.c)
 *     sub_14032EA60 @ 0x14032EA60 (sub_14032EA60.c)
 *     sub_1405845D4 @ 0x1405845D4 (sub_1405845D4.c)
 *     sub_1405A3418 @ 0x1405A3418 (sub_1405A3418.c)
 *     sub_1405A3818 @ 0x1405A3818 (sub_1405A3818.c)
 *     sub_14070A9C0 @ 0x14070A9C0 (sub_14070A9C0.c)
 *     sub_1407BDB60 @ 0x1407BDB60 (sub_1407BDB60.c)
 *     sub_140982DE4 @ 0x140982DE4 (sub_140982DE4.c)
 * Callees:
 *     sub_1402AC010 @ 0x1402AC010 (sub_1402AC010.c)
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 *     sub_14032A72C @ 0x14032A72C (sub_14032A72C.c)
 *     sub_14032A750 @ 0x14032A750 (sub_14032A750.c)
 *     sub_1405B3370 @ 0x1405B3370 (sub_1405B3370.c)
 *     sub_1406FEC90 @ 0x1406FEC90 (sub_1406FEC90.c)
 *     sub_1406FECC4 @ 0x1406FECC4 (sub_1406FECC4.c)
 *     sub_14097F250 @ 0x14097F250 (sub_14097F250.c)
 */

__int64 __fastcall sub_1407BE280(ULONG_PTR a1, unsigned __int64 a2)
{
  __int64 v4; // rdx
  char v5; // bl
  __int64 v6; // rax
  unsigned int v8; // ebp
  unsigned int v9; // r14d

  if ( (PEPROCESS)a1 == PsInitialSystemProcess || (int)sub_1402AC010(*(_QWORD *)(a1 + 1384), a1, 2, a2) >= 0 )
  {
    v5 = 1;
    if ( (unsigned int)sub_14032A750((_QWORD *)a1, a2) )
    {
      v5 = 3;
      if ( (*(_DWORD *)(a1 + 1120) & 0x10) == 0 )
      {
LABEL_7:
        v6 = sub_14032A72C(a1);
        if ( (unsigned int)sub_14032A4B0(v6, a2, 0) )
          return 0LL;
        v8 = 4;
        goto LABEL_13;
      }
      if ( (unsigned __int8)sub_1406FECC4(2LL, a2, a1) )
      {
        v5 = 7;
        goto LABEL_7;
      }
      v8 = 3;
    }
    else
    {
      v8 = 2;
    }
LABEL_13:
    sub_1406FEC90(a1, a2);
    if ( (v5 & 2) != 0 )
      sub_1405B3370(a1, a2);
    v9 = -1073741523;
    if ( (unsigned __int8)v5 >= 4u )
      sub_1406FECC4(2LL, -(__int64)a2, a1);
    goto LABEL_17;
  }
  v8 = 1;
  v9 = -1073741524;
LABEL_17:
  sub_14097F250(a1, v4, a2, v8);
  return v9;
}
