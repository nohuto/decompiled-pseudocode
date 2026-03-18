/*
 * XREFs of ?ResetSystemColors@@YAXXZ @ 0x1C005D5B0
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C005D650 (xxxResetDisplayDevice.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C002CA0C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C002CA34 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     xxxSetSysColors @ 0x1C0062954 (xxxSetSysColors.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 */

void ResetSystemColors(void)
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rax
  int v4; // ecx
  _BYTE v5[16]; // [rsp+30h] [rbp-128h] BYREF
  _BYTE v6[128]; // [rsp+40h] [rbp-118h] BYREF
  _DWORD v7[32]; // [rsp+C0h] [rbp-98h] BYREF

  v0 = 0;
  memmove(v6, (char *)gpsi + 4444, 0x7CuLL);
  v3 = 0LL;
  do
    v7[v3++] = v0++;
  while ( v0 < 0x1F );
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v5, v1, v2);
  xxxSetSysColors(v4, v0, (unsigned int)v7, (unsigned int)v6, 6);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v5);
}
