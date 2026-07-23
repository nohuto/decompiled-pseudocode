/*
 * XREFs of sub_140379C88 @ 0x140379C88
 * Callers:
 *     sub_14037D8B8 @ 0x14037D8B8 (sub_14037D8B8.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140379EC8 @ 0x140379EC8 (sub_140379EC8.c)
 *     sub_14037CCE8 @ 0x14037CCE8 (sub_14037CCE8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140379C88(__int64 a1, unsigned int *a2, int a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v8; // ecx
  unsigned int v9; // esi
  struct _KTHREAD *v10; // rdi
  unsigned int v11; // ecx
  __int64 v12; // rbx
  unsigned int v13; // edx
  int v14; // r9d
  struct _KTHREAD *v15; // rax
  bool v16; // zf
  ULONG_PTR v18[3]; // [rsp+30h] [rbp-E8h] BYREF
  int v19; // [rsp+48h] [rbp-D0h]
  int v20; // [rsp+4Ch] [rbp-CCh]
  __int64 v21; // [rsp+50h] [rbp-C8h]
  _BYTE v22[136]; // [rsp+58h] [rbp-C0h] BYREF

  memset(v22, 0, 0x80uLL);
  v18[1] = 0LL;
  v18[2] = 0LL;
  v21 = 0LL;
  v19 = 0;
  v18[0] = (ULONG_PTR)v22;
  v20 = 8;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D31BB8, 0LL);
  sub_14037CCE8(&unk_140D31BC0, *a2, v18);
  v9 = sub_140379EC8(v8, (_DWORD)a2, a3, a4, (__int64)v18);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D31BB8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140D31BB8);
  v10 = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140D31BB8 - qword_140C50630 < 0x8000000000LL )
    v11 = sub_140287F30(*((_QWORD *)v10 + 23));
  else
    v11 = -1;
  _disable();
  v12 = (__int64)v10 + 1696;
  v13 = 0;
  while ( (*(_QWORD *)v12 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140D31BB8 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v12 + 18)
       || (*(_DWORD *)v12 & 1) != 0
       || *(_DWORD *)(v12 + 8) != v11 )
  {
    ++v13;
    v12 += 96LL;
    if ( v13 >= 6 )
      goto LABEL_20;
  }
  *(_BYTE *)(v12 + 18) = 0;
  if ( v12 )
  {
    if ( *(__int64 *)v12 < 0 )
    {
      *(_BYTE *)v12 |= 2u;
      _enable();
      sub_14034EE30(v12);
      _disable();
    }
    v14 = *(_DWORD *)(v12 + 88);
    *(_DWORD *)(v12 + 88) = 0;
    *(_BYTE *)(v12 + 17) = 0;
    *(_QWORD *)v12 = 0LL;
    *((_BYTE *)v10 + 792) |= 1 << *(_BYTE *)(v12 + 16);
    _enable();
    if ( v14 )
      sub_14022B568((ULONG_PTR)v10, (__int64)&qword_140D31BB8, v14);
    goto LABEL_15;
  }
LABEL_20:
  if ( (*((_DWORD *)v10 + 30) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v10, (ULONG_PTR)&qword_140D31BB8, v11, 0LL);
  _enable();
LABEL_15:
  v15 = KeGetCurrentThread();
  v16 = (*((_WORD *)v15 + 243))++ == 0xFFFF;
  if ( v16 && *((struct _KTHREAD **)v15 + 19) != (struct _KTHREAD *)((char *)v15 + 152) )
    KiCheckForKernelApcDelivery();
  return v9;
}
