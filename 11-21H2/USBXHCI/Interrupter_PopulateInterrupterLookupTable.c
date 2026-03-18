/*
 * XREFs of Interrupter_PopulateInterrupterLookupTable @ 0x1C006EE48
 * Callers:
 *     Interrupter_PrepareHardware @ 0x1C006ED2C (Interrupter_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000A588 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall Interrupter_PopulateInterrupterLookupTable(__int64 a1)
{
  unsigned int v2; // ebx
  ULONG ActiveProcessorCount; // eax
  __int64 Pool2; // rax
  int v6; // edx
  unsigned __int16 v7; // r8
  unsigned int i; // edx

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 588LL) == 1 && *(_DWORD *)(a1 + 24) == 2 || *(_DWORD *)(a1 + 24) == 1 )
  {
    return 0;
  }
  else
  {
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    *(_DWORD *)(a1 + 48) = ActiveProcessorCount;
    Pool2 = ExAllocatePool2(64LL, 2 * ActiveProcessorCount, 1229146200LL);
    v2 = 0;
    *(_QWORD *)(a1 + 56) = Pool2;
    if ( Pool2 )
    {
      v7 = 1;
      for ( i = 0; i < *(_DWORD *)(a1 + 48); ++i )
      {
        *(_WORD *)(*(_QWORD *)(a1 + 56) + 2LL * i) = v7;
        v7 += ((unsigned __int16)(v7 + 1) == *(_DWORD *)(a1 + 64)) + 1;
        if ( (unsigned int)v7 >= *(_DWORD *)(a1 + 24) )
          v7 = 1;
      }
    }
    else
    {
      v2 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v6,
          9,
          62,
          (__int64)&WPP_84765f96df013c20a94fd65d5e9532b8_Traceguids);
      }
    }
  }
  return v2;
}
