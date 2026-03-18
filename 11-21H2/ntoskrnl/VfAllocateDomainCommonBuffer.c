/*
 * XREFs of VfAllocateDomainCommonBuffer @ 0x1405FE460
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     ViGetRealDmaOperation @ 0x140A88738 (ViGetRealDmaOperation.c)
 *     ViHalTrackDomainCommonBuffer @ 0x140A88A3C (ViHalTrackDomainCommonBuffer.c)
 */

__int64 __fastcall VfAllocateDomainCommonBuffer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        int a7,
        _QWORD *a8,
        __int64 a9)
{
  _QWORD *Pool2; // rbx
  int v14; // edi
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64, __int64, _QWORD, int, __int64, int, _QWORD *, __int64); // rax

  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 24LL, 1449943368LL);
  if ( Pool2 )
  {
    RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int, __int64, int, _QWORD *, __int64))ViGetRealDmaOperation(a1);
    v14 = RealDmaOperation(a1, a2, a3, a4, a5, a6, a7, a8, a9);
    if ( v14 < 0 )
    {
      ExFreePoolWithTag(Pool2, 0);
    }
    else
    {
      Pool2[2] = *a8;
      ViHalTrackDomainCommonBuffer(Pool2);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v14;
}
