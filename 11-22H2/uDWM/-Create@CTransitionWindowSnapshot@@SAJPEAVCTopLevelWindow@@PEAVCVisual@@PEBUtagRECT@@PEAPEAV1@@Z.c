/*
 * XREFs of ?Create@CTransitionWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x18000CAF4
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18000B844 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x18000E6C0 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CTransitionWindowSnapshot@@IEAA@XZ @ 0x18004679C (--0CTransitionWindowSnapshot@@IEAA@XZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::Create(
        struct CTopLevelWindow *a1,
        struct CVisual *a2,
        const struct tagRECT *a3,
        struct CTransitionWindowSnapshot **a4)
{
  CTransitionWindowSnapshot *v8; // rax
  volatile signed __int32 *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi
  __int64 v13; // rcx
  struct tagRECT rc; // [rsp+38h] [rbp-40h] BYREF

  *a4 = 0LL;
  v8 = (CTransitionWindowSnapshot *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 16LL))(
                                      WPF::g_pProcessHeap,
                                      368LL);
  if ( v8 && (v9 = (volatile signed __int32 *)CTransitionWindowSnapshot::CTransitionWindowSnapshot(v8)) != 0LL )
  {
    if ( a3 )
    {
      v13 = *((_QWORD *)a1 + 94);
      rc = *a3;
      OffsetRect(&rc, *(_DWORD *)(v13 + 48), *(_DWORD *)(v13 + 52));
    }
    else
    {
      rc = *(struct tagRECT *)(*((_QWORD *)a1 + 94) + 48LL);
    }
    v10 = CTransitionWindowSnapshot::Initialize((CTransitionWindowSnapshot *)v9, a1, a2, &rc);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180129FC8, 1u, v10, 0x30u, 0LL);
    }
    else
    {
      *a4 = (struct CTransitionWindowSnapshot *)v9;
      _InterlockedIncrement(v9 + 2);
    }
    CBaseObject::Release((CBaseObject *)v9);
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180129FC8, 1u, -2147024882, 0x22u, 0LL);
  }
  return v11;
}
