/*
 * XREFs of sub_1409F50A0 @ 0x1409F50A0
 * Callers:
 *     sub_14078F198 @ 0x14078F198 (sub_14078F198.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409F50A0(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  __int64 Pool2; // rcx
  _OWORD *v9; // rax

  v4 = 0;
  if ( a3 )
  {
    *a4 = _InterlockedExchange64((volatile __int64 *)(a1 + 64), 0LL);
  }
  else
  {
    if ( *(_DWORD *)(a2 + 8) != 24 )
      return 3221225485LL;
    Pool2 = *(_QWORD *)(a1 + 64);
    if ( Pool2 || (Pool2 = ExAllocatePool2(64LL, 24LL, 1182233669LL)) != 0 )
    {
      v9 = *(_OWORD **)a2;
      *(_OWORD *)Pool2 = *(_OWORD *)*(_QWORD *)a2;
      *(_QWORD *)(Pool2 + 16) = *((_QWORD *)v9 + 2);
      if ( !*(_QWORD *)Pool2 )
        *(_QWORD *)Pool2 = -1LL;
      if ( !*(_BYTE *)(Pool2 + 16) )
        *(_BYTE *)(Pool2 + 16) = -1;
      *(_QWORD *)(a1 + 64) = Pool2;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v4;
}
