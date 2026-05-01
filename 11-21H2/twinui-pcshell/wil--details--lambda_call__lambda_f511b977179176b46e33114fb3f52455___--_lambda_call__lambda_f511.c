/*
 * XREFs of wil::details::lambda_call__lambda_f511b977179176b46e33114fb3f52455___::_lambda_call__lambda_f511b977179176b46e33114fb3f52455___ @ 0x180197F38
 * Callers:
 *     __lambda_67f1862805ee8077baf0f70ad7f386d7_::operator()_::_1_::dtor$0 @ 0x180197FF1 (__lambda_67f1862805ee8077baf0f70ad7f386d7_--operator()_--_1_--dtor$0.c)
 *     __lambda_bd25e2ba6f0ad956a34c66bf3060a154_::operator()_::_1_::dtor$0 @ 0x1801982D5 (__lambda_bd25e2ba6f0ad956a34c66bf3060a154_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::lambda_call__lambda_f511b977179176b46e33114fb3f52455___::_lambda_call__lambda_f511b977179176b46e33114fb3f52455___(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    result = *a1;
    *((_BYTE *)a1 + 8) = 0;
    *(_BYTE *)(result + 340) = 0;
  }
  return result;
}
