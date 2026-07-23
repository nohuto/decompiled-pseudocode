/*
 * XREFs of SbpTraceContextUpdate @ 0x180126F84
 * Callers:
 *     SbUpdateSwitchContextBasedOnDll @ 0x18002F0C4 (SbUpdateSwitchContextBasedOnDll.c)
 *     SbSelectProcedure @ 0x18002F390 (SbSelectProcedure.c)
 *     SbObtainTraceHandle @ 0x18002F55C (SbObtainTraceHandle.c)
 * Callees:
 *     EtwEventWrite @ 0x180030310 (EtwEventWrite.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

ULONG __fastcall SbpTraceContextUpdate(
        REGHANDLE RegHandle,
        unsigned __int64 a2,
        __int16 a3,
        unsigned __int16 a4,
        __int64 a5)
{
  int v6; // esi
  ULONG v9; // r8d
  __int16 v11; // [rsp+28h] [rbp-61h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-51h] BYREF
  __int16 *v13; // [rsp+48h] [rbp-41h]
  __int64 v14; // [rsp+50h] [rbp-39h]
  __int16 *v15; // [rsp+58h] [rbp-31h]
  __int64 v16; // [rsp+60h] [rbp-29h]
  __int64 v17; // [rsp+68h] [rbp-21h] BYREF
  int v18; // [rsp+70h] [rbp-19h]
  int v19; // [rsp+74h] [rbp-15h]
  unsigned __int16 v20; // [rsp+100h] [rbp+77h] BYREF

  v20 = a4;
  v6 = a4;
  memset_thunk_772440563353939046(&v17, 0, 0x50uLL);
  v11 = a3;
  UserData.Ptr = a2;
  v13 = &v11;
  v15 = (__int16 *)&v20;
  *(_QWORD *)&UserData.Size = 16LL;
  v9 = 3;
  v14 = 2LL;
  v16 = 2LL;
  if ( (_WORD)v6 )
  {
    v9 = 4;
    v17 = a5;
    v18 = v6;
    v19 = 0;
  }
  return EtwEventWrite(RegHandle, &AeSbContextUpdateEvent, v9, &UserData);
}
