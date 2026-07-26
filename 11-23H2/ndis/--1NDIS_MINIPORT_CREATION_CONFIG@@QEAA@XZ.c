/*
 * XREFs of ??1NDIS_MINIPORT_CREATION_CONFIG@@QEAA@XZ @ 0x1C003559C
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x1C002B0F4 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012C1B0 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NDIS_MINIPORT_CREATION_CONFIG::~NDIS_MINIPORT_CREATION_CONFIG(NDIS_MINIPORT_CREATION_CONFIG *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  v2 = (void *)*((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v2 )
    ExFreePoolWithTag(v2, 0x7274534Bu);
  v3 = (void *)*((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = 0LL;
  if ( v3 )
    ExFreePoolWithTag(v3, 0x7274534Bu);
  v4 = (void *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v4 )
    ExFreePoolWithTag(v4, 0x7274534Bu);
  v5 = (void *)*((_QWORD *)this + 3);
  if ( v5 )
    ZwClose(v5);
}
