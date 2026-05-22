/*
 * XREFs of _Win32kInterop::Win32kInterop_::_1_::dtor$4 @ 0x18006CE3E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32kInterop::Win32kInterop_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return std::unordered_map<unsigned long,std::unique_ptr<LegacyDeviceInfo>>::~unordered_map<unsigned long,std::unique_ptr<LegacyDeviceInfo>>(*(_QWORD *)(a2 + 80) + 64LL);
}
