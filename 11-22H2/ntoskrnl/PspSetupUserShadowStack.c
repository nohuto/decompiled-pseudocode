/*
 * XREFs of PspSetupUserShadowStack @ 0x1409B1BBC
 * Callers:
 *     PspAllocateThread @ 0x140740EE0 (PspAllocateThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D620 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022D9E0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     RtlLocateExtendedFeature @ 0x140463BB0 (RtlLocateExtendedFeature.c)
 *     MmFreeVirtualMemory @ 0x1407455D0 (MmFreeVirtualMemory.c)
 *     RtlCalculateUserShadowStackSizes @ 0x1408A6434 (RtlCalculateUserShadowStackSizes.c)
 *     PspReserveAndCommitUserShadowStack @ 0x1409B1800 (PspReserveAndCommitUserShadowStack.c)
 */

NTSTATUS __fastcall PspSetupUserShadowStack(
        _KPROCESS *BugCheckParameter1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4,
        unsigned int a5)
{
  NTSTATUS result; // eax
  int v10; // esi
  _QWORD *ExtendedFeature; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // [rsp+30h] [rbp-31h] BYREF
  __int64 v14; // [rsp+38h] [rbp-29h] BYREF
  __int64 v15; // [rsp+40h] [rbp-21h] BYREF
  ULONG_PTR v16; // [rsp+48h] [rbp-19h]
  $115DCDF994C6370D29323EAB0E0C9502 v17; // [rsp+50h] [rbp-11h] BYREF

  v14 = 0LL;
  v16 = 0LL;
  v13 = 0LL;
  memset(&v17, 0, sizeof(v17));
  result = RtlCalculateUserShadowStackSizes(a3, &v13);
  if ( result >= 0 )
  {
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)&v17);
    v15 = 0LL;
    v10 = PspReserveAndCommitUserShadowStack(v13, v16, a5, &v15, &v14);
    if ( v10 < 0 )
    {
      v12 = v15;
    }
    else
    {
      if ( (*(_DWORD *)(a2 + 48) & 0x100040) == 0x100040 )
      {
        ExtendedFeature = RtlLocateExtendedFeature((PCONTEXT_EX)(a2 + 1232), 0xBu, 0LL);
        if ( ExtendedFeature )
        {
          *(_QWORD *)(*(int *)(a2 + 1248) + a2 + 1232) |= 0x800uLL;
          ExtendedFeature[1] = v14;
          *ExtendedFeature = 1LL;
        }
      }
      *(_QWORD *)(a3 + 64) = v15;
      *a4 |= 8u;
      v12 = 0LL;
    }
    if ( v12 )
    {
      v14 = 0LL;
      v13 = v12;
      MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, &v13, &v14, 0x8000, 0, 0x40000000);
    }
    KiUnstackDetachProcess(&v17);
    return v10;
  }
  return result;
}
