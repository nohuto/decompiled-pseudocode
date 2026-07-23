/*
 * XREFs of PiDmEnumObjectsWithCallback @ 0x1407FB710
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1407FA238 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmGetObjectList @ 0x1407FC328 (PiDmGetObjectList.c)
 *     PiDmListInit @ 0x140839980 (PiDmListInit.c)
 *     PpDevCfgInit @ 0x140B3FC30 (PpDevCfgInit.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D750 (ExAcquireResourceSharedLite.c)
 *     RtlEnumerateGenericTableLikeADirectory @ 0x140371950 (RtlEnumerateGenericTableLikeADirectory.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PiDmObjectRelease @ 0x1406D6B98 (PiDmObjectRelease.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1406D823C (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectIsEnumerable @ 0x1407FB8CC (PiDmObjectIsEnumerable.c)
 */

__int64 __fastcall PiDmEnumObjectsWithCallback(int a1, __int64 (__fastcall *a2)(char *, __int64, _BYTE *), __int64 a3)
{
  int v6; // edi
  void *ObjectManagerForObjectType; // rax
  void *v8; // rsi
  const wchar_t *v9; // rax
  struct _KTHREAD *CurrentThread; // rax
  char **v11; // rax
  char *v12; // rbx
  struct _KTHREAD *v13; // rax
  char **v14; // rax
  _BYTE v16[4]; // [rsp+40h] [rbp-79h] BYREF
  ULONG DeleteCount; // [rsp+44h] [rbp-75h] BYREF
  PVOID P; // [rsp+48h] [rbp-71h] BYREF
  PVOID RestartKey[2]; // [rsp+50h] [rbp-69h] BYREF
  _QWORD v20[14]; // [rsp+60h] [rbp-59h] BYREF

  v6 = 0;
  memset(v20, 0, sizeof(v20));
  RestartKey[0] = 0LL;
  DeleteCount = 0;
  P = v20;
  v16[0] = 0;
  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(a1);
  LODWORD(v20[3]) = 0;
  v8 = ObjectManagerForObjectType;
  HIDWORD(v20[3]) = a1;
  v9 = L"\\\\?\\";
  if ( a1 != 3 )
    v9 = &word_140888010;
  v20[2] = v9;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite((PERESOURCE)v8, 1u);
  v11 = (char **)RtlEnumerateGenericTableLikeADirectory(
                   (PRTL_AVL_TABLE)v8 + 1,
                   0LL,
                   0LL,
                   0,
                   RestartKey,
                   &DeleteCount,
                   &P);
  if ( v11 )
  {
    v12 = *v11;
    _InterlockedIncrement((volatile signed __int32 *)*v11 + 2);
  }
  else
  {
    v12 = 0LL;
  }
  ExReleaseResourceLite((PERESOURCE)v8);
  KeLeaveCriticalRegion();
  while ( v12 )
  {
    if ( (unsigned __int8)PiDmObjectIsEnumerable((ULONG_PTR)v12) && (v6 = a2(v12, a3, v16), v6 < 0) || v16[0] )
    {
      PiDmObjectRelease(v12);
      return (unsigned int)v6;
    }
    P = v12;
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)v8, 1u);
    v14 = (char **)RtlEnumerateGenericTableLikeADirectory(
                     (PRTL_AVL_TABLE)v8 + 1,
                     0LL,
                     0LL,
                     1u,
                     RestartKey,
                     &DeleteCount,
                     &P);
    if ( v14 )
    {
      v12 = *v14;
      _InterlockedIncrement((volatile signed __int32 *)*v14 + 2);
    }
    else
    {
      v12 = 0LL;
    }
    ExReleaseResourceLite((PERESOURCE)v8);
    KeLeaveCriticalRegion();
    PiDmObjectRelease((char *)P);
  }
  return (unsigned int)v6;
}
