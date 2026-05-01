/*
 * XREFs of SdbpGetRCIDStringCopy @ 0x180091BF4
 * Callers:
 *     SdbpConvertResourcesToStrings @ 0x18009193C (SdbpConvertResourcesToStrings.c)
 * Callees:
 *     memcpy_0 @ 0x1800534A2 (memcpy_0.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 *     SdbLoadString @ 0x180091484 (SdbLoadString.c)
 */

void *__fastcall SdbpGetRCIDStringCopy(HMODULE a1, int a2)
{
  unsigned int String; // eax
  __int64 v3; // rbx
  SIZE_T v4; // rdi
  PVOID Heap; // rax
  void *v6; // rsi
  void *result; // rax
  void *Src; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  Src = 0LL;
  String = SdbLoadString(a1, a2, (unsigned __int16 **)&Src);
  v3 = String;
  if ( !String )
    return 0LL;
  v4 = 2LL * (String + 1);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v4);
  v6 = Heap;
  if ( !Heap )
    return 0LL;
  memset_0(Heap, 0, v4);
  memcpy_0(v6, Src, v4);
  result = v6;
  *((_WORD *)v6 + v3) = 0;
  return result;
}
