/*
 * XREFs of ?xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01E0794
 * Callers:
 *     NtUserDownlevelTouchpad @ 0x1C0158660 (NtUserDownlevelTouchpad.c)
 * Callees:
 *     ?ReferenceFrameFromId@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@G@Z @ 0x1C01D30E4 (-ReferenceFrameFromId@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@G@Z.c)
 *     ?UnreferenceFrameExternal@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01D8830 (-UnreferenceFrameExternal@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01E0298 (-xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 */

__int64 __fastcall CPTPProcessor::xxxDownlevelInput(CTouchProcessor *a1, const struct tagPTP_DOWNLEVELED_INPUT *a2)
{
  struct tagTHREADINFO *v2; // rdi
  __int16 v4; // si
  const struct CPointerInputFrame *v5; // rax
  const struct CPointerInputFrame *v6; // rbx
  unsigned int v7; // edi

  v2 = gptiCurrent;
  v4 = (__int16)a1;
  v5 = CTouchProcessor::ReferenceFrameFromId(a1, (unsigned __int16)a1);
  v6 = v5;
  if ( v5 )
  {
    if ( (*((_DWORD *)v5 + 57) & 0x80u) == 0 )
    {
      v7 = -1073741811;
LABEL_6:
      CTouchProcessor::UnreferenceFrameExternal(gpTouchProcessor, v6);
      return v7;
    }
    *((_WORD *)v2 + 576) = v4;
    *((_QWORD *)v2 + 145) = *((_QWORD *)v5 + 8);
  }
  else if ( v4 != *((_WORD *)v2 + 576) )
  {
    return (unsigned int)-1073741790;
  }
  v7 = CPTPProcessor::xxxDownlevelInput(v5, a2);
  if ( v6 )
    goto LABEL_6;
  return v7;
}
