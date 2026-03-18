/*
 * XREFs of ?Unlock@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0E@Z @ 0x1C007DF30
 * Callers:
 *     ?UnlockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX_K1E@Z @ 0x1C007DEB0 (-UnlockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX_K1E@Z.c)
 * Callees:
 *     ?Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C007E050 (-Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C007F7CC (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0081BBC (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::Unlock(VIDMM_RECYCLE_MULTIRANGE *this, __int64 a2, __int64 a3, char a4)
{
  unsigned __int8 v8; // dl
  struct _MDL *v9; // rcx
  struct VIDMM_RECYCLE_RANGE *NextRange; // rdi
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rbp
  void *v13; // rcx
  void *v14; // rcx

  WdLogSingleEntry3(4LL, this, a2, a3);
  v9 = (struct _MDL *)*((_QWORD *)this + 23);
  NextRange = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
  if ( v9 )
  {
    MmUnlockPages(v9);
    IoFreeMdl(*((PMDL *)this + 23));
    *((_QWORD *)this + 23) = 0LL;
    *((_QWORD *)this + 22) = 0LL;
  }
  v11 = *((_QWORD *)this + 6) + a2;
  v12 = v11 + a3;
  while ( 1 )
  {
    if ( *((_QWORD *)NextRange + 4) >= v11 || *((_QWORD *)NextRange + 5) > v11 )
      VIDMM_RECYCLE_RANGE::Unlock(NextRange);
    if ( *((_QWORD *)NextRange + 5) >= v12 )
      break;
    NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
  }
  --*((_DWORD *)this + 23);
  if ( a4 )
  {
    v14 = (void *)*((_QWORD *)this + 13);
    *((_BYTE *)this + 129) = 0;
    if ( v14 )
    {
      ExFreePoolWithTag(v14, 0);
      *((_QWORD *)this + 13) = 0LL;
    }
  }
  else
  {
    v13 = (void *)*((_QWORD *)this + 12);
    *((_BYTE *)this + 128) = 0;
    if ( v13 )
    {
      ExFreePoolWithTag(v13, 0);
      *((_QWORD *)this + 12) = 0LL;
    }
  }
  if ( !*((_DWORD *)this + 23) )
    *((_DWORD *)this + 54) = 3;
  VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(this, v8);
}
