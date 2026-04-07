/*
 * XREFs of ?Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x18001AFA8
 * Callers:
 *     ?ValidateVisual@CImage@@UEAAJXZ @ 0x180028AC0 (-ValidateVisual@CImage@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z @ 0x18001B204 (-Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawNineGridInstruction::Create(struct CBitmapSource *a1, struct CDrawNineGridInstruction **a2)
{
  CBaseObject *v4; // rax
  CBaseObject *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi

  v4 = (CBaseObject *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                        WPF::g_pProcessHeap,
                        128LL);
  v5 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 1;
    *(_QWORD *)v4 = &CDrawNineGridInstruction::`vftable';
    v6 = CDrawNineGridInstruction::Initialize(v4, a1);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x36u);
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x34u);
  }
  return v7;
}
