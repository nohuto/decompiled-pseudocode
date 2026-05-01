/*
 * XREFs of DPA_DestroyCallback @ 0x18079B8B0
 * Callers:
 *     ?Destroy@?$CDPA_Base@UtagRGBQUAD@@V?$CTContainer_PolicyUnOwned@UtagRGBQUAD@@@@@@QEAAHXZ @ 0x180799CD0 (-Destroy@-$CDPA_Base@UtagRGBQUAD@@V-$CTContainer_PolicyUnOwned@UtagRGBQUAD@@@@@@QEAAHXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __stdcall DPA_DestroyCallback(HDPA hdpa, PFNDAENUMCALLBACK pfnCB, void *pData)
{
  int v6; // edi
  __int64 v7; // rsi

  if ( hdpa )
  {
    if ( pfnCB )
    {
      v6 = 0;
      if ( *(int *)hdpa > 0 )
      {
        v7 = 0LL;
        do
        {
          if ( !((unsigned int (__fastcall *)(_QWORD, void *))pfnCB)(*(_QWORD *)(*((_QWORD *)hdpa + 1) + v7), pData) )
            break;
          ++v6;
          v7 += 8LL;
        }
        while ( v6 < *(_DWORD *)hdpa );
      }
    }
  }
  DPA_Destroy(hdpa);
}
