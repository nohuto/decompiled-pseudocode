/*
 * XREFs of ?TraverseToTerminalForDataFlowOutPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@PEAK@Z @ 0x1C0010CE8
 * Callers:
 *     ?GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C0009DC0 (-GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?AddConnectionToTravelStack@CSidebandDevice@@AEAAJPEAU_LIST_ENTRY@@PEBUKSTOPOLOGY_CONNECTION@@@Z @ 0x1C000907C (-AddConnectionToTravelStack@CSidebandDevice@@AEAAJPEAU_LIST_ENTRY@@PEBUKSTOPOLOGY_CONNECTION@@@Z.c)
 */

__int64 __fastcall CSidebandDevice::TraverseToTerminalForDataFlowOutPin(
        CSidebandDevice *this,
        struct _KSFILTER_DESCRIPTOR *a2,
        const struct KSTOPOLOGY_CONNECTION *a3,
        unsigned int *a4)
{
  CSidebandDevice *v4; // r13
  unsigned int v5; // r14d
  int v6; // esi
  char v7; // di
  struct _LIST_ENTRY *v8; // rcx
  struct _LIST_ENTRY *v9; // rax
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v11; // rax
  struct _KSFILTER_DESCRIPTOR *v12; // rdx
  unsigned int v13; // r14d
  const KSTOPOLOGY_CONNECTION *Connections; // r13
  CSidebandDevice *v15; // rcx
  char v16; // dl
  struct _LIST_ENTRY *v17; // rax
  int v19; // [rsp+20h] [rbp-50h]
  unsigned int v20; // [rsp+50h] [rbp-20h]
  struct _LIST_ENTRY P; // [rsp+60h] [rbp-10h] BYREF

  v4 = this;
  P.Blink = &P;
  v5 = 0;
  P.Flink = &P;
  v6 = CSidebandDevice::AddConnectionToTravelStack(this, &P, a3);
  if ( v6 >= 0 )
  {
    while ( 1 )
    {
      Flink = P.Flink;
      if ( P.Flink == &P )
        return (unsigned int)v6;
      if ( v5 >= *((_DWORD *)v4 + 8) )
        goto LABEL_36;
      v20 = v5 + 1;
      if ( P.Flink->Blink != &P || (v11 = P.Flink->Flink, P.Flink->Flink->Blink != P.Flink) )
LABEL_40:
        __fastfail(3u);
      P.Flink = P.Flink->Flink;
      v11->Blink = &P;
      if ( LODWORD(Flink[1].Flink) == -1 )
      {
        v6 = 0;
        *a4 = HIDWORD(Flink[1].Flink);
        while ( 1 )
        {
          ExFreePool(Flink);
          Flink = P.Flink;
LABEL_36:
          if ( Flink == &P )
            return (unsigned int)v6;
          if ( Flink->Blink != &P )
            goto LABEL_40;
          v17 = Flink->Flink;
          if ( Flink->Flink->Blink != Flink )
            goto LABEL_40;
          P.Flink = Flink->Flink;
          v17->Blink = &P;
        }
      }
      v12 = a2;
      v13 = 0;
      Connections = a2->Connections;
      if ( !a2->ConnectionsCount )
        goto LABEL_33;
      while ( 1 )
      {
        v15 = (CSidebandDevice *)(16LL * v13);
        if ( *(ULONG *)((char *)&Connections->ToNode + (_QWORD)v15) == LODWORD(Flink[1].Flink) )
          break;
LABEL_23:
        if ( ++v13 >= v12->ConnectionsCount )
          goto LABEL_33;
      }
      v6 = CSidebandDevice::AddConnectionToTravelStack(
             v15,
             &P,
             (const struct KSTOPOLOGY_CONNECTION *)((char *)v15 + (unsigned __int64)v12->Connections));
      if ( v6 >= 0 )
        break;
      v16 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      if ( v16 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v16,
          *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v19,
          9u,
          0x67u,
          (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
LABEL_33:
      ExFreePool(Flink);
      v5 = v20;
      v4 = this;
    }
    v12 = a2;
    goto LABEL_23;
  }
  v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v7,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v19,
      9u,
      0x66u,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  while ( 1 )
  {
    v8 = P.Flink;
    if ( P.Flink == &P )
      return (unsigned int)v6;
    if ( P.Flink->Blink != &P )
      goto LABEL_40;
    v9 = P.Flink->Flink;
    if ( P.Flink->Flink->Blink != P.Flink )
      goto LABEL_40;
    P.Flink = P.Flink->Flink;
    v9->Blink = &P;
    ExFreePool(v8);
  }
}
