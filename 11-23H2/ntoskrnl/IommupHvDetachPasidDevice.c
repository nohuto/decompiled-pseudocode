/*
 * XREFs of IommupHvDetachPasidDevice @ 0x140524DD0
 * Callers:
 *     IommupDeviceDisableSvm @ 0x140933E1C (IommupDeviceDisableSvm.c)
 *     IommupDeviceEnableSvm @ 0x140933F34 (IommupDeviceEnableSvm.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IommupHvDetachPasidDevice(__int64 a1)
{
  _QWORD *v1; // rbx

  v1 = (_QWORD *)(a1 + 32);
  if ( *(_BYTE *)(a1 + 265) )
  {
    ((void (__fastcall *)(_QWORD))qword_140C625A8)(*v1);
    ((void (__fastcall *)(_QWORD, __int64))qword_140C625E8)(*v1, 33LL);
  }
  ((void (__fastcall *)(_QWORD))qword_140C62638)(*v1);
  return ((__int64 (__fastcall *)(_QWORD))qword_140C626C0)(*v1);
}
