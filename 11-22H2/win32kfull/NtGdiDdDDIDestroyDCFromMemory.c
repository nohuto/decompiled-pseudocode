/*
 * XREFs of NtGdiDdDDIDestroyDCFromMemory @ 0x1C000BD90
 * Callers:
 *     <none>
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0087EAC (--1SURFREF@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00E13F4 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00E1440 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0264DB0 (--0SURFREF@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiDdDDIDestroyDCFromMemory(ULONG64 a1)
{
  int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rax
  __int128 v5; // [rsp+20h] [rbp-48h]
  _BYTE v6[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+50h] [rbp-18h]
  char v8; // [rsp+78h] [rbp+10h] BYREF

  if ( a1 >= MmUserProbeAddress )
    a1 = MmUserProbeAddress;
  v5 = *(_OWORD *)a1;
  if ( !*(_QWORD *)(a1 + 8) || !(_QWORD)v5 )
    return 3221225485LL;
  v1 = -1073741811;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v8);
  SURFREF::SURFREF((SURFREF *)v6);
  LOBYTE(v2) = 5;
  v3 = HmgShareLockCheckIgnoreStockBit(*((_QWORD *)&v5 + 1), v2);
  v7 = v3;
  if ( v3 && *(_QWORD *)(v3 + 224) )
    v1 = 0;
  SURFREF::~SURFREF((SURFREF *)v6);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v8);
  if ( v1 >= 0 )
  {
    if ( !(unsigned int)GrepDeleteDC(v5, 0x1000000LL) )
      v1 = -1073741811;
    if ( v1 >= 0 && !(unsigned int)bDeleteSurface(*((_QWORD *)&v5 + 1)) )
      return (unsigned int)-1073741811;
  }
  return (unsigned int)v1;
}
