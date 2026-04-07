/*
 * XREFs of ?Create@CMagnifier@@SAJPEAUHWND__@@HPEAVCVisual@@PEAPEAV1@@Z @ 0x1800C5B28
 * Callers:
 *     ?OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z @ 0x1800C72CC (-OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CMagnifier@@AEAA@PEAUHWND__@@HPEAVCVisual@@@Z @ 0x1800C599C (--0CMagnifier@@AEAA@PEAUHWND__@@HPEAVCVisual@@@Z.c)
 *     ?Initialize@CMagnifier@@AEAAJXZ @ 0x1800C5C10 (-Initialize@CMagnifier@@AEAAJXZ.c)
 */

__int64 __fastcall CMagnifier::Create(HWND a1, int a2, struct CVisual *a3, struct CMagnifier **a4)
{
  CMagnifier *v8; // rax
  CMagnifier *v9; // rax
  volatile signed __int32 *v10; // rbx
  int v11; // eax
  unsigned int v12; // edi

  v8 = (CMagnifier *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                       WPF::g_pProcessHeap,
                       376LL);
  if ( v8 && (v9 = CMagnifier::CMagnifier(v8, a1, a2, a3), (v10 = (volatile signed __int32 *)v9) != 0LL) )
  {
    v11 = CMagnifier::Initialize(v9);
    v12 = v11;
    if ( v11 >= 0 )
    {
      *a4 = (struct CMagnifier *)v10;
      _InterlockedIncrement(v10 + 2);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x5Eu);
    }
    CBaseObject::Release((CBaseObject *)v10);
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x5Cu);
  }
  return v12;
}
