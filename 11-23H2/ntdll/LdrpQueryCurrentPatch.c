/*
 * XREFs of LdrpQueryCurrentPatch @ 0x1800D9F80
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x180024A58 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDllInternal @ 0x180028CA4 (LdrpLoadDllInternal.c)
 *     LdrpLoadPatchedNtdll @ 0x1800E0260 (LdrpLoadPatchedNtdll.c)
 * Callees:
 *     LdrpAllocateUnicodeString @ 0x18002B200 (LdrpAllocateUnicodeString.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     ZwManageHotPatch @ 0x1800A31A0 (ZwManageHotPatch.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

__int64 __fastcall LdrpQueryCurrentPatch(unsigned int a1, unsigned int a2, __int64 a3)
{
  _QWORD *v3; // rdi
  unsigned __int64 v4; // rbx
  _QWORD *Heap; // rax
  int v7; // eax
  int UnicodeString; // esi
  unsigned __int16 v9; // ax
  void *v10; // rcx
  _QWORD v13[4]; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v14; // [rsp+58h] [rbp-B0h]

  v3 = v13;
  v4 = __PAIR64__(a2, a1);
  v13[1] = -1LL;
  v13[2] = __PAIR64__(a2, a1);
  v13[0] = 1LL;
  v13[3] = 0LL;
  v14 = 0LL;
  while ( 1 )
  {
    v7 = ZwManageHotPatch();
    UnicodeString = v7;
    if ( v7 != -1073741789 )
      break;
    if ( !LdrpHeap )
      goto LABEL_17;
    if ( v3 != v13 )
      RtlFreeHeap(LdrpHeap, 0, (__int64)v3);
    Heap = (_QWORD *)RtlAllocateHeap(LdrpHeap, 0, a1);
    v3 = Heap;
    if ( !Heap )
      return (unsigned int)-1073741801;
    *Heap = 1LL;
    Heap[3] = 0LL;
    Heap[4] = 0LL;
    Heap[5] = 0LL;
    Heap[1] = -1LL;
    Heap[2] = v4;
  }
  if ( v7 >= 0 )
  {
    if ( *((_WORD *)v3 + 16) )
    {
      if ( *(_QWORD *)(a3 + 8)
        || (*(_OWORD *)a3 = 0LL,
            UnicodeString = LdrpAllocateUnicodeString(a3, *((unsigned __int16 *)v3 + 16)),
            UnicodeString >= 0) )
      {
        v9 = *((_WORD *)v3 + 16);
        if ( v9 <= *(_WORD *)(a3 + 2) )
        {
          v10 = *(void **)(a3 + 8);
          *(_WORD *)a3 = v9;
          memmove(v10, (const void *)v3[5], *((unsigned __int16 *)v3 + 16));
        }
        else
        {
          UnicodeString = -1073741789;
        }
      }
    }
    else
    {
      *(_WORD *)a3 = 0;
    }
  }
LABEL_17:
  if ( v3 && v3 != v13 )
    RtlFreeHeap(LdrpHeap, 0, (__int64)v3);
  return (unsigned int)UnicodeString;
}
