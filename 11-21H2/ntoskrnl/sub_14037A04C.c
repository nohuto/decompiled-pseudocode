/*
 * XREFs of sub_14037A04C @ 0x14037A04C
 * Callers:
 *     sub_14037AC18 @ 0x14037AC18 (sub_14037AC18.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14035F344 @ 0x14035F344 (sub_14035F344.c)
 *     sub_14035F5E8 @ 0x14035F5E8 (sub_14035F5E8.c)
 *     sub_14037A368 @ 0x14037A368 (sub_14037A368.c)
 *     sub_14037C45C @ 0x14037C45C (sub_14037C45C.c)
 *     sub_14037CCE8 @ 0x14037CCE8 (sub_14037CCE8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14037A04C(__int64 a1, unsigned int *a2, int a3, __int16 a4)
{
  unsigned int v4; // edi
  int v6; // r12d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  struct _KEVENT *v10; // rcx
  __int64 v11; // r14
  struct _KTHREAD *v12; // rdi
  unsigned int v13; // ecx
  __int64 v14; // rbx
  unsigned int v15; // edx
  int v16; // r8d
  struct _KTHREAD *v17; // rax
  bool v18; // zf
  __int64 *v19; // rax
  __int64 v20; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int128 v26; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v27[3]; // [rsp+50h] [rbp-B0h] BYREF
  int v28; // [rsp+68h] [rbp-98h]
  int v29; // [rsp+6Ch] [rbp-94h]
  __int64 v30; // [rsp+70h] [rbp-90h]
  _BYTE v31[136]; // [rsp+78h] [rbp-88h] BYREF

  v4 = *a2;
  memset(v31, 0, 0x80uLL);
  v27[1] = 0LL;
  v27[2] = 0LL;
  v30 = 0LL;
  v6 = 0;
  v28 = 0;
  v27[0] = v31;
  v29 = 8;
  CurrentThread = KeGetCurrentThread();
  v26 = 0LL;
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  while ( 1 )
  {
    sub_14037CCE8(a1 + 448, v4, v27);
    sub_14037C45C(v8, &v26, v27);
    if ( (_QWORD)v26 )
    {
      v9 = *((_QWORD *)&v26 + 1) + 8LL;
      v22 = (unsigned __int16)*(_DWORD *)v26 + 2LL;
      *((_QWORD *)&v26 + 1) = v9;
      if ( v9 >= (__int64)v26 + 8 * v22 )
      {
        v23 = *(_QWORD *)(v26 + 8);
        if ( v23 )
        {
          *(_QWORD *)&v26 = *(_QWORD *)(v26 + 8);
          *((_QWORD *)&v26 + 1) = v23 + 16;
        }
        v9 = (v23 + 16) & -(__int64)(v23 != 0);
      }
    }
    else
    {
      v9 = 0LL;
    }
    v10 = *(struct _KEVENT **)(a1 + 1656);
    if ( v10 && *(_DWORD *)(a1 + 1648) == *(_DWORD *)v9 )
      KeSetEvent(v10, 0, 0);
    *(_BYTE *)(v9 + 6) = 0;
    sub_14037A368(a1, v27, &v26);
    if ( ++v6 == a3 )
      break;
    ++v4;
  }
  v11 = a1 + 440;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 440), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 440);
  v12 = KeGetCurrentThread();
  if ( (unsigned __int64)(v11 - qword_140C50630) < 0x8000000000LL )
    v13 = sub_140287F30(*((_QWORD *)v12 + 23));
  else
    v13 = -1;
  _disable();
  v14 = (__int64)v12 + 1696;
  v15 = 0;
  while ( (*(_QWORD *)v14 & 0x7FFFFFFFFFFFFFFCLL) != (v11 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v14 + 18)
       || (*(_DWORD *)v14 & 1) != 0
       || *(_DWORD *)(v14 + 8) != v13 )
  {
    ++v15;
    v14 += 96LL;
    if ( v15 >= 6 )
      goto LABEL_30;
  }
  *(_BYTE *)(v14 + 18) = 0;
  if ( v14 )
  {
    if ( *(__int64 *)v14 < 0 )
    {
      *(_BYTE *)v14 |= 2u;
      _enable();
      sub_14034EE30(v14);
      _disable();
    }
    v16 = *(_DWORD *)(v14 + 88);
    *(_DWORD *)(v14 + 88) = 0;
    *(_BYTE *)(v14 + 17) = 0;
    *(_QWORD *)v14 = 0LL;
    *((_BYTE *)v12 + 792) |= 1 << *(_BYTE *)(v14 + 16);
    _enable();
    if ( v16 )
      sub_14022B568((ULONG_PTR)v12, a1 + 440, v16);
    goto LABEL_20;
  }
LABEL_30:
  if ( (*((_DWORD *)v12 + 30) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v12, a1 + 440, v13, 0LL);
  _enable();
LABEL_20:
  v17 = KeGetCurrentThread();
  v18 = (*((_WORD *)v17 + 243))++ == 0xFFFF;
  if ( v18 && *((struct _KTHREAD **)v17 + 19) != (struct _KTHREAD *)((char *)v17 + 152) )
    KiCheckForKernelApcDelivery();
  v19 = (__int64 *)sub_14035F5E8(a1, a4 & 0x3FF);
  return sub_14035F344(v20, *v19);
}
