/*
 * XREFs of ?SendPendingCallbacks@CInteractionTracker@@AEAAXXZ @ 0x180113EA8
 * Callers:
 *     ?NotifyExpressionProcessingComplete@CInteractionTracker@@QEAAXXZ @ 0x18021B724 (-NotifyExpressionProcessingComplete@CInteractionTracker@@QEAAXXZ.c)
 * Callees:
 *     ?SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z @ 0x18011412C (-SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z @ 0x18021CE08 (-SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z.c)
 *     ?ShouldNotify@CInteractionTracker@@AEAA_NI@Z @ 0x18021DFDC (-ShouldNotify@CInteractionTracker@@AEAA_NI@Z.c)
 */

void __fastcall CInteractionTracker::SendPendingCallbacks(CInteractionTracker *this)
{
  __int64 v2; // rcx
  bool v3; // di
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // eax
  char v7; // al
  char v8; // r9
  __int64 v9; // rax
  int v10; // r8d
  __int64 v11; // rdx
  unsigned int v12; // edx
  __int64 v13; // rsi
  unsigned int v14; // ecx
  __int64 v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // xmm0_8
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+50h] [rbp-20h] BYREF
  int v22; // [rsp+58h] [rbp-18h]
  __int64 v23; // [rsp+60h] [rbp-10h] BYREF
  __int64 v24; // [rsp+68h] [rbp-8h]

  if ( CInteractionTracker::ShouldNotify(this, 0) )
  {
    if ( !*(_DWORD *)(v2 + 504)
      || (v3 = 1, *(_DWORD *)(*((_QWORD *)this + 60) + 24LL * (unsigned int)(*(_DWORD *)(v2 + 504) - 1))) )
    {
      v3 = 0;
    }
    CInteractionTracker::SendPendingStateChangeCallbacks(this, v3);
    LOBYTE(v5) = *((_BYTE *)this + 540);
    if ( (v5 & 6) != 0 )
    {
      v6 = *((_DWORD *)this + 22);
      LOBYTE(v5) = (v5 & 4) != 0;
      v21 = *((_QWORD *)this + 10);
      v22 = v6;
      v7 = CInteractionTracker::SendValuesChangedCallbackIfNecessary(this, &v21, v4, v5);
      *((_BYTE *)this + 540) &= 0xF9u;
      v8 = v7;
      if ( !v3 )
        return;
      v9 = *((_QWORD *)this + 60);
      v10 = *((_DWORD *)this + 22);
      v11 = 3LL * (unsigned int)(*((_DWORD *)this + 126) - 1);
      *(_QWORD *)(v9 + 8 * v11 + 4) = *((_QWORD *)this + 10);
      *(_DWORD *)(v9 + 8 * v11 + 12) = v10;
      *(_DWORD *)(*((_QWORD *)this + 60) + 24LL * (unsigned int)(*((_DWORD *)this + 126) - 1) + 16) = *((_DWORD *)this + 34);
    }
    else
    {
      v8 = 0;
      if ( !v3 )
        return;
    }
    if ( *((char *)this + 540) >= 0 && !v8 )
      CInteractionTracker::SendPendingStateChangeCallbacks(this, 0);
  }
  else
  {
    v12 = *((_DWORD *)this + 126);
    v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 1240LL) + 40LL);
    v14 = 0;
    if ( v12 )
    {
      while ( *(_DWORD *)(*((_QWORD *)this + 60) + 24LL * v14) )
      {
        if ( ++v14 >= v12 )
          goto LABEL_23;
      }
      v15 = *((_QWORD *)this + 6);
      if ( v15 )
        v16 = *(_DWORD *)(v15 + 76);
      else
        v16 = 0;
      v17 = *((_QWORD *)this + 10);
      v22 = *((_DWORD *)this + 22);
      v23 = v16;
      v18 = *((unsigned int *)this + 16);
      v21 = v17;
      v24 = v18;
      CoreUICallSend(v13, &v23, 2LL, 11LL, 0, &unk_18032C3CF);
      v19 = *((_QWORD *)this + 6);
      if ( v19 )
        v20 = *(unsigned int *)(v19 + 76);
      else
        v20 = 0LL;
      v23 = v20;
      v24 = *((unsigned int *)this + 16);
      CoreUICallSend(
        v13,
        &v23,
        2LL,
        11LL,
        3,
        &Microsoft::CoreUI::MessageCall::DWMCoreCallbacks_g_parameters_xfzN1g4V75qd4Cs8kloSCpvtObo);
    }
LABEL_23:
    *((_DWORD *)this + 126) = 0;
  }
}
