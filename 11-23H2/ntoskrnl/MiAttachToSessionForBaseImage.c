/*
 * XREFs of MiAttachToSessionForBaseImage @ 0x1406420E4
 * Callers:
 *     MiApplyHotPatchToLoadedDriver @ 0x140A35318 (MiApplyHotPatchToLoadedDriver.c)
 *     MiUnapplyDriverHotPatch @ 0x140A3C018 (MiUnapplyDriverHotPatch.c)
 * Callees:
 *     MiAttachSessionGlobal @ 0x14033DD2C (MiAttachSessionGlobal.c)
 *     MiDetachSessionGlobal @ 0x14033F24C (MiDetachSessionGlobal.c)
 *     MiGetNextSessionGlobal @ 0x140637A74 (MiGetNextSessionGlobal.c)
 *     MmIsDriverLoadedCurrentSession @ 0x140695E68 (MmIsDriverLoadedCurrentSession.c)
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
    MiAttachSessionGlobal((__int64)NextSessionGlobal, *((unsigned int *)&xmmword_140C69858 + 2));
    if ( (unsigned int)MmIsDriverLoadedCurrentSession(*(_QWORD *)(a1 + 48)) )
      break;
    MiDetachSessionGlobal((__int64)(&xmmword_140C69858 + 1));
  }
  return v2;
}
