/*
 * XREFs of ?Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x180017AB0
 * Callers:
 *     ?ValidateVisual@CImage@@UEAAJXZ @ 0x180019510 (-ValidateVisual@CImage@@UEAAJXZ.c)
 * Callees:
 *     ?Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z @ 0x18001777C (-Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawNineGridInstruction::Create(struct CBitmapSource *a1, struct CDrawNineGridInstruction **a2)
{
  struct _MARGINS *v4; // rax
  CBaseObject *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi

  v4 = (struct _MARGINS *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                            WPF::g_pProcessHeap,
                            128LL);
  v5 = (CBaseObject *)v4;
  if ( v4 )
  {
    v4->cyTopHeight = 1;
    *(_QWORD *)&v4->cxLeftWidth = &CDrawNineGridInstruction::`vftable';
    v6 = CDrawNineGridInstruction::Initialize(v4, a1);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x36u, 0LL);
      CBaseObject::Release(v5);
    }
    else
    {
      *a2 = v5;
    }
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x34u, 0LL);
  }
  return v7;
}
