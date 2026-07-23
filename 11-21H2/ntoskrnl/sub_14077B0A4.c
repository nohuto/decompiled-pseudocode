/*
 * XREFs of sub_14077B0A4 @ 0x14077B0A4
 * Callers:
 *     sub_1406D27C8 @ 0x1406D27C8 (sub_1406D27C8.c)
 *     sub_1406D2EE0 @ 0x1406D2EE0 (sub_1406D2EE0.c)
 *     sub_1406D3020 @ 0x1406D3020 (sub_1406D3020.c)
 *     sub_1406E5780 @ 0x1406E5780 (sub_1406E5780.c)
 *     sub_140768D10 @ 0x140768D10 (sub_140768D10.c)
 *     sub_140769170 @ 0x140769170 (sub_140769170.c)
 *     sub_140769C24 @ 0x140769C24 (sub_140769C24.c)
 *     sub_1407762E4 @ 0x1407762E4 (sub_1407762E4.c)
 *     sub_14077747C @ 0x14077747C (sub_14077747C.c)
 *     sub_1407783C4 @ 0x1407783C4 (sub_1407783C4.c)
 *     sub_140779F10 @ 0x140779F10 (sub_140779F10.c)
 *     sub_14077A750 @ 0x14077A750 (sub_14077A750.c)
 *     sub_14077AD94 @ 0x14077AD94 (sub_14077AD94.c)
 *     sub_14077AF18 @ 0x14077AF18 (sub_14077AF18.c)
 *     sub_14077B3D4 @ 0x14077B3D4 (sub_14077B3D4.c)
 *     sub_14077B6F4 @ 0x14077B6F4 (sub_14077B6F4.c)
 *     sub_14077BB00 @ 0x14077BB00 (sub_14077BB00.c)
 *     sub_14078D764 @ 0x14078D764 (sub_14078D764.c)
 *     sub_1409483EC @ 0x1409483EC (sub_1409483EC.c)
 *     sub_140948638 @ 0x140948638 (sub_140948638.c)
 *     sub_140948814 @ 0x140948814 (sub_140948814.c)
 *     sub_140948AC4 @ 0x140948AC4 (sub_140948AC4.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_14077B12C @ 0x14077B12C (sub_14077B12C.c)
 *     sub_14077B33C @ 0x14077B33C (sub_14077B33C.c)
 */

__int64 __fastcall sub_14077B0A4(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v5; // esi
  struct _ERESOURCE *v6; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rax

  v5 = 0;
  v6 = (struct _ERESOURCE *)sub_14077B33C(a1);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceSharedLite(v6, 1u);
  v8 = sub_14077B12C(v6, a2);
  *a3 = v8;
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  else
    v5 = -1073741772;
  ExReleaseResourceLite(v6);
  KeLeaveCriticalRegion();
  return v5;
}
