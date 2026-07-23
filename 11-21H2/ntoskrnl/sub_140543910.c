/*
 * XREFs of sub_140543910 @ 0x140543910
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403C0360 @ 0x1403C0360 (sub_1403C0360.c)
 *     sub_140647B74 @ 0x140647B74 (sub_140647B74.c)
 *     sub_140647BBC @ 0x140647BBC (sub_140647BBC.c)
 */

void __fastcall sub_140543910(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _QWORD *ReasonSpecificData,
        __int64 ReasonSpecificDataLength)
{
  __int64 v4; // rax
  _DWORD *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax

  v4 = ReasonSpecificData[4];
  *((_OWORD *)ReasonSpecificData + 1) = xmmword_14003A9A8;
  if ( v4 )
  {
    if ( *((_DWORD *)ReasonSpecificData + 2) < 0x44u )
    {
      v9 = *ReasonSpecificData;
      *((_DWORD *)ReasonSpecificData + 10) = 0;
      ReasonSpecificData[4] = v9;
    }
    else
    {
      v6 = (_DWORD *)*ReasonSpecificData;
      v7 = *ReasonSpecificData + 8LL;
      *v6 = 1213614404;
      v6[1] = 68;
      sub_140647B74(v7, Record, ReasonSpecificData, ReasonSpecificDataLength);
      sub_1403C0360(v6 + 6, v8);
      sub_140647BBC(v6 + 10);
      v6[14] = dword_140D0688C;
      v6[15] = dword_140D068B8;
      v6[16] = dword_140D06A28;
      ReasonSpecificData[4] = v6;
      *((_DWORD *)ReasonSpecificData + 10) = 68;
    }
  }
  else
  {
    *((_DWORD *)ReasonSpecificData + 10) = 68;
  }
}
