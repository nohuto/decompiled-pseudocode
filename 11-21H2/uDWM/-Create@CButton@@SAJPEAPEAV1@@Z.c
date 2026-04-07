/*
 * XREFs of ?Create@CButton@@SAJPEAPEAV1@@Z @ 0x1800364B4
 * Callers:
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x180034220 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CButton@@MEAAJXZ @ 0x1800359F0 (-Initialize@CButton@@MEAAJXZ.c)
 *     ??0CButton@@IEAA@XZ @ 0x180036570 (--0CButton@@IEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CButton::Create(struct CButton **a1)
{
  CButton *v2; // rax
  CButton *v3; // rax
  struct CButton *v4; // rdi
  int v5; // ebx

  if ( !a1 )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x10u);
    return (unsigned int)v5;
  }
  v2 = (CButton *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                    WPF::g_pProcessHeap,
                    416LL);
  if ( !v2 )
  {
    v4 = 0LL;
    goto LABEL_10;
  }
  v3 = CButton::CButton(v2);
  v4 = v3;
  if ( !v3 )
  {
LABEL_10:
    v5 = -2147024882;
    goto LABEL_7;
  }
  v5 = CButton::Initialize(v3);
  if ( v5 >= 0 )
  {
    *a1 = v4;
    return 0;
  }
LABEL_7:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x10u);
  *a1 = 0LL;
  if ( v4 )
    CBaseObject::Release(v4);
  return (unsigned int)v5;
}
