/*
 * XREFs of HalRegisterErrataCallbacks @ 0x140B0B970
 * Callers:
 *     sub_140B0B630 @ 0x140B0B630 (sub_140B0B630.c)
 * Callees:
 *     EmpProviderRegister @ 0x14082D070 (EmpProviderRegister.c)
 */

__int64 HalRegisterErrataCallbacks()
{
  __int64 v1; // [rsp+40h] [rbp+8h] BYREF

  return EmpProviderRegister(0LL, 0LL, 0, (__int64)&off_140003630, 6u, &v1);
}
