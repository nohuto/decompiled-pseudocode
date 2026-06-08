/*
 * XREFs of ValidatePccHeader @ 0x1C0038E08
 * Callers:
 *     AcquirePccInterface @ 0x1C003A86C (AcquirePccInterface.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000331C (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ValidatePccHeader(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned __int16 v2; // r9
  char v3; // al
  unsigned int v5; // eax

  v1 = -1073741811;
  if ( *(_DWORD *)a1 != 609239875 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v2 = 43;
LABEL_11:
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v2,
        (__int64)&WPP_3fe783ebadc43b57788bf58e82506d17_Traceguids);
      return v1;
    }
    return v1;
  }
  if ( *(_WORD *)(a1 + 4) >= 0x28u )
  {
    v3 = *(_BYTE *)(a1 + 6);
    if ( v3 )
    {
      if ( v3 != 1 || *(_BYTE *)(a1 + 7) )
      {
LABEL_9:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v2 = 45;
          goto LABEL_11;
        }
        return v1;
      }
    }
    else if ( *(_BYTE *)(a1 + 7) < 6u )
    {
      goto LABEL_9;
    }
    v5 = *(_DWORD *)(a1 + 36);
    if ( v5 > *(_DWORD *)(a1 + 28) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v1;
      v2 = 46;
      goto LABEL_11;
    }
    if ( *(_DWORD *)(a1 + 32) <= v5 )
      return 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v2 = 47;
      goto LABEL_11;
    }
    return v1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v2 = 44;
    goto LABEL_11;
  }
  return v1;
}
