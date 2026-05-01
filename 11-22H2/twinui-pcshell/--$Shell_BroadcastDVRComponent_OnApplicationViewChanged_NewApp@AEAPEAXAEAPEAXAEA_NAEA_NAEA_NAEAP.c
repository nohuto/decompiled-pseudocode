/*
 * XREFs of ??$Shell_BroadcastDVRComponent_OnApplicationViewChanged_NewApp@AEAPEAXAEAPEAXAEA_NAEA_NAEA_NAEAPEBG@GameDVRTraceProvider@@SAXAEAPEAX0AEA_N11AEAPEBG@Z @ 0x1800839E8
 * Callers:
 *     ?BroadcastDVRComponent_OnApplicationViewChanged_NewApp@GameDVRTraceProvider@@SAXPEAX0_N11PEBG@Z @ 0x180083340 (-BroadcastDVRComponent_OnApplicationViewChanged_NewApp@GameDVRTraceProvider@@SAXPEAX0_N11PEBG@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VGameDVRTraceProvider@@@details@wil@@QEAAPEAVGameDVRTraceProvider@@P6AXXZ@Z @ 0x18014980C (-get@-$static_lazy@VGameDVRTraceProvider@@@details@wil@@QEAAPEAVGameDVRTraceProvider@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

int __fastcall GameDVRTraceProvider::Shell_BroadcastDVRComponent_OnApplicationViewChanged_NewApp<void * &,void * &,bool &,bool &,bool &,unsigned short const * &>(
        __int64 *a1,
        __int64 *a2,
        char *a3,
        char *a4,
        char *a5,
        const WCHAR **a6)
{
  __int64 v10; // rax
  __int64 v11; // r10
  const WCHAR *v12; // r9
  char v13; // dl
  __int64 v14; // rax
  int v15; // ecx
  REGHANDLE v16; // rcx
  char v18; // [rsp+38h] [rbp-79h] BYREF
  char v19; // [rsp+39h] [rbp-78h] BYREF
  char v20; // [rsp+3Ah] [rbp-77h] BYREF
  unsigned int v21; // [rsp+3Ch] [rbp-75h]
  __int64 v22; // [rsp+40h] [rbp-71h] BYREF
  __int64 v23; // [rsp+48h] [rbp-69h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-49h] BYREF
  void *v26; // [rsp+78h] [rbp-39h]
  int v27; // [rsp+80h] [rbp-31h]
  int v28; // [rsp+84h] [rbp-2Dh]
  __int64 *v29; // [rsp+88h] [rbp-29h]
  __int64 v30; // [rsp+90h] [rbp-21h]
  __int64 *v31; // [rsp+98h] [rbp-19h]
  __int64 v32; // [rsp+A0h] [rbp-11h]
  char *v33; // [rsp+A8h] [rbp-9h]
  __int64 v34; // [rsp+B0h] [rbp-1h]
  char *v35; // [rsp+B8h] [rbp+7h]
  __int64 v36; // [rsp+C0h] [rbp+Fh]
  char *v37; // [rsp+C8h] [rbp+17h]
  __int64 v38; // [rsp+D0h] [rbp+1Fh]
  const WCHAR *v39; // [rsp+D8h] [rbp+27h]
  int v40; // [rsp+E0h] [rbp+2Fh]
  int v41; // [rsp+E4h] [rbp+33h]

  v10 = wil::details::static_lazy<GameDVRTraceProvider>::get(
          a1,
          _lambda_2ba8abda6f2a4c5834755431f5f6ef9a_::_lambda_invoker_cdecl_);
  v11 = *(_QWORD *)(v10 + 8);
  if ( *(_DWORD *)v11 > 5u )
  {
    v12 = *a6;
    v13 = *a5;
    v19 = *a4;
    v20 = *a3;
    v22 = *a2;
    v23 = *a1;
    v18 = v13;
    if ( v12 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( v12[v14] );
      v15 = 2 * v14 + 2;
    }
    else
    {
      v12 = &LocaleName;
      v15 = 2;
    }
    v40 = v15;
    v37 = &v18;
    v38 = 1LL;
    v35 = &v19;
    v33 = &v20;
    v31 = &v22;
    v36 = 1LL;
    v29 = &v23;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v11 + 8);
    v34 = 1LL;
    v39 = v12;
    v32 = 8LL;
    v30 = 8LL;
    v41 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v26 = &unk_180847348;
    v28 = 1;
    UserData.Reserved = 2;
    v16 = *(_QWORD *)(v11 + 32);
    v27 = 127;
    v21 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v10) = EventWriteTransfer(v16, &EventDescriptor, 0LL, 0LL, 8u, &UserData);
  }
  return v10;
}
