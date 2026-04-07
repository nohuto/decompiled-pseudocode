/*
 * XREFs of ?OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180020448
 * Callers:
 *     ?ClientGlassChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001DF50 (-ClientGlassChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180030C00 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     _o_ceilf_0 @ 0x180060EB0 (_o_ceilf_0.c)
 */

void __fastcall CWindowList::OnClientGlassChange(CWindowList *this, struct CWindowData *a2)
{
  int v3; // ebp
  int v4; // esi
  int v5; // edi
  int v6; // eax
  __int128 v7; // xmm0
  CVisual *v8; // rcx
  __int128 v9; // [rsp+20h] [rbp-18h]

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
    LODWORD(v9) = v3;
    v4 = (int)o_ceilf_0((float)*((int *)a2 + 71) * *((float *)a2 + 83));
    DWORD1(v9) = v4;
    v5 = (int)o_ceilf_0((float)*((int *)a2 + 72) * *((float *)a2 + 83));
    DWORD2(v9) = v5;
    v6 = (int)o_ceilf_0((float)*((int *)a2 + 73) * *((float *)a2 + 83));
    HIDWORD(v9) = v6;
    v7 = v9;
  }
  if ( *((_DWORD *)a2 + 24) != v3
    || *((_DWORD *)a2 + 25) != v4
    || *((_DWORD *)a2 + 26) != v5
    || *((_DWORD *)a2 + 27) != v6 )
  {
    v8 = (CVisual *)*((_QWORD *)a2 + 55);
    *((_OWORD *)a2 + 6) = v7;
    if ( v8 )
      CVisual::SetDirtyFlags(v8, 0x4000);
  }
}
