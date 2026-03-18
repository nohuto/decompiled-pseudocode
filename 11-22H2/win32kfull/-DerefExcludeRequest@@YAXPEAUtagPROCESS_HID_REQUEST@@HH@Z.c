/*
 * XREFs of ?DerefExcludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@HH@Z @ 0x1C01A9564
 * Callers:
 *     FreeHidProcessRequest @ 0x1C009F158 (FreeHidProcessRequest.c)
 *     ?RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z @ 0x1C01A9A00 (-RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z.c)
 * Callees:
 *     FreeHidTLCInfo @ 0x1C009ED94 (FreeHidTLCInfo.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C009FBE0 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C009FC90 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 */

void __fastcall DerefExcludeRequest(struct tagPROCESS_HID_REQUEST *a1, int a2, int a3)
{
  __int64 v6; // rax
  char *v7; // rcx
  __int64 v9; // rcx
  char v10; // [rsp+48h] [rbp+20h] BYREF

  v6 = SGDGetUserSessionState(a1);
  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v10, (struct _KTHREAD **)(v6 + 288));
  if ( !a2 )
  {
    v7 = (char *)a1 + 24;
    if ( (*((_DWORD *)a1 + 5) & 8) != 0 )
      --*(_DWORD *)(*(_QWORD *)v7 + 40LL);
    if ( (*(_DWORD *)(*(_QWORD *)v7 + 36LL))-- == 1 )
    {
      if ( a3 )
      {
        v9 = *(_QWORD *)v7;
        if ( !(*(_DWORD *)(v9 + 20) | *(_DWORD *)(v9 + 24) | *(_DWORD *)(v9 + 32) | *(_DWORD *)(v9 + 36)) )
          FreeHidTLCInfo((_QWORD *)v9);
      }
    }
  }
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v10);
}
