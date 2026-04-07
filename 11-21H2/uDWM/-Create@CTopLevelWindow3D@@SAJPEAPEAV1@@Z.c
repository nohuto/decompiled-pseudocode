/*
 * XREFs of ?Create@CTopLevelWindow3D@@SAJPEAPEAV1@@Z @ 0x180038ADC
 * Callers:
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180038808 (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CTopLevelWindow3D@@MEAAJXZ @ 0x180038BA0 (-Initialize@CTopLevelWindow3D@@MEAAJXZ.c)
 *     ??0CTopLevelWindow3D@@IEAA@XZ @ 0x180038D74 (--0CTopLevelWindow3D@@IEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow3D::Create(struct CTopLevelWindow3D **a1)
{
  CTopLevelWindow3D *v2; // rax
  CTopLevelWindow3D *v3; // rax
  struct CTopLevelWindow3D *v4; // rdi
  int v5; // ebx

  if ( !a1 )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x6Cu);
    return (unsigned int)v5;
  }
  v2 = (CTopLevelWindow3D *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                              WPF::g_pProcessHeap,
                              640LL);
  if ( !v2 )
  {
    v4 = 0LL;
    goto LABEL_10;
  }
  v3 = CTopLevelWindow3D::CTopLevelWindow3D(v2);
  v4 = v3;
  if ( !v3 )
  {
LABEL_10:
    v5 = -2147024882;
    goto LABEL_7;
  }
  v5 = CTopLevelWindow3D::Initialize(v3);
  if ( v5 >= 0 )
  {
    *a1 = v4;
    return 0;
  }
LABEL_7:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x6Cu);
  *a1 = 0LL;
  if ( v4 )
    CBaseObject::Release(v4);
  return (unsigned int)v5;
}
