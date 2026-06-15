/*
 * XREFs of ?GetCpuManager@@YAJPEAPEAVCpuManager@@@Z @ 0x1400520A4
 * Callers:
 *     ?AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z @ 0x14002C340 (-AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetCpuManager(struct CpuManager **a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( qword_1400C1620 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1400C1620 + 8LL))(qword_1400C1620);
    *a1 = (struct CpuManager *)qword_1400C1620;
  }
  else
  {
    return (unsigned int)-2147023728;
  }
  return v2;
}
