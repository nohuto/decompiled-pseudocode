/*
 * XREFs of ?ReleaseSaDeviceResource@CAudioResourceManager@@UEAAJPEA_K@Z @ 0x180065CE0
 * Callers:
 *     wil::details::lambda_call__lambda_bebb7edd520906af257d1d4dfd3425b0___::_lambda_call__lambda_bebb7edd520906af257d1d4dfd3425b0___ @ 0x180065540 (wil--details--lambda_call__lambda_bebb7edd520906af257d1d4dfd3425b0___--_lambda_call__lambda_bebb.c)
 *     _lambda_703197410533bd8a2dcb4add4cb7fb52_::operator() @ 0x180065738 (_lambda_703197410533bd8a2dcb4add4cb7fb52_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioResourceManager::ReleaseSaDeviceResource(CAudioResourceManager *this, unsigned __int64 *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(**((_QWORD **)this + 5) + 80LL))(
           *((_QWORD *)this + 5),
           a2);
}
