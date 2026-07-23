/*
 * XREFs of sub_140643104 @ 0x140643104
 * Callers:
 *     sub_140B31348 @ 0x140B31348 (sub_140B31348.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14064331C @ 0x14064331C (sub_14064331C.c)
 */

char sub_140643104()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v1; // rsi
  __int64 v2; // rdi
  unsigned int v3; // eax
  unsigned int v4; // ebp
  __int64 v5; // rdx
  int v6; // eax
  struct _KTHREAD *v8; // rdi
  __int64 v9; // rbx
  unsigned int v10; // ecx
  int v11; // r9d

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v1 = KeGetCurrentThread();
  v2 = 0LL;
  _disable();
  v3 = *((unsigned __int8 *)v1 + 792);
  v4 = -1;
  if ( *((_BYTE *)v1 + 792) || (v3 = sub_14029F6A8((__int64)&qword_140C10C80, (__int64)v1)) != 0 )
  {
    _BitScanForward((unsigned int *)&v5, v3);
    *((_BYTE *)v1 + 792) = v3 & ~(1 << v5);
    _enable();
    v2 = (__int64)v1 + 96 * v5 + 1696;
    if ( (unsigned __int64)&qword_140C10C80 - qword_140C50630 >= 0x8000000000LL )
      v6 = -1;
    else
      v6 = sub_140287F30(*((_QWORD *)v1 + 23));
    *(_DWORD *)(v2 + 8) = v6;
    *(_QWORD *)v2 = (unsigned __int64)&qword_140C10C80 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C10C80, 0LL) )
    sub_14029F120(&qword_140C10C80, v2, (__int64)&qword_140C10C80);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  sub_14064331C();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C10C80, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C10C80);
  v8 = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C10C80 - qword_140C50630 < 0x8000000000LL )
    v4 = sub_140287F30(*((_QWORD *)v8 + 23));
  _disable();
  v9 = (__int64)v8 + 1696;
  v10 = 0;
  while ( (*(_QWORD *)v9 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C10C80 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v9 + 18)
       || (*(_DWORD *)v9 & 1) != 0
       || *(_DWORD *)(v9 + 8) != v4 )
  {
    ++v10;
    v9 += 96LL;
    if ( v10 >= 6 )
      goto LABEL_21;
  }
  *(_BYTE *)(v9 + 18) = 0;
  if ( !v9 )
  {
LABEL_21:
    if ( (*((_DWORD *)v8 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v8, (ULONG_PTR)&qword_140C10C80, v4, 0LL);
    _enable();
    return sub_1402F9540((__int64)KeGetCurrentThread());
  }
  if ( *(__int64 *)v9 < 0 )
  {
    *(_BYTE *)v9 |= 2u;
    _enable();
    sub_14034EE30(v9);
    _disable();
  }
  v11 = *(_DWORD *)(v9 + 88);
  *(_DWORD *)(v9 + 88) = 0;
  *(_BYTE *)(v9 + 17) = 0;
  *(_QWORD *)v9 = 0LL;
  *((_BYTE *)v8 + 792) |= 1 << *(_BYTE *)(v9 + 16);
  _enable();
  if ( v11 )
    sub_14022B568((ULONG_PTR)v8, (__int64)&qword_140C10C80, v11);
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
