/*
 * XREFs of XilCoreDeviceSlot_AllocateResources @ 0x1C00164C4
 * Callers:
 *     XilDeviceSlot_PrepareHardware @ 0x1C0016478 (XilDeviceSlot_PrepareHardware.c)
 * Callees:
 *     XilCoreCommonBuffer_AcquireBuffers @ 0x1C0009E10 (XilCoreCommonBuffer_AcquireBuffers.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A588 (WPP_RECORDER_SF_.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C000FA9C (CommonBuffer_AcquireBuffer.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_i @ 0x1C00156C4 (WPP_RECORDER_SF_i.c)
 *     CommonBuffer_QueueWorkItem @ 0x1C0018AB8 (CommonBuffer_QueueWorkItem.c)
 *     XilCoreDeviceSlot_FreeResources @ 0x1C0050CC8 (XilCoreDeviceSlot_FreeResources.c)
 */

__int64 __fastcall XilCoreDeviceSlot_AllocateResources(__int64 a1)
{
  _QWORD *v1; // rsi
  __int64 v3; // rdx
  void *v4; // rbp
  __int64 v5; // r14
  __int64 v6; // rax
  int v7; // edx
  int v8; // edx
  __int64 v9; // rax
  unsigned int v10; // edx
  int v11; // edx
  int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // rdx
  _QWORD *v15; // r9
  __int64 v16; // r10
  int v17; // eax
  __int64 Pool2; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  int v22; // r9d
  char v23; // [rsp+60h] [rbp+8h] BYREF

  v1 = (_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  v4 = *(void **)(v3 + 120);
  v5 = *(_QWORD *)(v3 + 88);
  *(_QWORD *)(a1 + 48) = a1 + 40;
  *(_QWORD *)(a1 + 40) = a1 + 40;
  v6 = CommonBuffer_AcquireBuffer(v4, 4096, a1, 829713491);
  *(_QWORD *)(a1 + 24) = v6;
  if ( !v6 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_25;
    v22 = 13;
LABEL_24:
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v7,
      10,
      v22,
      (__int64)&WPP_cb7a5c278baa3da630509d7564b04261_Traceguids);
    goto LABEL_25;
  }
  v8 = *(_DWORD *)(v5 + 92);
  *(_DWORD *)(a1 + 20) = v8;
  if ( !v8 )
    goto LABEL_11;
  v9 = CommonBuffer_AcquireBuffer(v4, 8 * v8, a1, 846490707);
  *(_QWORD *)(a1 + 32) = v9;
  if ( !v9 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_25;
    v22 = 14;
    goto LABEL_24;
  }
  v10 = *(_DWORD *)(a1 + 20);
  v23 = 0;
  v12 = XilCoreCommonBuffer_AcquireBuffers((__int64)v4 + 88, v10, 0x1000u, (int)v1, a1, 863267923, &v23);
  if ( v23 )
    CommonBuffer_QueueWorkItem(v4);
  if ( v12 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v11,
        10,
        15,
        (__int64)&WPP_cb7a5c278baa3da630509d7564b04261_Traceguids,
        v12);
    }
    goto LABEL_26;
  }
  v13 = *(_QWORD *)(a1 + 32);
  v14 = 0LL;
  v15 = (_QWORD *)*v1;
  v16 = *(_QWORD *)(v13 + 16);
  if ( *(_DWORD *)(a1 + 20) )
  {
    do
    {
      *(_QWORD *)(v16 + 8 * v14) = v15[3];
      v14 = (unsigned int)(v14 + 1);
      v15 = (_QWORD *)*v15;
    }
    while ( (unsigned int)v14 < *(_DWORD *)(a1 + 20) );
    v13 = *(_QWORD *)(a1 + 32);
  }
  **(_QWORD **)(*(_QWORD *)(a1 + 24) + 16LL) = *(_QWORD *)(v13 + 24);
LABEL_11:
  v17 = (unsigned __int8)*(_DWORD *)(v5 + 80);
  *(_DWORD *)(a1 + 16) = v17;
  Pool2 = ExAllocatePool2(64LL, 8LL * (unsigned int)(v17 + 1), 1229146200LL);
  *(_QWORD *)(a1 + 56) = Pool2;
  if ( !Pool2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = 16;
      goto LABEL_24;
    }
LABEL_25:
    v12 = -1073741670;
LABEL_26:
    XilCoreDeviceSlot_FreeResources(a1);
    return (unsigned int)v12;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = *(_QWORD *)(a1 + 24);
    v20 = *(_QWORD *)(v19 + 16);
    LOBYTE(v19) = 4;
    WPP_RECORDER_SF_i(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 72LL),
      v19,
      10,
      17,
      (__int64)&WPP_cb7a5c278baa3da630509d7564b04261_Traceguids,
      v20);
  }
  return 0;
}
