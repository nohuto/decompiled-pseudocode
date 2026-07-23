/*
 * XREFs of sub_1404177C0 @ 0x1404177C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_1404177C0(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _OWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  unsigned __int16 *v4; // rax
  int v5; // ecx
  __int64 v6; // rdx

  v4 = (unsigned __int16 *)qword_140D01150;
  v5 = 0;
  ReasonSpecificData[1] = xmmword_140017E78;
  if ( v4 && *((_QWORD *)v4 + 1) && *v4 )
    v5 = *v4;
  v6 = *((_QWORD *)ReasonSpecificData + 4);
  if ( v6 )
  {
    if ( v6 == *(_QWORD *)ReasonSpecificData )
    {
      *((_DWORD *)ReasonSpecificData + 10) = v5;
      *((_QWORD *)ReasonSpecificData + 4) = *((_QWORD *)v4 + 1);
    }
  }
  else
  {
    *((_DWORD *)ReasonSpecificData + 10) = v5;
  }
}
