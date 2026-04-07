/*
 * XREFs of ?OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180011CB0
 * Callers:
 *     ?ClientGlassChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180011C00 (-ClientGlassChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x1800278D0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     _o_ceilf_0 @ 0x18005D2B0 (_o_ceilf_0.c)
 */

void __fastcall CWindowList::OnClientGlassChange(CWindowList *this, struct CWindowData *a2)
{
  int v3; // ebp
  int v4; // esi
  int v5; // edi
  int v6; // eax
  __int128 v7; // xmm0
  CVisual *v8; // rcx
  int v9; // eax
  __int128 v10; // [rsp+20h] [rbp-18h]

  if ( *((_QWORD *)a2 + 35) == 0x7FFFFFFF7FFFFFFFLL
    && *((_DWORD *)a2 + 72) == 0x7FFFFFFF
    && *((_DWORD *)a2 + 73) == 0x7FFFFFFF )
  {
    v7 = *(_OWORD *)((char *)a2 + 280);
    v6 = HIDWORD(v7);
    v5 = *((_QWORD *)a2 + 36);
    v4 = HIDWORD(*((_QWORD *)a2 + 35));
    v3 = v7;
  }
  else
  {
    v3 = (int)o_ceilf_0((float)*((int *)a2 + 70) * *((float *)a2 + 83));
    LODWORD(v10) = v3;
    v4 = (int)o_ceilf_0((float)*((int *)a2 + 71) * *((float *)a2 + 83));
    DWORD1(v10) = v4;
    v5 = (int)o_ceilf_0((float)*((int *)a2 + 72) * *((float *)a2 + 83));
    DWORD2(v10) = v5;
    v6 = (int)o_ceilf_0((float)*((int *)a2 + 73) * *((float *)a2 + 83));
    HIDWORD(v10) = v6;
    v7 = v10;
  }
  if ( *((_DWORD *)a2 + 24) != v3
    || *((_DWORD *)a2 + 25) != v4
    || *((_DWORD *)a2 + 26) != v5
    || *((_DWORD *)a2 + 27) != v6 )
  {
    v8 = (CVisual *)*((_QWORD *)a2 + 55);
    *((_OWORD *)a2 + 6) = v7;
    if ( v8 )
    {
      v9 = *((_DWORD *)v8 + 22);
      if ( (v9 & 0x4000) == 0 )
      {
        *((_DWORD *)v8 + 22) = v9 | 0x4000;
        CVisual::PropagateDirtyChildren(v8);
      }
    }
  }
}
