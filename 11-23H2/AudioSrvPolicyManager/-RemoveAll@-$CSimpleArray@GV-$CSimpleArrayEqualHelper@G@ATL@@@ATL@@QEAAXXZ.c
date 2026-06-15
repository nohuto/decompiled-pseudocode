/*
 * XREFs of ?RemoveAll@?$CSimpleArray@GV?$CSimpleArrayEqualHelper@G@ATL@@@ATL@@QEAAXXZ @ 0x180015C9C
 * Callers:
 *     ATL::_dynamic_atexit_destructor_for___AtlWinModule__ @ 0x18004A200 (ATL--_dynamic_atexit_destructor_for___AtlWinModule__.c)
 * Callees:
 *     free @ 0x1800175DC (free.c)
 */

void __fastcall ATL::CSimpleArray<unsigned short,ATL::CSimpleArrayEqualHelper<unsigned short>>::RemoveAll(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    free(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
}
