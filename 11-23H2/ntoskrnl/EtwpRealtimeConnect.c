/*
 * XREFs of EtwpRealtimeConnect @ 0x1407F57C4
 * Callers:
 *     NtTraceControl @ 0x140725DD0 (NtTraceControl.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231280 (ExReleasePushLockEx.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwpCheckLoggerControlAccess @ 0x1406BDB3C (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x1406BE238 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1406BECFC (EtwpAcquireLoggerContextByLoggerId.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x140729580 (ProbeForWrite.c)
 *     ObCreateObjectEx @ 0x140730AA0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140735BC0 (ObInsertObjectEx.c)
 *     EtwpOpenConsumer @ 0x1407F5BF4 (EtwpOpenConsumer.c)
 *     EtwpSynchronizeWithLogger @ 0x1407F5C40 (EtwpSynchronizeWithLogger.c)
 */

__int64 __fastcall EtwpRealtimeConnect(__int64 a1)
{
  PVOID v2; // r15
  PVOID v3; // r12
  volatile void *v4; // rsi
  unsigned __int64 v5; // r13
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  _KPROCESS *Process; // rcx
  SIZE_T v10; // rdx
  __int16 v11; // ax
  char v12; // al
  unsigned int *v13; // rax
  unsigned int *v14; // rsi
  int v15; // ebx
  void *v16; // rcx
  void *v17; // rcx
  _WORD *v18; // rbx
  _QWORD *v19; // rdx
  _KPROCESS *v20; // rcx
  char v21; // cl
  char *v22; // r14
  int inserted; // edi
  __int16 v25; // ax
  char v26; // al
  PVOID *Object; // [rsp+20h] [rbp-F8h]
  PVOID v28; // [rsp+50h] [rbp-C8h] BYREF
  PVOID v29; // [rsp+58h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-B8h] BYREF
  volatile void *Address; // [rsp+68h] [rbp-B0h]
  unsigned __int64 v32; // [rsp+70h] [rbp-A8h]
  unsigned __int64 v33; // [rsp+78h] [rbp-A0h]
  volatile void *v34; // [rsp+80h] [rbp-98h]
  unsigned __int64 v35; // [rsp+88h] [rbp-90h]
  __int64 v36; // [rsp+90h] [rbp-88h]
  volatile void *v37; // [rsp+98h] [rbp-80h]
  __int64 v38; // [rsp+A0h] [rbp-78h] BYREF
  _DWORD v39[2]; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v40; // [rsp+B0h] [rbp-68h]
  __int64 v41; // [rsp+B8h] [rbp-60h]
  int v42; // [rsp+C0h] [rbp-58h]
  int v43; // [rsp+C4h] [rbp-54h]
  __int128 v44; // [rsp+C8h] [rbp-50h]
  unsigned int v45; // [rsp+120h] [rbp+8h]
  unsigned int v46; // [rsp+128h] [rbp+10h]
  PVOID v47; // [rsp+138h] [rbp+20h] BYREF

  v38 = 0LL;
  v39[1] = 0;
  v43 = 0;
  v47 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  v45 = *(_DWORD *)a1;
  Handle = 0LL;
  v37 = *(volatile void **)(a1 + 16);
  Address = *(volatile void **)(a1 + 8);
  v46 = *(_DWORD *)(a1 + 4);
  v33 = *(_QWORD *)(a1 + 48);
  v4 = *(volatile void **)(a1 + 40);
  v34 = v4;
  v5 = *(_QWORD *)(a1 + 56);
  v35 = v5;
  v32 = *(_QWORD *)(a1 + 64);
  ProbeForWrite(v37, (((v46 >> 12) + 31) >> 3) & 0x1FFFFFFC, 4u);
  ProbeForWrite(Address, v46, 4u);
  v6 = v33;
  if ( v33 >= 0x7FFFFFFF0000LL )
    v6 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v6 = *(_DWORD *)v6;
  v7 = v5;
  if ( v5 >= 0x7FFFFFFF0000LL )
    v7 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v7 = *(_DWORD *)v7;
  v8 = v32;
  if ( v32 >= 0x7FFFFFFF0000LL )
    v8 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v8 = *(_DWORD *)v8;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !Process[1].Affinity.StaticBitmap[30]
    || ((v11 = WORD2(Process[2].Affinity.StaticBitmap[20]), v11 == 332) || v11 == 452 ? (v12 = 1) : (v12 = 0),
        v10 = 4LL,
        !v12) )
  {
    v10 = 8LL;
  }
  ProbeForWrite(v4, v10, 4u);
  v36 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  v13 = EtwpAcquireLoggerContextByLoggerId(v36, v45, 1);
  v14 = v13;
  if ( !v13 )
    return 3221225485LL;
  if ( (v13[3] & 0x100) != 0 )
  {
    v15 = EtwpCheckLoggerControlAccess(0x400u, (__int64)v13);
    if ( v15 >= 0 )
    {
      v15 = EtwpOpenConsumer(&Handle);
      if ( v15 >= 0 )
      {
        v16 = *(void **)(a1 + 24);
        v28 = 0LL;
        v15 = ObReferenceObjectByHandle(v16, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v28, 0LL);
        v3 = v28;
        if ( v15 >= 0 )
        {
          v17 = *(void **)(a1 + 32);
          v29 = 0LL;
          v15 = ObReferenceObjectByHandle(v17, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v29, 0LL);
          v2 = v29;
          if ( v15 >= 0 )
          {
            v39[0] = 48;
            v40 = 0LL;
            v42 = 64;
            v41 = 0LL;
            v44 = 0LL;
            v15 = ObCreateObjectEx(
                    0,
                    EtwpRealTimeConnectionObjectType,
                    (__int64)v39,
                    1,
                    (__int64)Object,
                    160,
                    0,
                    0,
                    &v47,
                    0LL);
            if ( v15 >= 0 )
            {
              v18 = v47;
              memset(v47, 0, 0xA0uLL);
              v18[44] = v45;
              *((_QWORD *)v18 + 2) = Handle;
              v19 = v47;
              *((_QWORD *)v47 + 3) = KeGetCurrentThread()->ApcState.Process;
              v19[6] = v28;
              v19[7] = v29;
              v19[8] = v33;
              v19[9] = v34;
              v19[14] = Address;
              *((_DWORD *)v19 + 30) = v46;
              v19[17] = v35;
              v19[18] = v32;
              v19[19] = v36;
              *((_DWORD *)v19 + 24) = v46 >> 12;
              v19[13] = v37;
              v20 = KeGetCurrentThread()->ApcState.Process;
              if ( v20[1].Affinity.StaticBitmap[30]
                && ((v25 = WORD2(v20[2].Affinity.StaticBitmap[20]), v25 == 332) || v25 == 452 ? (v26 = 1) : (v26 = 0),
                    v26) )
              {
                v21 = 16;
              }
              else
              {
                v21 = 0;
              }
              v22 = (char *)v47;
              *((_BYTE *)v47 + 90) = v21 | *((_BYTE *)v47 + 90) & 0xEF;
              *((_QWORD *)v22 + 5) = a1;
              inserted = ObInsertObjectEx(v22, 0LL, 1024, 1, 0, (PVOID *)&v38, (_QWORD *)(a1 + 72));
              if ( inserted >= 0 )
              {
                ExAcquirePushLockExclusiveEx((ULONG_PTR)(v14 + 172), 0LL);
                *((_QWORD *)v14 + 44) = v22;
                ExReleasePushLockEx((__int64 *)v14 + 86, 0LL);
                EtwpSynchronizeWithLogger(v14, 32LL);
              }
              EtwpReleaseLoggerContext(v14, 1);
              return (unsigned int)inserted;
            }
          }
        }
      }
    }
  }
  else
  {
    v15 = -1073741811;
  }
  EtwpReleaseLoggerContext(v14, 1);
  if ( Handle )
    ZwClose(Handle);
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( v2 )
    ObfDereferenceObject(v2);
  return (unsigned int)v15;
}
