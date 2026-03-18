/*
 * XREFs of ?GetNumStartedVirtualGpu@DXGVIRTUALMACHINE@@QEAAIXZ @ 0x1C005AAF0
 * Callers:
 *     NtDxgkRegisterVailProcess @ 0x1C03645B0 (NtDxgkRegisterVailProcess.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000774C (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007BB0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 */

__int64 __fastcall DXGVIRTUALMACHINE::GetNumStartedVirtualGpu(struct _KTHREAD **this)
{
  unsigned int v2; // edi
  __int64 **v3; // rbx
  __int64 *i; // rcx
  _BYTE v6[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v6, this + 12, 0);
  DXGPUSHLOCK::AcquireShared(v7);
  v2 = 0;
  v8 = 1;
  v3 = (__int64 **)(this + 5);
  for ( i = *v3; i != (__int64 *)v3; i = (__int64 *)*i )
  {
    if ( *((_BYTE *)i + 16) && *((_BYTE *)i + 37) )
      ++v2;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v6);
  return v2;
}
