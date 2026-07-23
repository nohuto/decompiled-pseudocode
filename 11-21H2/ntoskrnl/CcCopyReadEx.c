/*
 * XREFs of CcCopyReadEx @ 0x14032A8C0
 * Callers:
 *     CcCopyRead @ 0x1406E8490 (CcCopyRead.c)
 *     CcFastCopyRead @ 0x14090BAA0 (CcFastCopyRead.c)
 *     FsRtlCopyRead @ 0x14092D040 (FsRtlCopyRead.c)
 * Callees:
 *     sub_14023C5D4 @ 0x14023C5D4 (sub_14023C5D4.c)
 *     sub_14029CC2C @ 0x14029CC2C (sub_14029CC2C.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_1402F5EA0 @ 0x1402F5EA0 (sub_1402F5EA0.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_140366814 @ 0x140366814 (sub_140366814.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1407BDF60 @ 0x1407BDF60 (sub_1407BDF60.c)
 *     sub_1407BE350 @ 0x1407BE350 (sub_1407BE350.c)
 *     sub_140811AB4 @ 0x140811AB4 (sub_140811AB4.c)
 */

__int64 __fastcall CcCopyReadEx(
        _QWORD *Object,
        __int64 *a2,
        unsigned int a3,
        char a4,
        void *a5,
        _DWORD *a6,
        struct _KTHREAD *a7)
{
  struct _KTHREAD *CurrentThread; // r10
  unsigned int v11; // ebx
  __int64 v12; // rdi
  _DWORD *v13; // r9
  __int64 v14; // r13
  __int64 v15; // rdx
  __int64 v16; // r12
  struct _KTHREAD *v17; // rbx
  unsigned int v18; // eax
  __int64 v19; // r10
  __int64 v20; // r9
  _DWORD *v21; // rax
  _QWORD *v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // r10
  __int64 v25; // r8
  _QWORD *v26; // r8
  _QWORD *v27; // rdx
  unsigned __int64 v28; // r10
  unsigned __int8 v30; // [rsp+50h] [rbp-68h]
  __int64 v31; // [rsp+58h] [rbp-60h] BYREF
  _DWORD *v32; // [rsp+60h] [rbp-58h]
  __int64 v33; // [rsp+68h] [rbp-50h]
  __int64 v34; // [rsp+70h] [rbp-48h]
  struct _KTHREAD *v35; // [rsp+78h] [rbp-40h]
  __int64 v36; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v37; // [rsp+C8h] [rbp+10h] BYREF
  unsigned int v38; // [rsp+D0h] [rbp+18h]
  char v39; // [rsp+D8h] [rbp+20h]

  v38 = a3;
  LODWORD(v36) = 0;
  CurrentThread = KeGetCurrentThread();
  v11 = (*((_DWORD *)CurrentThread + 344) >> 9) & 7;
  if ( (*(_DWORD *)(*((_QWORD *)CurrentThread + 68) + 1124LL) & 0x100000) != 0 )
    v11 = 0;
  if ( v11 < 2 && CurrentThread == KeGetCurrentThread() && *((_DWORD *)CurrentThread + 360) )
    v11 = 2;
  v37 = 0LL;
  v31 = 0LL;
  v33 = 0LL;
  v12 = *(_QWORD *)(Object[5] + 8LL);
  v34 = v12;
  v13 = (_DWORD *)Object[6];
  v32 = v13;
  ++qword_140C498E0;
  if ( !byte_140C498C1 && byte_140C49880 && !dword_140C499D0 && !dword_140C499D4 )
  {
    sub_140811AB4(stru_140C498A0);
    v13 = v32;
    a3 = v38;
  }
  if ( !v11 )
    a4 = 1;
  v39 = a4;
  v14 = a3;
  if ( a3 + *a2 > *(_QWORD *)(v12 + 8) )
    KeBugCheckEx(0x34u, 0x299uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( !a5 )
    RtlRaiseStatus(-1073741592);
  v15 = *(unsigned __int16 *)(*((_QWORD *)KeGetCurrentPrcb() + 24) + 138LL) % (unsigned int)dword_140C097B4;
  if ( byte_140C54C58 == 1 )
  {
    v16 = *(_QWORD *)(*(_QWORD *)(v12 + 592) + 8 * v15 + 64);
    a3 = v38;
  }
  else
  {
    v16 = *(_QWORD *)(*(_QWORD *)(v12 + 528) + 8 * v15 + 80);
  }
  v17 = a7;
  if ( (*v13 & 0x20000) != 0 )
    sub_14029CC2C(Object, a2, a3, a7, v16);
  v18 = 11988;
  if ( !a4 )
    v18 = 11984;
  __incgsdword(v18);
  *((_DWORD *)KeGetCurrentThread() + 359) = 0;
  if ( v17 && v17 != KeGetCurrentThread() )
    sub_1402F5EA0((__int64)v17, (__int64)&v37);
  v30 = sub_1407BDF60((int)Object, a5, (__int64)&v36, (*v32 >> 18) & 7, v37, (__int64)&v31);
  if ( v30 )
  {
    v35 = KeGetCurrentThread();
    __addgsdword(0x8484u, *((_DWORD *)v35 + 359));
    if ( (*(_DWORD *)(v12 + 152) & 0x40000000) == 0 )
    {
      if ( (_DWORD)v36 && (*v32 & 0x20000) == 0 )
        sub_14029CC2C(Object, a2, v38, v17, v16);
      v19 = *(_QWORD *)(Object[5] + 8LL);
      v20 = Object[6];
      _InterlockedExchange64((volatile __int64 *)(v20 + 16), *(_QWORD *)(v20 + 32));
      _InterlockedExchange64((volatile __int64 *)(v20 + 24), *(_QWORD *)(v20 + 40));
      _InterlockedExchange64((volatile __int64 *)(v20 + 32), *a2);
      _InterlockedExchange64((volatile __int64 *)(v20 + 40), v14 + *a2);
      if ( (*(_DWORD *)(v19 + 152) & 0x200000) != 0
        && (unsigned int)((*(_DWORD *)(v20 + 32) >> 12) - (*(_DWORD *)(v20 + 24) >> 12)) > 1 )
      {
        sub_14023C5D4(v19, 0x200000, 0);
      }
    }
    v21 = a6;
    *a6 = 0;
    *((_QWORD *)v21 + 1) = v14;
  }
  else
  {
    __incgsdword(0x2ED8u);
  }
  if ( v37 )
    sub_140366814(v37);
  if ( !byte_140C498C1 )
  {
    v22 = *(_QWORD **)(v12 + 504);
    if ( v30 )
    {
      v23 = v31;
      if ( v31 )
        v24 = 1000000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - v23) / stru_140C49888.QuadPart;
      else
        v24 = v33;
      v25 = 62LL;
      if ( !a4 )
        v25 = 86LL;
      v26 = &v22[v25];
      v27 = v22 + 50;
      if ( !a4 )
        v27 = v22 + 74;
      sub_1407BE350(v24, v27, v26);
      if ( a4 )
      {
        ++v22[42];
        if ( v28 > v22[48] )
        {
          v22[48] = v28;
          return v30;
        }
      }
      else
      {
        ++v22[43];
        if ( v28 > v22[49] )
        {
          v22[49] = v28;
          return v30;
        }
      }
    }
    else
    {
      ++v22[44];
    }
  }
  return v30;
}
