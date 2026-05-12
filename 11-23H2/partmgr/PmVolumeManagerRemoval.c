/*
 * XREFs of PmVolumeManagerRemoval @ 0x1C0028050
 * Callers:
 *     ?PmVolumeManagerArrival@@YAJPEAU_CONTROL_EXTENSION@@PEAU_UNICODE_STRING@@@Z @ 0x1C000AEE4 (-PmVolumeManagerArrival@@YAJPEAU_CONTROL_EXTENSION@@PEAU_UNICODE_STRING@@@Z.c)
 *     PmVolumeManagerNotification @ 0x1C0023170 (PmVolumeManagerNotification.c)
 *     ?PmUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00268E0 (-PmUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PmVolumeManagerRemoval(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx
  _QWORD *v4; // rax
  void *v5; // rcx

  if ( !*((_DWORD *)a2 + 8) )
  {
    v3 = *a2;
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v4 = (_QWORD *)a2[1], (_QWORD *)*v4 != a2) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    v5 = (void *)a2[6];
    if ( v5 )
      ObfDereferenceObject(v5);
    ExFreePoolWithTag(a2, 0);
  }
  return 0LL;
}
