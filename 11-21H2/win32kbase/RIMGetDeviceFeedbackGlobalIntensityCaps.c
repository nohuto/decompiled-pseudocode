/*
 * XREFs of RIMGetDeviceFeedbackGlobalIntensityCaps @ 0x1C00DC348
 * Callers:
 *     RIMConfigureDeviceFeedback @ 0x1C00DBFA0 (RIMConfigureDeviceFeedback.c)
 *     RIMAllocateHidDesc @ 0x1C018A2D4 (RIMAllocateHidDesc.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C00869F0 (Win32AllocPoolZInit.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C018E898 (rimHidP_GetSpecificValueCaps.c)
 */

__int64 __fastcall RIMGetDeviceFeedbackGlobalIntensityCaps(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  unsigned __int16 v5; // si
  unsigned __int16 v6; // r15
  unsigned __int16 v8; // [rsp+90h] [rbp+18h] BYREF
  __int16 v9; // [rsp+98h] [rbp+20h] BYREF

  v8 = 0;
  if ( (unsigned int)rimHidP_GetSpecificValueCaps(2, 14, 0, 35, 0LL, (__int64)&v8, a1) != -1072627705 )
    return 0LL;
  v4 = Win32AllocPoolZInit(72LL * v8, 1668707157);
  if ( !v4 )
    return 0LL;
  if ( (int)rimHidP_GetSpecificValueCaps(2, 14, 0, 35, v4, (__int64)&v8, a1) < 0 )
    return 0LL;
  v5 = 0;
  if ( !v8 )
    return 0LL;
  while ( 1 )
  {
    v9 = 0;
    v6 = *(_WORD *)(v4 + 72LL * v5 + 6);
    if ( (unsigned int)rimHidP_GetSpecificValueCaps(2, 14, v6, 33, 0LL, (__int64)&v9, a1) == -1072627708
      && (unsigned int)rimHidP_GetSpecificValueCaps(2, 14, v6, 32, 0LL, (__int64)&v9, a1) == -1072627708 )
    {
      break;
    }
    if ( ++v5 >= v8 )
      return 0LL;
  }
  if ( a2 )
  {
    *(_OWORD *)a2 = *(_OWORD *)(v4 + 72LL * v5);
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(v4 + 72LL * v5 + 16);
    *(_OWORD *)(a2 + 32) = *(_OWORD *)(v4 + 72LL * v5 + 32);
    *(_OWORD *)(a2 + 48) = *(_OWORD *)(v4 + 72LL * v5 + 48);
    *(_QWORD *)(a2 + 64) = *(_QWORD *)(v4 + 72LL * v5 + 64);
  }
  return 1LL;
}
