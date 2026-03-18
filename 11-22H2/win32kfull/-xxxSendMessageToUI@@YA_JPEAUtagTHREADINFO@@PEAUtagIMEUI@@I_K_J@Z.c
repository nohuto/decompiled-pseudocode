/*
 * XREFs of ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01B84B4
 * Callers:
 *     ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x1C01B86E0 (-xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     LockW32Thread @ 0x1C0061F84 (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0062180 (PopAndFreeW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01271B0 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxSendMessageToUI(PRKPROCESS **a1, struct tagIMEUI *a2, __int64 a3, __int64 a4)
{
  int v7; // ebx
  struct tagIMEUI *v8; // rcx
  volatile signed __int32 *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int64 *BugCheckParameter2; // [rsp+50h] [rbp-78h]
  __int128 v15; // [rsp+70h] [rbp-58h] BYREF
  __int64 v16; // [rsp+80h] [rbp-48h]
  __int128 v17; // [rsp+88h] [rbp-40h] BYREF
  __int64 v18; // [rsp+98h] [rbp-30h]
  __int64 v20; // [rsp+F0h] [rbp+28h]

  v20 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v7 = 0;
  if ( a1 != (PRKPROCESS **)gptiCurrent )
  {
    v7 = 1;
    LockW32Thread((__int64)a1, &v15);
    KeAttachProcess(*a1[53]);
  }
  v8 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v8 = (struct tagIMEUI *)MmUserProbeAddress;
  BugCheckParameter2 = (unsigned __int64 *)HMValidateHandleNoSecure(*((_QWORD *)v8 + 4), 1);
  if ( BugCheckParameter2 )
  {
    v9 = (volatile signed __int32 *)((char *)a2 + 40);
    _InterlockedIncrement(v9);
    if ( v7 )
      KeDetachProcess();
    ThreadLockAlways(BugCheckParameter2, &v17);
    _InterlockedIncrement(&glSendMessage);
    v20 = xxxSendTransformableMessageTimeout(BugCheckParameter2, 0x282u, a4, 0LL, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v11, v10, v12);
    if ( v7 )
    {
      if ( ((_DWORD)a1[61] & 1) != 0 )
      {
LABEL_14:
        PopAndFreeW32ThreadLock((__int64)&v15);
        return v20;
      }
      KeAttachProcess(*a1[53]);
    }
    _InterlockedDecrement(v9);
  }
  if ( v7 )
  {
    KeDetachProcess();
    goto LABEL_14;
  }
  return v20;
}
