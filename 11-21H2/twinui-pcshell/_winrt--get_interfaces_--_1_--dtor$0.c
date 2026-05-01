/*
 * XREFs of _winrt::get_interfaces_::_1_::dtor$0 @ 0x1805B4E89
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_array@Uguid@winrt@@@winrt@@QEAA@XZ @ 0x1805B3880 (--1-$com_array@Uguid@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::get_interfaces_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return winrt::com_array<winrt::guid>::~com_array<winrt::guid>();
  }
  return result;
}
