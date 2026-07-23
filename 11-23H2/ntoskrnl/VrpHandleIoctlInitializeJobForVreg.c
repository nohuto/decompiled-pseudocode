/*
 * XREFs of VrpHandleIoctlInitializeJobForVreg @ 0x14077A258
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x14077B270 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x140208E68 (RtlUnicodeStringCopy.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     PsGetJobSilo @ 0x14031CA70 (PsGetJobSilo.c)
 *     PsIsThreadInSilo @ 0x14031CB28 (PsIsThreadInSilo.c)
 *     memset @ 0x140435E00 (memset.c)
 *     VrpFreeKeyContext @ 0x14068EC34 (VrpFreeKeyContext.c)
 *     VrpAllocateKeyContext @ 0x14068EECC (VrpAllocateKeyContext.c)
 *     CmSetCallbackObjectContext @ 0x14068F0A0 (CmSetCallbackObjectContext.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6330 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCreateObjectEx @ 0x140730AA0 (ObCreateObjectEx.c)
 *     PspStorageMakeSlotReadOnly @ 0x14077A1A8 (PspStorageMakeSlotReadOnly.c)
 *     CmGetRootKeyObjectForSilo @ 0x14077A5C0 (CmGetRootKeyObjectForSilo.c)
 *     PsInsertSiloContext @ 0x14077CBD0 (PsInsertSiloContext.c)
 *     CmInitSiloNamespace @ 0x14077CFB8 (CmInitSiloNamespace.c)
 *     VrpIncrementSiloCount @ 0x14077D01C (VrpIncrementSiloCount.c)
 *     PsRemoveSiloContext @ 0x1409AC8D0 (PsRemoveSiloContext.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 *     ExAllocatePoolWithTag @ 0x140AAEC80 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VrpHandleIoctlInitializeJobForVreg(
        ULONG_PTR *a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        __int64 a5,
        PVOID Object)
{
  _QWORD *v7; // rdi
  UNICODE_STRING *v8; // rsi
  void *RootKeyObjectForSilo; // r15
  __int64 v10; // r14
  int JobSilo; // ebx
  PVOID PoolWithTag; // rax
  PVOID v13; // rbx
  void *v14; // rcx
  char IsThreadInSilo; // al
  PVOID v16; // rcx
  __int64 KeyContext; // rax
  __int128 v18; // xmm0
  __int64 Pool2; // rax
  __int64 Tag; // [rsp+20h] [rbp-40h]
  int v23; // [rsp+A8h] [rbp+48h]
  PVOID v24; // [rsp+B8h] [rbp+58h] BYREF

  Object = 0LL;
  v7 = 0LL;
  v24 = 0LL;
  v8 = 0LL;
  v23 = 0;
  RootKeyObjectForSilo = 0LL;
  a5 = 0LL;
  v10 = 0LL;
  if ( a2 < 8 )
    goto LABEL_2;
  JobSilo = ObCreateObjectEx(0, (_DWORD *)VrpJobContextType, 0LL, 1, Tag, 96, 0, 0, &v24, 0LL);
  if ( JobSilo < 0 )
  {
    v7 = v24;
  }
  else
  {
    v7 = v24;
    memset(v24, 0, 0x60uLL);
    v7[2] = 0LL;
    *((_OWORD *)v7 + 2) = 0LL;
    *((_OWORD *)v7 + 3) = 0LL;
    *((_OWORD *)v7 + 4) = 0LL;
    v7[4] = 0LL;
    v7[8] = 16LL;
    v7[6] = 0LL;
    v7[7] = 0LL;
    v7[9] = 0LL;
    v7[5] = 8LL;
    if ( !is_mul_ok(0LL, 8uLL) )
    {
      JobSilo = -1073741675;
LABEL_11:
      v14 = (void *)v7[9];
      if ( v14 )
        ExFreePoolWithTag(v14, 0x72615452u);
      *((_OWORD *)v7 + 2) = 0LL;
      *((_OWORD *)v7 + 3) = 0LL;
      *((_OWORD *)v7 + 4) = 0LL;
      goto LABEL_27;
    }
    if ( !is_mul_ok(0x20uLL, 8uLL) )
    {
      JobSilo = -1073741675;
      goto LABEL_11;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x72615452u);
    v13 = PoolWithTag;
    if ( !PoolWithTag )
    {
      JobSilo = -1073741801;
      goto LABEL_11;
    }
    memset(PoolWithTag, 0, 0x100uLL);
    v7[9] = v13;
    v7[7] = 32LL;
    JobSilo = VrpIncrementSiloCount();
    if ( JobSilo >= 0 )
    {
      *((_DWORD *)v7 + 22) = 1;
      JobSilo = ObpReferenceObjectByHandleWithTag(*a1, 6, (__int64)PsJobType, a3, 0x52566D43u, &Object, 0LL, 0LL);
      if ( JobSilo >= 0 )
      {
        JobSilo = PsGetJobSilo((__int64)Object);
        if ( JobSilo < 0 )
        {
          v10 = a5;
        }
        else
        {
          v10 = a5;
          IsThreadInSilo = PsIsThreadInSilo((__int64)KeGetCurrentThread(), a5);
          v7 = v24;
          if ( IsThreadInSilo )
          {
LABEL_2:
            JobSilo = -1073741811;
            goto LABEL_29;
          }
          v16 = v24;
          *(_OWORD *)v24 = *(_OWORD *)(v10 + 1456);
          KeyContext = VrpAllocateKeyContext(v16);
          v8 = (UNICODE_STRING *)KeyContext;
          if ( !KeyContext
            || (v18 = *(_OWORD *)(v10 + 1456),
                *(_WORD *)(KeyContext + 32) = 1,
                *(_OWORD *)KeyContext = v18,
                Pool2 = ExAllocatePool2(256LL, CmRegistryRootName.Length, 1734693462LL),
                (v8[1].Buffer = (wchar_t *)Pool2) == 0LL) )
          {
            JobSilo = -1073741670;
            goto LABEL_29;
          }
          v8[1].Length = 0;
          v8[1].MaximumLength = CmRegistryRootName.Length;
          RtlUnicodeStringCopy(v8 + 1, &CmRegistryRootName);
          JobSilo = CmInitSiloNamespace(v10);
          if ( JobSilo >= 0 )
          {
            JobSilo = PsInsertSiloContext(v10, (unsigned int)VrpSiloContextSlot, v7);
            if ( JobSilo >= 0 )
            {
              v23 = 1;
              RootKeyObjectForSilo = (void *)CmGetRootKeyObjectForSilo(v10);
              JobSilo = CmSetCallbackObjectContext(RootKeyObjectForSilo, &VrpCallbackCookie, v8, 0LL);
              if ( JobSilo >= 0 )
              {
                v8 = 0LL;
                PspStorageMakeSlotReadOnly(*(_QWORD *)(v10 + 1520), (unsigned int)VrpSiloContextSlot);
                JobSilo = 0;
                goto LABEL_29;
              }
            }
          }
        }
      }
    }
  }
LABEL_27:
  if ( v23 )
    PsRemoveSiloContext(v10, (unsigned int)VrpSiloContextSlot, 0LL);
LABEL_29:
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x67655256u);
  if ( RootKeyObjectForSilo )
    ObfDereferenceObject(RootKeyObjectForSilo);
  if ( v8 )
    VrpFreeKeyContext((PVOID *)v8);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
