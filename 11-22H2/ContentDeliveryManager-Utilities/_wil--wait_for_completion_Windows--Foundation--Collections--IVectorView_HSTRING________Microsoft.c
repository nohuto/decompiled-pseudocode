/*
 * XREFs of _wil::wait_for_completion_Windows::Foundation::Collections::IVectorView_HSTRING________Microsoft::WRL::ComPtr_Windows::Foundation::Collections::IVectorView_HSTRING__________::_1_::dtor$0 @ 0x1800DCADC
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18002BABC (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall wil::wait_for_completion_Windows::Foundation::Collections::IVectorView_HSTRING________Microsoft::WRL::ComPtr_Windows::Foundation::Collections::IVectorView_HSTRING__________::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    Microsoft::WRL::WeakRef::~WeakRef(*(Microsoft::WRL::WeakRef **)(a2 + 64));
  }
}
