/*
 * XREFs of ?Create@CTransitionWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x1800F0138
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800EC7CC (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CTransitionWindowSnapshot@@IEAA@XZ @ 0x18004F01C (--0CTransitionWindowSnapshot@@IEAA@XZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x1800F0360 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::Create(
        struct CTopLevelWindow *a1,
        struct CVisual *a2,
        const struct tagRECT *a3,
        struct CTransitionWindowSnapshot **a4)
{
  CTransitionWindowSnapshot *v8; // rax
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // edi
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
      v10 = *((_QWORD *)a1 + 94);
      rc = *a3;
      OffsetRect(&rc, *(_DWORD *)(v10 + 48), *(_DWORD *)(v10 + 52));
    }
    else
    {
      rc = *(struct tagRECT *)(*((_QWORD *)a1 + 94) + 48LL);
    }
    v11 = CTransitionWindowSnapshot::Initialize((CTransitionWindowSnapshot *)v9, a1, a2, &rc);
    v12 = v11;
    if ( v11 >= 0 )
    {
      *a4 = (struct CTransitionWindowSnapshot *)v9;
      _InterlockedIncrement(v9 + 2);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180123BC8, 1LL, v11, 0x30u);
    }
    CBaseObject::Release((CBaseObject *)v9);
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180123BC8, 1LL, -2147024882, 0x22u);
  }
  return v12;
}
