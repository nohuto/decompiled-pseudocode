/*
 * XREFs of sub_1406D5C1C @ 0x1406D5C1C
 * Callers:
 *     sub_1406D5B38 @ 0x1406D5B38 (sub_1406D5B38.c)
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1407E1B0C @ 0x1407E1B0C (sub_1407E1B0C.c)
 *     sub_140A0F1D4 @ 0x140A0F1D4 (sub_140A0F1D4.c)
 */

__int64 __fastcall sub_1406D5C1C(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // r12d
  unsigned __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned int i; // edi
  char v10; // si
  struct _KTHREAD *v11; // rax
  bool v12; // zf
  __int64 v14; // rbp

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --*((_WORD *)CurrentThread + 243);
  v6 = (unsigned __int64 *)(a1 + 176);
  v7 = sub_140347C10(a1 + 176, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    sub_14029F120(v6, v7, (__int64)v6);
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  for ( i = 0; i < *(_DWORD *)(a1 + 140); ++i )
  {
    v14 = *(_QWORD *)(i * *(_DWORD *)(a1 + 136) + *(_QWORD *)(a1 + 152));
    if ( v14 )
    {
      if ( *(_QWORD *)(v14 + 32) == a2 )
      {
        v3 = sub_1407E1B0C((int)a1 + 136, 0, 0, i, 0LL);
        if ( v3 >= 0 )
        {
          sub_140A0F1D4(v14);
          --i;
        }
      }
    }
  }
  v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
    ExfTryToWakePushLock(v6);
  sub_1402AFC00((ULONG_PTR)v6);
  v11 = KeGetCurrentThread();
  v12 = (*((_WORD *)v11 + 243))++ == 0xFFFF;
  if ( v12 && *((struct _KTHREAD **)v11 + 19) != (struct _KTHREAD *)((char *)v11 + 152) )
    KiCheckForKernelApcDelivery();
  return (unsigned int)v3;
}
