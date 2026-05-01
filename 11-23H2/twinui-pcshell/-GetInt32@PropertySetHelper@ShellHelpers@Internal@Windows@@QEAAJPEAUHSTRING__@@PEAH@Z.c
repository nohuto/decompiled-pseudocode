/*
 * XREFs of ?GetInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAH@Z @ 0x18039B70C
 * Callers:
 *     ?OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x1802CF350 (-OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::GetInt32(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        HSTRING a2,
        int *a3)
{
  return Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<int>(this, a2, (__int64)a3, a3);
}
