/*
 * XREFs of CrmStateMonitorWNFCallback @ 0x180008740
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x180009B80 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorStateSizeGet @ 0x18000A5A4 (CrmStateMonitorStateSizeGet.c)
 *     memcpy_0 @ 0x1800534A2 (memcpy_0.c)
 */

__int64 __fastcall CrmStateMonitorWNFCallback(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        void *Src,
        size_t Size)
{
  unsigned int v7; // eax
  __int64 v8; // rdi
  _OWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF

  v7 = CrmStateMonitorStateSizeGet(*a4);
  memset(v10, 0, sizeof(v10));
  LODWORD(v10[0]) = 1;
  v8 = v7;
  if ( (unsigned int)Size <= 0x18 )
    memcpy_0((char *)v10 + 8, Src, (unsigned int)Size);
  ((void (__fastcall *)(unsigned int *, _OWORD *, __int64, _QWORD))CrmStateMonitorStateSet)(a4, v10, v8, 0LL);
  return 0LL;
}
