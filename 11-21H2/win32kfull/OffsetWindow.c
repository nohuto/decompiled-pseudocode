/*
 * XREFs of OffsetWindow @ 0x1C0084A28
 * Callers:
 *     OffsetChildren @ 0x1C00848F0 (OffsetChildren.c)
 *     ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x1C00FD5BC (-UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 * Callees:
 *     UpdateSprite @ 0x1C0020D60 (UpdateSprite.c)
 *     DwmChildRectChange @ 0x1C006BCDC (DwmChildRectChange.c)
 *     ?GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x1C0084B7C (-GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ.c)
 *     FindSpb @ 0x1C0158F38 (FindSpb.c)
 *     HasVisRgnTracker @ 0x1C015C3EC (HasVisRgnTracker.c)
 */

LONG_PTR __fastcall OffsetWindow(tagWND *this, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  unsigned int v5; // esi
  unsigned __int64 v6; // rcx
  HRGN ExplicitClipRgn; // rax
  _DWORD *Spb; // rax
  LONG_PTR result; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagPOINT v13; // [rsp+70h] [rbp+8h] BYREF

  v4 = a3;
  v5 = a2;
  *(_DWORD *)(*((_QWORD *)this + 5) + 88LL) += a2;
  *(_DWORD *)(*((_QWORD *)this + 5) + 96LL) += a2;
  *(_DWORD *)(*((_QWORD *)this + 5) + 92LL) += a3;
  *(_DWORD *)(*((_QWORD *)this + 5) + 100LL) += a3;
  *(_DWORD *)(*((_QWORD *)this + 5) + 104LL) += a2;
  *(_DWORD *)(*((_QWORD *)this + 5) + 112LL) += a2;
  *(_DWORD *)(*((_QWORD *)this + 5) + 108LL) += a3;
  *(_DWORD *)(*((_QWORD *)this + 5) + 116LL) += a3;
  v6 = *(_QWORD *)(*((_QWORD *)this + 5) + 136LL);
  if ( v6 > 1 )
    GreOffsetRgn(v6, a2, a3);
  ExplicitClipRgn = tagWND::GetExplicitClipRgn(this);
  if ( ExplicitClipRgn )
    GreOffsetRgn(ExplicitClipRgn, v5, v4);
  if ( *(char *)(*((_QWORD *)this + 5) + 16LL) < 0 )
  {
    Spb = (_DWORD *)FindSpb(this);
    Spb[6] += v5;
    Spb[8] += v5;
    Spb[9] += v4;
    Spb[7] += v4;
  }
  result = IsWindowDesktopComposed(this);
  if ( (_DWORD)result )
  {
    result = HasVisRgnTracker(this);
    if ( (_DWORD)result )
      result = DwmChildRectChange((__int64 *)this, v11, v10);
  }
  v12 = *((_QWORD *)this + 5);
  if ( (*(_BYTE *)(v12 + 26) & 8) != 0 )
  {
    v13 = *(struct tagPOINT *)(v12 + 88);
    return UpdateSprite(*(HDEV *)(gpDispInfo + 40LL), this, v10, 0LL, &v13, 0LL, 0LL, 0LL, 0, 0LL, 0, 0LL);
  }
  return result;
}
