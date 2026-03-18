/*
 * XREFs of ?bAllocFontLinks@UMPDOBJ@@QEAAHI@Z @ 0x1C02AB9BC
 * Callers:
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C012AA04 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 * Callees:
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall UMPDOBJ::bAllocFontLinks(UMPDOBJ *this, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  __int64 v5; // rcx
  void *v6; // rax
  bool v7; // zf

  v2 = 0;
  v3 = a2;
  if ( a2 <= *((_DWORD *)this + 104) )
  {
    v6 = (void *)*((_QWORD *)this + 48);
  }
  else
  {
    v5 = *((_QWORD *)this + 48);
    if ( v5 )
    {
      Win32FreePool(v5);
      *((_DWORD *)this + 104) = 0;
    }
    if ( 4 * (_DWORD)v3 )
      v6 = (void *)Win32AllocPool((unsigned int)(4 * v3), 1886221639LL);
    else
      v6 = 0LL;
    *((_QWORD *)this + 48) = v6;
  }
  v7 = v6 == 0LL;
  if ( v6 )
  {
    *((_DWORD *)this + 104) = v3;
    memset(v6, 0, 4 * v3);
    v7 = *((_QWORD *)this + 48) == 0LL;
  }
  LOBYTE(v2) = !v7;
  return v2;
}
