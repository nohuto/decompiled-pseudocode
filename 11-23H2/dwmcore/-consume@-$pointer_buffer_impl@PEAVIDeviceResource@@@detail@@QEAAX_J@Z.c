/*
 * XREFs of ?consume@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEAAX_J@Z @ 0x1800274CC
 * Callers:
 *     ?clear_region@?$vector_facade@PEAVIDeviceResource@@V?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@@detail@@IEAAX_K0@Z @ 0x180027120 (-clear_region@-$vector_facade@PEAVIDeviceResource@@V-$pointer_buffer_impl@PEAVIDeviceResource@@@.c)
 *     ?reserve_region@?$vector_facade@PEAVIDeviceResource@@V?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@@detail@@IEAAPEAPEAVIDeviceResource@@_K0@Z @ 0x180027180 (-reserve_region@-$vector_facade@PEAVIDeviceResource@@V-$pointer_buffer_impl@PEAVIDeviceResource@.c)
 *     ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x1800732B0 (-ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ @ 0x18007486C (-first@-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18026F868 (ModuleFailFastForHRESULT.c)
 */

void __fastcall detail::pointer_buffer_impl<IDeviceResource *>::consume(_DWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    if ( (*a1 & 3) == 0 )
      goto LABEL_8;
    if ( (*a1 & 3) == 1 )
    {
      v3 = detail::pointer_buffer_impl<IDeviceResource *>::first(a1);
      *(_QWORD *)(v3 - 16) += a2;
      return;
    }
    if ( (*a1 & 3) != 2 )
    {
      if ( (*a1 & 3) != 3 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      if ( a2 != 1 )
LABEL_8:
        *(_QWORD *)a1 = 2LL;
    }
  }
}
