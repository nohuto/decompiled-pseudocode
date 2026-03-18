/*
 * XREFs of ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C0063428
 * Callers:
 *     SetSysColor @ 0x1C0062BAC (SetSysColor.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C0062FA0 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreSetBrushOwner @ 0x1C00630E0 (GreSetBrushOwner.c)
 *     bDeleteBrush @ 0x1C00C82E0 (bDeleteBrush.c)
 *     GreGetBrushColor @ 0x1C01691F0 (GreGetBrushColor.c)
 * Callees:
 *     HmgShareLockCheck @ 0x1C0020DC0 (HmgShareLockCheck.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0021390 (DEC_SHARE_REF_CNT.c)
 *     PushThreadGuardedObject @ 0x1C00232C0 (PushThreadGuardedObject.c)
 *     ?bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ @ 0x1C008EFFC (-bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ.c)
 *     ?Feature_3101493560__private_IsEnabled@@YAHXZ @ 0x1C00D8CC0 (-Feature_3101493560__private_IsEnabled@@YAHXZ.c)
 */

BRUSHSELOBJ *__fastcall BRUSHSELOBJ::BRUSHSELOBJ(BRUSHSELOBJ *this, HBRUSH a2)
{
  _QWORD *v2; // rdi
  unsigned int v3; // esi
  __int64 v5; // rax

  *((_DWORD *)this + 2) = 0;
  v2 = (_QWORD *)((char *)this + 16);
  v3 = (unsigned int)a2;
  *((_OWORD *)this + 1) = 0LL;
  *((_OWORD *)this + 2) = 0LL;
  if ( (unsigned int)Feature_3101493560__private_IsEnabled() )
    PushThreadGuardedObject(
      v2,
      (unsigned __int64)this & ((unsigned __int128)-(__int128)(unsigned __int64)v2 >> 64),
      (__int64)UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::OnUnexpectedThreadTerminationStatic);
  v5 = HmgShareLockCheck(v3, 16);
  *(_QWORD *)this = v5;
  if ( v5 && !(unsigned int)XEBRUSHOBJ::bSaveAttributes(this) )
  {
    DEC_SHARE_REF_CNT(*(unsigned int **)this);
    *(_QWORD *)this = 0LL;
  }
  return this;
}
