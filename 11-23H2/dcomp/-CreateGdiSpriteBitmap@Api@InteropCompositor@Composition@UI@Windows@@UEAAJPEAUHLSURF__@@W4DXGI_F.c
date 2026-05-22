/*
 * XREFs of ?CreateGdiSpriteBitmap@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUHLSURF__@@W4DXGI_FORMAT@@HPEAPEAUIDCompositionGdiSpriteBitmapPartner@@@Z @ 0x18015CD40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateGdiSpriteBitmap(
        Windows::UI::Composition::InteropCompositor::Api *this,
        HLSURF a2,
        __int64 a3)
{
  __int64 v3; // rcx

  v3 = (*((_QWORD *)this - 96) + 24LL) & -(__int64)(*((_QWORD *)this - 96) != 0LL);
  return (*(__int64 (__fastcall **)(__int64, HLSURF, __int64))(*(_QWORD *)v3 + 48LL))(v3, a2, a3);
}
