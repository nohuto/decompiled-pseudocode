/*
 * XREFs of RIMValidatePTPButtons @ 0x1C01B7C24
 * Callers:
 *     RIMGetDeviceButtons @ 0x1C0192130 (RIMGetDeviceButtons.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall RIMValidatePTPButtons(__int64 a1, unsigned int a2)
{
  int v2; // eax
  int v3; // r8d
  int v4; // r9d
  int v5; // esi
  unsigned int v6; // edi
  _WORD *v7; // rcx
  __int64 v8; // rbx

  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = -1073741668;
  if ( !a2 )
    goto LABEL_18;
  v7 = (_WORD *)(a1 + 56);
  v8 = a2;
  do
  {
    a2 = (unsigned __int16)*(v7 - 28);
    if ( (_WORD)a2 == 13 )
    {
      if ( *v7 == 71 )
        v5 = 1;
    }
    else if ( (_WORD)a2 == 9 )
    {
      a2 = (unsigned __int16)*v7;
      switch ( (_WORD)a2 )
      {
        case 1:
          v2 = 1;
          break;
        case 2:
          v3 = 1;
          break;
        case 3:
          v4 = 1;
          break;
      }
    }
    v7 += 36;
    --v8;
  }
  while ( v8 );
  if ( !v5 )
    goto LABEL_18;
  if ( v2 )
  {
    if ( !v3 )
    {
      if ( v4 )
        goto LABEL_18;
      return 0;
    }
  }
  else if ( !v3 )
  {
    goto LABEL_18;
  }
  if ( v4 )
    return 0;
LABEL_18:
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      v3,
      (_DWORD)gRimLog,
      3,
      1,
      11,
      (__int64)&WPP_26e1085b54653ae3afd03bd178f52632_Traceguids);
  }
  return v6;
}
