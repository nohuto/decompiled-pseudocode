/*
 * XREFs of sub_180040204 @ 0x180040204
 * Callers:
 *     sub_18003F1B0 @ 0x18003F1B0 (sub_18003F1B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180040204(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 56);
  if ( !v1 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
