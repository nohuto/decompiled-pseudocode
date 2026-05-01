/*
 * XREFs of ??1?$MakeAllocator@VCGameEntry@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18004A00C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CQueryKnownGameList_CQueryKnownGameList_unsigned_short_const___&__::_1_::dtor$0 @ 0x18004E154 (_Microsoft--WRL--Details--MakeAndInitialize_CQueryKnownGameList_CQueryKnownGameList_unsigned_sho.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18004C464 (--3@YAXPEAX@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<CGameEntry>::~MakeAllocator<CGameEntry>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
