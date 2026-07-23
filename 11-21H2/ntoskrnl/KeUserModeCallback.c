/*
 * XREFs of KeUserModeCallback @ 0x1407A3EC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14024B6F8 @ 0x14024B6F8 (sub_14024B6F8.c)
 *     sub_140281830 @ 0x140281830 (sub_140281830.c)
 *     sub_1402C1900 @ 0x1402C1900 (sub_1402C1900.c)
 *     sub_1402F4B70 @ 0x1402F4B70 (sub_1402F4B70.c)
 *     sub_1402F509C @ 0x1402F509C (sub_1402F509C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140423B80 @ 0x140423B80 (sub_140423B80.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405A5990 @ 0x1405A5990 (sub_1405A5990.c)
 *     sub_1405A5DF0 @ 0x1405A5DF0 (sub_1405A5DF0.c)
 *     sub_1406F8074 @ 0x1406F8074 (sub_1406F8074.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 */

__int64 __fastcall KeUserModeCallback(int a1, const void *a2, unsigned int a3, int a4, __int64 a5)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r15
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r12
  SIZE_T v12; // rdx
  unsigned __int64 v13; // r13
  char v14; // di
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r13d
  __int64 v19; // rdi
  signed __int64 *v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // [rsp+38h] [rbp-80h] BYREF
  unsigned __int64 v24; // [rsp+40h] [rbp-78h] BYREF
  __int64 v25; // [rsp+48h] [rbp-70h]
  unsigned __int64 v26; // [rsp+50h] [rbp-68h]
  __int64 v27; // [rsp+58h] [rbp-60h]
  struct _KTHREAD *v28; // [rsp+60h] [rbp-58h]
  __int64 v29; // [rsp+68h] [rbp-50h]
  __int64 v30; // [rsp+70h] [rbp-48h]
  ULONG_PTR retaddr; // [rsp+B8h] [rbp+0h]

  v5 = 0LL;
  v6 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v28 = CurrentThread;
  if ( (*((_DWORD *)CurrentThread + 29) & 0x1000) != 0 )
    KeBugCheckEx(0x107u, (ULONG_PTR)CurrentThread, 0LL, 0LL, 0LL);
  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x4Au, retaddr, KeGetCurrentIrql(), 0LL, 0LL);
  if ( *((_BYTE *)CurrentThread + 586) || *((_DWORD *)CurrentThread + 121) )
    KeBugCheckEx(1u, retaddr, *((unsigned __int8 *)CurrentThread + 586), *((unsigned int *)CurrentThread + 121), 0LL);
  if ( ++*((_BYTE *)CurrentThread + 731) > 0x1Fu )
  {
    v18 = -1073741571;
    goto LABEL_17;
  }
  v8 = (unsigned __int16)sub_1402F509C(*((_DWORD *)CurrentThread + 147));
  v9 = sub_1402F4B70(0x10u, v8, (__int64)CurrentThread);
  v6 = v9;
  v27 = v9;
  if ( !v9 )
  {
    v18 = -1073741801;
    goto LABEL_17;
  }
  *(_QWORD *)(v9 - 80) = v9;
  *(_QWORD *)(v9 - 72) = v9 - (unsigned int)dword_140D05050;
  *(_QWORD *)(v9 - 64) = *((_QWORD *)CurrentThread + 7);
  *(_QWORD *)(v9 - 56) = *((_QWORD *)CurrentThread + 6);
  *(_QWORD *)(v9 - 40) = *((_QWORD *)CurrentThread + 5);
  if ( (_BYTE)byte_140E01841 )
  {
    v18 = sub_1405A5990((unsigned __int64)CurrentThread, 2, 16LL, v8, &v24, &v23);
    if ( v18 < 0 )
      goto LABEL_17;
    *(_QWORD *)(v6 - 8) = *((_QWORD *)CurrentThread + 130);
    *(_QWORD *)(v6 - 32) = *((_QWORD *)CurrentThread + 131);
    v10 = *((_QWORD *)CurrentThread + 132);
  }
  else
  {
    *(_QWORD *)(v9 - 8) = 0LL;
    *(_QWORD *)(v9 - 32) = 0LL;
    *(_QWORD *)(v9 - 16) = 0LL;
    v10 = 0LL;
  }
  *(_QWORD *)(v6 - 24) = v10;
  v11 = *((_QWORD *)CurrentThread + 18);
  v30 = v11;
  v25 = *(_QWORD *)(v11 + 384);
  v29 = v25;
  v12 = ((a3 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL) + 88;
  v13 = (v25 - v12) & 0xFFFFFFFFFFFFFFF0uLL;
  ProbeForWrite((volatile void *)v13, v12, 0x10u);
  memmove((void *)(v13 + 88), a2, a3);
  *(_QWORD *)(v13 + 32) = v13 + 88;
  *(_DWORD *)(v13 + 40) = a3;
  *(_DWORD *)(v13 + 44) = a1;
  *(_QWORD *)(v13 + 72) = v25;
  *(_QWORD *)(v13 + 48) = *(_QWORD *)(v11 + 360);
  v26 = 0LL;
  if ( (*((_DWORD *)CurrentThread + 29) & 0x100000) != 0 )
  {
    v22 = __readmsr(0x6A0u);
    if ( (v22 & 1) != 0 )
    {
      v5 = __readmsr(0x6A7u);
      v26 = v5;
    }
  }
  v14 = BYTE2(KeGetPcr()[5].HalReserved[15]);
  *(_QWORD *)(v11 + 384) = v13;
  v18 = sub_140423B80(a4, a5, (int)v6 - 80, v6, v24, v23);
  if ( (v14 & 1) != 0 )
    sub_14024B6F8(v16, v15, v17);
  _mm_lfence();
  v19 = v25;
  if ( *(_DWORD *)(*((_QWORD *)CurrentThread + 30) + 5952LL) )
  {
    *(_QWORD *)(v11 + 384) -= 256LL;
    v21 = (signed __int64 *)sub_140281830();
    sub_1406F8074(v21, 7LL);
  }
  if ( v5 )
    __writemsr(0x6A7u, v5);
  *(_QWORD *)(v11 + 384) = v19;
LABEL_17:
  --*((_BYTE *)CurrentThread + 731);
  if ( v6 )
    sub_1402C1900(v6, 4u, (__int64)CurrentThread);
  if ( v23 )
    sub_1405A5DF0(v24, 2, 4);
  return (unsigned int)v18;
}
