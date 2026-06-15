/*
 * XREFs of wil::details::lambda_call__lambda_b7df69669159a99ed8745bd0cd0c9065___::_lambda_call__lambda_b7df69669159a99ed8745bd0cd0c9065___ @ 0x18006B088
 * Callers:
 *     __lambda_52036531a809c6efb737b3592d012028_::operator()_::_1_::dtor$1 @ 0x18006B436 (__lambda_52036531a809c6efb737b3592d012028_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?ReleaseSaDeviceResource@CAudioResourceManager@@UEAAJPEA_K@Z @ 0x18004B4D0 (-ReleaseSaDeviceResource@CAudioResourceManager@@UEAAJPEA_K@Z.c)
 */

unsigned __int64 *__fastcall wil::details::lambda_call__lambda_b7df69669159a99ed8745bd0cd0c9065___::_lambda_call__lambda_b7df69669159a99ed8745bd0cd0c9065___(
        __int64 a1)
{
  unsigned __int64 *result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    if ( **(_QWORD **)a1 )
    {
      CAudioResourceManager::ReleaseSaDeviceResource(
        (CAudioResourceManager *)(*(_QWORD *)(a1 + 8) + 8LL),
        *(unsigned __int64 **)a1);
      result = *(unsigned __int64 **)a1;
      **(_QWORD **)a1 = 0LL;
    }
  }
  return result;
}
