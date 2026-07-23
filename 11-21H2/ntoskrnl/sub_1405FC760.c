/*
 * XREFs of sub_1405FC760 @ 0x1405FC760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_1405FC760(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _QWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx

  v4 = ((unsigned __int64)&Record[1].Entry.Flink + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v5 = *(_QWORD *)(v4 + 16) + 48LL;
  if ( v5 <= *((unsigned int *)ReasonSpecificData + 3) )
  {
    ReasonSpecificData[4] = v4;
    *((_OWORD *)ReasonSpecificData + 1) = xmmword_140041CA0;
  }
  else
  {
    LODWORD(v5) = 0;
  }
  *((_DWORD *)ReasonSpecificData + 10) = v5;
}
