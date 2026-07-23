/*
 * XREFs of sub_140583A70 @ 0x140583A70
 * Callers:
 *     sub_140969850 @ 0x140969850 (sub_140969850.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 sub_140583A70()
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v1; // ecx
  __int64 v2; // rbx
  unsigned int v3; // edx
  __int64 result; // rax
  int v5; // r9d

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C55040, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C55040);
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C55040 - qword_140C50630 >= 0x8000000000LL )
    v1 = -1;
  else
    v1 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
  _disable();
  v2 = (__int64)CurrentThread + 1696;
  v3 = 0;
  while ( (*(_QWORD *)v2 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C55040 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v2 + 18)
       || (*(_DWORD *)v2 & 1) != 0
       || *(_DWORD *)(v2 + 8) != v1 )
  {
    ++v3;
    v2 += 96LL;
    if ( v3 >= 6 )
      goto LABEL_12;
  }
  *(_BYTE *)(v2 + 18) = 0;
  if ( !v2 )
  {
LABEL_12:
    result = *((unsigned int *)CurrentThread + 30);
    if ( (result & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&qword_140C55040, v1, 0LL);
    _enable();
    return result;
  }
  if ( *(__int64 *)v2 < 0 )
  {
    *(_BYTE *)v2 |= 2u;
    _enable();
    sub_14034EE30(v2);
    _disable();
  }
  v5 = *(_DWORD *)(v2 + 88);
  *(_DWORD *)(v2 + 88) = 0;
  *(_BYTE *)(v2 + 17) = 0;
  *(_QWORD *)v2 = 0LL;
  result = *(unsigned __int8 *)(v2 + 16);
  *((_BYTE *)CurrentThread + 792) |= 1 << result;
  _enable();
  if ( v5 )
    return sub_14022B568((ULONG_PTR)CurrentThread, (__int64)&qword_140C55040, v5);
  return result;
}
