/*
 * XREFs of ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x1C007783C
 * Callers:
 *     EditionPostDwmSpeedHitTest @ 0x1C0077400 (EditionPostDwmSpeedHitTest.c)
 *     ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x1C007783C (-DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z.c)
 * Callees:
 *     ?LayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x1C00036E4 (-LayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z.c)
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C0077660 (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x1C007783C (-DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z.c)
 *     ?PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z @ 0x1C0077940 (-PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     PtInRect @ 0x1C0077984 (PtInRect.c)
 */

struct tagWND *__fastcall DCEChildTreeSpeedHitTest(
        struct tagWND *a1,
        struct tagPOINT a2,
        struct tagPOINT *a3,
        const struct _SUBPIXELS *a4)
{
  tagWND *i; // rsi
  __int64 v9; // rcx
  struct tagPOINT v10; // rbx
  struct tagWND *result; // rax
  struct tagPOINT v12; // [rsp+40h] [rbp+8h] BYREF

  for ( i = (tagWND *)*((_QWORD *)a1 + 14); ; i = (tagWND *)*((_QWORD *)i + 11) )
  {
    if ( !i )
      return a1;
    if ( *((_QWORD *)i + 27) )
      break;
    v9 = *((_QWORD *)i + 5);
    v10 = *a3;
    v12 = *a3;
    if ( (*(_BYTE *)(v9 + 31) & 0x10) != 0
      && v10.x >= *(_DWORD *)(v9 + 88)
      && v10.x < *(_DWORD *)(v9 + 96)
      && v10.y >= *(_DWORD *)(v9 + 92)
      && v10.y < *(_DWORD *)(v9 + 100)
      && !tagWND::PtOutsideClipRgnOrMaxClip(i, &v12)
      && ((*(_BYTE *)(*((_QWORD *)i + 5) + 26LL) & 8) == 0 || LayerHitTest(i, v10)) )
    {
      goto LABEL_12;
    }
LABEL_2:
    ;
  }
  v12 = a2;
  if ( !(unsigned int)DCEIsWindowHit(i, &v12, a4) )
    goto LABEL_2;
  *a3 = v12;
LABEL_12:
  if ( !*((_QWORD *)i + 14) )
    return i;
  if ( !(unsigned int)PtInRect(*((_QWORD *)i + 5) + 104LL, *a3) )
    return i;
  result = DCEChildTreeSpeedHitTest(i, a2, a3, a4);
  if ( !result || result == i )
    return i;
  return result;
}
