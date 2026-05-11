/*
 * XREFs of ?TraverseForward@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x1C001035C
 * Callers:
 *     ?GetNodesInPath@CSidebandDevice@@AEAAJKKPEAU_LIST_ENTRY@@@Z @ 0x1C000B850 (-GetNodesInPath@CSidebandDevice@@AEAAJKKPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?AddConnectionToTravelStack@CSidebandDevice@@AEAAJPEAU_LIST_ENTRY@@PEBUKSTOPOLOGY_CONNECTION@@@Z @ 0x1C000907C (-AddConnectionToTravelStack@CSidebandDevice@@AEAAJPEAU_LIST_ENTRY@@PEBUKSTOPOLOGY_CONNECTION@@@Z.c)
 *     ?AddNodeListToNodeListStack@CSidebandDevice@@AEAAJPEAU_LIST_ENTRY@@@Z @ 0x1C00090EC (-AddNodeListToNodeListStack@CSidebandDevice@@AEAAJPEAU_LIST_ENTRY@@@Z.c)
 *     ?AddNodeToNodeListStack@CSidebandDevice@@AEAAJPEAU_LIST_ENTRY@@K@Z @ 0x1C0009158 (-AddNodeToNodeListStack@CSidebandDevice@@AEAAJPEAU_LIST_ENTRY@@K@Z.c)
 *     ?DeleteTopListFromNodeListStack@CSidebandDevice@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0009BE0 (-DeleteTopListFromNodeListStack@CSidebandDevice@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?MoveNodesFromNodesListStackToList@CSidebandDevice@@AEAAXPEAU_LIST_ENTRY@@0@Z @ 0x1C000E9C0 (-MoveNodesFromNodesListStackToList@CSidebandDevice@@AEAAXPEAU_LIST_ENTRY@@0@Z.c)
 */

__int64 __fastcall CSidebandDevice::TraverseForward(
        CSidebandDevice *this,
        struct _KSFILTER_DESCRIPTOR *a2,
        const struct KSTOPOLOGY_CONNECTION *a3,
        int a4,
        struct _LIST_ENTRY *a5)
{
  struct _KSFILTER_DESCRIPTOR *v5; // r15
  int v6; // r12d
  CSidebandDevice *v7; // r13
  unsigned int v8; // r14d
  CSidebandDevice *v9; // rcx
  int v10; // esi
  PDEVICE_OBJECT v11; // r10
  CSidebandDevice *v12; // rcx
  char v13; // bl
  char v14; // r8
  unsigned __int16 v15; // cx
  char v16; // bl
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY *v18; // rax
  int Blink; // r8d
  CSidebandDevice *Connections; // rcx
  ULONG v21; // r14d
  ULONG ConnectionsCount; // r13d
  unsigned int v23; // r15d
  CSidebandDevice *v24; // r12
  int v25; // r14d
  PDEVICE_OBJECT v26; // r10
  char v27; // r8
  unsigned __int16 v28; // cx
  struct _LIST_ENTRY *v29; // rax
  int v31; // [rsp+28h] [rbp-51h]
  int v32; // [rsp+58h] [rbp-21h]
  CSidebandDevice *v33; // [rsp+60h] [rbp-19h]
  struct _LIST_ENTRY P; // [rsp+70h] [rbp-9h] BYREF
  struct _LIST_ENTRY v35; // [rsp+80h] [rbp+7h] BYREF

