/*
 * XREFs of ?HampHostQueryAndLogTerminatingProcessCount@@YAKPEAU_HAM_PROCESS_SNAPSHOT@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18003B124
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000F550 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

__int64 __fastcall HampHostQueryAndLogTerminatingProcessCount(__int64 a1, int a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // edi
  __int64 v4; // rsi
  unsigned int i; // ebx
  unsigned int v8; // r12d
  __int64 v10; // [rsp+38h] [rbp-81h] BYREF
  __int64 v11; // [rsp+40h] [rbp-79h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-71h] BYREF
  _BYTE ProcessInformation[64]; // [rsp+60h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-19h] BYREF
  void *v15; // [rsp+B0h] [rbp-9h]
  int v16; // [rsp+B8h] [rbp-1h]
  int v17; // [rsp+BCh] [rbp+3h]
  __int64 *v18; // [rsp+C0h] [rbp+7h]
  int v19; // [rsp+C8h] [rbp+Fh]
  int v20; // [rsp+CCh] [rbp+13h]
  __int64 *v21; // [rsp+D0h] [rbp+17h]
  int v22; // [rsp+D8h] [rbp+1Fh]
  int v23; // [rsp+DCh] [rbp+23h]

  v2 = *(_DWORD *)(a1 + 16);
  v3 = 0;
  v4 = 0LL;
  for ( i = 4; (unsigned int)v4 < v2; v4 = (unsigned int)(v4 + 1) )
  {
    NtQueryInformationProcess(
      *(HANDLE *)(*(_QWORD *)a1 + 8 * v4),
      ProcessBasicInformation,
      ProcessInformation,
      0x40u,
      0LL);
    if ( (ProcessInformation[56] & 4) != 0 )
    {
      ++v3;
    }
    else
    {
      if ( a2 == 256 )
      {
        i = 0;
      }
      else if ( a2 != 512 )
      {
        i = 2;
        if ( a2 != 2048 )
          i = 4;
      }
      v8 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * v4);
      if ( (int)WerpAddTerminationReason(v8, i, L"HAM", 0LL) < 0 )
        WerpAddTerminationReason(v8, i, L"HAM", 0LL);
      i = 4;
    }
    v2 = *(_DWORD *)(a1 + 16);
  }
  if ( (unsigned int)dword_1800DC218 > 4 && (qword_1800DC228 & 0x40) != 0 && (qword_1800DC230 & 0x40) == qword_1800DC230 )
  {
    v23 = 0;
    v20 = 0;
    v22 = 8;
    v19 = 8;
    v10 = v2;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    v11 = v3;
    v21 = &v10;
    v18 = &v11;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800DC220;
    UserData.Size = *(unsigned __int16 *)off_1800DC220;
    v15 = &unk_1800C09EF;
    UserData.Reserved = 2;
    v16 = 81;
    v17 = 1;
    EventWriteTransfer(qword_1800DC238, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return v3;
}
