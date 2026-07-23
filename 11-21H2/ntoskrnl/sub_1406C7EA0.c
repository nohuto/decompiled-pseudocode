/*
 * XREFs of sub_1406C7EA0 @ 0x1406C7EA0
 * Callers:
 *     sub_1406C7D58 @ 0x1406C7D58 (sub_1406C7D58.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406C7EA0(volatile signed __int32 *a1, __int64 *a2)
{
  unsigned int v4; // edi
  __int64 Pool2; // rax

  v4 = 0;
  Pool2 = ExAllocatePool2(256LL, 32LL, 1483763280LL);
  *a2 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 16) = a1;
    *(_QWORD *)(Pool2 + 24) = _InterlockedIncrement64(&qword_140C45050);
    _InterlockedIncrement(a1);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
