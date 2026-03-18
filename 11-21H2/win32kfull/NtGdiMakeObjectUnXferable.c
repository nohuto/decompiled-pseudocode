/*
 * XREFs of NtGdiMakeObjectUnXferable @ 0x1C0146B70
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bValid@XDCOBJ@@QEBAHXZ @ 0x1C00404FC (-bValid@XDCOBJ@@QEBAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?Feature_3190902075__private_IsEnabled@@YAHXZ @ 0x1C015D760 (-Feature_3190902075__private_IsEnabled@@YAHXZ.c)
 *     ??1MLOCKFAST@@QEAA@XZ @ 0x1C026B51C (--1MLOCKFAST@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiMakeObjectUnXferable(HDC a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // bl
  unsigned int v7; // ebx
  int IsEnabled; // eax
  __int64 v9; // rdx
  _QWORD v10[7]; // [rsp+20h] [rbp-38h] BYREF
  char v11; // [rsp+60h] [rbp+8h] BYREF

  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  v6 = BYTE2(a1) & 0x1F;
  GreAcquireHmgrSemaphore(a1, a2, a3, a4);
  if ( v6 == 1 )
  {
    IsEnabled = Feature_3190902075__private_IsEnabled();
    v7 = 0;
    LOBYTE(v9) = 1;
    if ( IsEnabled )
    {
      if ( (unsigned int)HmgMarkUnXferable(a1, v9) )
      {
        DCOBJ::DCOBJ((DCOBJ *)v10, a1);
        if ( XDCOBJ::bValid((XDCOBJ *)v10) )
          *(_DWORD *)(v10[0] + 2112LL) = 0;
        DCOBJ::~DCOBJ((DCOBJ *)v10);
        v7 = 1;
      }
    }
    else
    {
      v7 = HmgMarkUnXferable(a1, v9);
    }
  }
  else
  {
    v7 = 0;
  }
  MLOCKFAST::~MLOCKFAST((MLOCKFAST *)&v11);
  return v7;
}
