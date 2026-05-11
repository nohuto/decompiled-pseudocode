/*
 * XREFs of ?TraverseBackward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x1C00116B8
 * Callers:
 *     ?GetNodesInPath@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KKPEAU_LIST_ENTRY@@@Z @ 0x1C000EABC (-GetNodesInPath@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KKPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0005BE8 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     _scope_exit__lambda_e1a03c7d470e441fd7c9b607c19800fd____::_2_::scope_exit::_scope_exit @ 0x1C000BF58 (_scope_exit__lambda_e1a03c7d470e441fd7c9b607c19800fd____--_2_--scope_exit--_scope_exit.c)
 *     _scope_exit__lambda_a16b11757b8cb69a258309176305b33d____::_2_::scope_exit::_scope_exit @ 0x1C000BFD8 (_scope_exit__lambda_a16b11757b8cb69a258309176305b33d____--_2_--scope_exit--_scope_exit.c)
 *     _scope_exit__lambda_41624085b4e50989a736788818b50e03____::_2_::scope_exit::_scope_exit @ 0x1C000C02C (_scope_exit__lambda_41624085b4e50989a736788818b50e03____--_2_--scope_exit--_scope_exit.c)
 *     ?AddConnectionToTravelStack@CSidebandDevice@@SAJPEAU_LIST_ENTRY@@PEBUKSTOPOLOGY_CONNECTION@@@Z @ 0x1C000C0B4 (-AddConnectionToTravelStack@CSidebandDevice@@SAJPEAU_LIST_ENTRY@@PEBUKSTOPOLOGY_CONNECTION@@@Z.c)
 *     ?AddNodeListToNodeListStack@CSidebandDevice@@SAJPEAU_LIST_ENTRY@@@Z @ 0x1C000C28C (-AddNodeListToNodeListStack@CSidebandDevice@@SAJPEAU_LIST_ENTRY@@@Z.c)
 *     ?AddNodeToNodeListStack@CSidebandDevice@@SAJPEAU_LIST_ENTRY@@K@Z @ 0x1C000C2F8 (-AddNodeToNodeListStack@CSidebandDevice@@SAJPEAU_LIST_ENTRY@@K@Z.c)
 *     ?DeleteTopListFromNodeListStack@CSidebandDevice@@SAXPEAU_LIST_ENTRY@@@Z @ 0x1C000CE40 (-DeleteTopListFromNodeListStack@CSidebandDevice@@SAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?MoveNodesFromNodesListStackToList@CSidebandDevice@@SAXPEAU_LIST_ENTRY@@0@Z @ 0x1C0010F50 (-MoveNodesFromNodesListStackToList@CSidebandDevice@@SAXPEAU_LIST_ENTRY@@0@Z.c)
 */

__int64 __fastcall CSidebandDevice::TraverseBackward(
        struct _KSFILTER_DESCRIPTOR *a1,
        const struct KSTOPOLOGY_CONNECTION *a2,
        int a3,
        struct _LIST_ENTRY *a4)
{
  struct _KSFILTER_DESCRIPTOR *v4; // r14
  unsigned int v5; // esi
  int v6; // r15d
  char v7; // bl
  int v8; // edx
  int v9; // edi
  int v10; // r8d
  int v11; // edx
  int v12; // r8d
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v15; // rcx
  int v16; // edx
  int v17; // edx
  int v18; // r8d
  ULONG ConnectionsCount; // r12d
  ULONG v20; // esi
  const KSTOPOLOGY_CONNECTION *Connections; // r13
  unsigned int v22; // r14d
  ULONG *p_ToNode; // r15
  int v24; // esi
  PDEVICE_OBJECT v25; // r10
  unsigned int v26; // [rsp+58h] [rbp-39h]
  struct _LIST_ENTRY *v27; // [rsp+60h] [rbp-31h] BYREF
  struct _LIST_ENTRY v28; // [rsp+68h] [rbp-29h] BYREF
  struct _LIST_ENTRY v29; // [rsp+78h] [rbp-19h] BYREF
  struct _LIST_ENTRY **v30; // [rsp+88h] [rbp-9h] BYREF
  char v31; // [rsp+90h] [rbp-1h]
  struct _LIST_ENTRY *v32; // [rsp+98h] [rbp+7h] BYREF
  char v33; // [rsp+A0h] [rbp+Fh]
  struct _LIST_ENTRY *v34; // [rsp+A8h] [rbp+17h] BYREF
  char v35; // [rsp+B0h] [rbp+1Fh]

