/*
 * XREFs of ?DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ @ 0x1C02BABF0
 * Callers:
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C0200238 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C02BE1F8 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::DestroySerializeFStateTransitWorker(DXGADAPTER *this)
{
  if ( *((_QWORD *)this + 363) )
  {
    if ( *((_QWORD *)this + 464) )
    {
      *((_BYTE *)this + 3720) = 1;
      KeSetEvent((PRKEVENT)((char *)this + 3584), 0, 0);
      ZwWaitForSingleObject(*((HANDLE *)this + 464), 0, 0LL);
      ZwClose(*((HANDLE *)this + 464));
      *((_QWORD *)this + 464) = 0LL;
    }
  }
}
