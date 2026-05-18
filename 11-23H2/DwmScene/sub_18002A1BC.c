/*
 * XREFs of sub_18002A1BC @ 0x18002A1BC
 * Callers:
 *     sub_180029B1C @ 0x180029B1C (sub_180029B1C.c)
 *     sub_180029BDC @ 0x180029BDC (sub_180029BDC.c)
 *     sub_180029C9C @ 0x180029C9C (sub_180029C9C.c)
 *     sub_180029D6C @ 0x180029D6C (sub_180029D6C.c)
 *     sub_18002A018 @ 0x18002A018 (sub_18002A018.c)
 *     sub_18002A5F8 @ 0x18002A5F8 (sub_18002A5F8.c)
 * Callees:
 *     sub_18000C828 @ 0x18000C828 (sub_18000C828.c)
 */

_QWORD *sub_18002A1BC()
{
  __int64 v0; // rdx
  int v1; // eax
  _QWORD *v2; // rbx

  v0 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  v1 = *(_DWORD *)(v0 + 304);
  v2 = (_QWORD *)(v0 + 312);
  if ( (v1 & 1) == 0 )
  {
    *(_DWORD *)(v0 + 304) = v1 | 1;
    *v2 = 0LL;
    *(_QWORD *)(v0 + 320) = 0LL;
    *(_QWORD *)(v0 + 328) = 0LL;
    sub_18000C828((__int64)sub_1800F25E0);
  }
  return v2;
}
