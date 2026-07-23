/*
 * XREFs of sub_140764758 @ 0x140764758
 * Callers:
 *     sub_140765DC0 @ 0x140765DC0 (sub_140765DC0.c)
 *     sub_1409539A8 @ 0x1409539A8 (sub_1409539A8.c)
 * Callees:
 *     sub_140764814 @ 0x140764814 (sub_140764814.c)
 *     sub_14077DE70 @ 0x14077DE70 (sub_14077DE70.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140764758(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _OWORD *Pool2; // rax

  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 64);
  result = sub_140764814(*(void **)(a2 + 32));
  if ( (int)result >= 0 )
  {
    result = sub_140764814(*(void **)(a2 + 48));
    if ( (int)result >= 0 )
    {
      if ( *(_QWORD *)(a2 + 56) )
      {
        Pool2 = (_OWORD *)ExAllocatePool2(256LL, 16LL, 1466986064LL);
        *(_QWORD *)(a1 + 16) = Pool2;
        if ( !Pool2 )
          return 3221225626LL;
        *Pool2 = *(_OWORD *)*(_QWORD *)(a2 + 56);
      }
      result = sub_14077DE70(*(_QWORD *)(a2 + 72), 0x7FFFLL, 1466986064LL, a1 + 24);
      if ( (int)result >= 0 )
        return sub_14077DE70(*(_QWORD *)(a2 + 80), 0x7FFFLL, 1466986064LL, a1 + 32);
    }
  }
  return result;
}
