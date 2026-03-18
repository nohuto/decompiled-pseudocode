/*
 * XREFs of NtGdiMakeObjectUnXferable @ 0x1C02A8450
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bValid@RFONTOBJ@@QEBAHXZ @ 0x1C011C73C (-bValid@RFONTOBJ@@QEBAHXZ.c)
 *     ??1MLOCKFAST@@QEAA@XZ @ 0x1C0265710 (--1MLOCKFAST@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiMakeObjectUnXferable(HDC a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // si
  __int64 v7; // rdx
  unsigned int v8; // ebx
  _QWORD v9[7]; // [rsp+20h] [rbp-38h] BYREF
  char v10; // [rsp+60h] [rbp+8h] BYREF

  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  v6 = BYTE2(a1) & 0x1F;
  GreAcquireHmgrSemaphore(a1, a2, a3, a4);
  v8 = 0;
  if ( v6 == 1 )
  {
    LOBYTE(v7) = BYTE2(a1) & 0x1F;
    if ( (unsigned int)HmgMarkUnXferable(a1, v7) )
    {
      DCOBJ::DCOBJ((DCOBJ *)v9, a1);
      if ( RFONTOBJ::bValid((RFONTOBJ *)v9) )
        *(_DWORD *)(v9[0] + 2112LL) = 0;
      DCOBJ::~DCOBJ((DCOBJ *)v9);
      v8 = 1;
    }
  }
  MLOCKFAST::~MLOCKFAST((MLOCKFAST *)&v10);
  return v8;
}
