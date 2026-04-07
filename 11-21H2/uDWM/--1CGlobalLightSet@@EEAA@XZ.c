/*
 * XREFs of ??1CGlobalLightSet@@EEAA@XZ @ 0x1800BD418
 * Callers:
 *     ??_ECGlobalLightSet@@EEAAPEAXI@Z @ 0x1800BD500 (--_ECGlobalLightSet@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010664 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveUdwmDCompVisualFromUdwmTree@CGlobalLightSet@@AEBAJPEAVUdwmDcompVisual@@@Z @ 0x1800BD634 (-RemoveUdwmDCompVisualFromUdwmTree@CGlobalLightSet@@AEBAJPEAVUdwmDcompVisual@@@Z.c)
 */

void __fastcall CGlobalLightSet::~CGlobalLightSet(CGlobalLightSet *this)
{
  struct _RTL_GENERIC_TABLE *i; // rsi
  __int64 v3; // rcx
  PVOID v4; // rax
  CGlobalLightSet *v5; // rcx
  void *v6; // rbx
  struct UdwmDcompVisual *v7; // rdx
  PVOID v8; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CGlobalLightSet::`vftable';
  for ( i = (struct _RTL_GENERIC_TABLE *)((char *)this + 16); ; RtlDeleteElementGenericTable(i, v6) )
  {
    RestartKey = 0LL;
    v4 = RtlEnumerateGenericTableWithoutSplaying(i, &RestartKey);
    v6 = v4;
    if ( !v4 )
      break;
    v3 = *((_QWORD *)v4 + 1);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v7 = (struct UdwmDcompVisual *)*((_QWORD *)this + 12);
  if ( v7 )
    CGlobalLightSet::RemoveUdwmDCompVisualFromUdwmTree(v5, v7);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease((CBaseObject **)this + 12);
  while ( 1 )
  {
    RestartKey = 0LL;
    v8 = RtlEnumerateGenericTableWithoutSplaying(i, &RestartKey);
    if ( !v8 )
      break;
    RtlDeleteElementGenericTable(i, v8);
  }
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
