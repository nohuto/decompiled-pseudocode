/*
 * XREFs of ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1C0305FF0
 * Callers:
 *     ?PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z @ 0x1C02BCEF0 (-PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z.c)
 *     ?TdrResetFromTimeoutWorkItem@@YAXPEAX@Z @ 0x1C03068E0 (-TdrResetFromTimeoutWorkItem@@YAXPEAX@Z.c)
 * Callees:
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0014340 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0019DE4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C0306300 (-TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C0306A60 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 */

void __fastcall TdrCompleteRecoveryContext(char *P, struct _LUID *a2, bool a3)
{
  __int64 v4; // rcx
  char v6; // r15
  unsigned int v7; // ebp
  __int64 v8; // rcx
  DXGADAPTER *v9; // rcx
  int v10; // ebx
  int v11; // edi
  __int64 v12; // r11
  unsigned __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  if ( P )
  {
    v4 = *((_QWORD *)P + 6);
    v6 = (char)a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + 4) + 2800LL) + 624LL)
                                                          + 8LL)
                                              + 472LL))(
        v4,
        0LL);
    v7 = *((_DWORD *)P + 4);
    if ( v7 != 6 )
    {
      a2 = (struct _LUID *)&g_TdrHistory;
      v8 = 5LL * (((unsigned __int8)_InterlockedExchangeAdd(dword_1C0131084, 1u) + 1) & 0x3F);
      *((_QWORD *)&g_TdrHistory + v8 + 3) = *((_QWORD *)P + 15);
      *((_DWORD *)&g_TdrHistory + 2 * v8 + 8) = *((_DWORD *)P + 4);
      *(UUID *)((char *)&g_TdrHistory + 8 * v8 + 40) = *(UUID *)(P + 56);
      *((_QWORD *)&g_TdrHistory + v8 + 7) = *((_QWORD *)P + 9);
      v7 = *((_DWORD *)P + 4);
    }
    v9 = (DXGADAPTER *)*((_QWORD *)P + 4);
    v10 = *((_DWORD *)P + 20);
    v13 = 0LL;
    v11 = *((_DWORD *)v9 + 60);
    DXGADAPTER::IsAdapterSessionized(v9, a2, 0LL, &v13);
    DxgkLogCodePointPacketForSession(0x18u, v13, v7, v11, v10, v12);
    _InterlockedCompareExchange64((volatile signed __int64 *)&g_TdrRecoveryInProgress, 0LL, (signed __int64)P);
    if ( v6 )
    {
      *((_DWORD *)P + 29) &= ~1u;
      TdrUpdateDbgReport((struct _TDR_RECOVERY_CONTEXT *)P, 0);
    }
    TdrDereferenceRecoveryContext(P, a3);
  }
}
