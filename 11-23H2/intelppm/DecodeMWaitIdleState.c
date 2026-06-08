/*
 * XREFs of DecodeMWaitIdleState @ 0x1C002E030
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000331C (WPP_RECORDER_SF_.c)
 *     IsValidAcpiGenericAddress @ 0x1C0037DC0 (IsValidAcpiGenericAddress.c)
 */

__int64 __fastcall DecodeMWaitIdleState(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 *a5,
        _BYTE *a6,
        _BYTE *a7,
        __int64 a8)
{
  unsigned int v8; // ebx
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int8 v13; // r8
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r10
  bool v17; // zf
  __int64 (__fastcall *v18)(__int64); // rax
  __int128 v20; // [rsp+30h] [rbp-28h]
  __int64 v21; // [rsp+40h] [rbp-18h]

  v8 = 0;
  HIDWORD(v21) = 0;
  *a5 = 0LL;
  if ( *(_WORD *)a2 == 383 && *(_BYTE *)(a2 + 2) == 2 )
  {
    v11 = 0LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        3u,
        0xAu,
        (__int64)&WPP_e37dee7aa66037f48ecd4935437a0ca3_Traceguids);
      v11 = *a5;
    }
    v12 = *(_QWORD *)(a2 + 4);
    v13 = *(_BYTE *)(a2 + 3);
    *(_QWORD *)&v20 = v12;
    LODWORD(v21) = v13;
    *((_QWORD *)&v20 + 1) = *(_QWORD *)(a1 + 200);
    if ( (*(_DWORD *)(a1 + 288) & 0x80000) != 0 )
      DWORD1(v20) = HIDWORD(v12) | 1;
    v14 = v11 & 0xFF0FFFFFFFFFFFFFuLL | 0x30000000000000LL;
    *a5 = v14;
    *(_DWORD *)a5 = v12;
    v15 = v13 & 2;
    if ( (_DWORD)v15 )
      *a5 |= 0x100000000000000uLL;
    v16 = a8;
    if ( a8 )
    {
      *(_BYTE *)(a8 + 80) = 1;
      if ( !(_DWORD)v15
        || (v17 = (unsigned __int8)IsValidAcpiGenericAddress(&dword_1C001F9C4, v14, v15, a4) == 0,
            v18 = MWaitIdleCheck,
            v17) )
      {
        v18 = 0LL;
      }
      *(_QWORD *)(v16 + 16) = v18;
      *(_QWORD *)(v16 + 24) = MWaitIdle;
      *(_OWORD *)(v16 + 32) = v20;
      *(_QWORD *)(v16 + 64) = DecodeMWaitContext;
      *(_QWORD *)(v16 + 48) = v21;
    }
    if ( a6 )
      *a6 = 0;
    if ( a7 )
      *a7 = 1;
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v8;
}
