/*
 * XREFs of ??$_Uninitialized_move@PEAUInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@YAPEAUInputProvider@@QEAU1@0PEAU1@AEAV?$allocator@UInputProvider@@@0@@Z @ 0x1800CDA08
 * Callers:
 *     ??$_Emplace_reallocate@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAAPEAUInputProvider@@QEAU2@$$QEAU2@@Z @ 0x180035AE4 (--$_Emplace_reallocate@UInputProvider@@@-$vector@UInputProvider@@V-$allocator@UInputProvider@@@s.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UInputProvider@@@std@@@std@@YAXPEAUInputProvider@@QEAU1@AEAV?$allocator@UInputProvider@@@0@@Z @ 0x1800968C4 (--$_Destroy_range@V-$allocator@UInputProvider@@@std@@@std@@YAXPEAUInputProvider@@QEAU1@AEAV-$all.c)
 */

_OWORD *__fastcall std::_Uninitialized_move<InputProvider *>(char *a1, char *a2, __int64 a3)
{
  _OWORD *v3; // rbx
  _QWORD *v4; // r8
  signed __int64 v5; // r9
  _QWORD *v6; // rcx

  v3 = (_OWORD *)a3;
  if ( a1 != a2 )
  {
    v4 = (_QWORD *)(a3 + 16);
    v5 = a1 - (char *)v3;
    do
    {
      v6 = (_QWORD *)((char *)v4 + v5);
      *v3 = *(_OWORD *)((char *)v4 + v5 - 16);
      *v4 = 0LL;
      if ( v4 != (_QWORD *)((char *)v4 + v5) )
      {
        *v4 = *v6;
        *v6 = 0LL;
      }
      v4 += 3;
      v3 = (_OWORD *)((char *)v3 + 24);
    }
    while ( (char *)v4 + v5 - 16 != a2 );
  }
  std::_Destroy_range<std::allocator<InputProvider>>((__int64)v3, (__int64)v3);
  return v3;
}
