/*
 * XREFs of ?HampHostQueryProcessDebuggedCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x18003AEC4
 * Callers:
 *     ?HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z @ 0x1800297F8 (-HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z.c)
 * Callees:
 *     ?HampSystemQueryProcessIsDebuggerAttached@@YAKPEAX@Z @ 0x18003AFE0 (-HampSystemQueryProcessIsDebuggerAttached@@YAKPEAX@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

__int64 __fastcall HampHostQueryProcessDebuggedCallback(struct _RM_ACTIVITY_HOST *a1, void *a2, int a3, _DWORD *a4)
{
  unsigned int IsDebuggerAttached; // eax
  int v8; // [rsp+30h] [rbp-19h] BYREF
  _DWORD v9[3]; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  void *v12; // [rsp+60h] [rbp+17h]
  int v13; // [rsp+68h] [rbp+1Fh]
  int v14; // [rsp+6Ch] [rbp+23h]
  _DWORD *v15; // [rsp+70h] [rbp+27h]
  __int64 v16; // [rsp+78h] [rbp+2Fh]
  int *v17; // [rsp+80h] [rbp+37h]
  __int64 v18; // [rsp+88h] [rbp+3Fh]

  IsDebuggerAttached = HampSystemQueryProcessIsDebuggerAttached(a2);
  if ( IsDebuggerAttached )
    *a4 = 1;
  if ( (unsigned int)dword_1800DC218 > 5 )
  {
    v9[0] = IsDebuggerAttached;
    v18 = 4LL;
    v17 = &v8;
    v16 = 4LL;
    v15 = v9;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_1800DC220;
    v8 = a3;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_1800DC220;
    v12 = &unk_1800C0796;
    v14 = 1;
    UserData.Reserved = 2;
    v13 = 54;
    v9[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DC238, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return 0LL;
}
