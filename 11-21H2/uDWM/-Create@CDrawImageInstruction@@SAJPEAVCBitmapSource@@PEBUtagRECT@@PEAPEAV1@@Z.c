/*
 * XREFs of ?Create@CDrawImageInstruction@@SAJPEAVCBitmapSource@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x18000DD0C
 * Callers:
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x180028070 (-ValidateResources@CText@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawImageInstruction::Create(
        struct CBitmapSource *a1,
        const struct tagRECT *a2,
        struct CDrawImageInstruction **a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  CBaseObject *v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // edi

  v6 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         40LL);
  v7 = v6;
  if ( v6 )
  {
    *(_DWORD *)(v6 + 8) = 1;
    *(_QWORD *)v6 = &CDrawImageInstruction::`vftable';
    v8 = *(CBaseObject **)(v6 + 32);
    if ( v8 )
    {
      CBaseObject::Release(v8);
      *(_QWORD *)(v7 + 32) = 0LL;
    }
    if ( a1 )
    {
      *(_QWORD *)(v7 + 32) = *((_QWORD *)a1 + 2);
      v9 = *((_QWORD *)a1 + 2);
      if ( v9 )
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    }
    if ( a2 )
      *(struct tagRECT *)(v7 + 16) = *a2;
    else
      *(_OWORD *)(v7 + 16) = 0LL;
    v10 = 0;
    *a3 = (struct CDrawImageInstruction *)v7;
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x30u);
  }
  return v10;
}
