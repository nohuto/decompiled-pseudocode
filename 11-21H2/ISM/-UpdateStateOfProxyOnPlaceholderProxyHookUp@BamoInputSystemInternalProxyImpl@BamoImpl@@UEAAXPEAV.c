/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSystemInternalProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18011EBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateInputProcessManager@BamoInputSystemInternalProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18011C7FC (-UpdateInputProcessManager@BamoInputSystemInternalProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateSystemContextManager@BamoInputSystemInternalProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18011F274 (-UpdateSystemContextManager@BamoInputSystemInternalProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 */

void __fastcall BamoImpl::BamoInputSystemInternalProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoInputSystemInternalProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  __int64 v2; // rax
  __int64 v5; // rax

  v2 = *((_QWORD *)a2 + 4);
  if ( v2 )
    BamoImpl::BamoInputSystemInternalProxyImpl::UpdateInputProcessManager(this, 0LL, *(unsigned int *)(v2 + 40));
  v5 = *((_QWORD *)a2 + 5);
  if ( v5 )
    BamoImpl::BamoInputSystemInternalProxyImpl::UpdateSystemContextManager(this, 0, *(_DWORD *)(v5 + 40));
}
