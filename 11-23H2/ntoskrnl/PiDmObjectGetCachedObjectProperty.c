/*
 * XREFs of PiDmObjectGetCachedObjectProperty @ 0x1406D6A0C
 * Callers:
 *     PiPnpRtlObjectActionCallback @ 0x1406D64E0 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectGetCachedCmProperty @ 0x1407892D0 (PiDmObjectGetCachedCmProperty.c)
 * Callees:
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1406D63C4 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectRelease @ 0x1406D6B98 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x1406D8150 (PiDmGetObject.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1407CC404 (PiDmObjectGetCachedObjectReference.c)
 */

__int64 __fastcall PiDmObjectGetCachedObjectProperty(
        signed int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        GUID *a7,
        unsigned int a8,
        unsigned int *a9)
{
  GUID *v11; // rbp
  int Object; // edi
  unsigned int v13; // r14d
  __int64 v14; // rbx
  __int64 v16; // rax
  __int64 v17; // r9
  PVOID v18; // rbx
  PVOID P[2]; // [rsp+40h] [rbp-28h] BYREF
  PVOID v20; // [rsp+80h] [rbp+18h] BYREF

  P[0] = 0LL;
  v20 = 0LL;
  v11 = a7;
  Object = -1073741802;
  if ( a7 )
  {
    v13 = a8;
    v11 = (GUID *)(-(__int64)(a8 != 0) & (unsigned __int64)a7);
  }
  else
  {
    v13 = 0;
  }
  if ( a1 < 7 && !a4 )
  {
    Object = PiDmGetObject((unsigned int)a1, a2, P);
    if ( Object >= 0 )
    {
      v14 = a5;
      if ( a1 != 3 || *(_DWORD *)(a5 + 16) != 2 )
        goto LABEL_7;
      v16 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1;
      if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1 )
        v16 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_Device_ContainerId.fmtid.Data4;
      if ( !v16
        && (int)PiDmObjectGetCachedObjectReference(3, a2, P[0], (unsigned int)&DEVPKEY_Device_InstanceId, (__int64)&v20) >= 0 )
      {
        v17 = v14;
        v18 = v20;
        Object = PiDmObjectGetCachedObjectPropertyData(
                   *((_DWORD *)v20 + 7),
                   *((_QWORD *)v20 + 2),
                   (ULONG_PTR)v20,
                   v17,
                   a6,
                   v11,
                   v13,
                   a9);
        PiDmObjectRelease(v18);
      }
      else
      {
LABEL_7:
        Object = PiDmObjectGetCachedObjectPropertyData(a1, a2, (ULONG_PTR)P[0], v14, a6, v11, v13, a9);
      }
      PiDmObjectRelease(P[0]);
    }
  }
  return (unsigned int)Object;
}
