/*
 * XREFs of IopWriteFile @ 0x1406B6DD0
 * Callers:
 *     NtWriteFile @ 0x1406B6A20 (NtWriteFile.c)
 *     IopIoRingDispatchWrite @ 0x140949C64 (IopIoRingDispatchWrite.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x14020A570 (MmIsDriverVerifying.c)
 *     IopValidateAndGetWriteParameters @ 0x140223D30 (IopValidateAndGetWriteParameters.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x140224220 (IopAllocateAndPopulateWriteIrp.c)
 *     IopReleaseFileObjectLock @ 0x1402314E0 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     IopSynchronousServiceTail @ 0x1406E3E90 (IopSynchronousServiceTail.c)
 *     VfFastIoCheckState @ 0x140ACB234 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140ACB30C (VfFastIoSnapState.c)
 */

__int64 __fastcall IopWriteFile(
        _QWORD *Object,
        void *a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        __int64 a6,
        int a7,
        struct _KTHREAD **a8,
        unsigned __int64 a9,
        char a10,
        __int64 a11,
        __int64 a12,
        int a13,
        __int64 a14)
{
  void *v15; // rsi
  _OWORD *v16; // r15
  __int64 v17; // r12
  unsigned int v18; // r13d
  __int64 result; // rax
  __int64 v20; // r9
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 (__fastcall *v23)(_QWORD *, __int64 *, _QWORD, __int64, _DWORD, __int64, __int128 *, __int64); // r14
  char v24; // di
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v26; // rcx
  unsigned __int64 v27; // rax
  PRKEVENT v28; // rcx
  int v29; // [rsp+20h] [rbp-F8h]
  int v30; // [rsp+28h] [rbp-F0h]
  __int128 v31; // [rsp+50h] [rbp-C8h] BYREF
  struct _KTHREAD *v32; // [rsp+60h] [rbp-B8h] BYREF
  __int16 v33; // [rsp+68h] [rbp-B0h]
  unsigned __int8 v34; // [rsp+6Ah] [rbp-AEh]
  int v35; // [rsp+6Bh] [rbp-ADh]
  char v36; // [rsp+6Fh] [rbp-A9h]
  _QWORD *v37; // [rsp+70h] [rbp-A8h]
  __int64 v38; // [rsp+78h] [rbp-A0h]
  PRKEVENT Event; // [rsp+80h] [rbp-98h]
  __int64 v40; // [rsp+88h] [rbp-90h]
  __int64 v41; // [rsp+90h] [rbp-88h]
  __int64 v42; // [rsp+98h] [rbp-80h]
  __int64 v43; // [rsp+A0h] [rbp-78h]
  int v44; // [rsp+A8h] [rbp-70h]
  int v45; // [rsp+ACh] [rbp-6Ch]
  __int64 v46; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v47; // [rsp+B8h] [rbp-60h]
  __int64 v48; // [rsp+C0h] [rbp-58h]
  __int64 v49; // [rsp+C8h] [rbp-50h]
  int v50; // [rsp+D0h] [rbp-48h]
  int v51; // [rsp+D4h] [rbp-44h]
  __int64 v52; // [rsp+D8h] [rbp-40h]
  __int64 v53; // [rsp+E0h] [rbp-38h]
  IRP *v54; // [rsp+130h] [rbp+18h] BYREF

  v35 = 0;
  v36 = 0;
  v45 = 0;
  v47 = 0LL;
  v51 = 0;
  v15 = 0LL;
  v54 = 0LL;
  v32 = 0LL;
  v33 = 0;
  v34 = 1;
  v37 = Object;
  v38 = 0LL;
  Event = 0LL;
  v40 = a3;
  v41 = a4;
  v16 = a5;
  v42 = (__int64)a5;
  v17 = a6;
  v43 = a6;
  v18 = a7;
  v44 = a7;
  v46 = 0LL;
  v48 = a11;
  v49 = a12;
  v50 = a13;
  v52 = a14;
  v53 = 0LL;
  result = IopValidateAndGetWriteParameters(&v32, a2, a8, a9, a10);
  if ( (int)result >= 0 )
  {
    if ( !HIBYTE(v33) || !Object[6] )
      goto LABEL_16;
    v21 = v38;
    v22 = *(_QWORD *)(*(_QWORD *)(v38 + 8) + 80LL);
    v31 = 0LL;
    v23 = *(__int64 (__fastcall **)(_QWORD *, __int64 *, _QWORD, __int64, _DWORD, __int64, __int128 *, __int64))(v22 + 24);
    if ( (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(*(struct _DRIVER_OBJECT **)(v38 + 8)) )
    {
      v15 = (void *)VfFastIoSnapState();
      v21 = v38;
    }
    LOBYTE(v20) = 1;
    v24 = v23(Object, &v46, v18, v20, v47, v17, &v31, v21);
    if ( v15 )
      VfFastIoCheckState(v15);
    if ( v24 && !(_DWORD)v31 )
    {
      CurrentThread = KeGetCurrentThread();
      ++CurrentThread->WriteOperationCount;
      __incgsdword(0x2EE0u);
      v26 = KeGetCurrentThread();
      v27 = DWORD2(v31);
      v26->WriteTransferCount += DWORD2(v31);
      __addgsqword(0x2EF0u, v27);
      *v16 = v31;
      v28 = Event;
      if ( Event )
      {
        if ( (Object[10] & 0x8000000) == 0 )
        {
          KeSetEvent(Event, 0, 0);
          v28 = Event;
        }
        ObfDereferenceObject(v28);
      }
      IopReleaseFileObjectLock((volatile __int32 *)Object);
      ObfDereferenceObject(Object);
      return (unsigned int)v31;
    }
    else
    {
LABEL_16:
      result = IopAllocateAndPopulateWriteIrp((__int64)&v32, &v54);
      if ( (int)result >= 0 )
      {
        LOBYTE(v30) = HIBYTE(v33);
        LOBYTE(v29) = v33;
        return IopSynchronousServiceTail(v38, v54, Object, v34, v29, v30, 1);
      }
    }
  }
  return result;
}
