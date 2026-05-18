/*
 * XREFs of sub_18000C834 @ 0x18000C834
 * Callers:
 *     sub_18002C574 @ 0x18002C574 (sub_18002C574.c)
 * Callees:
 *     _o__free_base @ 0x18000BF86 (_o__free_base.c)
 *     _o__malloc_base @ 0x18000BFB6 (_o__malloc_base.c)
 */

__int64 __fastcall sub_18000C834(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx

  v2 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  v3 = *(_QWORD *)(v2 + 32);
  if ( !v3 )
  {
    v3 = v2 + 48;
LABEL_7:
    *(_DWORD *)v3 = 0;
    *(_QWORD *)(v2 + 32) = v3;
    goto LABEL_8;
  }
  if ( *(_DWORD *)v3 == 30 )
  {
    v3 = o__malloc_base();
    o__free_base();
    if ( !v3 )
      return 0xFFFFFFFFLL;
    *(_QWORD *)(v3 + 8) = *(_QWORD *)(v2 + 32);
    goto LABEL_7;
  }
LABEL_8:
  *(_QWORD *)(v3 + 8LL * (int)(*(_DWORD *)v3)++ + 16) = a1;
  return 0LL;
}
