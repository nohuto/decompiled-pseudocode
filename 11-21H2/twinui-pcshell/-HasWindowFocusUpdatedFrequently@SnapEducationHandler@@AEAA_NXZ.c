/*
 * XREFs of ?HasWindowFocusUpdatedFrequently@SnapEducationHandler@@AEAA_NXZ @ 0x1801202B8
 * Callers:
 *     ?OnApplicationViewChanged@SnapEducationHandler@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180120140 (-OnApplicationViewChanged@SnapEducationHandler@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 * Callees:
 *     <none>
 */

bool __fastcall SnapEducationHandler::HasWindowFocusUpdatedFrequently(SnapEducationHandler *this)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // r8
  unsigned int v4; // r9d
  __int64 v5; // r10

  v2 = *((_QWORD *)this + 8);
  if ( v2 >= *((unsigned __int8 *)this + 25) )
    return 0;
  v3 = *((_QWORD *)this + 7);
  v4 = 0;
  v5 = v3 + v2;
  while ( v3 != v5 )
    v4 += *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 8 * (v3++ & (*((_QWORD *)this + 6) - 1LL))) + 48LL);
  return v4 > *((unsigned __int8 *)this + 24);
}
