/*
 * XREFs of MiAttachToSessionForBaseImage @ 0x1405A2D30
 * Callers:
 *     MiApplyHotPatchToLoadedDriver @ 0x140971848 (MiApplyHotPatchToLoadedDriver.c)
 *     MiUnapplyDriverHotPatch @ 0x1409779A4 (MiUnapplyDriverHotPatch.c)
 * Callees:
 *     MiDetachSessionGlobal @ 0x14021803C (MiDetachSessionGlobal.c)
 *     MiAttachSessionGlobal @ 0x140238D0C (MiAttachSessionGlobal.c)
 *     MiGetNextSessionGlobal @ 0x1405994E4 (MiGetNextSessionGlobal.c)
 *     MmIsDriverLoadedCurrentSession @ 0x140761DD8 (MmIsDriverLoadedCurrentSession.c)
 */

__int64 *__fastcall MiAttachToSessionForBaseImage(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 *NextSessionGlobal; // rax

  v2 = 0LL;
  while ( 1 )
  {
    NextSessionGlobal = MiGetNextSessionGlobal(v2);
    v2 = NextSessionGlobal;
    if ( !NextSessionGlobal )
      break;
    MiAttachSessionGlobal((unsigned __int64)NextSessionGlobal, qword_140C533D8);
    if ( (unsigned int)MmIsDriverLoadedCurrentSession(*(_QWORD *)(a1 + 48)) )
      break;
    MiDetachSessionGlobal((__int64)&qword_140C533D8);
  }
  return v2;
}
