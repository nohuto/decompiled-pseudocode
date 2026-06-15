/*
 * XREFs of std::_Func_impl_no_alloc__lambda_b7a15968bb3a3e07f37b8dc672840d88__long_IAudioProcessingObject____GUID_unsigned_int_::_Do_call @ 0x18006A340
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_b7a15968bb3a3e07f37b8dc672840d88_::operator() @ 0x180068CDC (_lambda_b7a15968bb3a3e07f37b8dc672840d88_--operator().c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_b7a15968bb3a3e07f37b8dc672840d88__long_IAudioProcessingObject____GUID_unsigned_int_::_Do_call(
        __int64 a1,
        int (__fastcall ****a2)(_QWORD, GUID *, __int64 *),
        __int128 *a3,
        int *a4)
{
  int v4; // r9d
  int (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rdx
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a4;
  v5 = *a2;
  v7 = *a3;
  return lambda_b7a15968bb3a3e07f37b8dc672840d88_::operator()((_QWORD *)(a1 + 8), v5, (__int64)&v7, v4);
}
