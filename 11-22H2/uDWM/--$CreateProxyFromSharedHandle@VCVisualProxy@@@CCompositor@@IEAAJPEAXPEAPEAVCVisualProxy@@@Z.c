/*
 * XREFs of ??$CreateProxyFromSharedHandle@VCVisualProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualProxy@@@Z @ 0x1800213A0
 * Callers:
 *     ?Initialize@CDCompositionInteropVisual@@UEAAJXZ @ 0x180019FE0 (-Initialize@CDCompositionInteropVisual@@UEAAJXZ.c)
 *     ?InitializeFromSharedHandle@CVisual@@MEAAJPEAX@Z @ 0x18001A750 (-InitializeFromSharedHandle@CVisual@@MEAAJPEAX@Z.c)
 *     ?EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ @ 0x1800516F8 (-EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCompositor::CreateProxyFromSharedHandle<CVisualProxy>(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rbx
  void (__fastcall ***v9)(_QWORD, __int64); // rsi
  __int64 v10; // r14
  int v11; // eax
  int v12; // ebp
  unsigned int v13; // esi
  __int64 v14; // rax
  CBaseObject *v15; // rdi
  int v16; // eax
  unsigned int v17; // edi
  int v19; // edi
  unsigned int v20; // [rsp+20h] [rbp-48h]
  __int64 v21; // [rsp+80h] [rbp+18h] BYREF
  __int64 v22; // [rsp+88h] [rbp+20h]

  *a3 = 0LL;
  v22 = 0LL;
  v6 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         24LL);
  v8 = v6;
  v21 = v6;
  if ( !v6 )
  {
    v9 = 0LL;
    v22 = 0LL;
    v8 = 0LL;
    v12 = -2147024882;
    v20 = 141;
    goto LABEL_20;
  }
  *(_OWORD *)v6 = 0LL;
  *(_DWORD *)(v6 + 8) = 1;
  *(_QWORD *)(v6 + 16) = 0LL;
  *(_QWORD *)v6 = &CVisualProxy::`vftable';
  v22 = v6;
  v9 = (void (__fastcall ***)(_QWORD, __int64))v6;
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  v10 = *(_QWORD *)(a1 + 24);
  LODWORD(v21) = 0;
  LOBYTE(v7) = 1;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64 *))(*(_QWORD *)v10 + 104LL))(
          v10,
          a2,
          39LL,
          v7,
          &v21);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xB5u, 0LL);
  }
  else
  {
    v13 = v21;
    v14 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            32LL);
    v15 = (CBaseObject *)v14;
    if ( v14 )
    {
      *(_DWORD *)(v14 + 8) = 1;
      *(_QWORD *)v14 = &CResource::`vftable';
      *(_QWORD *)(v14 + 16) = 0LL;
      *(_QWORD *)(v14 + 16) = v10;
      *(_DWORD *)(v14 + 24) = v13;
      v16 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 80LL))(v10, v13);
      v12 = v16;
      if ( v16 >= 0 )
      {
        v9 = (void (__fastcall ***)(_QWORD, __int64))v8;
        *(_QWORD *)(v8 + 16) = v15;
        v12 = 0;
        goto LABEL_6;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x60u, 0LL);
      v9 = (void (__fastcall ***)(_QWORD, __int64))v8;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x81u, 0LL);
      CBaseObject::Release(v15);
      v19 = v12;
    }
    else
    {
      v12 = -2147024882;
      v19 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x7Fu, 0LL);
      v9 = (void (__fastcall ***)(_QWORD, __int64))v8;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0xB7u, 0LL);
  }
LABEL_6:
  if ( (_DWORD)v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 112LL))(v10);
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x1Du, 0LL);
    v20 = 147;
LABEL_20:
    v17 = v12;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, v20, 0LL);
    goto LABEL_10;
  }
  *a3 = v9;
  v17 = 0;
LABEL_10:
  if ( v9 && _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 0xFFFFFFFF) == 1 )
    (**v9)(v9, 1LL);
  return v17;
}
