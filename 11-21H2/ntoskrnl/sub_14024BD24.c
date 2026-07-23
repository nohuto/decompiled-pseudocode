/*
 * XREFs of sub_14024BD24 @ 0x14024BD24
 * Callers:
 *     sub_1402B59D0 @ 0x1402B59D0 (sub_1402B59D0.c)
 *     KeInsertQueueApc @ 0x1402ED9E0 (KeInsertQueueApc.c)
 * Callees:
 *     sub_14024BFF8 @ 0x14024BFF8 (sub_14024BFF8.c)
 *     EtwProviderEnabled @ 0x1402EDE50 (EtwProviderEnabled.c)
 *     sub_1402EDEB4 @ 0x1402EDEB4 (sub_1402EDEB4.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void sub_14024BD24(char a1, __int64 a2, __int64 a3, ...)
{
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // r12
  int v9; // eax
  bool v10; // zf
  const EVENT_DESCRIPTOR *v11; // rsi
  __int64 v12; // r9
  __int64 Pool2; // rax
  _QWORD *v14; // rdi
  unsigned int v15; // eax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // r8
  unsigned int v19; // ebx
  __int64 v20; // rcx
  _QWORD *v21; // rcx
  int v22; // eax
  __int64 v23; // r10
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned int v26; // ebx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned int v30; // ebx
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // ebx
  BOOLEAN v34; // al
  __int64 v35; // rcx
  __int16 v36; // ax
  __int64 v37; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v38; // [rsp+48h] [rbp-38h] BYREF
  __int64 v39; // [rsp+50h] [rbp-30h]
  _BYTE v40[8]; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v41[8]; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v42[8]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v43; // [rsp+D8h] [rbp+58h] BYREF
  va_list va; // [rsp+D8h] [rbp+58h]
  __int64 v45; // [rsp+E0h] [rbp+60h] BYREF
  va_list va1; // [rsp+E0h] [rbp+60h]
  __int64 v47; // [rsp+E8h] [rbp+68h] BYREF
  va_list va2; // [rsp+E8h] [rbp+68h]
  __int64 v49; // [rsp+F0h] [rbp+70h]
  va_list va3; // [rsp+F8h] [rbp+78h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v43 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v45 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v47 = va_arg(va3, _QWORD);
  v49 = va_arg(va3, _QWORD);
  v39 = 0LL;
  if ( EtwProviderEnabled(qword_140C15E00, 0, 0x3000uLL) )
  {
    v6 = *(_QWORD *)(a2 + 544);
    v7 = *((_QWORD *)KeGetCurrentThread() + 23);
    v8 = *((_QWORD *)KeGetCurrentThread() + 68);
    v9 = 0;
    v10 = (_BYTE)v49 ? v8 == v6 : v7 == v6;
    LOBYTE(v9) = !v10;
    if ( v9 )
    {
      v11 = (const EVENT_DESCRIPTOR *)qword_14000EBB8;
      if ( a1 )
        v11 = &stru_14000EBC8;
      if ( EtwEventEnabled(qword_140C15E00, v11) )
      {
        Pool2 = ExAllocatePool2(64LL, 672LL, 1853049172LL, v12);
        v14 = (_QWORD *)Pool2;
        if ( Pool2 )
        {
          v15 = sub_1402EDEB4(Pool2, v7, v40);
          CurrentThread = KeGetCurrentThread();
          v18 = (_QWORD *)(v17 + 16LL * v15);
          *v18 = (char *)CurrentThread + 1232;
          v18[1] = 4LL;
          v18[2] = (char *)CurrentThread + 1152;
          v18[3] = 8LL;
          v19 = sub_1402EDEB4(&v14[2 * v15 + 4], v6, v41) + v15 + 2;
          v20 = 2LL * v19;
          v19 += 2;
          v21 = &v14[v20];
          *v21 = a2 + 1232;
          v21[1] = 4LL;
          v21[2] = a2 + 1152;
          v21[3] = 8LL;
          v22 = sub_1402EDEB4(&v14[2 * v19], v8, v42);
          v24 = (unsigned int)(v23 + 1);
          LOBYTE(v37) = (v23 + 1) & (*(_DWORD *)(a2 + 116) >> 4);
          v25 = v22 + v19;
          v26 = v24 + v25;
          v25 *= 2LL;
          v14[v25] = &v37;
          v14[v25 + 1] = v24;
          v27 = *(_QWORD *)(a2 + 544);
          if ( *(_QWORD *)(v27 + 1408) == v23
            || (v36 = *(_WORD *)(v27 + 2412), v36 != 332) && v36 != 452
            || (v38 = -(a3 >> 2), v38 > 0xFFFFFFFF) )
          {
            v38 = a3;
          }
          v28 = 2LL * v26;
          v14[v28] = &v38;
          v14[v28 + 1] = 8LL;
          v29 = (unsigned int)v24 + v26;
          v30 = v24 + v29;
          v29 *= 2LL;
          v14[v29] = va;
          v14[v29 + 1] = 8LL;
          v31 = 2LL * v30;
          v14[v31] = va1;
          v14[v31 + 1] = 8LL;
          v32 = (unsigned int)v24 + v30;
          v33 = v24 + v32;
          v32 *= 2LL;
          v14[v32] = va2;
          v14[v32 + 1] = 8LL;
          v34 = EtwProviderEnabled(qword_140C15E00, 0, 0x8000000uLL);
          v35 = v39;
          if ( v34 )
            v35 = v43;
          v39 = v35;
          sub_14024BFF8((_DWORD)v14, 42, v33, v6, (__int64)&v38, 2, (__int64)v11, v34, v37);
          ExFreePoolWithTag(v14, 0);
        }
      }
    }
  }
}
