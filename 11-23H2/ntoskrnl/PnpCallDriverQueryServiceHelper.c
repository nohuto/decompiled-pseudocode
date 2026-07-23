/*
 * XREFs of PnpCallDriverQueryServiceHelper @ 0x14068C158
 * Callers:
 *     PipCallDriverAddDevice @ 0x1406C8264 (PipCallDriverAddDevice.c)
 * Callees:
 *     RtlULongSub @ 0x140369178 (RtlULongSub.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14068C35C (PipCallDriverAddDeviceQueryRoutine.c)
 *     _CmGetInstallerClassRegProp @ 0x14069B694 (_CmGetInstallerClassRegProp.c)
 *     _CmGetDeviceRegProp @ 0x1406CD48C (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x1406D0220 (_PnpGetObjectProperty.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpCallDriverQueryServiceHelper(
        PVOID *a1,
        ULONG *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        int a8,
        char a9,
        __int64 a10)
{
  char v10; // r15
  int v11; // edi
  int v12; // esi
  ULONG v15; // ecx
  int v17; // r13d
  PVOID v18; // r8
  int ObjectProperty; // eax
  int v20; // ecx
  int v22; // r10d
  ULONG v23; // r9d
  _WORD *v24; // rbx
  char v25; // si
  int v26; // r14d
  __int64 v27; // rdi
  unsigned int v28; // edi
  int v29; // edx
  __int64 v30; // rdx
  __int64 Pool2; // rax
  int InstallerClassRegProp; // eax
  int v33; // [rsp+60h] [rbp-10h] BYREF
  _DWORD v34[3]; // [rsp+64h] [rbp-Ch] BYREF
  ULONG ulMinuend; // [rsp+C8h] [rbp+58h] BYREF

  v10 = a7;
  v11 = a6;
  v12 = a5;
  v33 = 0;
  v15 = *a2;
  ulMinuend = *a2;
  v17 = 0;
  v18 = *a1;
  v34[0] = 0;
  if ( a4 )
  {
    v17 = (a7 != 0) + 1;
    ObjectProperty = PnpGetObjectProperty(
                       PiPnpRtlCtx,
                       a5,
                       v17,
                       a6,
                       0LL,
                       a4,
                       (__int64)v34,
                       (__int64)v18,
                       v15,
                       (__int64)&ulMinuend,
                       0);
  }
  else if ( a7 )
  {
    ObjectProperty = CmGetInstallerClassRegProp(
                       PiPnpRtlCtx,
                       a5,
                       a6,
                       a3,
                       (__int64)&v33,
                       (__int64)v18,
                       (__int64)&ulMinuend);
  }
  else
  {
    ObjectProperty = CmGetDeviceRegProp(PiPnpRtlCtx, a5, a6, a3, (__int64)&v33, (__int64)v18, (__int64)&ulMinuend, 0);
  }
  v20 = ObjectProperty;
  if ( ObjectProperty == -1073741789 )
  {
    ExFreePoolWithTag(*a1, 0);
    v30 = ulMinuend;
    *a2 = ulMinuend;
    Pool2 = ExAllocatePool2(256LL, v30, 1852141648LL);
    *a1 = (PVOID)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    if ( a4 )
    {
      v20 = PnpGetObjectProperty(
              PiPnpRtlCtx,
              v12,
              v17,
              v11,
              0LL,
              a4,
              (__int64)v34,
              Pool2,
              ulMinuend,
              (__int64)&ulMinuend,
              0);
    }
    else
    {
      if ( v10 )
        InstallerClassRegProp = CmGetInstallerClassRegProp(
                                  PiPnpRtlCtx,
                                  v12,
                                  v11,
                                  a3,
                                  (__int64)&v33,
                                  Pool2,
                                  (__int64)&ulMinuend);
      else
        InstallerClassRegProp = CmGetDeviceRegProp(
                                  PiPnpRtlCtx,
                                  v12,
                                  v11,
                                  a3,
                                  (__int64)&v33,
                                  Pool2,
                                  (__int64)&ulMinuend,
                                  0);
      v20 = InstallerClassRegProp;
    }
  }
  if ( v20 >= 0 )
  {
    if ( a4 )
    {
      if ( v34[0] == 8210 )
      {
        v33 = 7;
        goto LABEL_14;
      }
      if ( v34[0] != 18 )
      {
        v22 = 0;
        v33 = 0;
        return (unsigned int)PipCallDriverAddDeviceQueryRoutine(v22, (unsigned int)*a1, ulMinuend, a10, a8, a9);
      }
      v22 = 1;
      v33 = 1;
    }
    else
    {
      v22 = v33;
    }
    if ( v22 != 7 )
      return (unsigned int)PipCallDriverAddDeviceQueryRoutine(v22, (unsigned int)*a1, ulMinuend, a10, a8, a9);
LABEL_14:
    if ( *a2 < 2 )
      return (unsigned int)-1073741823;
    v23 = ulMinuend;
    if ( ulMinuend < 2 )
    {
      return (unsigned int)-1073741823;
    }
    else
    {
      v24 = *a1;
      if ( *(_WORD *)*a1 )
      {
        v25 = a9;
        v26 = a8;
        while ( 1 )
        {
          v27 = -1LL;
          do
            ++v27;
          while ( v24[v27] );
          v28 = v27 + 1;
          if ( RtlULongSub(v23, 2 * v28, &ulMinuend) < 0 )
            break;
          v20 = PipCallDriverAddDeviceQueryRoutine(1, (_DWORD)v24, v29, a10, v26, v25);
          if ( v20 >= 0 )
          {
            v23 = ulMinuend;
            if ( ulMinuend >= 2 )
            {
              v24 += v28;
              if ( *v24 )
                continue;
            }
          }
          return (unsigned int)v20;
        }
        return 0;
      }
    }
  }
  return (unsigned int)v20;
}
