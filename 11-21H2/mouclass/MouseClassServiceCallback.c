/*
 * XREFs of MouseClassServiceCallback @ 0x1C0001AC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqiL @ 0x1C0001D80 (WPP_RECORDER_SF_qqiL.c)
 *     memmove @ 0x1C0002F40 (memmove.c)
 *     MouseClassDequeueRead @ 0x1C0004C30 (MouseClassDequeueRead.c)
 *     MouseClassReadCopyData @ 0x1C0004F58 (MouseClassReadCopyData.c)
 *     WPP_RECORDER_SF_ @ 0x1C00059CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0005BFC (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C0005CD0 (WPP_RECORDER_SF_qLL.c)
 *     WPP_RECORDER_SF_qLqq @ 0x1C0005DC8 (WPP_RECORDER_SF_qLqq.c)
 *     WPP_RECORDER_SF_qlqqd @ 0x1C0005FB4 (WPP_RECORDER_SF_qlqqd.c)
 *     WPP_RECORDER_SF_qqLLqq @ 0x1C0006350 (WPP_RECORDER_SF_qqLLqq.c)
 */

__int64 __fastcall MouseClassServiceCallback(__int64 a1, char *a2, int a3, _DWORD *a4)
{
  _DWORD *v4; // r15
  char *v6; // r14
  __int64 v8; // rbp
  unsigned int v9; // esi
  unsigned int v10; // edi
  int v11; // r8d
  _QWORD **v12; // rdx
  _QWORD *v13; // rbx
  _QWORD *v14; // rcx
  int v15; // r9d
  _QWORD *v16; // rax
  unsigned int v17; // r8d
  __int64 *v18; // rbx
  __int64 *v19; // rax
  char *v20; // r14
  unsigned int v21; // edi
  __int64 v22; // rdx
  __int64 result; // rax
  __int64 v24; // rcx
  void *v25; // rbx
  unsigned int v26; // esi
  unsigned int v27; // ebx
  unsigned int v28; // esi
  int v29; // r8d
  int v30; // r9d
  char *v31; // r14
  char *v32; // rdx
  char *v33; // rcx
  size_t v34; // rbx
  char *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 *v38; // rcx
  __int64 **v39; // rax
  __int64 v40; // [rsp+60h] [rbp-48h] BYREF
  __int64 *v41; // [rsp+68h] [rbp-40h]
  __int64 v42; // [rsp+B0h] [rbp+8h]
  unsigned int v44; // [rsp+C8h] [rbp+20h]

  v4 = a4;
  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 3LL);
  }
  v8 = *(_QWORD *)(a1 + 64);
  v9 = 0;
  v10 = a3 - (_DWORD)v6;
  *v4 = 0;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 144));
  v41 = &v40;
  v12 = (_QWORD **)(v8 + 152);
  v40 = (__int64)&v40;
LABEL_5:
  v13 = 0LL;
  while ( 1 )
  {
    v14 = *v12;
    v15 = -1431655765;
    if ( *v12 == v12 )
      break;
    if ( (_QWORD **)v14[1] != v12 )
      goto LABEL_63;
    v16 = (_QWORD *)*v14;
    if ( *(_QWORD **)(*v14 + 8LL) != v14 )
      goto LABEL_63;
    *v12 = v16;
    v13 = v14 - 21;
    v16[1] = v12;
    if ( !_InterlockedExchange64(v14 - 8, 0LL) )
    {
      v14[1] = v14;
      *v14 = v14;
      goto LABEL_5;
    }
    if ( v14 != (_QWORD *)168 )
      goto LABEL_11;
  }
  if ( v13 )
  {
LABEL_11:
    v42 = v13[23];
    v17 = *(_DWORD *)(v42 + 8);
    v9 = v17;
    if ( v10 < v17 )
      v9 = v10;
    *a4 += v9 / 0x18;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qqLLqq(WPP_GLOBAL_Control->DeviceExtension, v9 / 0x18, v17, -1431655765);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqiL(WPP_GLOBAL_Control->DeviceExtension, (unsigned int)&WPP_RECORDER_INITIALIZED, v17, v15);
    memmove((void *)v13[3], v6, v9);
    *((_DWORD *)v13 + 12) = 0;
    v13[7] = v9;
    v18 = v13 + 21;
    *(_DWORD *)(v42 + 8) = v9;
    v19 = v41;
    if ( (__int64 *)*v41 != &v40 )
LABEL_63:
      __fastfail(3u);
    v4 = a4;
    *v18 = (__int64)&v40;
    v18[1] = (__int64)v19;
    *v19 = (__int64)v18;
    v41 = v18;
  }
  v20 = &v6[v9];
  v21 = v10 - v9;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qL(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v12, v11, v15);
  if ( v21 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qLL(WPP_GLOBAL_Control->DeviceExtension, 24 * *(_DWORD *)(v8 + 84), v11, 54);
    v26 = *(_DWORD *)(v8 + 136);
    v27 = v26;
    if ( v26 >= v21 )
      v27 = v21;
    v28 = *(_DWORD *)(v8 + 104) + v26 - *(_DWORD *)(v8 + 112);
    v44 = v27;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qLL(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v12, v11, 56);
    if ( v27 < v28 )
      v28 = v27;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qLqq(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v12, v11, 57);
    memmove(*(void **)(v8 + 112), v20, v28);
    *(_QWORD *)(v8 + 112) += v28;
    v31 = &v20[v28];
    v32 = *(char **)(v8 + 104);
    v33 = *(char **)(v8 + 112);
    if ( v33 >= &v32[*(unsigned int *)(v8 + 136)] )
    {
      *(_QWORD *)(v8 + 112) = v32;
      v33 = v32;
    }
    v34 = v27 - v28;
    if ( v44 != v28 )
    {
      v35 = v33;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_qLqq(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)WPP_GLOBAL_Control, v29, 58);
        v35 = *(char **)(v8 + 112);
      }
      memmove(v35, v31, v34);
      *(_QWORD *)(v8 + 112) += v34;
    }
    *(_DWORD *)(v8 + 84) += v44 / 0x18;
    *v4 += v44 / 0x18;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qlqqd(WPP_GLOBAL_Control->DeviceExtension, v44 / 0x18, v29, v30);
  }
  for ( ; *(_DWORD *)(v8 + 84); v41 = (__int64 *)(v37 + 168) )
  {
    v36 = MouseClassDequeueRead(v8);
    v37 = v36;
    if ( !v36 )
      break;
    *(_DWORD *)(v36 + 48) = MouseClassReadCopyData(v8, v36);
    v38 = v41;
    v39 = (__int64 **)(v37 + 168);
    if ( (__int64 *)*v41 != &v40 )
      goto LABEL_63;
    *(_QWORD *)(v37 + 176) = v41;
    *v39 = &v40;
    *v38 = (__int64)v39;
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v8 + 144));
  while ( 1 )
  {
    result = v40;
    if ( (__int64 *)v40 == &v40 )
      break;
    if ( *(__int64 **)(v40 + 8) != &v40 )
      goto LABEL_63;
    v24 = *(_QWORD *)v40;
    if ( *(_QWORD *)(*(_QWORD *)v40 + 8LL) != v40 )
      goto LABEL_63;
    v40 = *(_QWORD *)v40;
    *(_QWORD *)(v24 + 8) = &v40;
    v25 = (void *)(result - 168);
    IofCompleteRequest((PIRP)(result - 168), 6);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 32), v25, 0x20u);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v22) = 5;
    return WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v22, 3LL);
  }
  return result;
}
