/*
 * XREFs of PmUpdateOffline @ 0x1C0008C90
 * Callers:
 *     ?PmIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0001010 (-PmIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     PmSetDiskAttributes @ 0x1C0009178 (PmSetDiskAttributes.c)
 * Callees:
 *     <none>
 */

void __fastcall PmUpdateOffline(__int64 a1, char a2)
{
  _QWORD *v2; // r9
  _QWORD *i; // r8
  unsigned int v4; // ecx

  v2 = (_QWORD *)(a1 + 896);
  for ( i = *(_QWORD **)(a1 + 896); i != v2; i = (_QWORD *)*i )
  {
    v4 = *((_DWORD *)i - 26) | 0x80;
    if ( !a2 )
      v4 = *(_DWORD *)(i - 13) & 0xFFFFFF7F;
    *((_DWORD *)i - 26) = v4;
  }
}
