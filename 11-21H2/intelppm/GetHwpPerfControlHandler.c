/*
 * XREFs of GetHwpPerfControlHandler @ 0x1C002CF80
 * Callers:
 *     <none>
 * Callees:
 *     IsHwpIdleOptimizationSupported @ 0x1C002D200 (IsHwpIdleOptimizationSupported.c)
 *     IsHwpFastMsrSupported @ 0x1C002D2A0 (IsHwpFastMsrSupported.c)
 *     IsHwpPackageControlSupported @ 0x1C002D340 (IsHwpPackageControlSupported.c)
 */

__int64 __fastcall GetHwpPerfControlHandler(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        unsigned __int64 *a5,
        _QWORD *a6,
        _BYTE *a7,
        _BYTE *a8,
        bool *a9,
        int *a10)
{
  __int64 v10; // rax
  __int64 v11; // r10
  __int64 v12; // r11
  unsigned int v13; // ebx
  void *v14; // rax
  int v15; // ebx

  v10 = *(_QWORD *)(a2 + 144);
  v11 = 0LL;
  v12 = 0LL;
  v13 = -1073741637;
  if ( *(_BYTE *)(a2 + 125) )
  {
    if ( *(_BYTE *)(v10 + 128) != 127 || *(_BYTE *)(v10 + 129) != 8 || *(_BYTE *)(v10 + 130) != 16 )
      return v13;
    v11 = *(_QWORD *)(v10 + 132);
    v12 = 16711680LL;
  }
  if ( *(_BYTE *)(a2 + 126) )
  {
    if ( *(_BYTE *)(v10 + 152) != 127 || *(_BYTE *)(v10 + 153) != 8 || *(_BYTE *)(v10 + 154) )
      return v13;
    if ( v11 )
    {
      if ( v11 != *(_QWORD *)(v10 + 156) )
        return v13;
    }
    else
    {
      v11 = *(_QWORD *)(v10 + 156);
    }
    v12 |= 0xFFuLL;
  }
  if ( *(_BYTE *)(a2 + 127) )
  {
    if ( *(_BYTE *)(v10 + 176) != 127 || *(_BYTE *)(v10 + 177) != 8 || *(_BYTE *)(v10 + 178) != 8 )
      return v13;
    if ( v11 )
    {
      if ( v11 != *(_QWORD *)(v10 + 180) )
        return v13;
    }
    else
    {
      v11 = *(_QWORD *)(v10 + 180);
    }
    v12 |= 0xFF00uLL;
  }
  if ( *(_BYTE *)(a2 + 128) )
  {
    if ( *(_BYTE *)(v10 + 416) != 127 || *(_BYTE *)(v10 + 417) != 8 || *(_BYTE *)(v10 + 418) != 24 )
      return v13;
    if ( v11 )
    {
      if ( v11 != *(_QWORD *)(v10 + 420) )
        return v13;
    }
    else
    {
      v11 = *(_QWORD *)(v10 + 420);
    }
    v12 |= 0xFF000000uLL;
  }
  if ( *(_BYTE *)(a2 + 129) )
  {
    if ( *(_BYTE *)(v10 + 392) != 127 || *(_BYTE *)(v10 + 393) != 10 || *(_BYTE *)(v10 + 394) != 32 )
      return v13;
    if ( v11 )
    {
      if ( v11 != *(_QWORD *)(v10 + 396) )
        return v13;
    }
    else
    {
      v11 = *(_QWORD *)(v10 + 396);
    }
    v12 |= 0x3FF00000000uLL;
  }
  if ( !*(_BYTE *)(a2 + 130) && ((v11 - 1906) & 0xFFFFFFFFFFFFFFFDuLL) == 0 )
  {
    *(_QWORD *)(a2 + 184) = v12;
    *a6 = PerfSelectionHwp;
    if ( _bittest64((const signed __int64 *)(a1 + 280), 0x2Eu) )
    {
      *a3 = PerfControlHwpLp;
      *a4 = PerfControlHwpLp;
      *a5 = 0LL;
      *a8 = 1;
      *a7 = 0;
      *a10 = 0;
      *a9 = 0;
    }
    else
    {
      *a3 = PerfControlHwp;
      v14 = PerfControlHwpHidden;
      if ( dword_1C001E5A8 == 1 )
        v14 = PerfControlHwpHv;
      *a4 = v14;
      *a5 = (unsigned __int64)PerfControlHwpPackage & -(__int64)((unsigned __int8)IsHwpPackageControlSupported() != 0);
      v15 = (unsigned __int8)IsHwpFastMsrSupported() != 0 ? 500 : 1000;
      *a8 = 0;
      *a7 = 1;
      *a9 = (unsigned __int8)IsHwpIdleOptimizationSupported() == 0;
      *a10 = v15;
    }
    return 0;
  }
  return v13;
}
