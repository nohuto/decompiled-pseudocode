/*
 * XREFs of ?MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z @ 0x1C01E97EC
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x1C01E9C00 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x1C01E94F4 (-MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z.c)
 */

__int64 __fastcall MapScancode(struct tagKE *a1, char *a2, struct DEVICEINFO *a3)
{
  __int16 *i; // rcx
  __int16 v8; // ax

  if ( qword_1C029CC70 && (unsigned int)qword_1C029CC70(a1, a2, a3) )
    return 1LL;
  if ( gpScancodeMap )
  {
    for ( i = (__int16 *)((char *)gpScancodeMap + 12); *(_DWORD *)i; i += 2 )
    {
      if ( HIWORD(*(_DWORD *)i) == (*(unsigned __int8 *)a1 | (unsigned __int16)((unsigned __int8)*a2 << 8)) )
      {
        v8 = *i;
        *(_BYTE *)a1 = *i;
        *a2 = HIBYTE(v8);
        return MapFlexibleKeys(a1, *a2, a3);
      }
    }
  }
  return MapFlexibleKeys(a1, *a2, a3);
}
