/*
 * XREFs of ?TraverseToCaptureBridgePin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@PEAK@Z @ 0x1C0010768
 * Callers:
 *     ?GetSidetoneNodes@CSidebandDevice@@AEAAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z @ 0x1C000C3B0 (-GetSidetoneNodes@CSidebandDevice@@AEAAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?AddConnectionToTravelStack@CSidebandDevice@@AEAAJPEAU_LIST_ENTRY@@PEBUKSTOPOLOGY_CONNECTION@@@Z @ 0x1C000907C (-AddConnectionToTravelStack@CSidebandDevice@@AEAAJPEAU_LIST_ENTRY@@PEBUKSTOPOLOGY_CONNECTION@@@Z.c)
 */

__int64 __fastcall CSidebandDevice::TraverseToCaptureBridgePin(
        CSidebandDevice *this,
        struct _KSFILTER_DESCRIPTOR *a2,
        const struct KSTOPOLOGY_CONNECTION *a3,
        unsigned int *a4)
{
  unsigned int v5; // r14d
  int v6; // esi
  char v7; // di
  struct _LIST_ENTRY *v8; // rcx
  struct _LIST_ENTRY *v9; // rax
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v11; // rax
  CSidebandDevice *p_P; // rcx
  unsigned int Flink_high; // edx
  char *v14; // rcx
  int v15; // r14d
  const KSTOPOLOGY_CONNECTION *v16; // r8
  char v17; // dl
  struct _LIST_ENTRY *v18; // rax
  int v20; // [rsp+20h] [rbp-50h]
  int v21; // [rsp+50h] [rbp-20h]
  struct _LIST_ENTRY P; // [rsp+60h] [rbp-10h] BYREF

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
        break;
      if ( v5 >= *((_DWORD *)this + 8) )
        goto LABEL_38;
      v21 = ++v5;
      if ( P.Flink->Blink != &P || (v11 = P.Flink->Flink, P.Flink->Flink->Blink != P.Flink) )
LABEL_42:
        __fastfail(3u);
      P.Flink = P.Flink->Flink;
      p_P = (CSidebandDevice *)&P;
      v11->Blink = &P;
      if ( LODWORD(Flink[1].Flink) == -1 )
      {
        Flink_high = HIDWORD(Flink[1].Flink);
        v14 = (char *)a2->PinDescriptors + Flink_high * a2->PinDescriptorSize;
        if ( *((_DWORD *)v14 + 17) == 4 && *((_DWORD *)v14 + 16) == 1 )
        {
          v6 = 0;
          *a4 = Flink_high;
          while ( 1 )
          {
            ExFreePool(Flink);
            Flink = P.Flink;
LABEL_38:
            if ( Flink == &P )
              return (unsigned int)v6;
            if ( Flink->Blink != &P )
              goto LABEL_42;
            v18 = Flink->Flink;
            if ( Flink->Flink->Blink != Flink )
              goto LABEL_42;
            P.Flink = Flink->Flink;
            v18->Blink = &P;
          }
        }
        ExFreePool(Flink);
      }
      else
      {
        v15 = 0;
        if ( a2->ConnectionsCount )
        {
          while ( 1 )
          {
            v16 = &a2->Connections[v15];
            if ( v16->ToNode == LODWORD(Flink[1].Flink) )
            {
              v6 = CSidebandDevice::AddConnectionToTravelStack(p_P, &P, v16);
              if ( v6 < 0 )
                break;
            }
            if ( ++v15 >= a2->ConnectionsCount )
              goto LABEL_35;
          }
          v17 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
          if ( v17 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_d(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v17,
              *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v20,
              9u,
              0x39u,
              (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
        }
LABEL_35:
        ExFreePool(Flink);
        v5 = v21;
      }
    }
  }
  else
  {
    v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v7,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v20,
        9u,
        0x38u,
        (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
    while ( 1 )
    {
      v8 = P.Flink;
      if ( P.Flink == &P )
        break;
      if ( P.Flink->Blink != &P )
        goto LABEL_42;
      v9 = P.Flink->Flink;
      if ( P.Flink->Flink->Blink != P.Flink )
        goto LABEL_42;
      P.Flink = P.Flink->Flink;
      v9->Blink = &P;
      ExFreePool(v8);
    }
  }
  return (unsigned int)v6;
}
