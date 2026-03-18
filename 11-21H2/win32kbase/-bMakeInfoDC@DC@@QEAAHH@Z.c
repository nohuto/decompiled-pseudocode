/*
 * XREFs of ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C00CBD30
 * Callers:
 *     GreRestoreDCInternal @ 0x1C00BEFB0 (GreRestoreDCInternal.c)
 * Callees:
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C0071D24 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C00CBE2C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00E5D70 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 */

__int64 __fastcall DC::bMakeInfoDC(DC *this, int a2)
{
  int v2; // eax
  unsigned int v3; // edi
  struct tagSIZE v5; // rax
  struct SURFACE *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF
  __int64 v11; // [rsp+48h] [rbp+20h] BYREF

  v2 = *((_DWORD *)this + 9);
  v3 = 0;
  if ( (v2 & 1) == 0 )
  {
    if ( a2 )
    {
      if ( (v2 & 0x200800) == 0 && !*((_DWORD *)this + 8) )
      {
        *((_DWORD *)this + 8) = 2;
        *((_DWORD *)this + 9) = v2 | 0x800;
        *((_QWORD *)this + 262) = *((_QWORD *)this + 62);
        DC::pSurface(this, 0LL);
        v9 = *((_QWORD *)this + 6);
        if ( *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v9, &v10).cx == *((_DWORD *)this + 128) )
        {
          v10 = *((_QWORD *)this + 64);
          v5 = PDEVOBJ::sizl((PDEVOBJ *)&v9, &v11);
          if ( *(_DWORD *)(*(_QWORD *)&v5 + 4LL) == HIDWORD(v10) )
            return 1;
        }
        *((_QWORD *)this + 64) = **(_QWORD **)&PDEVOBJ::sizl((PDEVOBJ *)&v9, &v10);
LABEL_16:
        DC::bSetDefaultRegion(this);
        return 1;
      }
    }
    else if ( (v2 & 0x800) != 0 && *((_DWORD *)this + 8) == 2 )
    {
      v7 = (struct SURFACE *)*((_QWORD *)this + 262);
      *((_DWORD *)this + 9) = v2 & 0xFFFFF7FF;
      *((_DWORD *)this + 8) = 0;
      DC::pSurface(this, v7);
      v8 = *((_QWORD *)this + 62);
      *((_QWORD *)this + 262) = 0LL;
      if ( !v8 || *(_QWORD *)(v8 + 56) == *((_QWORD *)this + 64) )
        return 1;
      *((_QWORD *)this + 64) = *(_QWORD *)(v8 + 56);
      goto LABEL_16;
    }
  }
  return v3;
}
