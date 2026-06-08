/*
 * XREFs of DecodeMWaitIdleState @ 0x1C002CE30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00026F0 (WPP_RECORDER_SF_.c)
 *     IsValidAcpiGenericAddress @ 0x1C00368F8 (IsValidAcpiGenericAddress.c)
 */

__int64 __fastcall DecodeMWaitIdleState(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        _BYTE *a6,
        _BYTE *a7,
        __int64 a8)
{
  unsigned int v8; // ebx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 (__fastcall *v14)(__int64); // rax
  __int64 v16; // rax
  bool v17; // zf
  __int128 v18; // [rsp+30h] [rbp-28h]
  __int64 v19; // [rsp+40h] [rbp-18h]

  v8 = 0;
  HIDWORD(v19) = 0;
  if ( *(_BYTE *)a2 != 127 || *(_BYTE *)(a2 + 1) != 1 || *(_BYTE *)(a2 + 2) != 2 )
    return (unsigned int)-1073741823;
  if ( (_DWORD)a3 == -1 )
  {
    if ( _bittest64((const signed __int64 *)(a1 + 280), 0x29u) )
    {
LABEL_6:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          3u,
          0xBu,
          (__int64)&WPP_b088fe0f38673419eb14f505d66fa691_Traceguids);
      v11 = *(_QWORD *)(a2 + 4);
      v12 = *(unsigned __int8 *)(a2 + 3);
      *(_QWORD *)&v18 = v11;
      LODWORD(v19) = *(unsigned __int8 *)(a2 + 3);
      *((_QWORD *)&v18 + 1) = *(_QWORD *)(a1 + 200);
      if ( (*(_DWORD *)(a1 + 288) & 0x80000) != 0 )
        DWORD1(v18) = HIDWORD(v11) | 1;
      if ( a5 )
      {
        v16 = (unsigned int)v11 | 0x30000000000000LL;
        if ( (v12 & 2) != 0 )
        {
          a3 = 0x100000000000000LL;
          v16 = (unsigned int)v11 | 0x130000000000000LL;
        }
        *a5 = v16;
      }
      v13 = a8;
      if ( a8 )
      {
        *(_BYTE *)(a8 + 80) = 1;
        if ( (v12 & 2) == 0
          || (v17 = (unsigned __int8)IsValidAcpiGenericAddress(&dword_1C001E864, v12, a3, a8) == 0,
              v14 = MWaitIdleCheck,
              v17) )
        {
          v14 = 0LL;
        }
        *(_QWORD *)(v13 + 16) = v14;
        *(_QWORD *)(v13 + 24) = MWaitIdle;
        *(_OWORD *)(v13 + 32) = v18;
        *(_QWORD *)(v13 + 64) = DecodeMWaitContext;
        *(_QWORD *)(v13 + 48) = v19;
      }
      if ( a6 )
        *a6 = 0;
      if ( a7 )
        *a7 = 1;
      return v8;
    }
  }
  else if ( (*(_DWORD *)(a1 + 280) & 0x7F000) != 0 )
  {
    goto LABEL_6;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0xAu,
      (__int64)&WPP_b088fe0f38673419eb14f505d66fa691_Traceguids);
  return (unsigned int)-1073741637;
}
