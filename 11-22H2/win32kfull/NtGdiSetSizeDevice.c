/*
 * XREFs of NtGdiSetSizeDevice @ 0x1C02D0C60
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiSetSizeDevice(HDC a1, int a2, int a3)
{
  unsigned int v3; // ebx
  _QWORD v7[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v8[40]; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0;
  if ( a2 && a3 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v7, a1);
    if ( v7[0] )
    {
      v3 = 1;
      *(_DWORD *)(*(_QWORD *)(v7[0] + 976LL) + 424LL) = a2;
      *(_DWORD *)(*(_QWORD *)(v7[0] + 976LL) + 428LL) = a3;
      if ( v7[0] )
        XDCOBJ::vUnlockFast((XDCOBJ *)v7);
    }
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v8);
  }
  return v3;
}
