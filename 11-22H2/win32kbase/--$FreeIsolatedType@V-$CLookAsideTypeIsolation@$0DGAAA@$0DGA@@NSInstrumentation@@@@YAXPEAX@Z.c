/*
 * XREFs of ??$FreeIsolatedType@V?$CLookAsideTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0158230
 * Callers:
 *     ?Allocate@SURFACE@@SAPEAV1@_KG@Z @ 0x1C0047A04 (-Allocate@SURFACE@@SAPEAV1@_KG@Z.c)
 *     ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C01584E0 (-Free@SURFACE@@SAXPEAV1@@Z.c)
 * Callees:
 *     memset @ 0x1C00D6A00 (memset.c)
 */

void __fastcall FreeIsolatedType<NSInstrumentation::CLookAsideTypeIsolation<221184,864>>(PVOID Entry)
{
  __int64 v2; // rdi

  v2 = **(_QWORD **)(*(_QWORD *)(SGDGetSessionState(Entry) + 24) + 6504LL);
  if ( v2 )
  {
    memset(Entry, 0, 0x360uLL);
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v2 + 48), Entry);
  }
}
