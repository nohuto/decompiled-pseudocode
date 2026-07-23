/*
 * XREFs of sub_1407E1CA4 @ 0x1407E1CA4
 * Callers:
 *     sub_1407E1B90 @ 0x1407E1B90 (sub_1407E1B90.c)
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1407E1CA4(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  __int64 v9; // rcx
  _BYTE *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  _BYTE *i; // rax
  char v14; // bp
  struct _KTHREAD *v15; // rax
  bool v16; // zf

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  v5 = (unsigned __int64 *)(a1 + 1072);
  v6 = sub_140347C10(a1 + 1072, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    sub_14029F120(v5, v6, (__int64)v5);
  if ( v7 )
    *(_BYTE *)(v7 + 18) = 1;
  v8 = (unsigned __int64)(a2 - *(_QWORD *)(a1 + 32)) >> 6;
  if ( (_DWORD)v8 )
  {
    v9 = (unsigned int)(v8 - 1);
    v10 = (_BYTE *)(v9 + a1 + 44);
    do
    {
      if ( *v10 != 2 )
        break;
      --v10;
      --v9;
    }
    while ( v9 >= 0 );
    v11 = v9 + 1;
  }
  else
  {
    v11 = 0LL;
  }
  v12 = (unsigned int)v8;
  for ( i = (_BYTE *)((unsigned int)v8 + a1 + 44); *i == 2; ++i )
    ++v12;
  if ( v11 <= v12 )
    memset((void *)(a1 + v11 + 44), 0, v12 - v11 + 1);
  v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
    ExfTryToWakePushLock(v5);
  sub_1402AFC00((ULONG_PTR)v5);
  v15 = KeGetCurrentThread();
  v16 = (*((_WORD *)v15 + 243))++ == 0xFFFF;
  if ( v16 && *((struct _KTHREAD **)v15 + 19) != (struct _KTHREAD *)((char *)v15 + 152) )
    KiCheckForKernelApcDelivery();
  return 0LL;
}
