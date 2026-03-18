/*
 * XREFs of UnRegisterOperationRegionHandler @ 0x1C00B0ED4
 * Callers:
 *     ACPIIoctlUnRegisterOpRegionHandler @ 0x1C0058D6C (ACPIIoctlUnRegisterOpRegionHandler.c)
 *     ACPIEcRemoveOpRegionHandler @ 0x1C00AD814 (ACPIEcRemoveOpRegionHandler.c)
 *     DeRegisterOpRegionHandler @ 0x1C00B0E30 (DeRegisterOpRegionHandler.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B894 (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNameSpaceObject @ 0x1C0018260 (AMLIGetNameSpaceObject.c)
 *     AMLIRegEventHandler @ 0x1C00292D8 (AMLIRegEventHandler.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C002963C (EnableDisableDeviceTreeRegionSpace.c)
 *     memset @ 0x1C0030080 (memset.c)
 */

__int64 __fastcall UnRegisterOperationRegionHandler(__int64 *a1, __int64 *a2)
{
  __int64 *i; // rax
  __int64 v6; // rcx
  unsigned int *v7; // rdi
  char v8; // si
  __int64 v9; // rax
  unsigned int v10; // edi
  __int64 v11; // rdx
  __int64 **v12; // rcx
  _QWORD v13[10]; // [rsp+20h] [rbp-68h] BYREF
  __int64 *v14; // [rsp+98h] [rbp+10h] BYREF

  v14 = 0LL;
  ExAcquireFastMutex(&AcpiOpRegionLock);
  for ( i = (__int64 *)AcpiOpRegionHandlerList; ; i = (__int64 *)*i )
  {
    if ( i == &AcpiOpRegionHandlerList )
    {
      ExReleaseFastMutex(&AcpiOpRegionLock);
      return 3221225712LL;
    }
    if ( i == a2 )
      break;
  }
  if ( *((_BYTE *)a2 + 40) )
  {
    ExReleaseFastMutex(&AcpiOpRegionLock);
    return 3221225558LL;
  }
  else
  {
    v6 = a2[1];
    v7 = (unsigned int *)a2 + 9;
    v8 = 0;
    *((_BYTE *)a2 + 40) = 1;
    if ( ((__int64 *)v6 == &AcpiOpRegionHandlerList || *(_DWORD *)(v6 + 36) != *v7)
      && ((__int64 *)*a2 == &AcpiOpRegionHandlerList || *(_DWORD *)(*a2 + 36) != *v7) )
    {
      if ( *v7 < 0x1F )
      {
        AcpiRegisteredOpRegionMask &= ~(1 << *v7);
      }
      else if ( (__int64 *)AcpiOpRegionHandlerList == &AcpiOpRegionHandlerList
             || *(_DWORD *)(qword_1C0080D68 + 36) < 0x1Fu )
      {
        AcpiRegisteredOpRegionMask &= ~0x80000000;
      }
    }
    else
    {
      v8 = 1;
    }
    ExReleaseFastMutex(&AcpiOpRegionLock);
    if ( !v8 )
    {
      if ( *v7 - 8 <= 1 )
      {
        EnableDisableDeviceTreeRegionSpace(RootDeviceExtension, *v7, 0);
      }
      else if ( a1 && (int)AMLIGetNameSpaceObject("_REG", a1, &v14, 1) >= 0 )
      {
        memset(v13, 0, sizeof(v13));
        v9 = *v7;
        v13[7] = 0LL;
        WORD1(v13[0]) = 1;
        v13[2] = v9;
        WORD1(v13[5]) = 1;
        AMLIEvalNameSpaceObject(v14, 0LL, 2u, v13);
        AMLIDereferenceHandleEx((volatile signed __int32 *)v14);
      }
    }
    v10 = (unsigned int)AMLIRegEventHandler(*((_DWORD *)a2 + 8), *v7, 0LL, 0LL) != 0 ? 0xC0000001 : 0;
    ExAcquireFastMutex(&AcpiOpRegionLock);
    v11 = *a2;
    if ( *(__int64 **)(*a2 + 8) != a2 || (v12 = (__int64 **)a2[1], *v12 != a2) )
      __fastfail(3u);
    *v12 = (__int64 *)v11;
    *(_QWORD *)(v11 + 8) = v12;
    a2[1] = (__int64)a2;
    *a2 = (__int64)a2;
    ExReleaseFastMutex(&AcpiOpRegionLock);
    ExFreePoolWithTag(a2, 0);
    return v10;
  }
}
