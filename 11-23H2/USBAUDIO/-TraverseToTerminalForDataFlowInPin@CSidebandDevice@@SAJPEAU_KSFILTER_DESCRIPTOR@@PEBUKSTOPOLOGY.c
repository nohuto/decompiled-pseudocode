/*
 * XREFs of ?TraverseToTerminalForDataFlowInPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@PEAK@Z @ 0x1C0012108
 * Callers:
 *     ?GetBridgePinForDataPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C000D080 (-GetBridgePinForDataPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0005BE8 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     _scope_exit__lambda_e1a03c7d470e441fd7c9b607c19800fd____::_2_::scope_exit::_scope_exit @ 0x1C000BF58 (_scope_exit__lambda_e1a03c7d470e441fd7c9b607c19800fd____--_2_--scope_exit--_scope_exit.c)
 *     _scope_exit__lambda_a16b11757b8cb69a258309176305b33d____::_2_::scope_exit::_scope_exit @ 0x1C000BFD8 (_scope_exit__lambda_a16b11757b8cb69a258309176305b33d____--_2_--scope_exit--_scope_exit.c)
 *     ?AddConnectionToTravelStack@CSidebandDevice@@SAJPEAU_LIST_ENTRY@@PEBUKSTOPOLOGY_CONNECTION@@@Z @ 0x1C000C0B4 (-AddConnectionToTravelStack@CSidebandDevice@@SAJPEAU_LIST_ENTRY@@PEBUKSTOPOLOGY_CONNECTION@@@Z.c)
 */

__int64 __fastcall CSidebandDevice::TraverseToTerminalForDataFlowInPin(
        struct _KSFILTER_DESCRIPTOR *a1,
        const struct KSTOPOLOGY_CONNECTION *a2,
        unsigned int *a3)
{
  unsigned int v3; // r13d
  char v4; // di
  int v5; // edx
  int v6; // ebx
  int v7; // r8d
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v9; // rax
  bool v10; // zf
  struct _KSFILTER_DESCRIPTOR *v11; // r8
  unsigned int v12; // ebx
  const KSTOPOLOGY_CONNECTION *Connections; // r12
  __int64 v14; // rdx
  int v15; // edx
  int v16; // r8d
  struct _LIST_ENTRY v18; // [rsp+50h] [rbp-30h] BYREF
  struct _LIST_ENTRY **v19; // [rsp+60h] [rbp-20h] BYREF
  char v20; // [rsp+68h] [rbp-18h]
  struct _LIST_ENTRY *v21; // [rsp+70h] [rbp-10h] BYREF
  char v22; // [rsp+78h] [rbp-8h]
  struct _LIST_ENTRY *v25; // [rsp+D8h] [rbp+58h] BYREF

  *a3 = -1;
  v18.Blink = &v18;
  v3 = 0;
  v18.Flink = &v18;
  v21 = &v18;
  v4 = 1;
  v22 = 1;
  v6 = CSidebandDevice::AddConnectionToTravelStack(&v18, a2);
  if ( v6 >= 0 )
  {
    while ( 1 )
    {
      Flink = v18.Flink;
      if ( v18.Flink == &v18 || v3 >= 0x3E8 )
      {
        scope_exit__lambda_a16b11757b8cb69a258309176305b33d____::_2_::scope_exit::_scope_exit((__int64)&v21);
        return 3221226021LL;
      }
      ++v3;
      if ( v18.Flink->Blink != &v18 || (v9 = v18.Flink->Flink, v18.Flink->Flink->Blink != v18.Flink) )
        __fastfail(3u);
      v18.Flink = v18.Flink->Flink;
      v9->Blink = &v18;
      v25 = Flink;
      v10 = LODWORD(Flink[1].Blink) == -1;
      v19 = &v25;
      v20 = 1;
      if ( v10 )
      {
        *a3 = HIDWORD(Flink[1].Blink);
        scope_exit__lambda_e1a03c7d470e441fd7c9b607c19800fd____::_2_::scope_exit::_scope_exit((__int64)&v19);
        v6 = 0;
        goto LABEL_30;
      }
      v11 = a1;
      v12 = 0;
      Connections = a1->Connections;
      if ( !a1->ConnectionsCount )
        goto LABEL_28;
      while ( 1 )
      {
        v14 = v12;
        if ( Connections[v14].FromNode == LODWORD(Flink[1].Blink) )
          break;
LABEL_18:
        if ( ++v12 >= v11->ConnectionsCount )
          goto LABEL_28;
      }
      if ( (int)CSidebandDevice::AddConnectionToTravelStack(&v18, &v11->Connections[v14]) >= 0 )
        break;
      LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      if ( (_BYTE)v15 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v15, v16, WPP_GLOBAL_Control->DeviceExtension);
      }
LABEL_28:
      scope_exit__lambda_e1a03c7d470e441fd7c9b607c19800fd____::_2_::scope_exit::_scope_exit((__int64)&v19);
    }
    Flink = v25;
    v11 = a1;
    goto LABEL_18;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v4 = 0;
  }
  if ( v4 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = v4;
    LOBYTE(v7) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v5, v7, WPP_GLOBAL_Control->DeviceExtension);
  }
LABEL_30:
  scope_exit__lambda_a16b11757b8cb69a258309176305b33d____::_2_::scope_exit::_scope_exit((__int64)&v21);
  return (unsigned int)v6;
}
