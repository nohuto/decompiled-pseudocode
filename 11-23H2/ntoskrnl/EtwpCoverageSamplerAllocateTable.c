/*
 * XREFs of EtwpCoverageSamplerAllocateTable @ 0x1409F314C
 * Callers:
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x1408A976A (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     EtwpCoverageSamplerStart @ 0x1409F3668 (EtwpCoverageSamplerStart.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

_OWORD *__fastcall EtwpCoverageSamplerAllocateTable(int a1)
{
  _OWORD *Pool2; // rax
  _OWORD *v3; // rbx
  void *v4; // rax

  Pool2 = (_OWORD *)ExAllocatePool2(256LL, 32LL, 1450669125LL);
  v3 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = 0LL;
    Pool2[1] = 0LL;
    v4 = (void *)ExAllocatePool2(256LL, (unsigned int)(8 * a1), 1450669125LL);
    *((_QWORD *)v3 + 3) = v4;
    if ( !v4 )
    {
      ExFreePoolWithTag(v3, 0x56777445u);
      return 0LL;
    }
    memset(v4, 0, (unsigned int)(8 * a1));
    *((_DWORD *)v3 + 5) = a1;
  }
  return v3;
}
