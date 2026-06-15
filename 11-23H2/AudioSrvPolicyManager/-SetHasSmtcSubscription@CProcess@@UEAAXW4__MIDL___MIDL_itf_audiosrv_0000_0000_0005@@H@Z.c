/*
 * XREFs of ?SetHasSmtcSubscription@CProcess@@UEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@H@Z @ 0x1800142B0
 * Callers:
 *     ?SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@H@Z @ 0x18002F368 (-SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0.c)
 * Callees:
 *     ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x180028040 (-OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ.c)
 */

void __fastcall CProcess::SetHasSmtcSubscription(__int64 a1, int a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 v4; // rsi
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // eax
  bool v10; // zf
  int v11; // ecx

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  v4 = a2;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  if ( (unsigned int)v4 > 1 || (v7 = a1 + 4 * v4, (v8 = *(_DWORD *)(v7 + 496)) == 0) && !a3 )
  {
    if ( !v3 )
      return;
    goto LABEL_13;
  }
  v9 = 1;
  if ( !a3 )
    v9 = -1;
  v10 = v9 + v8 == 0;
  v11 = v9 + v8;
  *(_DWORD *)(v7 + 496) = v11;
  if ( v10 || v11 == 1 && a3 )
    CApplication::OnSmtcSubscriptionChanged(*(CApplication **)(a1 + 224));
  if ( v3 )
LABEL_13:
    LeaveCriticalSection(v3);
}
