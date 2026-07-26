/*
 * XREFs of ??0NDIS_PD_GLOBAL@@QEAA@XZ @ 0x1C0115C44
 * Callers:
 *     ?ndisPDInitialize@@YAJXZ @ 0x1C0156680 (-ndisPDInitialize@@YAJXZ.c)
 * Callees:
 *     <none>
 */

NDIS_PD_GLOBAL *__fastcall NDIS_PD_GLOBAL::NDIS_PD_GLOBAL(NDIS_PD_GLOBAL *this)
{
  _RTL_BITMAP *v1; // rbx

  v1 = (_RTL_BITMAP *)((char *)this + 24);
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1029) = 0LL;
  *((_QWORD *)this + 2) = (char *)this + 8;
  *((_QWORD *)this + 1) = (char *)this + 8;
  *((_QWORD *)this + 4) = (char *)this + 40;
  *((_DWORD *)this + 6) = 0x10000;
  RtlClearAllBits((PRTL_BITMAP)((char *)this + 24));
  RtlSetBit(v1, 0);
  *((_QWORD *)this + 1031) = (char *)this + 8240;
  *((_QWORD *)this + 1030) = (char *)this + 8240;
  return this;
}
