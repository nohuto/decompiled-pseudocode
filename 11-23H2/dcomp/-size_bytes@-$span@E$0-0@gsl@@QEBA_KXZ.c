/*
 * XREFs of ?size_bytes@?$span@E$0?0@gsl@@QEBA_KXZ @ 0x18018BFF8
 * Callers:
 *     ?MarshalSharedData@SharedSectionWrapper@Composition@UI@Windows@@AEAAJPEAVCompositor@234@V?$span@E$0?0@gsl@@@Z @ 0x18018BE08 (-MarshalSharedData@SharedSectionWrapper@Composition@UI@Windows@@AEAAJPEAVCompositor@234@V-$span@.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall gsl::span<unsigned char,-1>::size_bytes(gsl::details *a1)
{
  if ( *(_QWORD *)a1 == -1LL )
  {
    gsl::details::terminate(a1);
    JUMPOUT(0x18018C010LL);
  }
  return *(_QWORD *)a1;
}
