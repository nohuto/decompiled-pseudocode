/*
 * XREFs of MiPfCompleteInPageSupport @ 0x1402A3D7C
 * Callers:
 *     MiPfCompletePrefetchIos @ 0x1402A3CD0 (MiPfCompletePrefetchIos.c)
 *     MiPfCompleteCoalescedIo @ 0x1406320F0 (MiPfCompleteCoalescedIo.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     MiFillPteHierarchy @ 0x14028B180 (MiFillPteHierarchy.c)
 *     MiWaitForInPageComplete @ 0x1402A1A30 (MiWaitForInPageComplete.c)
 *     MiFinishHardFault @ 0x1402D9590 (MiFinishHardFault.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiPfCompleteInPageSupport(ULONG_PTR a1, char *a2)
{
  char *AnyMultiplexedVm; // rbx
  unsigned int v5; // edx
  int v6; // ecx
  unsigned int v7[4]; // [rsp+20h] [rbp-59h] BYREF
  unsigned __int64 v8[18]; // [rsp+30h] [rbp-49h] BYREF

  *(_QWORD *)v7 = 0LL;
  AnyMultiplexedVm = a2;
  if ( a2 == (char *)1 )
  {
    v5 = *(_DWORD *)(a1 + 192);
    switch ( (v5 >> 1) & 3 )
    {
      case 1u:
        v6 = 0;
        break;
      case 2u:
        v6 = 2;
        break;
      case 3u:
        v6 = 1;
        break;
      case 5u:
        v6 = 4;
        break;
      default:
LABEL_12:
        *(_DWORD *)(a1 + 192) = v5 & 0xFFFFFFF9;
        goto LABEL_2;
    }
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(v6);
    goto LABEL_12;
  }
LABEL_2:
  *(_DWORD *)(a1 + 192) |= 0x1000000u;
  memset(v8, 0, 0x88uLL);
  MiFillPteHierarchy(0LL, &v8[3]);
  memset(v8, 0, 24);
  LODWORD(v8[10]) &= ~0x20u;
  v8[7] = (unsigned __int64)AnyMultiplexedVm;
  MiWaitForInPageComplete((__int64)v8, a1, v7);
  return MiFinishHardFault(v8, 0LL, a1, 0LL);
}
