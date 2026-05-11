/*
 * XREFs of ?GetNodesInPath@CSidebandDevice@@AEAAJKKPEAU_LIST_ENTRY@@@Z @ 0x1C000B850
 * Callers:
 *     ?GetNodeOfType@CSidebandDevice@@AEAAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z @ 0x1C000B5C4 (-GetNodeOfType@CSidebandDevice@@AEAAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z.c)
 *     ?GetSidetoneNodes@CSidebandDevice@@AEAAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z @ 0x1C000C3B0 (-GetSidetoneNodes@CSidebandDevice@@AEAAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?TraverseBackward@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x1C000FD04 (-TraverseBackward@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPE.c)
 *     ?TraverseForward@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x1C001035C (-TraverseForward@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEA.c)
 */

__int64 __fastcall CSidebandDevice::GetNodesInPath(
        CSidebandDevice *this,
        int a2,
        unsigned int a3,
        struct _LIST_ENTRY *a4)
{
  int v8; // ebp
  __int64 v9; // rdi
  char v10; // bl
  char v11; // dl
  char v12; // r8
  unsigned int i; // esi
  const struct KSTOPOLOGY_CONNECTION *v14; // r8
  int v15; // eax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v17; // rdx
  struct _LIST_ENTRY *Blink; // rax
  char v19; // dl
  int v21; // [rsp+20h] [rbp-58h]

  v8 = -1073741275;
  v9 = *(_QWORD *)(*((_QWORD *)this + 5) + 16LL);
  v10 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v11 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v11 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v12 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v12 = 0;
  }
  if ( v11 || v12 )
    WPP_RECORDER_AND_TRACE_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v11,
      v12,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v21,
      9u,
      0x2Cu,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  for ( i = 0; i < *(_DWORD *)(v9 + 208); ++i )
  {
    v14 = (const struct KSTOPOLOGY_CONNECTION *)(*(_QWORD *)(v9 + 216) + 16LL * i);
    if ( v14->ToNode == -1 && v14->ToNodePin == a2 )
    {
      v15 = CSidebandDevice::TraverseBackward(this, (struct _KSFILTER_DESCRIPTOR *)(v9 + 128), v14, a3, a4);
    }
    else
    {
      if ( v14->FromNode != -1 || v14->FromNodePin != a2 )
        goto LABEL_19;
      v15 = CSidebandDevice::TraverseForward(this, (struct _KSFILTER_DESCRIPTOR *)(v9 + 128), v14, a3, a4);
    }
    v8 = v15;
LABEL_19:
    if ( v8 >= 0 )
      goto LABEL_26;
  }
  while ( 1 )
  {
    Flink = a4->Flink;
    if ( a4->Flink == a4 )
      break;
    v17 = Flink->Flink;
    if ( Flink->Flink->Blink != Flink || (Blink = Flink->Blink, Blink->Flink != Flink) )
      __fastfail(3u);
    Blink->Flink = v17;
    v17->Blink = Blink;
    ExFreePool(Flink);
  }
LABEL_26:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v19 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v19 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v10 = 0;
  if ( v19 || v10 )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v19,
      v10,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v21,
      9u,
      0x2Du,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  return (unsigned int)v8;
}
