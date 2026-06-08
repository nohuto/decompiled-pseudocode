/*
 * XREFs of ValidateCoordinatedLpiDependenciesProcessor @ 0x1C002F404
 * Callers:
 *     LpiTranslateCoordinatedIdleStates @ 0x1C003C3B0 (LpiTranslateCoordinatedIdleStates.c)
 * Callees:
 *     GetDevExtFromIndex @ 0x1C0001ED0 (GetDevExtFromIndex.c)
 *     WPP_RECORDER_SF_SSS @ 0x1C0007D04 (WPP_RECORDER_SF_SSS.c)
 *     DecodeAcpiIdleState @ 0x1C0036440 (DecodeAcpiIdleState.c)
 */

__int64 __fastcall ValidateCoordinatedLpiDependenciesProcessor(__int64 a1, __int64 a2)
{
  unsigned int v3; // ecx
  __int64 DevExtFromIndex; // rsi
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // [rsp+20h] [rbp-48h]
  char v15; // [rsp+78h] [rbp+10h] BYREF
  char v16; // [rsp+80h] [rbp+18h] BYREF
  __int64 v17; // [rsp+88h] [rbp+20h] BYREF

  v17 = 0LL;
  v3 = *(_DWORD *)a2;
  v16 = 0;
  v15 = 0;
  DevExtFromIndex = GetDevExtFromIndex(v3);
  v6 = 0LL;
  v7 = *(_QWORD *)(DevExtFromIndex + 544);
  while ( 1 )
  {
    if ( (unsigned int)v6 >= *(_DWORD *)(a2 + 4) )
      return 0LL;
    v8 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 8) + 4 * v6);
    v9 = 80 * v8;
    result = DecodeAcpiIdleState(
               DevExtFromIndex,
               80 * (int)v8 + (int)v7 + 48,
               -1,
               *(_DWORD *)(80 * v8 + v7 + 36),
               (__int64)&v17,
               (__int64)&v15,
               (__int64)&v16,
               0LL);
    if ( (int)result < 0 )
      return result;
    if ( v15 )
      break;
    v6 = (unsigned int)(v6 + 1);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_SSS(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v11,
      v12,
      v13,
      v14,
      *(const wchar_t **)(a1 + 272),
      *(const wchar_t **)(DevExtFromIndex + 64),
      *(_QWORD *)(v9 + v7 + 96));
  return 3221225473LL;
}
