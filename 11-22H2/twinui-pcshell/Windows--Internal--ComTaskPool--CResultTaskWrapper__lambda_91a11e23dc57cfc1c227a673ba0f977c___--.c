/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_91a11e23dc57cfc1c227a673ba0f977c___::Run @ 0x1804EBDE0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_91a11e23dc57cfc1c227a673ba0f977c_::operator() @ 0x1804E7714 (_lambda_91a11e23dc57cfc1c227a673ba0f977c_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_91a11e23dc57cfc1c227a673ba0f977c___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_91a11e23dc57cfc1c227a673ba0f977c_::operator()((_QWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
