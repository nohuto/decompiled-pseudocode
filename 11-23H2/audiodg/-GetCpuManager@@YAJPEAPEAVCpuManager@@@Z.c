/*
 * XREFs of ?GetCpuManager@@YAJPEAPEAVCpuManager@@@Z @ 0x1400535C8
 * Callers:
 *     ?AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z @ 0x140025630 (-AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetCpuManager(struct CpuManager **a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( qword_1400CF798 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1400CF798 + 8LL))(qword_1400CF798);
    *a1 = (struct CpuManager *)qword_1400CF798;
  }
  else
  {
    return (unsigned int)-2147023728;
  }
  return v2;
}
