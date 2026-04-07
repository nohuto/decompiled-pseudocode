/*
 * XREFs of ??$CreateProxyFromSharedHandle@VCVisualProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualProxy@@@Z @ 0x180026404
 * Callers:
 *     ?EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ @ 0x180036390 (-EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ.c)
 *     ?InitializeFromSharedHandle@CVisual@@MEAAJPEAX@Z @ 0x1800373E0 (-InitializeFromSharedHandle@CVisual@@MEAAJPEAX@Z.c)
 *     ?EnsureDCompResources@CDesktopManager@@QEAAJXZ @ 0x18005DBDC (-EnsureDCompResources@CDesktopManager@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCompositor::CreateProxyFromSharedHandle<CVisualProxy>(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r14
  int v9; // eax
  int v10; // edi
  unsigned int v11; // edi
  __int64 v12; // rax
  CBaseObject *v13; // rsi
  int v14; // eax
  __int64 v16; // [rsp+90h] [rbp+18h] BYREF
  __int64 v17; // [rsp+98h] [rbp+20h]

  *a3 = 0LL;
  v17 = 0LL;
  v6 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         24LL);
  v7 = v6;
  v16 = v6;
  if ( !v6 )
  {
    v7 = 0LL;
    v17 = 0LL;
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x77u);
    goto LABEL_10;
  }
  *(_OWORD *)v6 = 0LL;
  *(_DWORD *)(v6 + 8) = 1;
  *(_QWORD *)(v6 + 16) = 0LL;
  *(_QWORD *)v6 = &CVisualProxy::`vftable';
  v17 = v6;
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  v8 = *(_QWORD *)(a1 + 16);
  LODWORD(v16) = 0;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v8 + 112LL))(v8, a2, 39LL, &v16);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0xB5u);
    goto LABEL_6;
  }
  v11 = v16;
  v12 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          32LL);
  v13 = (CBaseObject *)v12;
  if ( !v12 )
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x7Fu);
    goto LABEL_17;
  }
  *(_DWORD *)(v12 + 8) = 1;
  *(_QWORD *)v12 = &CResource::`vftable';
  *(_QWORD *)(v12 + 16) = 0LL;
  *(_QWORD *)(v12 + 16) = v8;
  *(_DWORD *)(v12 + 24) = v11;
  v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 88LL))(v8, v11);
  v10 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x60u);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x81u);
    CBaseObject::Release(v13);
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0xB7u);
    goto LABEL_6;
  }
  *(_QWORD *)(v7 + 16) = v13;
  v10 = 0;
LABEL_6:
  if ( (_DWORD)v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 120LL))(v8);
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x1Du);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x7Du);
  }
  else
  {
    *a3 = v7;
    v10 = 0;
  }
LABEL_10:
  if ( v7 && _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 8), 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64, __int64))v7)(v7, 1LL);
  return (unsigned int)v10;
}
