/*
 * XREFs of ?SendHeadReport@SpatialRimDeviceCollectionCallbacks@@UEAAJKAEBUHeadInputDataMsg@Internal@Spatial@Input@UI@Windows@@@Z @ 0x1800C22E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialRimDeviceCollectionCallbacks::SendHeadReport(
        SpatialRimDeviceCollectionCallbacks *this,
        __int64 a2,
        const struct Windows::UI::Input::Spatial::Internal::HeadInputDataMsg *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, const struct Windows::UI::Input::Spatial::Internal::HeadInputDataMsg *))(**((_QWORD **)this + 2) + 160LL))(
           *((_QWORD *)this + 2),
           a2,
           a3);
}
