/*
 * XREFs of ?TraverseBackward@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x1C000FD04
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

__int64 __fastcall CSidebandDevice::TraverseBackward(
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
  int v10; // edi
  char v11; // bl
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v13; // rax
  CSidebandDevice *v14; // rcx
  CSidebandDevice *v15; // rcx
  char v16; // bl
  struct _LIST_ENTRY *v17; // rcx
  struct _LIST_ENTRY *v18; // rax
  char v19; // bl
  struct _LIST_ENTRY *v20; // rsi
  struct _LIST_ENTRY *v21; // rax
  int v22; // r8d
  CSidebandDevice *Connections; // rcx
  ULONG v24; // r14d
  ULONG ConnectionsCount; // r13d
  unsigned int v26; // r15d
  _DWORD *v27; // r12
  int v28; // r14d
  CSidebandDevice *v29; // rcx
  struct _LIST_ENTRY *v30; // rcx
  struct _LIST_ENTRY *v31; // rax
  CSidebandDevice *v32; // rcx
  struct _LIST_ENTRY *v33; // rcx
  struct _LIST_ENTRY *v34; // rax
  CSidebandDevice *v35; // rcx
  struct _LIST_ENTRY *v36; // rcx
  struct _LIST_ENTRY *v37; // rax
  struct _LIST_ENTRY *v38; // rcx
  struct _LIST_ENTRY *v39; // rax
  int v41; // [rsp+28h] [rbp-51h]
  int v42; // [rsp+58h] [rbp-21h]
  CSidebandDevice *v43; // [rsp+60h] [rbp-19h]
  struct _LIST_ENTRY P; // [rsp+70h] [rbp-9h] BYREF
  struct _LIST_ENTRY v45; // [rsp+80h] [rbp+7h] BYREF

  v5 = a2;
  P.Blink = &P;
  v6 = a4;
  P.Flink = &P;
  v7 = this;
  v8 = 0;
  v10 = CSidebandDevice::AddConnectionToTravelStack(this, &P, a3);
  if ( v10 < 0 )
  {
    v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v11,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v41,
        9u,
        0x27u,
        (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
    while ( 1 )
    {
      Flink = P.Flink;
      if ( P.Flink == &P )
        return (unsigned int)v10;
      if ( P.Flink->Blink != &P )
        goto LABEL_99;
      v13 = P.Flink->Flink;
      if ( P.Flink->Flink->Blink != P.Flink )
        goto LABEL_99;
      P.Flink = P.Flink->Flink;
      v13->Blink = &P;
      ExFreePool(Flink);
    }
  }
  v45.Blink = &v45;
  v45.Flink = &v45;
  v10 = CSidebandDevice::AddNodeListToNodeListStack(v9, &v45);
  if ( v10 < 0 )
  {
    v15 = (CSidebandDevice *)&WPP_GLOBAL_Control;
    v16 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( v16 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v16,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v41,
        9u,
        0x28u,
        (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
    while ( v45.Flink != &v45 )
      CSidebandDevice::DeleteTopListFromNodeListStack(v15, &v45);
    while ( 1 )
    {
      v17 = P.Flink;
      if ( P.Flink == &P )
        return (unsigned int)v10;
      if ( P.Flink->Blink != &P )
        goto LABEL_99;
      v18 = P.Flink->Flink;
      if ( P.Flink->Flink->Blink != P.Flink )
        goto LABEL_99;
      P.Flink = P.Flink->Flink;
      v18->Blink = &P;
      ExFreePool(v17);
    }
  }
  v19 = 1;
LABEL_30:
  while ( 2 )
  {
    v20 = P.Flink;
    if ( P.Flink == &P || v8 >= *((_DWORD *)v7 + 8) )
      goto LABEL_51;
    v42 = ++v8;
    if ( P.Flink->Blink != &P )
      goto LABEL_99;
    v21 = P.Flink->Flink;
    if ( P.Flink->Flink->Blink != P.Flink )
      goto LABEL_99;
    P.Flink = P.Flink->Flink;
    v21->Blink = &P;
    v22 = (int)v20[1].Flink;
    if ( v22 == -1 )
    {
      if ( HIDWORD(v20[1].Flink) != v6 )
      {
        CSidebandDevice::DeleteTopListFromNodeListStack((CSidebandDevice *)&P, &v45);
        v10 = -1073741275;
        ExFreePool(v20);
        continue;
      }
      CSidebandDevice::MoveNodesFromNodesListStackToList((CSidebandDevice *)&P, &v45, a5);
      v10 = 0;
      ExFreePool(v20);
LABEL_51:
      while ( v45.Flink != &v45 )
        CSidebandDevice::DeleteTopListFromNodeListStack(v14, &v45);
      while ( 1 )
      {
        v38 = P.Flink;
        if ( P.Flink == &P )
          return (unsigned int)v10;
        if ( P.Flink->Blink != &P )
          goto LABEL_99;
        v39 = P.Flink->Flink;
        if ( P.Flink->Flink->Blink != P.Flink )
          goto LABEL_99;
        P.Flink = P.Flink->Flink;
        v39->Blink = &P;
        ExFreePool(v38);
      }
    }
    break;
  }
  v10 = CSidebandDevice::AddNodeToNodeListStack((CSidebandDevice *)&P, &v45, v22);
  if ( v10 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v19 = 0;
    }
    if ( v19 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v19,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v41,
        9u,
        0x29u,
        (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
    ExFreePool(v20);
    while ( v45.Flink != &v45 )
      CSidebandDevice::DeleteTopListFromNodeListStack(v35, &v45);
    while ( 1 )
    {
      v36 = P.Flink;
      if ( P.Flink == &P )
        return (unsigned int)v10;
      if ( P.Flink->Blink != &P )
        break;
      v37 = P.Flink->Flink;
      if ( P.Flink->Flink->Blink != P.Flink )
        break;
      P.Flink = P.Flink->Flink;
      v37->Blink = &P;
      ExFreePool(v36);
    }
LABEL_99:
    __fastfail(3u);
  }
  Connections = (CSidebandDevice *)v5->Connections;
  v24 = 0;
  ConnectionsCount = v5->ConnectionsCount;
  v26 = 0;
  v43 = Connections;
  if ( !ConnectionsCount )
    goto LABEL_49;
  v27 = (_DWORD *)((char *)Connections + 8);
  while ( *v27 != LODWORD(v20[1].Flink) )
  {
LABEL_43:
    ++v24;
    v27 += 4;
    if ( v24 >= ConnectionsCount )
    {
      if ( v26 > 1 )
      {
        v28 = 0;
        while ( 1 )
        {
          v10 = CSidebandDevice::AddNodeListToNodeListStack(Connections, &v45);
          if ( v10 < 0 )
            break;
          if ( ++v28 >= v26 )
            goto LABEL_48;
        }
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v19 = 0;
        }
        if ( v19 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_d(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v19,
            *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v41,
            9u,
            0x2Bu,
            (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
        ExFreePool(v20);
        while ( v45.Flink != &v45 )
          CSidebandDevice::DeleteTopListFromNodeListStack(v32, &v45);
        while ( 1 )
        {
          v33 = P.Flink;
          if ( P.Flink == &P )
            return (unsigned int)v10;
          if ( P.Flink->Blink != &P )
            goto LABEL_99;
          v34 = P.Flink->Flink;
          if ( P.Flink->Flink->Blink != P.Flink )
            goto LABEL_99;
          P.Flink = P.Flink->Flink;
          v34->Blink = &P;
          ExFreePool(v33);
        }
      }
LABEL_48:
      v6 = a4;
LABEL_49:
      ExFreePool(v20);
      v8 = v42;
      v5 = a2;
      v7 = this;
      goto LABEL_30;
    }
  }
  v10 = CSidebandDevice::AddConnectionToTravelStack(
          Connections,
          &P,
          (const struct KSTOPOLOGY_CONNECTION *)Connections + v24);
  if ( v10 >= 0 )
  {
    Connections = v43;
    ++v26;
    goto LABEL_43;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v19 = 0;
  }
  if ( v19 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v19,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v41,
      9u,
      0x2Au,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  ExFreePool(v20);
  while ( v45.Flink != &v45 )
    CSidebandDevice::DeleteTopListFromNodeListStack(v29, &v45);
  while ( 1 )
  {
    v30 = P.Flink;
    if ( P.Flink == &P )
      return (unsigned int)v10;
    if ( P.Flink->Blink != &P )
      goto LABEL_99;
    v31 = P.Flink->Flink;
    if ( P.Flink->Flink->Blink != P.Flink )
      goto LABEL_99;
    P.Flink = P.Flink->Flink;
    v31->Blink = &P;
    ExFreePool(v30);
  }
}
