/*
 * XREFs of sub_1407E1EF8 @ 0x1407E1EF8
 * Callers:
 *     sub_1407E1DC8 @ 0x1407E1DC8 (sub_1407E1DC8.c)
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1407E3F10 @ 0x1407E3F10 (sub_1407E3F10.c)
 */

__int64 __fastcall sub_1407E1EF8(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rsi
  _QWORD *v8; // rcx
  char v9; // bp
  struct _KTHREAD *v10; // rax
  bool v11; // zf

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  v5 = (unsigned __int64 *)(a1 + 80);
  v6 = sub_140347C10(a1 + 80, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    sub_14029F120(v5, v6, (__int64)v5);
  if ( v7 )
    *(_BYTE *)(v7 + 18) = 1;
  v8 = *(_QWORD **)(a1 + 72);
  if ( *v8 != a1 + 64 )
    __fastfail(3u);
  *(_QWORD *)a2 = a1 + 64;
  *(_QWORD *)(a2 + 8) = v8;
  *v8 = a2;
  *(_QWORD *)(a1 + 72) = a2;
  *(_DWORD *)(a2 + 16) |= 1u;
  v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v9 & 2) != 0 && (v9 & 4) == 0 )
    ExfTryToWakePushLock(v5);
  sub_1402AFC00((ULONG_PTR)v5);
  v10 = KeGetCurrentThread();
  v11 = (*((_WORD *)v10 + 243))++ == 0xFFFF;
  if ( v11 && *((struct _KTHREAD **)v10 + 19) != (struct _KTHREAD *)((char *)v10 + 152) )
    KiCheckForKernelApcDelivery();
  return sub_1407E3F10(a2);
}
