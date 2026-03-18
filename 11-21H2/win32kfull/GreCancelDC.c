/*
 * XREFs of GreCancelDC @ 0x1C029E32C
 * Callers:
 *     NtGdiCancelDC @ 0x1C02ACA00 (NtGdiCancelDC.c)
 * Callees:
 *     ?bValid@XDCOBJ@@QEBAHXZ @ 0x1C00404FC (-bValid@XDCOBJ@@QEBAHXZ.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00920F0 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C0123DD4 (--1DCOBJA@@QEAA@XZ.c)
 *     ?Feature_3101493560__private_IsEnabled@@YAHXZ @ 0x1C015D3B4 (-Feature_3101493560__private_IsEnabled@@YAHXZ.c)
 *     ??0DCOBJA@@QEAA@XZ @ 0x1C015F268 (--0DCOBJA@@QEAA@XZ.c)
 *     ??0MLOCKFAST@@QEAA@XZ @ 0x1C026B494 (--0MLOCKFAST@@QEAA@XZ.c)
 *     ??1MLOCKFAST@@QEAA@XZ @ 0x1C026B51C (--1MLOCKFAST@@QEAA@XZ.c)
 *     ?vAltCheckLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C029E2FC (-vAltCheckLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 */

_BOOL8 __fastcall GreCancelDC(HDC a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  BOOL v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *v9; // [rsp+20h] [rbp-40h] BYREF
  int v10; // [rsp+28h] [rbp-38h]
  int v11; // [rsp+2Ch] [rbp-34h]
  __int64 *v12[6]; // [rsp+30h] [rbp-30h] BYREF
  char v13; // [rsp+78h] [rbp+18h] BYREF

  if ( (unsigned int)Feature_3101493560__private_IsEnabled() )
  {
    MLOCKFAST::MLOCKFAST((MLOCKFAST *)&v13, v2, v3, v4);
    DCOBJA::DCOBJA((DCOBJA *)v12);
    XDCOBJ::vAltCheckLock((XDCOBJ *)v12, a1);
    v5 = XDCOBJ::bValid((XDCOBJ *)v12);
    if ( v5 )
    {
      v6 = v12[0][62];
      if ( v6 )
        *(_DWORD *)(v6 + 112) |= 0x40000000u;
    }
    DCOBJA::~DCOBJA(v12);
  }
  else
  {
    MLOCKFAST::MLOCKFAST((MLOCKFAST *)&v13, v2, v3, v4);
    v9 = 0LL;
    v10 = 0;
    v11 = 0;
    XDCOBJ::vAltCheckLock((XDCOBJ *)&v9, a1);
    v5 = XDCOBJ::bValid((XDCOBJ *)&v9);
    if ( v5 )
    {
      v7 = v9[62];
      if ( v7 )
        *(_DWORD *)(v7 + 112) |= 0x40000000u;
      XDCOBJ::vAltUnlockFast(&v9);
    }
  }
  MLOCKFAST::~MLOCKFAST((MLOCKFAST *)&v13);
  return v5;
}