  v5 = a2;
  P.Blink = &P;
  v6 = a4;
  P.Flink = &P;
  v7 = this;
  v8 = 0;
  v35.Blink = &v35;
  v35.Flink = &v35;
  v10 = CSidebandDevice::AddConnectionToTravelStack(this, &P, a3);
  if ( v10 < 0 )
  {
    v11 = WPP_GLOBAL_Control;
    v12 = (CSidebandDevice *)&WPP_GLOBAL_Control;
    v13 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v13 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_65;
    v15 = 34;
LABEL_10:
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)v11->AttachedDevice,
      v13,
      v14,
      (__int64)v11->DeviceExtension,
      v31,
      9u,
      v15,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
    goto LABEL_65;
  }
  v10 = CSidebandDevice::AddNodeListToNodeListStack(v9, &v35);
  if ( v10 >= 0 )
  {
    v16 = 1;
    while ( 1 )
    {
      while ( 1 )
      {
        Flink = P.Flink;
        if ( P.Flink == &P )
          goto LABEL_70;
        if ( v8 >= *((_DWORD *)v7 + 8) )
          goto LABEL_65;
        v32 = ++v8;
        if ( P.Flink->Blink != &P || (v18 = P.Flink->Flink, P.Flink->Flink->Blink != P.Flink) )
LABEL_69:
          __fastfail(3u);
        P.Flink = P.Flink->Flink;
        v18->Blink = &P;
        Blink = (int)Flink[1].Blink;
        if ( Blink != -1 )
          break;
        if ( HIDWORD(Flink[1].Blink) == v6 )
        {
          CSidebandDevice::MoveNodesFromNodesListStackToList((CSidebandDevice *)&P, &v35, a5);
          v10 = 0;
          goto LABEL_64;
        }
        CSidebandDevice::DeleteTopListFromNodeListStack((CSidebandDevice *)&P, &v35);
        v10 = -1073741275;
        ExFreePool(Flink);
      }
      v10 = CSidebandDevice::AddNodeToNodeListStack((CSidebandDevice *)&P, &v35, Blink);
      if ( v10 < 0 )
        break;
      Connections = (CSidebandDevice *)v5->Connections;
      v21 = 0;
      ConnectionsCount = v5->ConnectionsCount;
      v23 = 0;
      v33 = Connections;
      if ( ConnectionsCount )
      {
        v24 = Connections;
        do
        {
          if ( *(_DWORD *)v24 == LODWORD(Flink[1].Blink) )
          {
            v10 = CSidebandDevice::AddConnectionToTravelStack(
                    Connections,
                    &P,
                    (const struct KSTOPOLOGY_CONNECTION *)Connections + v21);
            if ( v10 < 0 )
            {
              v26 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
                || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
              {
                v16 = 0;
              }
              v27 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              if ( !v16 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
                goto LABEL_64;
              v28 = 37;
              goto LABEL_63;
            }
            Connections = v33;
            ++v23;
          }
          ++v21;
          v24 = (CSidebandDevice *)((char *)v24 + 16);
        }
        while ( v21 < ConnectionsCount );
        if ( v23 > 1 )
        {
          v25 = 0;
          while ( 1 )
          {
            v10 = CSidebandDevice::AddNodeListToNodeListStack(Connections, &v35);
            if ( v10 < 0 )
              break;
            if ( ++v25 >= v23 )
              goto LABEL_39;
          }
          v26 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            v16 = 0;
          }
          v27 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !v16 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_64;
          v28 = 38;
LABEL_63:
          WPP_RECORDER_AND_TRACE_SF_d(
            (__int64)v26->AttachedDevice,
            v16,
            v27,
            (__int64)v26->DeviceExtension,
            v31,
            9u,
            v28,
            (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
          goto LABEL_64;
        }
LABEL_39:
        v6 = a4;
      }
      ExFreePool(Flink);
      v8 = v32;
      v5 = a2;
      v7 = this;
    }
    v26 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v16 = 0;
    }
    v27 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v16 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_64;
    v28 = 36;
    goto LABEL_63;
  }
  v11 = WPP_GLOBAL_Control;
  v12 = (CSidebandDevice *)&WPP_GLOBAL_Control;
  v13 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v13 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v15 = 35;
    goto LABEL_10;
  }
LABEL_65:
  while ( 1 )
  {
    Flink = P.Flink;
    if ( P.Flink == &P )
      break;
    if ( P.Flink->Blink != &P )
      goto LABEL_69;
    v29 = P.Flink->Flink;
    if ( P.Flink->Flink->Blink != P.Flink )
      goto LABEL_69;
    P.Flink = P.Flink->Flink;
    v29->Blink = &P;
LABEL_64:
    ExFreePool(Flink);
  }
LABEL_70:
  while ( v35.Flink != &v35 )
    CSidebandDevice::DeleteTopListFromNodeListStack(v12, &v35);
  return (unsigned int)v10;
}
