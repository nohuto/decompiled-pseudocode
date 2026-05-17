/*
 * XREFs of SbpTraceContextUpdate @ 0x180128434
 * Callers:
 *     SbUpdateSwitchContextBasedOnDll @ 0x18002EEF4 (SbUpdateSwitchContextBasedOnDll.c)
 *     SbSelectProcedure @ 0x18002F1C0 (SbSelectProcedure.c)
 *     SbObtainTraceHandle @ 0x18002F38C (SbObtainTraceHandle.c)
 * Callees:
 *     EtwEventWrite @ 0x180030140 (EtwEventWrite.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall SbpTraceContextUpdate(int a1, __int64 a2, __int16 a3, unsigned __int16 a4, __int64 a5)
{
  int v6; // esi
  int v9; // r8d
  __int16 v11; // [rsp+28h] [rbp-61h] BYREF
  _QWORD v12[6]; // [rsp+38h] [rbp-51h] BYREF
  __int64 v13; // [rsp+68h] [rbp-21h] BYREF
  int v14; // [rsp+70h] [rbp-19h]
  int v15; // [rsp+74h] [rbp-15h]
  unsigned __int16 v16; // [rsp+100h] [rbp+77h] BYREF

  v16 = a4;
  v6 = a4;
  memset_thunk_772440563353939046(&v13, 0, 0x50uLL);
  v11 = a3;
  v12[0] = a2;
  v12[2] = &v11;
  v12[4] = &v16;
  v12[1] = 16LL;
  v9 = 3;
  v12[3] = 2LL;
  v12[5] = 2LL;
  if ( (_WORD)v6 )
  {
    v9 = 4;
    v13 = a5;
    v14 = v6;
    v15 = 0;
  }
  return EtwEventWrite(a1, (int)&AeSbContextUpdateEvent, v9, (__int64)v12);
}
