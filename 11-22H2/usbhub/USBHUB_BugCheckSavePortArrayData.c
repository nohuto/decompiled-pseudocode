/*
 * XREFs of USBHUB_BugCheckSavePortArrayData @ 0x1C0041B60
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 */

void __fastcall USBHUB_BugCheckSavePortArrayData(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _OWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  _DWORD *v5; // rax
  int v6; // edx

  if ( ReasonSpecificDataLength >= 0x30 && WPP_MAIN_CB.Queue.ListEntry.Flink )
  {
    v5 = FdoExt((__int64)WPP_MAIN_CB.Queue.ListEntry.Flink);
    v6 = 2928 * *((unsigned __int8 *)v5 + 2938);
    if ( *((_DWORD *)ReasonSpecificData + 2) )
    {
      ReasonSpecificData[1] = GuidSavePortArrayData;
      *((_QWORD *)ReasonSpecificData + 4) = *((_QWORD *)v5 + 382);
    }
    *((_DWORD *)ReasonSpecificData + 10) = v6;
  }
}
