/*
 * XREFs of GreGetNearestColor @ 0x1C0062D20
 * Callers:
 *     SetSysColor @ 0x1C0062BAC (SetSysColor.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C001BAA4 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1DLODCOBJ@@QEAA@XZ @ 0x1C001DB44 (--1DLODCOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C002E3D4 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002E7BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00308F0 (-vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C0062ED0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ulIndexToRGB @ 0x1C007F6B0 (ulIndexToRGB.c)
 *     ulGetNearestIndexFromColorref @ 0x1C0098430 (ulGetNearestIndexFromColorref.c)
 */

__int64 __fastcall GreGetNearestColor(HDC a1, unsigned int a2)
{
  int v3; // r8d
  SURFACE *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdx
  unsigned int NearestIndexFromColorref; // eax
  _QWORD v10[6]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v11[32]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v12[80]; // [rsp+70h] [rbp-58h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  if ( v10[0] )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v11);
    DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)v11, (struct XDCOBJ *)v10);
    v4 = *(SURFACE **)(v10[0] + 496LL);
    v5 = *(_QWORD *)(v10[0] + 88LL);
    if ( !v4 )
      v4 = SURFACE::pdibDefault;
    if ( (*(_DWORD *)(v10[0] + 32LL) & 0xFFFFFFFD) != 0 )
      v6 = *((_QWORD *)v4 + 16);
    else
      v6 = *(_QWORD *)(*(_QWORD *)(v10[0] + 48LL) + 1776LL);
    v7 = *(unsigned int *)(v10[0] + 120LL);
    if ( (v7 & 1) == 0 || !*(_QWORD *)(*(_QWORD *)(v10[0] + 976LL) + 248LL) || (v7 & 0x10000000) == 0 )
    {
      if ( (a2 & 0x1000000) != 0 || !v6 || *(_DWORD *)(v6 + 28) )
      {
        NearestIndexFromColorref = ulGetNearestIndexFromColorref(v6, *(_QWORD *)(v10[0] + 88LL), a2);
        a2 = ulIndexToRGB(v6, v5, NearestIndexFromColorref);
      }
      else
      {
        a2 &= 0xFFFFFFu;
      }
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v11, v7, v3);
    DLODCOBJ::~DLODCOBJ((DLODCOBJ *)v12);
  }
  else
  {
    a2 = -1;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v10);
  return a2;
}
