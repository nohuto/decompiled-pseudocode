/*
 * XREFs of ??1DXG_REGISTRY_KEY_LIST@@QEAA@XZ @ 0x1C0301D90
 * Callers:
 *     ?DeleteRegistryKey@DXGADAPTER@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C02B9F98 (-DeleteRegistryKey@DXGADAPTER@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?VmBusGetRegistryKeys@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036E6A0 (-VmBusGetRegistryKeys@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 */

void __fastcall DXG_REGISTRY_KEY_LIST::~DXG_REGISTRY_KEY_LIST(DXG_REGISTRY_KEY_LIST *this)
{
  DXG_REGISTRY_KEY_LIST *v2; // rcx
  __int64 v3; // rax

  while ( 1 )
  {
    v2 = *(DXG_REGISTRY_KEY_LIST **)this;
    if ( *(DXG_REGISTRY_KEY_LIST **)(*(_QWORD *)this + 8LL) != this
      || (v3 = *(_QWORD *)v2, *(DXG_REGISTRY_KEY_LIST **)(*(_QWORD *)v2 + 8LL) != v2) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)this = v3;
    *(_QWORD *)(v3 + 8) = this;
    if ( v2 == this )
      break;
    operator delete[](v2);
  }
}
