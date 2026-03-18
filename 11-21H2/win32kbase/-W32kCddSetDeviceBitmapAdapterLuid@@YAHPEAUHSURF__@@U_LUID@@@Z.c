/*
 * XREFs of ?W32kCddSetDeviceBitmapAdapterLuid@@YAHPEAUHSURF__@@U_LUID@@@Z @ 0x1C00B4240
 * Callers:
 *     <none>
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C001F08C (--1SURFREF@@QEAA@XZ.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C00AE0E0 (HmgShareLockIgnoreStockBit.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C016C500 (--0SURFREF@@QEAA@XZ.c)
 */

__int64 __fastcall W32kCddSetDeviceBitmapAdapterLuid(HSURF a1, struct _LUID a2)
{
  unsigned int v2; // edi
  __int64 v4; // rax
  unsigned int v5; // edi
  _BYTE v7[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]

  v2 = (unsigned int)a1;
  SURFREF::SURFREF((SURFREF *)v7);
  v4 = HmgShareLockIgnoreStockBit(v2);
  v8 = v4;
  if ( v4 && ((v5 = 1, (*(_DWORD *)(v4 + 112) & 0x400000) != 0) || *(_WORD *)(v4 + 100) == 1) )
    *(struct _LUID *)(v4 + 576) = a2;
  else
    v5 = 0;
  SURFREF::~SURFREF((SURFREF *)v7);
  return v5;
}
