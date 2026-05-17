/*
 * XREFs of LdrpGetImportDescriptorForSnap @ 0x18007B978
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x18003D014 (LdrpMapAndSnapDependency.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x18003C720 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x18003CF10 (RtlImageNtHeaderEx.c)
 *     LdrpCheckPagesForTampering @ 0x1800E1768 (LdrpCheckPagesForTampering.c)
 *     LdrpMapCleanModuleView @ 0x1800E194C (LdrpMapCleanModuleView.c)
 */

__int64 __fastcall LdrpGetImportDescriptorForSnap(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // eax
  __int64 v4; // rbx
  int v6; // eax
  unsigned int v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v3 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(v1 + 48), 1, 1u, &v7, (__int64)&v8);
  v4 = v8;
  if ( v3 < 0 )
    v4 = 0LL;
  if ( v1 == LdrpImageEntry && (((unsigned __int64)qword_18018F398 >> 44) & 3) == 1 )
  {
    RtlImageNtHeaderEx(3, *(_QWORD *)(v1 + 48), 0LL, &v8);
    if ( ((unsigned __int8)LdrpCheckPagesForTampering(v8 + 144, 8LL)
       || (unsigned __int8)LdrpCheckPagesForTampering(v4, v7))
      && (int)LdrpMapCleanModuleView(a1) >= 0 )
    {
      v6 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(a1 + 192), 1, 1u, &v7, (__int64)&v8);
      v4 = v8;
      if ( v6 < 0 )
        return 0LL;
    }
  }
  return v4;
}
