/*
 * XREFs of ?Create@CSystemBackdropVisual@@SAJPEAPEAV1@@Z @ 0x1800E0FF0
 * Callers:
 *     ?UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ @ 0x180033FB4 (-UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ.c)
 *     ?CloneVisualTree@CSystemBackdropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800E0F40 (-CloneVisualTree@CSystemBackdropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     memset_0 @ 0x180060F40 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CSystemBackdropVisual@@QEAA@XZ @ 0x1800E0DF8 (--0CSystemBackdropVisual@@QEAA@XZ.c)
 */

__int64 __fastcall CSystemBackdropVisual::Create(struct CSystemBackdropVisual **a1)
{
  int v2; // ebx
  CSystemBackdropVisual *v3; // rax
  CSystemBackdropVisual *v4; // rbx
  CSystemBackdropVisual *v5; // rax
  struct CSystemBackdropVisual *v6; // rdi

  if ( !a1 )
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0xDu);
    return (unsigned int)v2;
  }
  v3 = (CSystemBackdropVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 16LL))(
                                  WPF::g_pProcessHeap,
                                  312LL);
  v4 = v3;
  if ( v3 )
  {
    memset_0(v3, 0, 0x138uLL);
    v5 = CSystemBackdropVisual::CSystemBackdropVisual(v4);
    v6 = v5;
    if ( v5 )
    {
      v2 = (*(__int64 (__fastcall **)(CSystemBackdropVisual *))(*(_QWORD *)v5 + 8LL))(v5);
      if ( v2 >= 0 )
      {
        *a1 = v6;
        return 0;
      }
      goto LABEL_9;
    }
  }
  else
  {
    v6 = 0LL;
  }
  v2 = -2147024882;
LABEL_9:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0xDu);
  *a1 = 0LL;
  if ( v6 )
    CBaseObject::Release(v6);
  return (unsigned int)v2;
}
