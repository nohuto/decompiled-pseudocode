/*
 * XREFs of ?CreateGenericInkProxy@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionGenericInkPartner@@@Z @ 0x18015CD90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateGenericInkProxy(
        Windows::UI::Composition::InteropCompositor::Api *this,
        struct IDCompositionGenericInkPartner **a2)
{
  __int64 v2; // rcx

  v2 = (*((_QWORD *)this - 96) + 24LL) & -(__int64)(*((_QWORD *)this - 96) != 0LL);
  return (*(__int64 (__fastcall **)(__int64, struct IDCompositionGenericInkPartner **))(*(_QWORD *)v2 + 56LL))(v2, a2);
}
