/*
 * XREFs of KeyboardClassEnableGlobalPort @ 0x1C000F510
 * Callers:
 *     KeyboardClassPlugPlayNotification @ 0x1C000F7D0 (KeyboardClassPlugPlayNotification.c)
 * Callees:
 *     KbdEnableDisablePort @ 0x1C000D010 (KbdEnableDisablePort.c)
 */

__int64 __fastcall KeyboardClassEnableGlobalPort(PVOID *a1, char a2)
{
  unsigned int v4; // edi
  unsigned int v5; // r8d
  PVOID **v6; // rsi
  char v8; // bl

  v4 = 0;
  ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  if ( SHIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= 0 )
  {
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  }
  else
  {
    v5 = 0;
    if ( !LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
      goto LABEL_6;
    while ( 1 )
    {
      v6 = (PVOID **)((char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v5);
      if ( !*((_BYTE *)v6 + 19) && v6[1] == a1 )
        break;
      if ( ++v5 >= LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
        goto LABEL_6;
    }
    if ( !v6 )
    {
LABEL_6:
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      return 3221225486LL;
    }
    v8 = *((_BYTE *)v6 + 16);
    *((_BYTE *)v6 + 16) = a2;
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    if ( a2 != v8 )
      return (unsigned int)KbdEnableDisablePort(a2, 0LL, a1, (PFILE_OBJECT *)v6);
  }
  return v4;
}
