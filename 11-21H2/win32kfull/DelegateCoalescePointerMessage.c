/*
 * XREFs of DelegateCoalescePointerMessage @ 0x1C01EC898
 * Callers:
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01DBF48 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     DelegateReleasePointerMessage @ 0x1C01EA234 (DelegateReleasePointerMessage.c)
 * Callees:
 *     DelQEntry @ 0x1C005BE3C (DelQEntry.c)
 */

__int64 __fastcall DelegateCoalescePointerMessage(__int64 a1, int a2, __int64 a3)
{
  int v5; // r8d
  int v7; // r9d
  int v8; // r8d
  unsigned int v9; // edx
  unsigned int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rcx

  v5 = *(_DWORD *)(a3 + 100);
  v7 = -__CFSHR__(v5, 6);
  v8 = -__CFSHR__(v5, 7);
  if ( v8 )
  {
    if ( !v7 )
      goto LABEL_6;
  }
  else if ( v7 )
  {
    goto LABEL_6;
  }
  if ( !a2 )
    return 0LL;
LABEL_6:
  v9 = *(_DWORD *)(a3 + 24);
  if ( v9 == 595 )
    return 0LL;
  v11 = CTouchProcessor::DelegateCoalescePointerMessage(gpTouchProcessor, *(_QWORD *)(a3 + 40), a2, v7, v8, v9);
  v12 = v11;
  if ( a2 && v11 )
  {
    v13 = *(_QWORD *)(a1 + 432);
    if ( *(_QWORD *)(v13 + 80) == a3 )
    {
      *(_QWORD *)(v13 + 80) = 0LL;
      v13 = *(_QWORD *)(a1 + 432);
    }
    DelQEntry(v13 + 24, a3, 1);
  }
  return v12;
}
