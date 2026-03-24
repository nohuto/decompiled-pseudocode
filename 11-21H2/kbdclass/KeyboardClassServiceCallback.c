/*
 * XREFs of KeyboardClassServiceCallback @ 0x1C0005680
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0002F40 (memmove.c)
 *     KeyboardClassDequeueRead @ 0x1C0004F50 (KeyboardClassDequeueRead.c)
 *     KeyboardClassReadCopyData @ 0x1C0005278 (KeyboardClassReadCopyData.c)
 *     WPP_RECORDER_SF_ @ 0x1C00061CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006350 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C0006424 (WPP_RECORDER_SF_qLL.c)
 *     WPP_RECORDER_SF_qLqq @ 0x1C000651C (WPP_RECORDER_SF_qLqq.c)
 *     WPP_RECORDER_SF_qlqqd @ 0x1C0006708 (WPP_RECORDER_SF_qlqqd.c)
 *     WPP_RECORDER_SF_qqLLqq @ 0x1C0006AA4 (WPP_RECORDER_SF_qqLLqq.c)
 *     WPP_RECORDER_SF_qqiL @ 0x1C00070C0 (WPP_RECORDER_SF_qqiL.c)
 */

__int64 **__fastcall KeyboardClassServiceCallback(__int64 a1, char *a2, int a3, _DWORD *a4)
{
  _DWORD *v4; // r13
  char *v6; // r14
  __int64 v8; // rdi
  unsigned int v9; // ebx
  size_t v10; // r12
  int v11; // edx
  _QWORD *v12; // rsi
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // r13
  unsigned int v16; // r8d
  __int64 ***v17; // rsi
  __int64 **v18; // rax
  char *v19; // r14
  unsigned int v20; // ebx
  int v21; // edx
  unsigned int v22; // esi
  unsigned int v23; // r12d
  unsigned int v24; // esi
  int v25; // r8d
  int v26; // r9d
  char *v27; // r14
  char *v28; // rdx
  char *v29; // rcx
  size_t v30; // rbx
  char *v31; // rax
  _QWORD *v32; // rax
  int v33; // r8d
  int v34; // r9d
  _QWORD *v35; // rbx
  _QWORD *v36; // rdx
  __int64 ***v37; // rax
  __int64 v38; // rdx
  __int64 *v39; // rbx
  __int64 **result; // rax
  __int64 *v41; // rax
  __int64 *v42; // [rsp+60h] [rbp-10h] BYREF
  __int64 **v43; // [rsp+68h] [rbp-8h]

  v4 = a4;
  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 3LL);
  }
  v8 = *(_QWORD *)(a1 + 64);
  v9 = a3 - (_DWORD)v6;
  LODWORD(v10) = 0;
  *v4 = 0;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 160));
  v43 = &v42;
  v42 = (__int64 *)&v42;
  v12 = KeyboardClassDequeueRead(v8);
  v14 = 0;
  if ( v12 )
  {
    v15 = v12[23];
    v10 = v9;
    v16 = *(_DWORD *)(v15 + 8);
    if ( v9 >= v16 )
      v10 = v16;
    *a4 += v10 / 0xC;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qqLLqq(WPP_GLOBAL_Control->DeviceExtension, v10 / 0xC, v16, 0);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqiL(WPP_GLOBAL_Control->DeviceExtension, (unsigned int)&WPP_RECORDER_INITIALIZED, v16, v14);
    memmove((void *)v12[3], v6, v10);
    v12[7] = v10;
    *((_DWORD *)v12 + 12) = 0;
    v17 = (__int64 ***)(v12 + 21);
    *(_DWORD *)(v15 + 8) = v10;
    v18 = v43;
    if ( *v43 != (__int64 *)&v42 )
LABEL_51:
      __fastfail(3u);
    v4 = a4;
    *v17 = &v42;
    v17[1] = v18;
    *v18 = (__int64 *)v17;
    v43 = (__int64 **)v17;
  }
  v19 = &v6[(unsigned int)v10];
  v20 = v9 - v10;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qL(WPP_GLOBAL_Control->DeviceExtension, v11, v13, 0);
  v21 = 0;
  if ( v20 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_qLL(WPP_GLOBAL_Control->DeviceExtension, 12 * *(_DWORD *)(v8 + 84), v13, 55);
      v21 = 0;
    }
    v22 = *(_DWORD *)(v8 + 140);
    v23 = v22;
    if ( v22 >= v20 )
      v23 = v20;
    v24 = *(_DWORD *)(v8 + 104) + v22 - *(_DWORD *)(v8 + 112);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qLL(WPP_GLOBAL_Control->DeviceExtension, 0, v13, 57);
    if ( v23 < v24 )
      v24 = v23;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qLqq(WPP_GLOBAL_Control->DeviceExtension, v21, v13, 58);
    memmove(*(void **)(v8 + 112), v19, v24);
    *(_QWORD *)(v8 + 112) += v24;
    v27 = &v19[v24];
    v28 = *(char **)(v8 + 104);
    v29 = *(char **)(v8 + 112);
    if ( v29 >= &v28[*(unsigned int *)(v8 + 140)] )
    {
      *(_QWORD *)(v8 + 112) = v28;
      v29 = v28;
    }
    v30 = v23 - v24;
    if ( v23 != v24 )
    {
      v31 = v29;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_qLqq(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)WPP_GLOBAL_Control, v25, 59);
        v31 = *(char **)(v8 + 112);
      }
      memmove(v31, v27, v30);
      *(_QWORD *)(v8 + 112) += v30;
    }
    *(_DWORD *)(v8 + 84) += v23 / 0xC;
    *v4 += v23 / 0xC;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qlqqd(WPP_GLOBAL_Control->DeviceExtension, v23 / 0xC, v25, v26);
  }
  while ( *(_DWORD *)(v8 + 84) )
  {
    v32 = KeyboardClassDequeueRead(v8);
    v35 = v32;
    if ( !v32 )
      break;
    *((_DWORD *)v32 + 12) = KeyboardClassReadCopyData(v8, v32, v33, v34);
    v36 = v43;
    v37 = (__int64 ***)(v35 + 21);
    if ( *v43 != (__int64 *)&v42 )
      goto LABEL_51;
    v35[22] = v43;
    *v37 = &v42;
    *v36 = v37;
    v43 = (__int64 **)(v35 + 21);
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v8 + 160));
  while ( 1 )
  {
    v39 = v42;
    result = &v42;
    if ( v42 == (__int64 *)&v42 )
      break;
    if ( (__int64 **)v42[1] != &v42 )
      goto LABEL_51;
    v41 = (__int64 *)*v42;
    if ( *(__int64 **)(*v42 + 8) != v42 )
      goto LABEL_51;
    v42 = (__int64 *)*v42;
    v41[1] = (__int64)&v42;
    IofCompleteRequest((PIRP)(v39 - 21), 6);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 32), v39 - 21, 0x20u);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v38) = 5;
    return (__int64 **)WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v38, 3LL);
  }
  return result;
}
