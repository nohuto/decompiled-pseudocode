/*
 * XREFs of sub_1407838E0 @ 0x1407838E0
 * Callers:
 *     sub_1406D88A4 @ 0x1406D88A4 (sub_1406D88A4.c)
 *     sub_1406D8994 @ 0x1406D8994 (sub_1406D8994.c)
 *     sub_14075D1B4 @ 0x14075D1B4 (sub_14075D1B4.c)
 *     sub_14075D814 @ 0x14075D814 (sub_14075D814.c)
 *     sub_14075D8DC @ 0x14075D8DC (sub_14075D8DC.c)
 *     sub_14075DA88 @ 0x14075DA88 (sub_14075DA88.c)
 *     sub_14075DD3C @ 0x14075DD3C (sub_14075DD3C.c)
 *     sub_14075EF9C @ 0x14075EF9C (sub_14075EF9C.c)
 *     sub_14078362C @ 0x14078362C (sub_14078362C.c)
 *     sub_140783DB8 @ 0x140783DB8 (sub_140783DB8.c)
 *     sub_140784064 @ 0x140784064 (sub_140784064.c)
 *     sub_1407842F0 @ 0x1407842F0 (sub_1407842F0.c)
 *     sub_14078CD70 @ 0x14078CD70 (sub_14078CD70.c)
 *     sub_14080E2B0 @ 0x14080E2B0 (sub_14080E2B0.c)
 *     sub_14080EEFC @ 0x14080EEFC (sub_14080EEFC.c)
 *     sub_1408104C0 @ 0x1408104C0 (sub_1408104C0.c)
 *     sub_14084E03C @ 0x14084E03C (sub_14084E03C.c)
 *     sub_140855120 @ 0x140855120 (sub_140855120.c)
 *     sub_1409DCFD4 @ 0x1409DCFD4 (sub_1409DCFD4.c)
 *     sub_1409DD3C4 @ 0x1409DD3C4 (sub_1409DD3C4.c)
 *     sub_1409DE380 @ 0x1409DE380 (sub_1409DE380.c)
 *     sub_1409DE730 @ 0x1409DE730 (sub_1409DE730.c)
 *     sub_1409DE80C @ 0x1409DE80C (sub_1409DE80C.c)
 *     sub_1409DEB60 @ 0x1409DEB60 (sub_1409DEB60.c)
 * Callees:
 *     sub_140203D50 @ 0x140203D50 (sub_140203D50.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1407838E0(__int64 *a1, ULONG_PTR a2)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // r8
  _QWORD *v10; // rcx

  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  v4 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 24));
  if ( v4 )
  {
    if ( v4 < 0 )
      KeBugCheckEx(0x14Au, 2uLL, a2, 0LL, 0LL);
    KeReleaseMutex(&Object, 0);
  }
  else
  {
    v6 = *(_QWORD *)a2;
    v7 = *(_DWORD *)(a2 + 16) | 0x20000000;
    *(_DWORD *)(a2 + 16) = v7;
    if ( v6 && (v7 & 0x10000000) != 0 )
    {
      if ( *(_QWORD *)(v6 + 8) != a2 || (v10 = *(_QWORD **)(a2 + 8), *v10 != a2) )
        __fastfail(3u);
      *v10 = v6;
      *(_QWORD *)(v6 + 8) = v10;
    }
    KeReleaseMutex(&Object, 0);
    if ( a1[2] )
      sub_14042A5E0(a2, v8);
    sub_140203D50(*a1, (_SLIST_ENTRY *)a2, v9);
  }
  return v4;
}
