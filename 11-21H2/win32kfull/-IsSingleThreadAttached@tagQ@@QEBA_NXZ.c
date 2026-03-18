/*
 * XREFs of ?IsSingleThreadAttached@tagQ@@QEBA_NXZ @ 0x1C010C718
 * Callers:
 *     zzzReattachThreads @ 0x1C00A8E58 (zzzReattachThreads.c)
 *     ?xxxSendPosMessage@@YAXPEAUtagWND@@IPEAUtagWINDOWPOS@@@Z @ 0x1C0159B20 (-xxxSendPosMessage@@YAXPEAUtagWND@@IPEAUtagWINDOWPOS@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagQ::IsSingleThreadAttached(tagQ *this)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = *((_QWORD *)this + 59);
  if ( !v1 || *(_QWORD *)(v1 + 1488) )
  {
    v2 = *((_QWORD *)this + 60);
    return v2 && !*(_QWORD *)(v2 + 1496);
  }
  return !*((_QWORD *)this + 60);
}
