/*
 * XREFs of sub_140203428 @ 0x140203428
 * Callers:
 *     sub_14066D0AC @ 0x14066D0AC (sub_14066D0AC.c)
 *     sub_1407E0F30 @ 0x1407E0F30 (sub_1407E0F30.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_140203428(__int64 a1)
{
  char v2; // al
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rcx
  char *v5; // rbx
  unsigned __int64 v6; // r8
  __int64 v7; // rdx
  unsigned int v8; // r9d
  __int64 result; // rax

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D3CAC8, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140D3CAC8);
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140D3CAC8 - qword_140C50630 < 0x8000000000LL )
    v4 = (unsigned int)sub_140287F30(*((_QWORD *)CurrentThread + 23));
  else
    v4 = 0xFFFFFFFFLL;
  _disable();
  v5 = (char *)CurrentThread + 1696;
  v6 = (unsigned __int64)&qword_140D3CAC8 & 0x7FFFFFFFFFFFFFFCLL;
  v7 = 0LL;
  while ( (*(_QWORD *)v5 & 0x7FFFFFFFFFFFFFFCLL) != v6
       || !v5[18]
       || (*(_DWORD *)v5 & 1) != 0
       || *((_DWORD *)v5 + 2) != (_DWORD)v4 )
  {
    v7 = (unsigned int)(v7 + 1);
    v5 += 96;
    if ( (unsigned int)v7 >= 6 )
      goto LABEL_18;
  }
  v5[18] = 0;
  if ( v5 )
  {
    if ( *(__int64 *)v5 < 0 )
    {
      *v5 |= 2u;
      _enable();
      sub_14034EE30(v5, v7, v6);
      _disable();
    }
    v8 = *((_DWORD *)v5 + 22);
    *((_DWORD *)v5 + 22) = 0;
    v5[17] = 0;
    *(_QWORD *)v5 = 0LL;
    result = (unsigned __int8)v5[16];
    *((_BYTE *)CurrentThread + 792) |= 1 << result;
    _enable();
    v6 = v8;
    if ( v8 )
      result = sub_14022B568((ULONG_PTR)CurrentThread);
    goto LABEL_14;
  }
LABEL_18:
  result = *((unsigned int *)CurrentThread + 30);
  if ( (result & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&qword_140D3CAC8, (unsigned int)v4, 0LL);
  _enable();
LABEL_14:
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = a1 + 152;
    if ( *(_QWORD *)result != result )
      return KiCheckForKernelApcDelivery(v4, v7, v6);
  }
  return result;
}
