/*
 * XREFs of ApiSetEditionBaseDriverUnloadUninitialize @ 0x1C00B1CB8
 * Callers:
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C00B1AE4 (-Win32kNtUserCleanup@@YAHXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 ApiSetEditionBaseDriverUnloadUninitialize()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( qword_1C02950C0 && (int)qword_1C02950C0() >= 0 )
  {
    if ( qword_1C02950C8 )
      return (unsigned int)qword_1C02950C8();
    else
      return (unsigned int)-1073741637;
  }
  return v0;
}
