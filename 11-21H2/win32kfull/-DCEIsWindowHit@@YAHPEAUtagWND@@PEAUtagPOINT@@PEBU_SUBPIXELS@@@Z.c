/*
 * XREFs of ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C0077660
 * Callers:
 *     EditionPostDwmSpeedHitTest @ 0x1C0077400 (EditionPostDwmSpeedHitTest.c)
 *     ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x1C007783C (-DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z.c)
 *     ?DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C0078B68 (-DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 * Callees:
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C006D740 (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     ?PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z @ 0x1C0077940 (-PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     PtInRect @ 0x1C0077984 (PtInRect.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C00779AC (IsWindowUnderActiveLockScreen.c)
 *     ?DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x1C0078D94 (-DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z.c)
 *     ?DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C016B5D8 (-DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 */

__int64 __fastcall DCEIsWindowHit(struct tagWND *this, struct tagPOINT *a2, const struct _SUBPIXELS *a3)
{
  struct tagPOINT v3; // rbx
  const struct _D3DMATRIX *v7; // rdx
  const struct tagRECT *v8; // rcx
  __int64 v9; // rcx
  tagPOINT v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a2;
  v11 = *a2;
  if ( (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 0x10) == 0
    || (unsigned int)GetWindowCloakState(this)
    || (unsigned int)IsWindowUnderActiveLockScreen(this) )
  {
    return 0LL;
  }
  v7 = (const struct _D3DMATRIX *)*((_QWORD *)this + 27);
  v8 = (const struct tagRECT *)(*((_QWORD *)this + 5) + 88LL);
  if ( v7 )
  {
    if ( DCEHitTestWindow(v8, v7, &v11, a3) )
    {
      v3 = v11;
      goto LABEL_6;
    }
    return 0LL;
  }
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(v8, v3) )
    return 0LL;
LABEL_6:
  if ( tagWND::PtOutsideClipRgnOrMaxClip(this, &v11) )
    return 0LL;
  v9 = *((_QWORD *)this + 5);
  if ( (*(_BYTE *)(v9 + 26) & 8) != 0 && (*(_DWORD *)(v9 + 232) & 2) == 0 && !DCELayerHitTest(this, v3) )
    return 0LL;
  if ( *((_QWORD *)this + 27) )
    *a2 = v3;
  return 1LL;
}
