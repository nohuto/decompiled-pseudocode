/*
 * XREFs of EngLockSurface @ 0x1C0020170
 * Callers:
 *     ?EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z @ 0x1C00DA790 (-EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z.c)
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C016EC50 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C001F08C (--1SURFREF@@QEAA@XZ.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C001FE90 (HmgShareLockCheckIgnoreStockBit.c)
 *     INC_SHARE_REF_CNT @ 0x1C0020410 (INC_SHARE_REF_CNT.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C00D8BE8 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

SURFOBJ *__stdcall EngLockSurface(HSURF hsurf)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  SURFOBJ *v3; // rbx
  _BYTE v5[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]

  v1 = (unsigned int)hsurf;
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v5);
  v6 = 0LL;
  v2 = HmgShareLockCheckIgnoreStockBit(v1, 5);
  v6 = v2;
  if ( v2 )
  {
    INC_SHARE_REF_CNT(v2);
    v3 = (SURFOBJ *)(v6 + 24);
    if ( !v6 )
      v3 = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  SURFREF::~SURFREF((SURFREF *)v5);
  return v3;
}
