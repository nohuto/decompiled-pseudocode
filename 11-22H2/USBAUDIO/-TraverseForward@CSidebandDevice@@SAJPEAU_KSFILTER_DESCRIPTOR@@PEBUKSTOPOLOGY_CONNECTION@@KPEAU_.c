/*
 * XREFs of ?TraverseForward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x1C0011AA8
 * Callers:
 *     ?GetNodesInPath@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KKPEAU_LIST_ENTRY@@@Z @ 0x1C000EABC (-GetNodesInPath@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KKPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0005BE8 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     _scope_exit__lambda_e1a03c7d470e441fd7c9b607c19800fd____::_2_::scope_exit::_scope_exit @ 0x1C000BF58 (_scope_exit__lambda_e1a03c7d470e441fd7c9b607c19800fd____--_2_--scope_exit--_scope_exit.c)
 *     ?AddConnectionToTravelStack@CSidebandDevice@@SAJPEAU_LIST_ENTRY@@PEBUKSTOPOLOGY_CONNECTION@@@Z @ 0x1C000C0B4 (-AddConnectionToTravelStack@CSidebandDevice@@SAJPEAU_LIST_ENTRY@@PEBUKSTOPOLOGY_CONNECTION@@@Z.c)
 *     ?AddNodeListToNodeListStack@CSidebandDevice@@SAJPEAU_LIST_ENTRY@@@Z @ 0x1C000C28C (-AddNodeListToNodeListStack@CSidebandDevice@@SAJPEAU_LIST_ENTRY@@@Z.c)
 *     ?AddNodeToNodeListStack@CSidebandDevice@@SAJPEAU_LIST_ENTRY@@K@Z @ 0x1C000C2F8 (-AddNodeToNodeListStack@CSidebandDevice@@SAJPEAU_LIST_ENTRY@@K@Z.c)
 *     ?DeleteTopListFromNodeListStack@CSidebandDevice@@SAXPEAU_LIST_ENTRY@@@Z @ 0x1C000CE40 (-DeleteTopListFromNodeListStack@CSidebandDevice@@SAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?MoveNodesFromNodesListStackToList@CSidebandDevice@@SAXPEAU_LIST_ENTRY@@0@Z @ 0x1C0010F50 (-MoveNodesFromNodesListStackToList@CSidebandDevice@@SAXPEAU_LIST_ENTRY@@0@Z.c)
 */

__int64 __fastcall CSidebandDevice::TraverseForward(
        struct _KSFILTER_DESCRIPTOR *a1,
        const struct KSTOPOLOGY_CONNECTION *a2,
        int a3,
        struct _LIST_ENTRY *a4)
{
  struct _KSFILTER_DESCRIPTOR *v4; // r14
  int v5; // r15d
  unsigned int v6; // esi
  int v7; // edx
  int v8; // edi
  int v9; // r8d
  PDEVICE_OBJECT v10; // r10
  bool v11; // bl
  char v12; // bl
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v14; // rax
  int Blink; // edx
  int v16; // edx
  int v17; // r8d
  ULONG ConnectionsCount; // r12d
  ULONG v19; // esi
  const KSTOPOLOGY_CONNECTION *Connections; // r13
  unsigned int v21; // r14d
  const KSTOPOLOGY_CONNECTION *v22; // r15
  int v23; // esi
  PDEVICE_OBJECT v24; // r10
  struct _LIST_ENTRY *v25; // rcx
  struct _LIST_ENTRY *v26; // rax
  unsigned int v28; // [rsp+58h] [rbp-19h]
  struct _LIST_ENTRY *v29; // [rsp+60h] [rbp-11h] BYREF
  struct _LIST_ENTRY P; // [rsp+68h] [rbp-9h] BYREF
  struct _LIST_ENTRY v31; // [rsp+78h] [rbp+7h] BYREF
  struct _LIST_ENTRY **v32; // [rsp+88h] [rbp+17h] BYREF
  char v33; // [rsp+90h] [rbp+1Fh]

