/*
 * XREFs of ?Create@CTransitionWindowSnapshot@@SAJPEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18004EB64
 * Callers:
 *     ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x18004E688 (-ForceAtlasInitialize@CContactManager@@QEAAX_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z @ 0x18004EC20 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z.c)
 *     ??0CTransitionWindowSnapshot@@IEAA@XZ @ 0x18004F01C (--0CTransitionWindowSnapshot@@IEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::Create(
        const struct tagRECT *a1,
        struct CVisual *a2,
        struct CTransitionWindowSnapshot **a3)
{
  CTransitionWindowSnapshot *v6; // rax
  CTransitionWindowSnapshot *v7; // rax
  volatile signed __int32 *v8; // rbx
  int v9; // eax
  unsigned int v10; // edi

  *a3 = 0LL;
  v6 = (CTransitionWindowSnapshot *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 16LL))(
                                      WPF::g_pProcessHeap,
                                      368LL);
  if ( v6
    && (v7 = CTransitionWindowSnapshot::CTransitionWindowSnapshot(v6), (v8 = (volatile signed __int32 *)v7) != 0LL) )
  {
    v9 = CTransitionWindowSnapshot::Initialize(v7, a1, a2);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x43u);
    }
    else
    {
      *a3 = (struct CTransitionWindowSnapshot *)v8;
      _InterlockedIncrement(v8 + 2);
    }
    CBaseObject::Release((CBaseObject *)v8);
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x41u);
  }
  return v10;
}
