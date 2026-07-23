/*
 * XREFs of KiDetectKvaLeakage @ 0x140A8DE50
 * Callers:
 *     KiSetFeatureBits @ 0x140A8D4C4 (KiSetFeatureBits.c)
 * Callees:
 *     KiIsKvaShadowNeededForBranchConfusion @ 0x140381900 (KiIsKvaShadowNeededForBranchConfusion.c)
 *     HvlGetImplementedPhysicalBits @ 0x140381950 (HvlGetImplementedPhysicalBits.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiIsKvaShadowNeededForTsa @ 0x140410C54 (KiIsKvaShadowNeededForTsa.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     KiIsFbClearSupported @ 0x140579750 (KiIsFbClearSupported.c)
 */

char __fastcall KiDetectKvaLeakage(__int64 a1)
{
  __int64 v3; // rcx
  char v12; // dl
  char v13; // dl
  __int64 v14; // rdx
  int v15; // ecx
  ULONG_PTR v25; // rdx
  int v27[6]; // [rsp+30h] [rbp-20h] BYREF

  v27[0] = 0;
  LODWORD(_RAX) = KiIsKvaShadowNeededForBranchConfusion(a1);
  if ( (_DWORD)_RAX )
    goto LABEL_19;
  LODWORD(_RAX) = KiIsKvaShadowNeededForTsa(a1);
  if ( (_DWORD)_RAX )
    goto LABEL_19;
  LOBYTE(_RAX) = *(_BYTE *)(a1 + 141);
  if ( (_BYTE)_RAX == 2 )
  {
    _RAX = *(unsigned __int8 *)(a1 + 67);
    if ( *(_BYTE *)(a1 + 64) == 6 && (unsigned __int8)_RAX <= 0x36u )
    {
      v3 = 0x6000C010000000LL;
      if ( _bittest64(&v3, _RAX) )
        return _RAX;
    }
  }
  else if ( (_BYTE)_RAX != 3 || *(_BYTE *)(a1 + 64) == 6 && *(_BYTE *)(a1 + 67) == 13 )
  {
    return _RAX;
  }
  _RAX = 0LL;
  __asm { cpuid }
  if ( (unsigned int)_RAX < 7 )
    goto LABEL_18;
  _RAX = 7LL;
  __asm { cpuid }
  if ( (_RDX & 0x20000000) == 0 )
    goto LABEL_18;
  _RAX = __readmsr(0x10Au);
  if ( (_RAX & 1) == 0 )
    goto LABEL_18;
  KiMicrocodeTrackerEnabled = 1;
  LOBYTE(_RAX) = 0;
  v12 = (KeFeatureBits2 & 0x28) == 8;
  if ( (KeFeatureBits2 & 0x380000) != 0x380000 )
  {
    LOBYTE(_RAX) = KiIsFbClearSupported();
    v12 = _RAX | v13;
  }
  if ( v12 )
  {
LABEL_18:
    if ( *(_DWORD *)(a1 + 36) && !KiKvaLeakage )
      KeBugCheckEx(0x5Du, 0x4B56414CuLL, 0LL, 0LL, 0LL);
LABEL_19:
    KiKvaLeakage = 1;
    if ( *(_BYTE *)(a1 + 141) != 2 || (KeFeatureBits2 & 0x10) != 0 )
    {
      if ( !*(_DWORD *)(a1 + 36) )
        KiImplementedPhysicalBits = -1;
    }
    else
    {
      LOBYTE(_RAX) = HvlGetImplementedPhysicalBits(v27);
      if ( (_BYTE)_RAX )
      {
        v15 = v27[0];
      }
      else
      {
        v14 = 0LL;
        _RAX = 0LL;
        v15 = 46;
        while ( *(_DWORD *)((char *)KiCpuTable + _RAX) != *(unsigned __int8 *)(a1 + 141)
             || *(_DWORD *)((char *)KiCpuTable + _RAX + 4) != *(_DWORD *)(a1 + 1736) )
        {
          ++v14;
          _RAX = 20 * v14;
          if ( *((_DWORD *)&KiCpuTable[1] + 5 * v14) == 19 )
            goto LABEL_33;
        }
        LOBYTE(_RAX) = 5 * v14;
        v15 = *((_DWORD *)&KiCpuTable[1] + 5 * v14 + 1);
        if ( !v15 )
        {
          _RAX = 0x80000000LL;
          __asm { cpuid }
          if ( (unsigned int)_RAX < 0x80000008 )
          {
            LOBYTE(_RAX) = 36;
          }
          else
          {
            _RAX = 2147483656LL;
            __asm { cpuid }
          }
          v15 = (unsigned __int8)_RAX;
        }
      }
LABEL_33:
      v25 = *(unsigned int *)(a1 + 36);
      if ( (_DWORD)v25 )
      {
        LOBYTE(_RAX) = KiImplementedPhysicalBits;
        if ( v15 != KiImplementedPhysicalBits && !KiKvaLeakageSimulate )
          KeBugCheckEx(0x5Du, 0x4C315446uLL, v25, v15, KiImplementedPhysicalBits);
      }
      else
      {
        KiImplementedPhysicalBits = v15;
      }
    }
  }
  return _RAX;
}
