/*
 * XREFs of GreGetClipBox @ 0x1C00389B0
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C00595A0 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     bCvtPts1 @ 0x1C0007EC4 (bCvtPts1.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003881C (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C0038B60 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C0038B88 (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00397F0 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C003AC00 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003BD24 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003BD68 (--1DCOBJ@@QEAA@XZ.c)
 *     ?iComplexity@RGNCOREOBJ@@QEBAJXZ @ 0x1C0044530 (-iComplexity@RGNCOREOBJ@@QEBAJXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0049D88 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DLODCOBJ@@QEAA@XZ @ 0x1C0049DDC (--1DLODCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetClipBox(HDC a1, int *a2, int a3)
{
  unsigned int v5; // edi
  DC *v6; // rcx
  struct REGION *v7; // rax
  DC *v8; // rcx
  struct REGION *v9; // rsi
  int v10; // r8d
  int v11; // r9d
  int v12; // r10d
  __int64 v13; // rax
  __int64 v14; // rcx
  DC *v16; // rax
  int v17; // eax
  int v18; // ecx
  __int64 v19; // [rsp+20h] [rbp-69h] BYREF
  int v20; // [rsp+28h] [rbp-61h]
  int v21; // [rsp+2Ch] [rbp-5Dh]
  DC *v22[6]; // [rsp+30h] [rbp-59h] BYREF
  struct _ERESOURCE v23; // [rsp+60h] [rbp-29h] BYREF
  __int64 v24; // [rsp+108h] [rbp+7Fh] BYREF

  v5 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v22, a1);
  if ( v22[0] )
  {
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)&v23.SharedWaiters);
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v23, (struct XDCOBJ *)v22, 1);
    if ( (v23.ActiveCount & 1) != 0 )
    {
      if ( DC::prgnRao(v22[0]) )
        v7 = DC::prgnRao(v6);
      else
        v7 = DC::prgnVisSnap(v6);
      v9 = v7;
      *(_OWORD *)a2 = *(_OWORD *)((char *)v7 + 56);
      v10 = a2[2];
      if ( *a2 >= v10 || (v11 = a2[1], v12 = a2[3], v11 >= v12) )
      {
        *(_QWORD *)a2 = 0LL;
        *((_QWORD *)a2 + 1) = 0LL;
      }
      else
      {
        v13 = *((_DWORD *)v8 + 10) & 1;
        *a2 -= *((_DWORD *)v8 + 2 * v13 + 254);
        a2[2] = v10 - *((_DWORD *)v8 + 2 * v13 + 254);
        a2[1] = v11 - *((_DWORD *)v8 + 2 * v13 + 255);
        a2[3] = v12 - *((_DWORD *)v8 + 2 * v13 + 255);
        if ( a3 )
        {
          v14 = *((_QWORD *)v8 + 122);
          v20 = *(_DWORD *)(v14 + 208);
          v21 = *(_DWORD *)(v14 + 108) & 1;
          EXFORMOBJ::vInit((EXFORMOBJ *)&v19, (struct XDCOBJ *)v22, 0x402u, 0x80000000);
          if ( v19 )
          {
            if ( (*(_BYTE *)(v19 + 32) & 0x43) != 0x43 )
              bCvtPts1(v19, a2, 2LL);
            if ( v21 )
            {
              ++*a2;
              ++a2[2];
            }
          }
          v8 = v22[0];
        }
        if ( (*(_DWORD *)(*((_QWORD *)v8 + 122) + 108LL) & 1) != 0 )
        {
          v17 = *a2;
          v18 = a2[2];
          if ( *a2 > v18 )
          {
            *a2 = v18;
            a2[2] = v17;
          }
        }
      }
      v24 = ((unsigned __int64)v9 + 24) & -(__int64)(v9 != 0LL);
      v5 = RGNCOREOBJ::iComplexity((RGNCOREOBJ *)&v24);
    }
    else
    {
      v16 = v22[0];
      *(_QWORD *)a2 = 0LL;
      *((_QWORD *)a2 + 1) = 0LL;
      if ( !*((_QWORD *)v16 + 62) || (*((_DWORD *)v16 + 9) & 0x5000) == 0x1000 )
        v5 = 1;
    }
    DEVLOCKOBJ::vDestructor(&v23);
    DLODCOBJ::~DLODCOBJ((DLODCOBJ *)&v23.SharedWaiters);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v22);
  return v5;
}
