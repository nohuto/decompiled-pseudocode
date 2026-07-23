/*
 * XREFs of sub_1402DC188 @ 0x1402DC188
 * Callers:
 *     sub_14076200C @ 0x14076200C (sub_14076200C.c)
 *     sub_1407621C0 @ 0x1407621C0 (sub_1407621C0.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1402DC188(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v3; // ecx
  char *v4; // rbx
  unsigned __int64 v5; // r8
  __int64 v6; // rdx
  int v7; // r9d
  __int64 result; // rax

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4F4E0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4F4E0);
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C4F4E0 - qword_140C50630 < 0x8000000000LL )
    v3 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
  else
    v3 = -1;
  _disable();
  v4 = (char *)CurrentThread + 1696;
  v5 = (unsigned __int64)&qword_140C4F4E0 & 0x7FFFFFFFFFFFFFFCLL;
  v6 = 0LL;
  while ( (*(_QWORD *)v4 & 0x7FFFFFFFFFFFFFFCLL) != v5
       || !v4[18]
       || (*(_DWORD *)v4 & 1) != 0
       || *((_DWORD *)v4 + 2) != v3 )
  {
    v6 = (unsigned int)(v6 + 1);
    v4 += 96;
    if ( (unsigned int)v6 >= 6 )
      goto LABEL_19;
  }
  v4[18] = 0;
  if ( v4 )
  {
    if ( *(__int64 *)v4 < 0 )
    {
      *v4 |= 2u;
      _enable();
      sub_14034EE30(v4, v6, v5);
      _disable();
    }
    v7 = *((_DWORD *)v4 + 22);
    *((_DWORD *)v4 + 22) = 0;
    v4[17] = 0;
    *(_QWORD *)v4 = 0LL;
    result = (unsigned __int8)v4[16];
    *((_BYTE *)CurrentThread + 792) |= 1 << result;
    _enable();
    if ( v7 )
      result = sub_14022B568((ULONG_PTR)CurrentThread, (__int64)&qword_140C4F4E0, v7);
    goto LABEL_15;
  }
LABEL_19:
  result = *((unsigned int *)CurrentThread + 30);
  if ( (result & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&qword_140C4F4E0, v3, 0LL);
  _enable();
LABEL_15:
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = a1 + 152;
    if ( *(_QWORD *)result != result )
      return KiCheckForKernelApcDelivery();
  }
  return result;
}
