/*
 * XREFs of ??$CreateTouchVisual@VCPressTapVisual@@@@YAJ_KPEAPEAVCPressTapVisual@@@Z @ 0x1800A9F94
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x1800AB8F0 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x18004F1C0 (--0CTouchVisual@@IEAA@_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Initialize@CPressTapVisual@@MEAAJXZ @ 0x1800C93B0 (-Initialize@CPressTapVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CreateTouchVisual<CPressTapVisual>(__int64 a1, CTouchVisual **a2)
{
  unsigned int v3; // edi
  CTouchVisual *v4; // rax
  CTouchVisual *v5; // rbx
  int v6; // eax

  if ( a2 )
  {
    v4 = (CTouchVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                           WPF::g_pProcessHeap,
                           416LL);
    v5 = v4;
    if ( v4 )
    {
      CTouchVisual::CTouchVisual(v4);
      *((_QWORD *)v5 + 38) = 0LL;
      *((_QWORD *)v5 + 44) = 0LL;
      *((_QWORD *)v5 + 45) = 0LL;
      *((_QWORD *)v5 + 51) = 0LL;
      *(_QWORD *)v5 = &CPressTapVisual::`vftable';
      v6 = CPressTapVisual::Initialize(v5);
      v3 = v6;
      if ( v6 >= 0 )
      {
        *a2 = v5;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x3Fu);
        CBaseObject::Release(v5);
      }
    }
    else
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x3Du);
    }
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x39u);
  }
  return v3;
}
