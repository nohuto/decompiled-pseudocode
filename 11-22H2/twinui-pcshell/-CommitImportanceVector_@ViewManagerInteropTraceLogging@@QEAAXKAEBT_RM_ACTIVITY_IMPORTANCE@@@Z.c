/*
 * XREFs of ?CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x1800C2F48
 * Callers:
 *     ?CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ @ 0x1800C2CB4 (-CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ??$CommitImportanceVector@IAEAT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x1800C3348 (--$CommitImportanceVector@IAEAT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAX$$QE.c)
 * Callees:
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x1800C31C4 (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall ViewManagerInteropTraceLogging::CommitImportanceVector_(
        ViewManagerInteropTraceLogging *this,
        int a2,
        const union _RM_ACTIVITY_IMPORTANCE *a3)
{
  __int64 v5; // r10
  unsigned __int16 v6; // cx
  char v7; // [rsp+30h] [rbp-D0h] BYREF
  char v8; // [rsp+31h] [rbp-CFh] BYREF
  __int16 v9; // [rsp+32h] [rbp-CEh] BYREF
  __int16 v10; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v11; // [rsp+36h] [rbp-CAh] BYREF
  __int16 v12; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v13; // [rsp+3Ah] [rbp-C6h] BYREF
  __int16 v14; // [rsp+3Ch] [rbp-C4h] BYREF
  int v15; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v16[3]; // [rsp+44h] [rbp-BCh] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-A0h] BYREF
  void *v19; // [rsp+70h] [rbp-90h]
  int v20; // [rsp+78h] [rbp-88h]
  int v21; // [rsp+7Ch] [rbp-84h]
  _DWORD *v22; // [rsp+80h] [rbp-80h]
  __int64 v23; // [rsp+88h] [rbp-78h]
  int *v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  char *v26; // [rsp+A0h] [rbp-60h]
  __int64 v27; // [rsp+A8h] [rbp-58h]
  __int16 *v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  __int16 *v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  __int16 *v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  __int16 *v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  __int16 *v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]
  __int16 *v38; // [rsp+100h] [rbp+0h]
  __int64 v39; // [rsp+108h] [rbp+8h]
  char *v40; // [rsp+110h] [rbp+10h]
  __int64 v41; // [rsp+118h] [rbp+18h]

  v5 = *(_QWORD *)(wil::details::static_lazy<ViewManagerInteropLogging>::get(
                     this,
                     _lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_)
                 + 8);
  if ( *(_DWORD *)v5 > 5u )
  {
    v6 = *(_WORD *)a3;
    v7 = *((_BYTE *)a3 + 2);
    v16[0] = a2;
    v9 = HIBYTE(v6) & 1;
    v41 = 1LL;
    v39 = 2LL;
    v10 = v6 & 1;
    v37 = 2LL;
    v11 = (v6 >> 7) & 1;
    v35 = 2LL;
    v12 = (v6 >> 6) & 1;
    v13 = (v6 >> 4) & 3;
    v8 = *((_BYTE *)a3 + 3);
    v15 = *(_DWORD *)a3;
    v40 = &v7;
    v38 = &v9;
    v36 = &v10;
    v34 = &v11;
    v32 = &v12;
    v30 = &v13;
    v28 = &v14;
    v26 = &v8;
    v24 = &v15;
    v22 = v16;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v5 + 8);
    v14 = (v6 >> 1) & 7;
    v33 = 2LL;
    v31 = 2LL;
    v29 = 2LL;
    v27 = 1LL;
    v25 = 4LL;
    v23 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v19 = &unk_180859C47;
    UserData.Reserved = 2;
    v20 = 175;
    v21 = 1;
    v16[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v5 + 32), &EventDescriptor, 0LL, 0LL, 0xCu, &UserData);
  }
}
