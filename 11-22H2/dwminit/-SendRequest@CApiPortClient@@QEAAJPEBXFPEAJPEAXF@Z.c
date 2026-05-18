/*
 * XREFs of ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z @ 0x180009AB8
 * Callers:
 *     DwmpRequestProcessShutdown @ 0x18000933C (DwmpRequestProcessShutdown.c)
 *     DwmpRequestUnloadUserRegKeys @ 0x180009368 (DwmpRequestUnloadUserRegKeys.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800091CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x180009644 (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x18000983C (-IsConnected@CApiPortClient@@AEAA_NXZ.c)
 *     ?Translate@CApiPortClient@@CAJJ@Z @ 0x180009C48 (-Translate@CApiPortClient@@CAJJ@Z.c)
 *     ?DisconnectIfDeferred@CPortClient@@QEAAXXZ @ 0x180009F20 (-DisconnectIfDeferred@CPortClient@@QEAAXXZ.c)
 *     ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXFPEAJ@Z @ 0x18000A080 (-SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXFPEAJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18000E320 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CApiPortClient::SendRequest(CApiPortClient *this, unsigned int *a2, __int16 a3, int *a4)
{
  unsigned int v6; // ebx
  CApiPortClient *v7; // rcx
  bool IsConnected; // al
  CApiPortClient *v9; // rcx
  int v10; // esi
  int v11; // eax
  __int64 v12; // rcx
  volatile signed __int32 *v13; // rdi
  __int16 v14; // r9
  int v15; // ebp
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  void *v20; // [rsp+20h] [rbp-48h]
  __int16 v21; // [rsp+28h] [rbp-40h]
  int v22; // [rsp+80h] [rbp+18h] BYREF

  LOWORD(v22) = a3;
  v6 = -2144980991;
  EnterCriticalSection(&stru_180015B40);
  IsConnected = CApiPortClient::IsConnected(v7);
  if ( !byte_180015B68 )
  {
    v10 = IsConnected;
    do
    {
      v11 = CApiPortClient::EnsureConnected(v9);
      v6 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 2LL, v11, 0xA6u);
        goto LABEL_18;
      }
      v13 = (volatile signed __int32 *)*(&xmmword_180015B30 + 1);
      if ( *(&xmmword_180015B30 + 1) )
        _InterlockedAdd((volatile signed __int32 *)*(&xmmword_180015B30 + 1) + 14, 1u);
      LeaveCriticalSection(&stru_180015B40);
      v15 = CPortClient::SendComplexSyncRequest((CPortClient *)v13, *a2, a2, v14, v20, v21, &v22);
      if ( v13 && _InterlockedExchangeAdd(v13 + 14, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v13)(v13, 1LL);
      EnterCriticalSection(&stru_180015B40);
      v9 = (CApiPortClient *)*(&xmmword_180015B30 + 1);
      if ( *(&xmmword_180015B30 + 1)
        && _InterlockedCompareExchange((volatile signed __int32 *)*(&xmmword_180015B30 + 1) + 14, 1, 1) == 1 )
      {
        CPortClient::DisconnectIfDeferred(v9);
      }
      if ( v15 != -805306313 )
        break;
      v16 = v10--;
    }
    while ( v16 > 0 );
    v17 = CApiPortClient::Translate(v15);
    v6 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 2LL, v17, 0xC5u);
    else
      *a4 = CApiPortClient::Translate(v22);
  }
LABEL_18:
  LeaveCriticalSection(&stru_180015B40);
  return v6;
}
