/*
 * XREFs of ?AddToMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@@Z @ 0x1C0325E54
 * Callers:
 *     ?ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z @ 0x1C0327554 (-ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C01E8B48 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C032772C (-ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 */

__int64 __fastcall DDAMetaData::AddToMoveList(DDAMetaData *this, struct _D3DKMT_MOVE_RECT *a2)
{
  unsigned int v2; // esi
  unsigned int v4; // ecx
  __int64 v6; // r9
  unsigned int v7; // esi
  _QWORD *Buffer; // rdx
  __int64 v9; // rbx
  const wchar_t *v10; // r9
  __int64 v12; // rcx
  struct _D3DKMT_PRESENT_RGNS v13; // [rsp+50h] [rbp-28h] BYREF

  v2 = *((_DWORD *)this + 11);
  v4 = *((_DWORD *)this + 10);
  if ( v2 >= v4 )
  {
    *(&v13.DirtyRectCount + 1) = 0;
    v13.pDirtyRects = &a2->DestRect;
    v13.DirtyRectCount = 1;
    *(_OWORD *)&v13.MoveRectCount = 0LL;
    if ( !(unsigned int)DDAMetaData::ProcessNewDirtyRects(this, &v13) )
    {
      v9 = 1016LL;
      WdLogSingleEntry1(2LL, 1016LL);
      v10 = L"Failed to add new move to dirty list";
      goto LABEL_9;
    }
  }
  else
  {
    v6 = *((_QWORD *)this + 6);
    if ( *(_DWORD *)(v6 + 12) / 0x18u == v2 )
    {
      v7 = v2 + 4;
      if ( v7 >= v4 )
        v7 = v4;
    }
    else
    {
      v7 = v2 + 1;
    }
    Buffer = AUTOEXPANDALLOCATION::GetBuffer(*((const void ***)this + 6), 24 * v7, 1, v6);
    if ( !Buffer )
    {
      v9 = v7;
      WdLogSingleEntry1(2LL, v7);
      v10 = L"Failed to expand move list to 0x%I64x move";
LABEL_9:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, v9, 0LL, 0LL, 0LL, 0LL);
      return 0LL;
    }
    v12 = 3LL * *((unsigned int *)this + 11);
    *(_OWORD *)&Buffer[v12] = *(_OWORD *)&a2->SourcePoint.x;
    Buffer[v12 + 2] = *(_QWORD *)&a2->DestRect.right;
    ++*((_DWORD *)this + 11);
  }
  return 1LL;
}
