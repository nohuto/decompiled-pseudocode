/*
 * XREFs of ??0hresult_not_implemented@winrt@@QEAA@AEBU01@@Z @ 0x18009881C
 * Callers:
 *     <none>
 * Callees:
 *     ??0hresult_error@winrt@@QEAA@AEBU01@@Z @ 0x18009883C (--0hresult_error@winrt@@QEAA@AEBU01@@Z.c)
 */

winrt::hresult_not_implemented *__fastcall winrt::hresult_not_implemented::hresult_not_implemented(
        winrt::hresult_not_implemented *this,
        const struct winrt::hresult_not_implemented *a2)
{
  winrt::hresult_error::hresult_error(this, a2);
  return this;
}
