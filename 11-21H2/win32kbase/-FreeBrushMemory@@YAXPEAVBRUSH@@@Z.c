/*
 * XREFs of ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x1C00ADAA4
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C00636C0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1C0063970 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C008B6B4 (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 *     bDeleteBrush @ 0x1C00C82E0 (bDeleteBrush.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C009AC90 (-Free@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C009B4C8 (-Free@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

void __fastcall FreeBrushMemory(ULONG_PTR BugCheckParameter2)
{
  int v1; // edx

  v1 = *(_DWORD *)(BugCheckParameter2 + 144);
  if ( v1 )
  {
    if ( v1 != 1 )
      KeBugCheckEx(0x164u, 0x19uLL, BugCheckParameter2, 0LL, 0LL);
    if ( *((_QWORD *)gpTypeIsolation + 3) )
      NSInstrumentation::CTypeIsolation<49152,192>::Free(
        *((_QWORD *)gpTypeIsolation + 3),
        (struct _SLIST_ENTRY *)BugCheckParameter2);
  }
  else if ( *((_QWORD *)gpTypeIsolation + 2) )
  {
    NSInstrumentation::CTypeIsolation<40960,160>::Free(
      *((_QWORD *)gpTypeIsolation + 2),
      (struct _SLIST_ENTRY *)BugCheckParameter2);
  }
}
