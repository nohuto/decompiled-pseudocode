/*
 * XREFs of sub_140A073C0 @ 0x140A073C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KeReleaseSemaphore @ 0x1402D3440 (KeReleaseSemaphore.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall sub_140A073C0(HANDLE Handle, unsigned __int64 a2, BOOLEAN a3, LARGE_INTEGER *a4)
{
  NTSTATUS v5; // r12d
  char v6; // r14
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE v9; // al
  char *v10; // rcx
  unsigned __int64 *v11; // rsi
  _QWORD **v12; // r15
  __int64 v13; // rax
  __int64 v14; // r13
  _QWORD *v15; // rcx
  _QWORD *v16; // r13
  __int64 v17; // rdx
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r15
  _QWORD *v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rdx
  _QWORD *v25; // rdx
  _QWORD *v26; // rax
  KPROCESSOR_MODE WaitMode; // [rsp+30h] [rbp-78h]
  LARGE_INTEGER v28; // [rsp+38h] [rbp-70h] BYREF
  PVOID Object; // [rsp+40h] [rbp-68h] BYREF
  __int64 v30; // [rsp+48h] [rbp-60h]
  PVOID v31; // [rsp+50h] [rbp-58h]
  __int64 v32; // [rsp+60h] [rbp-48h]
  LARGE_INTEGER *Timeout; // [rsp+C8h] [rbp+20h]

  Timeout = a4;
  v5 = 0;
  v28.QuadPart = 0LL;
  v30 = 0LL;
  v6 = 1;
  if ( (a2 & 1) != 0 )
    return -1073741585;
  CurrentThread = KeGetCurrentThread();
  v9 = *((_BYTE *)CurrentThread + 562);
  WaitMode = v9;
  if ( a4 )
  {
    if ( v9 && ((unsigned __int64)&a4[1] > 0x7FFFFFFF0000LL || &a4[1] < a4) )
      MEMORY[0x7FFFFFFF0000] = 0;
    v28 = *a4;
    Timeout = &v28;
  }
  if ( Handle )
  {
    Object = 0LL;
    result = ObReferenceObjectByHandle(Handle, 1u, qword_140D05280, v9, &Object, 0LL);
    v5 = result;
    v10 = (char *)Object;
    v31 = Object;
    if ( result < 0 )
      return result;
  }
  else
  {
    v10 = (char *)qword_140C10D40;
    v31 = (PVOID)qword_140C10D40;
  }
  *((_DWORD *)CurrentThread + 345) |= 0x20u;
  v32 = *((_QWORD *)CurrentThread + 23);
  v11 = (unsigned __int64 *)&v10[24 * ((a2 >> 5) & 0x3F)];
  v12 = (_QWORD **)(v11 + 1);
  --*((_WORD *)CurrentThread + 242);
  v13 = sub_140347C10((__int64)v11, 0LL);
  v14 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
    sub_14029F120(v11, v13, (__int64)v11);
  if ( v14 )
    *(_BYTE *)(v14 + 18) = 1;
  v15 = *v12;
  if ( *v12 == v12 )
  {
LABEL_22:
    v30 = *((_QWORD *)CurrentThread + 149);
    *((_QWORD *)CurrentThread + 149) = a2;
    v18 = (_QWORD *)((char *)CurrentThread + 1160);
    v19 = (_QWORD *)v11[2];
    if ( (_QWORD **)*v19 != v12 )
      goto LABEL_48;
    *v18 = v12;
    *((_QWORD *)CurrentThread + 146) = v19;
    *v19 = v18;
    v11[2] = (unsigned __int64)v18;
    v16 = 0LL;
  }
  else
  {
    while ( 1 )
    {
      v16 = v15 - 145;
      v17 = v15[4];
      if ( (v17 & 1) == 0 )
        goto LABEL_22;
      if ( v17 == (a2 | 1) && v16[68] == v32 )
        break;
      v15 = (_QWORD *)*v15;
      if ( v15 == v12 )
        goto LABEL_22;
    }
    v25 = (_QWORD *)*v15;
    v26 = (_QWORD *)v15[1];
    if ( *(_QWORD **)(*v15 + 8LL) != v15 || (_QWORD *)*v26 != v15 )
      goto LABEL_48;
    *v26 = v25;
    v25[1] = v26;
    v15[1] = v15;
    *v15 = v15;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v11);
  sub_1402AFC00((ULONG_PTR)v11);
  if ( v16 )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)(v16 + 155), 1, 1, 0);
    sub_1402F9540((__int64)CurrentThread);
    goto LABEL_45;
  }
  sub_1402F9540((__int64)CurrentThread);
  v5 = KeWaitForSingleObject((char *)CurrentThread + 1240, WrKeyedEvent, WaitMode, a3, Timeout);
  if ( v5 )
  {
    --*((_WORD *)CurrentThread + 242);
    v20 = sub_140347C10((__int64)v11, 0LL);
    v21 = v20;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
      sub_14029F120(v11, v20, (__int64)v11);
    if ( v21 )
      *(_BYTE *)(v21 + 18) = 1;
    v22 = (_QWORD *)((char *)CurrentThread + 1160);
    v23 = *((_QWORD *)CurrentThread + 145);
    if ( (struct _KTHREAD *)v23 == (struct _KTHREAD *)((char *)CurrentThread + 1160) )
      goto LABEL_36;
    v24 = (_QWORD *)*((_QWORD *)CurrentThread + 146);
    if ( *(_QWORD **)(v23 + 8) == v22 && (_QWORD *)*v24 == v22 )
    {
      *v24 = v23;
      *(_QWORD *)(v23 + 8) = v24;
      *((_QWORD *)CurrentThread + 146) = (char *)CurrentThread + 1160;
      *v22 = v22;
      v6 = 0;
LABEL_36:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v11);
      sub_1402AFC00((ULONG_PTR)v11);
      sub_1402F9540((__int64)CurrentThread);
      if ( v6 )
        v5 = KeWaitForSingleObject((char *)CurrentThread + 1240, WrKeyedEvent, 0, 0, 0LL);
      goto LABEL_40;
    }
LABEL_48:
    __fastfail(3u);
  }
LABEL_40:
  *((_QWORD *)CurrentThread + 149) = v30;
LABEL_45:
  *((_DWORD *)CurrentThread + 345) &= ~0x20u;
  if ( Handle )
    ObfDereferenceObject(v31);
  return v5;
}
