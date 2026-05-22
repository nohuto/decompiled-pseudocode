/*
 * XREFs of ?HintTiles@CDevice@DirectComposition@@UEAAJPEBUtagRECT@@I@Z @ 0x1800F1FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?SetHintTiles@CSurfaceManager@DirectComposition@@QEAAXPEBUtagRECT@@I@Z @ 0x1800F54AC (-SetHintTiles@CSurfaceManager@DirectComposition@@QEAAXPEBUtagRECT@@I@Z.c)
 */

__int64 __fastcall DirectComposition::CDevice::HintTiles(
        DirectComposition::CDevice *this,
        const struct tagRECT *a2,
        unsigned int a3)
{
  unsigned int v6; // ebx
  unsigned int i; // edx
  const struct tagRECT *v8; // rax
  int bottom; // ecx
  __int64 v10; // rcx
  _QWORD *v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = (_QWORD *)((char *)this + 56);
  DirectComposition::CDeviceLock::Enter((DirectComposition::CDevice *)((char *)this + 56));
  if ( a3 - 1 <= 4 && (v6 = 0, a2) )
  {
    for ( i = 0; i < a3; ++i )
    {
      v8 = &a2[i];
      if ( v8->left < 0 )
        goto LABEL_14;
      if ( v8->right < 0 )
        goto LABEL_14;
      if ( v8->top < 0 )
        goto LABEL_14;
      bottom = v8->bottom;
      if ( bottom < 0 || v8->left >= v8->right || v8->top >= bottom )
        goto LABEL_14;
    }
    v10 = *((_QWORD *)this + 70);
    if ( v10 )
      DirectComposition::CSurfaceManager::SetHintTiles(*(DirectComposition::CSurfaceManager **)(v10 + 312), a2, a3);
  }
  else
  {
LABEL_14:
    v6 = -2147024809;
  }
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v12);
  return v6;
}
