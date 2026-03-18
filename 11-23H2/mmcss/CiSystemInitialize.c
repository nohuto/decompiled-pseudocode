/*
 * XREFs of CiSystemInitialize @ 0x1C000F400
 * Callers:
 *     CsInitialize @ 0x1C000F240 (CsInitialize.c)
 * Callees:
 *     memset @ 0x1C00040C0 (memset.c)
 *     CiSystemTerminate @ 0x1C000DE04 (CiSystemTerminate.c)
 */

__int64 CiSystemInitialize()
{
  NTSTATUS SystemInformation; // ebx
  size_t v1; // rdi
  void *Pool2; // rax

  SystemInformation = ZwQuerySystemInformation(SystemBasicInformation, &CiSystemBasicInfo, 0x40u, 0LL);
  v1 = 24LL * byte_1C0008278;
  Pool2 = (void *)ExAllocatePool2(64LL, v1, 1953658433LL);
  CiLastIdleStats = (__int64)Pool2;
  if ( !Pool2 )
  {
    SystemInformation = -1073741801;
    goto LABEL_4;
  }
  memset(Pool2, 0, v1);
  if ( SystemInformation < 0 )
LABEL_4:
    CiSystemTerminate();
  return (unsigned int)SystemInformation;
}
