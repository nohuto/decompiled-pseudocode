/*
 * XREFs of sub_14054A4B0 @ 0x14054A4B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14054D1E8 @ 0x14054D1E8 (sub_14054D1E8.c)
 *     sub_14054D2AC @ 0x14054D2AC (sub_14054D2AC.c)
 *     sub_14054D374 @ 0x14054D374 (sub_14054D374.c)
 *     sub_14054D424 @ 0x14054D424 (sub_14054D424.c)
 *     sub_1405529A8 @ 0x1405529A8 (sub_1405529A8.c)
 */

void __fastcall sub_14054A4B0(
        __int64 Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _QWORD *ReasonSpecificData,
        __int64 ReasonSpecificDataLength)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  int v7; // eax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+50h] [rbp+18h] BYREF

  ReasonSpecificData[3] = 0LL;
  *((_DWORD *)ReasonSpecificData + 2) = 0;
  v8[0] = 0LL;
  v9 = 0;
  if ( qword_140C48908 && (*((_DWORD *)qword_140C48908 + 1) & 1) != 0 && qword_140C48970 )
  {
    if ( !*ReasonSpecificData )
    {
      if ( (dword_140C48978 & 1) != 0
        || *((_DWORD *)ReasonSpecificData + 3) == 131073
        && !(unsigned __int8)sub_1405529A8(Reason, Record, ReasonSpecificData, ReasonSpecificDataLength) )
      {
        byte_140C48839 = 1;
        v5 = 0LL;
      }
      else
      {
        byte_140C48839 = 0;
        v5 = 2LL;
      }
      *ReasonSpecificData = &xmmword_140C48940;
      LOBYTE(xmmword_140C48940) = 1;
      v6 = sub_14054D424(1LL, v5);
      if ( v6 )
        sub_14054D374(v6, 0LL);
    }
    v7 = sub_14054D2AC(1LL, v8, &v9);
    if ( v9 )
    {
      ReasonSpecificData[3] = v9;
      ReasonSpecificData[2] = v8[0];
      *((_DWORD *)ReasonSpecificData + 2) = 2;
    }
    if ( v7 == 261 )
    {
      *((_DWORD *)ReasonSpecificData + 2) |= 0x80000000;
    }
    else
    {
      sub_14054D1E8(1LL);
      LOBYTE(xmmword_140C48940) = 0;
      *ReasonSpecificData = 0LL;
    }
  }
}
