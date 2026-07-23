/*
 * XREFs of sub_1406D56D0 @ 0x1406D56D0
 * Callers:
 *     sub_1406D520C @ 0x1406D520C (sub_1406D520C.c)
 *     sub_1406D5424 @ 0x1406D5424 (sub_1406D5424.c)
 * Callees:
 *     KeCancelTimer2 @ 0x1402D3FB0 (KeCancelTimer2.c)
 *     sub_1405595B8 @ 0x1405595B8 (sub_1405595B8.c)
 *     sub_1405716A4 @ 0x1405716A4 (sub_1405716A4.c)
 *     DbgSetDebugPrintCallback @ 0x1405E41E0 (DbgSetDebugPrintCallback.c)
 *     sub_1406D5860 @ 0x1406D5860 (sub_1406D5860.c)
 *     sub_140967848 @ 0x140967848 (sub_140967848.c)
 *     sub_1409854AC @ 0x1409854AC (sub_1409854AC.c)
 *     sub_1409DE1A0 @ 0x1409DE1A0 (sub_1409DE1A0.c)
 */

__int64 __fastcall sub_1406D56D0(__int64 a1, int *a2, int a3, int a4)
{
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned int i; // edi

  if ( a2 )
  {
    v8 = *a2;
    if ( (*a2 & 0x20000) != 0 )
    {
      qword_140D3B008 = 0LL;
      qword_140D3B208 = 0LL;
    }
    if ( (v8 & 0x100000) != 0 )
    {
      sub_140967848();
      v8 = *a2;
    }
    if ( (v8 & 0x2000000) != 0 )
    {
      qword_140C00318 = 0LL;
      v8 = *a2;
    }
    if ( (v8 & 0x4000000) != 0 )
    {
      qword_140C00310 = 0LL;
      v8 = *a2;
    }
    if ( (v8 & 0x200) != 0 )
    {
      qword_140C00308 = 0LL;
      v8 = *a2;
    }
    if ( (v8 & 0x100) != 0 )
    {
      qword_140C4EF30 = 0LL;
      qword_140C002F8 = 0LL;
      v8 = *a2;
    }
    if ( (v8 & 0x400) != 0 )
      qword_140C4EF38 = 0LL;
    v9 = a2[4];
    if ( (v9 & 1) != 0 )
    {
      qword_140C4EF40 = 0LL;
      v9 = a2[4];
    }
    if ( (v9 & 2) != 0 )
      qword_140C4EF48 = 0LL;
    v10 = *a2;
    if ( (*a2 & 0x200000) != 0 )
    {
      qword_140CF7088 = 0LL;
      v10 = *a2;
    }
    if ( (v10 & 0x10000) != 0 )
      sub_1409DE1A0(0LL);
    if ( (a2[1] & 0x10) != 0 )
      sub_1405595B8(1);
    v11 = a2[4];
    if ( (v11 & 0x400000) != 0 )
    {
      qword_140C002D8 = 0LL;
      v11 = a2[4];
    }
    if ( (v11 & 0x80000) != 0 )
    {
      qword_140C002E0 = 0LL;
      v11 = a2[4];
    }
    if ( (v11 & 0x100000) != 0 )
    {
      qword_140C002E8 = 0LL;
      v11 = a2[4];
    }
    if ( (v11 & 0x200000) != 0 )
    {
      qword_140C002F0 = 0LL;
      v11 = a2[4];
    }
    if ( (v11 & 0x1000000) != 0 )
    {
      qword_140C0C5C0 = 0LL;
      v11 = a2[4];
    }
    if ( (v11 & 0x2000000) != 0 )
      qword_140C0C5C8 = 0LL;
    if ( (a2[2] & 0x8000000) != 0 )
      qword_140C0C5D0 = 0LL;
    if ( (*a2 & 0x40000) != 0 )
      DbgSetDebugPrintCallback((PDEBUG_PRINT_CALLBACK)DebugPrintCallback, 0);
    v12 = a2[1];
    if ( (v12 & 2) != 0 )
    {
      sub_1405716A4((ULONG_PTR)&unk_140C16300);
      v12 = a2[1];
    }
    if ( (v12 & 0x400) != 0 )
    {
      for ( i = 0; i < dword_140C16460; ++i )
        sub_1405716A4((ULONG_PTR)qword_140C16468 + 352 * i);
    }
    if ( (a2[4] & 0x80u) != 0 )
      sub_1409854AC();
    if ( (a2[1] & 0x880000) != 0 && (!a1 || (*(_DWORD *)(a1 + 4) & 0x880000) == 0) )
      KeCancelTimer2((__int64)&unk_140C16160);
  }
  return sub_1406D5860(a1, (_DWORD)a2, 0, a3, a4);
}
