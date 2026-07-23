/*
 * XREFs of sub_1403795D4 @ 0x1403795D4
 * Callers:
 *     sub_140379208 @ 0x140379208 (sub_140379208.c)
 *     sub_1403794AC @ 0x1403794AC (sub_1403794AC.c)
 *     sub_1403905FC @ 0x1403905FC (sub_1403905FC.c)
 *     sub_14039423C @ 0x14039423C (sub_14039423C.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140237628 @ 0x140237628 (sub_140237628.c)
 *     sub_140238A40 @ 0x140238A40 (sub_140238A40.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140379848 @ 0x140379848 (sub_140379848.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1403795D4(__int64 a1, int a2, _OWORD *a3, unsigned int a4)
{
  __int64 v6; // r13
  __int64 v8; // r13
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 *v11; // r15
  __int64 v12; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v14; // ecx
  __int64 v15; // rbx
  unsigned int v16; // edx
  int v17; // r9d
  struct _KTHREAD *v18; // rax
  bool v19; // zf
  __int64 v21; // [rsp+30h] [rbp-38h] BYREF

  v21 = 0LL;
  v6 = 6360LL;
  if ( a2 != 4 )
    v6 = 6232LL;
  v8 = a1 + v6;
  v9 = sub_140237628(v8, a2, a3, a4 & 1);
  if ( v9 != -1073741650 )
  {
    if ( (a4 & 2) != 0 )
    {
      v11 = 0LL;
    }
    else
    {
      v10 = -1000000LL;
      if ( *(_BYTE *)(a1 + 6022) > 1u )
        v10 = -5000000LL;
      v21 = v10;
      if ( (a4 & 8) != 0 )
        v21 = v10 / 4;
      v11 = &v21;
    }
    if ( (*(_BYTE *)(a1 + 6021) & 4) != 0 )
    {
      v12 = a1 + 6024;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 6024);
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned __int64)(v12 - qword_140C50630) < 0x8000000000LL )
        v14 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
      else
        v14 = -1;
      _disable();
      v15 = (__int64)CurrentThread + 1696;
      v16 = 0;
      while ( (*(_QWORD *)v15 & 0x7FFFFFFFFFFFFFFCLL) != (v12 & 0x7FFFFFFFFFFFFFFCLL)
           || !*(_BYTE *)(v15 + 18)
           || (*(_DWORD *)v15 & 1) != 0
           || *(_DWORD *)(v15 + 8) != v14 )
      {
        ++v16;
        v15 += 96LL;
        if ( v16 >= 6 )
          goto LABEL_31;
      }
      *(_BYTE *)(v15 + 18) = 0;
      if ( v15 )
      {
        if ( *(__int64 *)v15 < 0 )
        {
          *(_BYTE *)v15 |= 2u;
          _enable();
          sub_14034EE30(v15);
          _disable();
        }
        v17 = *(_DWORD *)(v15 + 88);
        *(_DWORD *)(v15 + 88) = 0;
        *(_BYTE *)(v15 + 17) = 0;
        *(_QWORD *)v15 = 0LL;
        *((_BYTE *)CurrentThread + 792) |= 1 << *(_BYTE *)(v15 + 16);
        _enable();
        if ( v17 )
          sub_14022B568((ULONG_PTR)CurrentThread, a1 + 6024, v17);
        goto LABEL_25;
      }
LABEL_31:
      if ( (*((_DWORD *)CurrentThread + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a1 + 6024, v14, 0LL);
      _enable();
LABEL_25:
      v18 = KeGetCurrentThread();
      v19 = (*((_WORD *)v18 + 243))++ == 0xFFFF;
      if ( v19 && *((struct _KTHREAD **)v18 + 19) != (struct _KTHREAD *)((char *)v18 + 152) )
        KiCheckForKernelApcDelivery();
    }
    v9 = sub_140379848(v8, a3, v11, (a4 >> 2) & 1);
    sub_140238A40(a1);
  }
  return v9;
}
