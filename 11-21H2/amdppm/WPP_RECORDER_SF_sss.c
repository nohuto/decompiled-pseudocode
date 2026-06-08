/*
 * XREFs of WPP_RECORDER_SF_SSS @ 0x1C00076D4
 * Callers:
 *     ValidateCoordinatedLpiDependenciesProcessor @ 0x1C002E5D8 (ValidateCoordinatedLpiDependenciesProcessor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_SSS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        const wchar_t *a6,
        const wchar_t *a7,
        __int64 a8)
{
  __int64 v8; // rdi
  const wchar_t *v9; // r14
  __int64 v11; // rax
  __int64 v12; // rax
  const wchar_t *v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdx
  const wchar_t *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  bool v19; // zf
  int v21; // [rsp+20h] [rbp-68h]

  v8 = -1LL;
  v9 = a6;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a8 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( *(_WORD *)(a8 + 2 * v11) );
    }
    if ( a7 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a7[v12] );
    }
    v13 = a7;
    if ( !a7 )
      v13 = L"NULL";
    if ( a6 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a6[v14] );
      v15 = 2 * v14 + 2;
    }
    else
    {
      v15 = 10LL;
    }
    v16 = a6;
    if ( !a6 )
      v16 = L"NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_a6b065e9623e3dbf1cba1de742264dc6_Traceguids,
      93LL,
      v16,
      v15,
      v13);
  }
  if ( a8 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *(_WORD *)(a8 + 2 * v17) );
  }
  if ( a7 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a7[v18] );
  }
  v19 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v8;
    while ( a6[v8] );
    v19 = a6 == 0LL;
  }
  if ( v19 )
    v9 = L"NULL";
  LOWORD(v21) = 93;
  return WppAutoLogTrace(a1, 2LL, 1LL, &WPP_a6b065e9623e3dbf1cba1de742264dc6_Traceguids, v21, v9);
}
