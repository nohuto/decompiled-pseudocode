/*
 * XREFs of IopMcDereferenceMdl @ 0x14055F5D0
 * Callers:
 *     IopMcReleaseMdl @ 0x14055F834 (IopMcReleaseMdl.c)
 *     IopMcGetBuffer @ 0x140951980 (IopMcGetBuffer.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     IopMcTryUnlockMdl @ 0x14055FACC (IopMcTryUnlockMdl.c)
 */

__int64 __fastcall IopMcDereferenceMdl(ULONG_PTR BugCheckParameter2, KPRIORITY a2)
{
  __int64 v2; // rbp
  signed __int32 v4; // edi
  bool v5; // cc
  int v6; // edi
  int v7; // esi

  v2 = *(_QWORD *)(BugCheckParameter2 + 56);
  v4 = _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 48), 0xFFFFFFFF);
  v5 = v4 <= 1;
  v6 = v4 - 1;
  if ( v5 )
  {
    if ( v6 < 0 )
      KeBugCheckEx(0x1F4u, 2uLL, BugCheckParameter2, v6, *(_QWORD *)BugCheckParameter2);
    v7 = *(_DWORD *)(BugCheckParameter2 + 12);
    if ( !*(_DWORD *)(BugCheckParameter2 + 48) )
    {
      if ( (v7 & 2) != 0 )
        KeSetEvent((PRKEVENT)(BugCheckParameter2 + 64), a2, 0);
      if ( (v7 & 1) != 0 )
        IopMcTryUnlockMdl(BugCheckParameter2, v2);
    }
  }
  return (unsigned int)v6;
}
