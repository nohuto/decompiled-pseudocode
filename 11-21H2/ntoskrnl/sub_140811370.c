/*
 * XREFs of sub_140811370 @ 0x140811370
 * Callers:
 *     IoCreateDevice @ 0x14074ED50 (IoCreateDevice.c)
 *     IoVerifyVolume @ 0x1409367E0 (IoVerifyVolume.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140811370(__int64 a1)
{
  __int64 Pool2; // rax

  Pool2 = ExAllocatePool2(64LL, 96LL, 543322198LL);
  if ( !Pool2 )
    return 3221225626LL;
  *(_DWORD *)Pool2 = 6291466;
  *(_QWORD *)(Pool2 + 16) = a1;
  *(_QWORD *)(a1 + 56) = Pool2;
  return 0LL;
}
