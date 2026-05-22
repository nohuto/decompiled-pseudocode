/*
 * XREFs of ?SendEyeGazeReport@SpatialRimDeviceCollectionCallbacks@@UEAAJKAEBUEyeGazeInputDataMsg@Internal@Spatial@Input@UI@Windows@@@Z @ 0x1800C2190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialRimDeviceCollectionCallbacks::SendEyeGazeReport(
        SpatialRimDeviceCollectionCallbacks *this,
        __int64 a2,
        const struct Windows::UI::Input::Spatial::Internal::EyeGazeInputDataMsg *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, const struct Windows::UI::Input::Spatial::Internal::EyeGazeInputDataMsg *))(**((_QWORD **)this + 2) + 168LL))(
           *((_QWORD *)this + 2),
           a2,
           a3);
}
