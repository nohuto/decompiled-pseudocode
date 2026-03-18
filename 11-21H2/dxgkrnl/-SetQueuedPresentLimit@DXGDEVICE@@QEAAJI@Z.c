/*
 * XREFs of ?SetQueuedPresentLimit@DXGDEVICE@@QEAAJI@Z @ 0x1C01C6458
 * Callers:
 *     DxgkSetQueuedLimit @ 0x1C01C60A0 (DxgkSetQueuedLimit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?SetQueuedPresentLimit@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C02C2AA0 (-SetQueuedPresentLimit@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall DXGDEVICE::SetQueuedPresentLimit(DXGDEVICE *this, unsigned int a2)
{
  int v4; // edi
  __int64 v5; // rcx

  v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 624LL) + 8LL) + 168LL))(*((_QWORD *)this + 96));
  if ( v4 >= 0 )
  {
    v5 = *((_QWORD *)this + 231);
    if ( v5 )
    {
      if ( v5 != *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
        ADAPTER_DISPLAY::SetQueuedPresentLimit(*(ADAPTER_DISPLAY **)(v5 + 2792), this, a2);
    }
  }
  return (unsigned int)v4;
}
