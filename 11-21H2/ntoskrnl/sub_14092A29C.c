/*
 * XREFs of sub_14092A29C @ 0x14092A29C
 * Callers:
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 *     sub_1406EA7D0 @ 0x1406EA7D0 (sub_1406EA7D0.c)
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     sub_140257280 @ 0x140257280 (sub_140257280.c)
 *     sub_14025E1EC @ 0x14025E1EC (sub_14025E1EC.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     KeTestAlertThread @ 0x140299000 (KeTestAlertThread.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     PsGetServerSiloServiceSessionId @ 0x1402DF7B0 (PsGetServerSiloServiceSessionId.c)
 *     PsGetProcessServerSilo @ 0x140347680 (PsGetProcessServerSilo.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     AlpcGetMessageAttribute @ 0x14036A1D0 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x14036A210 (AlpcInitializeMessageAttribute.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x14041C8E0 (ZwAlpcSendWaitReceivePort.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MmGetSectionInformation @ 0x14066C980 (MmGetSectionInformation.c)
 *     sub_14066CFE4 @ 0x14066CFE4 (sub_14066CFE4.c)
 *     sub_1406EA7D0 @ 0x1406EA7D0 (sub_1406EA7D0.c)
 *     sub_140929F64 @ 0x140929F64 (sub_140929F64.c)
 *     sub_140929F90 @ 0x140929F90 (sub_140929F90.c)
 *     sub_14092A77C @ 0x14092A77C (sub_14092A77C.c)
 *     sub_14092AC20 @ 0x14092AC20 (sub_14092AC20.c)
 */