  v4 = a1;
  v28.Blink = &v28;
  v5 = 0;
  v28.Flink = &v28;
  v6 = a3;
  v32 = &v28;
  v7 = 1;
  v33 = 1;
  v9 = CSidebandDevice::AddConnectionToTravelStack(&v28, a2);
  if ( v9 >= 0 )
  {
    v35 = 1;
    v29.Blink = &v29;
    v29.Flink = &v29;
    v34 = &v29;
    v9 = CSidebandDevice::AddNodeListToNodeListStack(&v29);
    if ( v9 >= 0 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          Flink = v28.Flink;
          if ( v28.Flink == &v28 || v5 >= 0x3E8 )
            goto LABEL_17;
          v26 = ++v5;
          if ( v28.Flink->Blink != &v28 || (v15 = v28.Flink->Flink, v28.Flink->Flink->Blink != v28.Flink) )
            __fastfail(3u);
          v28.Flink = v28.Flink->Flink;
          v15->Blink = &v28;
          v27 = Flink;
          v16 = (int)Flink[1].Flink;
          v30 = &v27;
          v31 = 1;
          if ( v16 != -1 )
            break;
          if ( HIDWORD(Flink[1].Flink) == v6 )
          {
            CSidebandDevice::MoveNodesFromNodesListStackToList(&v29, a4);
            v9 = 0;
            goto LABEL_40;
          }
          CSidebandDevice::DeleteTopListFromNodeListStack(&v29);
          v9 = -1073741275;
          scope_exit__lambda_e1a03c7d470e441fd7c9b607c19800fd____::_2_::scope_exit::_scope_exit((__int64)&v30);
        }
        v9 = CSidebandDevice::AddNodeToNodeListStack(&v29, v16);
        if ( v9 < 0 )
          break;
        ConnectionsCount = v4->ConnectionsCount;
        v20 = 0;
        Connections = v4->Connections;
        v22 = 0;
        if ( ConnectionsCount )
        {
          p_ToNode = &Connections->ToNode;
          do
          {
            if ( *p_ToNode == LODWORD(v27[1].Flink) )
            {
              v9 = CSidebandDevice::AddConnectionToTravelStack(&v28, &Connections[v20]);
              if ( v9 < 0 )
              {
                v25 = WPP_GLOBAL_Control;
                if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
                  || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
                {
                  v7 = 0;
                }
                LOBYTE(v18) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
                  goto LABEL_40;
                goto LABEL_47;
              }
              ++v22;
            }
            ++v20;
            p_ToNode += 4;
          }
          while ( v20 < ConnectionsCount );
          if ( v22 <= 1 )
          {
LABEL_37:
            v6 = a3;
            goto LABEL_38;
          }
          v24 = 0;
          while ( 1 )
          {
            v9 = CSidebandDevice::AddNodeListToNodeListStack(&v29);
            if ( v9 < 0 )
              break;
            if ( ++v24 >= v22 )
              goto LABEL_37;
          }
          v25 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            v7 = 0;
          }
          LOBYTE(v18) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_40;
LABEL_47:
          LOBYTE(v17) = v7;
          WPP_RECORDER_AND_TRACE_SF_d(v25->AttachedDevice, v17, v18, v25->DeviceExtension);
LABEL_40:
          scope_exit__lambda_e1a03c7d470e441fd7c9b607c19800fd____::_2_::scope_exit::_scope_exit((__int64)&v30);
          goto LABEL_17;
        }
LABEL_38:
        scope_exit__lambda_e1a03c7d470e441fd7c9b607c19800fd____::_2_::scope_exit::_scope_exit((__int64)&v30);
        v5 = v26;
        v4 = a1;
      }
      v25 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v7 = 0;
      }
      LOBYTE(v18) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        goto LABEL_47;
      goto LABEL_40;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v7 = 0;
    }
    if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = v7;
      LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v11, v12, WPP_GLOBAL_Control->DeviceExtension);
    }
LABEL_17:
    scope_exit__lambda_41624085b4e50989a736788818b50e03____::_2_::scope_exit::_scope_exit((__int64)&v34);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v7 = 0;
    }
    if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = v7;
      LOBYTE(v10) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v8, v10, WPP_GLOBAL_Control->DeviceExtension);
    }
  }
  scope_exit__lambda_a16b11757b8cb69a258309176305b33d____::_2_::scope_exit::_scope_exit((__int64)&v32);
  return (unsigned int)v9;
}
