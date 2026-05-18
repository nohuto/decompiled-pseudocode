/*
 * XREFs of sub_18002C574 @ 0x18002C574
 * Callers:
 *     sub_18002BE50 @ 0x18002BE50 (sub_18002BE50.c)
 *     sub_18002BF28 @ 0x18002BF28 (sub_18002BF28.c)
 *     LanguageEnumProc @ 0x18002C000 (LanguageEnumProc.c)
 *     sub_18002C0EC @ 0x18002C0EC (sub_18002C0EC.c)
 *     sub_18002C3A0 @ 0x18002C3A0 (sub_18002C3A0.c)
 *     sub_18002C8A4 @ 0x18002C8A4 (sub_18002C8A4.c)
 * Callees:
 *     sub_18000C834 @ 0x18000C834 (sub_18000C834.c)
 */

_QWORD *sub_18002C574()
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
    sub_18000C834((__int64)sub_18010DAF0);
  }
  return v2;
}