__int64 __fastcall sub_14092A29C(__int64 a1, int a2, __int64 a3)
{
  char v3; // r12
  PVOID v5; // rdi
  struct _KTHREAD *CurrentThread; // r13
  ULONG_PTR v7; // r14
  __int64 ProcessServerSilo; // rbx
  PVOID *v9; // rsi
  signed int v10; // ebx
  int ServerSiloServiceSessionId; // ebx
  LARGE_INTEGER *Timeout; // rax
  NTSTATUS v13; // eax
  PVOID v14; // rax
  __int64 v15; // rdx
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rcx
  __int16 v20; // ax
  char v21; // r12
  int v22; // ebx
  _DWORD *MessageAttribute; // rax
  char v24; // si
  NTSTATUS v25; // eax
  char v27; // [rsp+40h] [rbp-C0h]
  ULONG_PTR RequiredBufferSize; // [rsp+48h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B0h]
  int v30; // [rsp+58h] [rbp-A8h]
  LARGE_INTEGER v31; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+68h] [rbp-98h]
  _ALPC_MESSAGE_ATTRIBUTES Buffer[20]; // [rsp+70h] [rbp-90h] BYREF

  v3 = a2;
  v30 = a2;
  v32 = a1;
  memset(&Buffer[8], 0, 0x60uLL);
  v5 = 0LL;
  RequiredBufferSize = 0LL;
  CurrentThread = KeGetCurrentThread();
  v31.QuadPart = 0LL;
  v27 = 0;
  v7 = *((_QWORD *)CurrentThread + 68);
  ProcessServerSilo = PsGetProcessServerSilo(v7);
  v9 = (PVOID *)((char *)sub_140204738(ProcessServerSilo) + 968);
  memset(Buffer, 0, 0x40uLL);
  if ( (*(_DWORD *)(v7 + 2172) & 1) != 0 )
    return (unsigned int)-1073741637;
  MmGetSectionInformation(*(_QWORD *)(v7 + 1304), 1, (__int64)Buffer);
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(ProcessServerSilo);
  if ( (unsigned int)sub_140287F30(v7) != ServerSiloServiceSessionId
    && Buffer[4].AllocatedAttributes != 1
    && (v3 & 2) != 0 )
  {
    v27 = sub_14092AC20(v7);
  }
  v10 = sub_14092A77C();
  if ( v10 >= 0 )
  {
    if ( dword_140D05198 == -1 )
    {
      Timeout = 0LL;
    }
    else
    {
      Timeout = &v31;
      v31.QuadPart = -10000LL * dword_140D05198;
    }
    v13 = KeWaitForSingleObject(v9[3], Executive, 1, 0, Timeout);
    if ( v13 == 258 || !v9[1] )
    {
      v10 = -1073740973;
    }
    else if ( v13 == 257 || v13 == 192 )
    {
      v10 = -1073741749;
    }
    else
    {
      v10 = 0;
      Object = 0LL;
      --*((_WORD *)CurrentThread + 242);
      ExAcquirePushLockSharedEx((ULONG_PTR)v9, 0LL);
      v14 = v9[2];
      if ( (PVOID)v7 == v14 )
      {
        v10 = -1073741420;
      }
      else
      {
        v5 = v9[1];
        if ( v5 )
        {
          Object = v9[2];
          ObfReferenceObjectWithTag(v14, 0x50676244u);
          _InterlockedIncrement((volatile signed __int32 *)v5);
          v3 = v30;
        }
        else
        {
          v10 = -1073740973;
        }
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v9);
      sub_1402AFC00((ULONG_PTR)v9);
      sub_1402AC800((__int64)CurrentThread);
      if ( v10 >= 0 )
      {
        v15 = v32;
        *(_QWORD *)(a3 + 8) = 0LL;
        *(_QWORD *)(a3 + 16) = 0LL;
        *(_QWORD *)(a3 + 24) = 0LL;
        *(_QWORD *)(a3 + 32) = 0LL;
        *(_DWORD *)(a3 + 4) = 8;
        *(_WORD *)(a3 + 4) = -32761;
        *(_DWORD *)a3 = 17826024;
        *(_DWORD *)(a3 + 40) = 7;
        *(_DWORD *)(a3 + 44) = -2147418111;
        sub_14025E1EC((_OWORD *)(a3 + 48), v15);
        v16 = *(_OWORD *)&Buffer[2].AllocatedAttributes;
        *(_OWORD *)(a3 + 200) = *(_OWORD *)&Buffer[0].AllocatedAttributes;
        *(_DWORD *)(a3 + 264) = 0;
        v17 = *(_OWORD *)&Buffer[4].AllocatedAttributes;
        *(_OWORD *)(a3 + 216) = v16;
        v18 = *(_OWORD *)&Buffer[6].AllocatedAttributes;
        *(_OWORD *)(a3 + 232) = v17;
        *(_OWORD *)(a3 + 248) = v18;
        if ( (*(_BYTE *)(v7 + 2170) & 7) != 0 )
        {
          *(_DWORD *)(a3 + 264) = 1;
          v19 = 1LL;
        }
        else
        {
          v19 = 0LL;
        }
        if ( (*(_BYTE *)(v7 + 992) & 1) != 0 )
        {
          v19 = (unsigned int)v19 | 8;
          *(_DWORD *)(a3 + 264) = v19;
        }
        if ( *(_QWORD *)(v7 + 1408) )
        {
          v20 = *(_WORD *)(v7 + 2412);
          if ( v20 == 332 || v20 == 452 )
          {
            v19 = (unsigned int)v19 | 2;
            *(_DWORD *)(a3 + 264) = v19;
          }
        }
        if ( (v3 & 1) != 0 )
        {
          v19 = (unsigned int)v19 | 4;
          v21 = 1;
          *(_DWORD *)(a3 + 264) = v19;
        }
        else
        {
          v21 = 0;
        }
        LOBYTE(v19) = 1;
        v22 = sub_14066CFE4(v19, (__int64)Object, v7) ? 1055744 : 0x1FFFFF;
        AlpcInitializeMessageAttribute(0x10000000u, Buffer, 0xA0uLL, &RequiredBufferSize);
        Buffer[0].ValidAttributes = 0x10000000;
        MessageAttribute = AlpcGetMessageAttribute(Buffer, 0x10000000u);
        MessageAttribute[5] = v22;
        *MessageAttribute = 0;
        MessageAttribute[4] = 4;
        *((_QWORD *)MessageAttribute + 1) = -2LL;
        RequiredBufferSize = 272LL;
        KeTestAlertThread(0);
        if ( (*((_DWORD *)CurrentThread + 344) & 1) != 0 )
          goto LABEL_36;
        v25 = ZwAlpcSendWaitReceivePort(
                *((HANDLE *)v5 + 1),
                0x220000u,
                (PPORT_MESSAGE)a3,
                Buffer,
                (PPORT_MESSAGE)a3,
                &RequiredBufferSize,
                0LL,
                0LL);
        v10 = v25;
        if ( v25 < 0 )
        {
          if ( v25 == -1073741769 )
            sub_140929F90((__int64)CurrentThread, (ULONG_PTR)v9, (volatile signed __int32 *)v5);
          goto LABEL_37;
        }
        if ( v25 == 257 )
        {
LABEL_36:
          v10 = -1073741749;
        }
        else
        {
          if ( _bittest16((const signed __int16 *)(a3 + 4), 0xDu) )
            ZwAlpcSendWaitReceivePort(*((HANDLE *)v5 + 1), 0x10000u, (PPORT_MESSAGE)a3, 0LL, 0LL, 0LL, 0LL, 0LL);
          v10 = *(_DWORD *)(a3 + 44);
          if ( v10 >= 0 && !v21 && v10 == 65538 )
          {
            v24 = v27;
            if ( v27 )
            {
              sub_140257280(v7, 0LL, 1u);
              KeLeaveCriticalRegion();
              v24 = 0;
            }
            v10 = !sub_1406EA7D0(v32, 1, 1) ? 0xC0000144 : 0;
            goto LABEL_38;
          }
        }
LABEL_37:
        v24 = v27;
LABEL_38:
        ObfDereferenceObjectWithTag(Object, 0x50676244u);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
          sub_140929F64((HANDLE *)v5);
        goto LABEL_55;
      }
    }
  }
  v24 = v27;
LABEL_55:
  if ( v24 )
  {
    sub_140257280(v7, 0LL, 1u);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v10;
}
