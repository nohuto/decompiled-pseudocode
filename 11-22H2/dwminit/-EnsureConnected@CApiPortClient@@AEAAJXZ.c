/*
 * XREFs of ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x180009644
 * Callers:
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x18000994C (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z @ 0x180009AB8 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180001C60 (__security_check_cookie.c)
 *     memset_0 @ 0x180002638 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x180002B78 (--2@YAPEAX_K@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180006000 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800091CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Disconnect@CApiPortClient@@AEAAXXZ @ 0x1800095F8 (-Disconnect@CApiPortClient@@AEAAXXZ.c)
 *     ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x18000983C (-IsConnected@CApiPortClient@@AEAA_NXZ.c)
 *     ?Translate@CApiPortClient@@CAJJ@Z @ 0x180009C48 (-Translate@CApiPortClient@@CAJJ@Z.c)
 *     ??0CPortClient@@QEAA@IPEAX@Z @ 0x180009C98 (--0CPortClient@@QEAA@IPEAX@Z.c)
 *     ?ConnectWithName@CPortClient@@QEAAJPEBG@Z @ 0x180009D94 (-ConnectWithName@CPortClient@@QEAAJPEBG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18000E320 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CApiPortClient::EnsureConnected(CApiPortClient *this)
{
  unsigned int v1; // ebx
  volatile signed __int32 *v2; // rdi
  int v3; // eax
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  unsigned __int16 v11[48]; // [rsp+40h] [rbp-D8h] BYREF
  unsigned __int16 v12[48]; // [rsp+A0h] [rbp-78h] BYREF

  if ( CApiPortClient::IsConnected(this) )
    return 0;
  CApiPortClient::Disconnect((CApiPortClient *)&g_PortClient);
  v2 = (volatile signed __int32 *)operator new(0x40uLL);
  CPortClient::CPortClient((CPortClient *)v2, g_PortClient, xmmword_180015B30);
  *((_DWORD *)v2 + 14) = 1;
  *(_QWORD *)v2 = &CPortClientRefCounted::`vftable';
  memset_0(v11, 0, 0x52uLL);
  memset_0(v12, 0, 0x52uLL);
  LeaveCriticalSection(&stru_180015B40);
  if ( NtCurrentPeb()->SessionId
    && (v3 = StringCchPrintfW(v11, 41LL, L"\\Sessions\\%d", NtCurrentPeb()->SessionId), v1 = v3, v3 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 2LL, v3, 0x10Cu);
  }
  else
  {
    v5 = StringCchPrintfW(v12, 41LL, L"%s\\Windows\\DwmApiPort", v11);
    v1 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 2LL, v5, 0x113u);
    }
    else
    {
      v7 = CPortClient::ConnectWithName((CPortClient *)v2, v12);
      v8 = CApiPortClient::Translate(v7);
      v1 = v8;
      if ( v8 >= 0 )
      {
        EnterCriticalSection(&stru_180015B40);
        if ( !*(&xmmword_180015B30 + 1) )
        {
          *(&xmmword_180015B30 + 1) = (void *)v2;
          return v1;
        }
        goto LABEL_13;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v9, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 2LL, v8, 0x116u);
    }
  }
  EnterCriticalSection(&stru_180015B40);
LABEL_13:
  if ( v2 && _InterlockedExchangeAdd(v2 + 14, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v2)(v2, 1LL);
  return v1;
}
