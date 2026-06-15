/*
 * XREFs of ?ZeroOutObject@SpatialBlock@@QEAAJII@Z @ 0x14009EC50
 * Callers:
 *     ?ZeroOutObject@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z @ 0x14009EC14 (-ZeroOutObject@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z.c)
 * Callees:
 *     memset_0 @ 0x140029234 (memset_0.c)
 */

__int64 __fastcall SpatialBlock::ZeroOutObject(SpatialBlock *this, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // edi
  __int64 v6; // r14
  unsigned int v7; // ecx

  v3 = 0;
  if ( a3 >= *((_DWORD *)this + 2) || a2 >= 2 )
  {
    return (unsigned int)-2147024809;
  }
  else
  {
    v6 = a2;
    memset_0((void *)(*((_QWORD *)this + 3 * a2 + 7) + a3 * *((_DWORD *)this + 5)), 0, *((unsigned int *)this + 5));
    memset_0((void *)(*((_QWORD *)this + 3 * v6 + 5) + a3 * *((_DWORD *)this + 3)), 0, *((unsigned int *)this + 3));
    v7 = *((_DWORD *)this + 4);
    if ( v7 )
      memset_0((void *)(*((_QWORD *)this + 3 * v6 + 6) + a3 * v7), 0, v7);
  }
  return v3;
}
