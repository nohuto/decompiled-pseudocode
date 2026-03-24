/*
 * XREFs of MouseClassServiceCallback @ 0x1C0005190
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0002C00 (memmove.c)
 *     MouseClassDequeueRead @ 0x1C0004A4C (MouseClassDequeueRead.c)
 *     MouseClassReadCopyData @ 0x1C0004D78 (MouseClassReadCopyData.c)
 *     WPP_RECORDER_SF_ @ 0x1C0005CCC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0005EFC (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C0005FD0 (WPP_RECORDER_SF_qLL.c)
 *     WPP_RECORDER_SF_qLqq @ 0x1C00060C8 (WPP_RECORDER_SF_qLqq.c)
 *     WPP_RECORDER_SF_qlqqd @ 0x1C00062B4 (WPP_RECORDER_SF_qlqqd.c)
 *     WPP_RECORDER_SF_qqLLqq @ 0x1C0006770 (WPP_RECORDER_SF_qqLLqq.c)
 *     WPP_RECORDER_SF_qqiL @ 0x1C0006D48 (WPP_RECORDER_SF_qqiL.c)
 */

__int64 **__fastcall MouseClassServiceCallback(__int64 a1, char *a2, int a3, _DWORD *a4)
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
  unsigned __int64 v17; // rdx
  __int64 ***v18; // rsi
  __int64 **v19; // rax
  char *v20; // r14
  unsigned int v21; // ebx
  int v22; // edx
  unsigned int v23; // esi
  unsigned int v24; // r12d
  unsigned int v25; // esi
  int v26; // r8d
  int v27; // r9d
  char *v28; // r14
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  size_t v31; // rbx
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
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 144));
  v43 = &v42;
  v42 = (__int64 *)&v42;
  v12 = MouseClassDequeueRead(v8);
  v14 = 0;
  if ( v12 )
  {
    v15 = v12[23];
    v10 = v9;
    v16 = *(_DWORD *)(v15 + 8);
    if ( v9 >= v16 )
      v10 = v16;
    v17 = v10 / 0x18;
    *a4 += v10 / 0x18;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qqLLqq(WPP_GLOBAL_Control->DeviceExtension, v17, v16, 0);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqiL(WPP_GLOBAL_Control->DeviceExtension, v17, v16, v14);
    memmove((void *)v12[3], v6, v10);
    v12[7] = v10;
    *((_DWORD *)v12 + 12) = 0;
    v18 = (__int64 ***)(v12 + 21);
    *(_DWORD *)(v15 + 8) = v10;
    v19 = v43;
    if ( *v43 != (__int64 *)&v42 )
LABEL_51:
      __fastfail(3u);
    v4 = a4;
    *v18 = &v42;
    v18[1] = v19;
    *v19 = (__int64 *)v18;
    v43 = (__int64 **)v18;
  }
  v20 = &v6[(unsigned int)v10];
  v21 = v9 - v10;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qL(WPP_GLOBAL_Control->DeviceExtension, v11, v13, 0);
  v22 = 0;
  if ( v21 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_qLL(WPP_GLOBAL_Control->DeviceExtension, 24 * *(_DWORD *)(v8 + 84), v13, 54);
      v22 = 0;
    }
    v23 = *(_DWORD *)(v8 + 136);
    v24 = v23;
    if ( v23 >= v21 )
      v24 = v21;
    v25 = *(_DWORD *)(v8 + 104) + v23 - *(_DWORD *)(v8 + 112);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qLL(WPP_GLOBAL_Control->DeviceExtension, 0, v13, 56);
    if ( v24 < v25 )
      v25 = v24;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qLqq(WPP_GLOBAL_Control->DeviceExtension, v22, v13, 57);
    memmove(*(void **)(v8 + 112), v20, v25);
    *(_QWORD *)(v8 + 112) += v25;
    v28 = &v20[v25];
    v29 = *(_QWORD *)(v8 + 104);
    v30 = *(_QWORD *)(v8 + 112);
    if ( v30 >= v29 + (unsigned __int64)*(unsigned int *)(v8 + 136) )
    {
      *(_QWORD *)(v8 + 112) = v29;
      LODWORD(v30) = v29;
    }
    v31 = v24 - v25;
    if ( v24 != v25 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_qLqq(WPP_GLOBAL_Control->DeviceExtension, v30, v26, 58);
      memmove(*(void **)(v8 + 112), v28, v31);
      *(_QWORD *)(v8 + 112) += v31;
    }
    *(_DWORD *)(v8 + 84) += v24 / 0x18;
    *v4 += v24 / 0x18;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qlqqd(WPP_GLOBAL_Control->DeviceExtension, 0, v26, v27);
  }
  while ( *(_DWORD *)(v8 + 84) )
  {
    v32 = MouseClassDequeueRead(v8);
    v35 = v32;
    if ( !v32 )
      break;
    *((_DWORD *)v32 + 12) = MouseClassReadCopyData(v8, v32, v33, v34);
    v36 = v43;
    v37 = (__int64 ***)(v35 + 21);
    if ( *v43 != (__int64 *)&v42 )
      goto LABEL_51;
    v35[22] = v43;
    *v37 = &v42;
    *v36 = v37;
    v43 = (__int64 **)(v35 + 21);
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v8 + 144));
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
