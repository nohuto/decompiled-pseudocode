/*
 * XREFs of ?ValidateConnection@CAudioProcessor@@IEAAJPEAVCConnectionNode@@PEAUIAudioProcessingObject@@PEAUAPO_REG_PROPERTIES@@PEAV?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@_N@Z @ 0x1400102A8
 * Callers:
 *     ?AddAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x1400104C0 (-AddAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?AddAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x1400107B0 (-AddAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B9DC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioProcessor::ValidateConnection(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 **a5)
{
  __int64 v5; // r8
  unsigned __int64 v6; // r10
  __int64 v7; // rcx
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = 0LL;
  v6 = (unsigned __int64)a5[1];
  if ( v6 )
  {
    v7 = **a5;
    if ( (*(_BYTE *)(a4 + 16) & 2) != 0 && *(_DWORD *)(a2 + 40) != *(_DWORD *)(v7 + 40) )
    {
      v9 = 2267LL;
    }
    else if ( (*(_BYTE *)(a4 + 16) & 8) == 0
           || *(_DWORD *)(a2 + 48) == *(_DWORD *)(v7 + 48) && *(_DWORD *)(a2 + 44) == *(_DWORD *)(v7 + 44) )
    {
      if ( (*(_BYTE *)(a4 + 16) & 4) == 0 || *(float *)(a2 + 52) == *(float *)(v7 + 52) )
        goto LABEL_9;
      v9 = 2274LL;
    }
    else
    {
      v9 = 2271LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x887C001ELL,
      v10);
    return 2289827870LL;
  }
LABEL_9:
  if ( (*(_DWORD *)(a4 + 16) & 1) != 0 || !v6 )
    return 0LL;
  while ( *(_QWORD *)(a2 + 72) != *(_QWORD *)((*a5)[v5] + 72) )
  {
    if ( ++v5 >= v6 )
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8F2,
    (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
    (const char *)0x887C001FLL,
    v10);
  return 2289827871LL;
}