  v4 = a1;
  P.Blink = &P;
  v5 = a3;
  P.Flink = &P;
  v6 = 0;
  v31.Blink = &v31;
  v31.Flink = &v31;
  v8 = CSidebandDevice::AddConnectionToTravelStack(&P, a2);
  if ( v8 < 0 )
  {
    v10 = WPP_GLOBAL_Control;
    v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v9) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_63;
    goto LABEL_9;
  }
  v8 = CSidebandDevice::AddNodeListToNodeListStack(&v31);
  if ( v8 >= 0 )
  {
    v29 = 0LL;
    v12 = 1;
    while ( 1 )
    {
      while ( 1 )
      {
        Flink = P.Flink;
        if ( P.Flink == &P || v6 >= 0x3E8 )
          goto LABEL_63;
        v28 = ++v6;
        if ( P.Flink->Blink != &P || (v14 = P.Flink->Flink, P.Flink->Flink->Blink != P.Flink) )
LABEL_67:
          __fastfail(3u);
        P.Flink = P.Flink->Flink;
        v14->Blink = &P;
        v29 = Flink;
        Blink = (int)Flink[1].Blink;
        v32 = &v29;
        v33 = 1;
        if ( Blink != -1 )
          break;
        if ( HIDWORD(Flink[1].Blink) == v5 )
        {
          CSidebandDevice::MoveNodesFromNodesListStackToList(&v31, a4);
          v8 = 0;
          goto LABEL_62;
        }
        CSidebandDevice::DeleteTopListFromNodeListStack(&v31);
        v8 = -1073741275;
        scope_exit__lambda_e1a03c7d470e441fd7c9b607c19800fd____::_2_::scope_exit::_scope_exit((__int64)&v32);
      }
      v8 = CSidebandDevice::AddNodeToNodeListStack(&v31, Blink);
      if ( v8 < 0 )
        break;
      ConnectionsCount = v4->ConnectionsCount;
      v19 = 0;
      Connections = v4->Connections;
      v21 = 0;
      if ( ConnectionsCount )
      {
        v22 = Connections;
        do
        {
          if ( v22->FromNode == LODWORD(v29[1].Blink) )
          {
            v8 = CSidebandDevice::AddConnectionToTravelStack(&P, &Connections[v19]);
            if ( v8 < 0 )
            {
              v24 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
                || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
              {
                v12 = 0;
              }
              LOBYTE(v17) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              if ( v12 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                goto LABEL_61;
              goto LABEL_62;
            }
            ++v21;
          }
          ++v19;
          ++v22;
        }
        while ( v19 < ConnectionsCount );
        if ( v21 > 1 )
        {
          v23 = 0;
          while ( 1 )
          {
            v8 = CSidebandDevice::AddNodeListToNodeListStack(&v31);
            if ( v8 < 0 )
              break;
            if ( ++v23 >= v21 )
              goto LABEL_38;
          }
          v24 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            v12 = 0;
          }
          LOBYTE(v17) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v12 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
LABEL_61:
            LOBYTE(v16) = v12;
            WPP_RECORDER_AND_TRACE_SF_d(v24->AttachedDevice, v16, v17, v24->DeviceExtension);
          }
LABEL_62:
          scope_exit__lambda_e1a03c7d470e441fd7c9b607c19800fd____::_2_::scope_exit::_scope_exit((__int64)&v32);
          goto LABEL_63;
        }
LABEL_38:
        v5 = a3;
      }
      scope_exit__lambda_e1a03c7d470e441fd7c9b607c19800fd____::_2_::scope_exit::_scope_exit((__int64)&v32);
      v6 = v28;
      v4 = a1;
    }
    v24 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v12 = 0;
    }
    LOBYTE(v17) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v12 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      goto LABEL_61;
    goto LABEL_62;
  }
  v10 = WPP_GLOBAL_Control;
  v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  LOBYTE(v9) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
LABEL_9:
    LOBYTE(v7) = v11;
    WPP_RECORDER_AND_TRACE_SF_d(v10->AttachedDevice, v7, v9, v10->DeviceExtension);
  }
LABEL_63:
  while ( 1 )
  {
    v25 = P.Flink;
    if ( P.Flink == &P )
      break;
    if ( P.Flink->Blink != &P )
      goto LABEL_67;
    v26 = P.Flink->Flink;
    if ( P.Flink->Flink->Blink != P.Flink )
      goto LABEL_67;
    P.Flink = P.Flink->Flink;
    v26->Blink = &P;
    ExFreePool(v25);
  }
  while ( v31.Flink != &v31 )
    CSidebandDevice::DeleteTopListFromNodeListStack(&v31);
  return (unsigned int)v8;
}
