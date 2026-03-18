/*
 * XREFs of PopBootLoaderTraceProcess @ 0x140988490
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     BapdWriteEtwEvents @ 0x140373E08 (BapdWriteEtwEvents.c)
 *     EtwUnregister @ 0x1407C1390 (EtwUnregister.c)
 *     BapdRecordFirmwareBootStats @ 0x140A88E78 (BapdRecordFirmwareBootStats.c)
 */

void PopBootLoaderTraceProcess()
{
  ULONG_PTR v0; // rbx
  REGHANDLE v1; // rcx
  __int64 v2; // rax
  _DWORD *v3; // rax
  __int64 v4; // rdx

  v0 = qword_140C3CE60;
  if ( qword_140C3CE60 )
  {
    BapdRecordFirmwareBootStats();
    v1 = qword_140C06778;
    qword_140C06778 = 0LL;
    dword_140C06758 = 0;
    EtwUnregister(v1);
    v2 = *(_QWORD *)(v0 + 216);
    if ( v2 )
    {
      v3 = *(_DWORD **)(v2 + 32);
      if ( *v3 == 1281517896 )
      {
        v4 = (unsigned int)v3[3];
        if ( (_DWORD)v4 )
          BapdWriteEtwEvents((unsigned __int64)v3 + (unsigned int)v3[2], v4);
      }
    }
  }
}
