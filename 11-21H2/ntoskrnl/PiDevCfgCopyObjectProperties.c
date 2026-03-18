/*
 * XREFs of PiDevCfgCopyObjectProperties @ 0x140698298
 * Callers:
 *     PiDevCfgConfigureDeviceDriverConfiguration @ 0x140697760 (PiDevCfgConfigureDeviceDriverConfiguration.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x14094B580 (PiDevCfgConfigureDeviceInterface.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x14094C428 (PiDevCfgInitDriverDatabaseCallback.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     _PnpGetObjectPropertyKeys @ 0x14069726C (_PnpGetObjectPropertyKeys.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140698AAC (_PnpGetGenericStorePropertyKeys.c)
 *     PiDevCfgSetObjectProperty @ 0x14077139C (PiDevCfgSetObjectProperty.c)
 *     _PnpOpenObjectRegKey @ 0x14077C924 (_PnpOpenObjectRegKey.c)
 *     _PnpGetObjectProperty @ 0x14077DA5C (_PnpGetObjectProperty.c)
 *     _PnpGetGenericStoreProperty @ 0x14077DF24 (_PnpGetGenericStoreProperty.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDevCfgCopyObjectProperties(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        void *a8,
        unsigned __int8 (__fastcall *a9)(char *, __int64),
        __int64 a10,
        int a11)
{
  int v15; // eax
  int ObjectPropertyKeys; // eax
  int ObjectProperty; // ebx
  int GenericStorePropertyKeys; // eax
  void *Pool2; // rdi
  __int64 v21; // r14
  char *v22; // r12
  HANDLE v23; // rcx
  int v24; // eax
  HANDLE v25; // r9
  HANDLE v26; // r9
  int v27; // r9d
  int v28; // [rsp+20h] [rbp-69h]
  int v29; // [rsp+20h] [rbp-69h]
  int v30; // [rsp+28h] [rbp-61h]
  unsigned int v31; // [rsp+60h] [rbp-29h]
  int v32; // [rsp+64h] [rbp-25h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-21h] BYREF
  PVOID P; // [rsp+70h] [rbp-19h]
  HANDLE v35; // [rsp+78h] [rbp-11h] BYREF
  __int64 v36; // [rsp+80h] [rbp-9h]
  int v37; // [rsp+D8h] [rbp+4Fh]
  unsigned int v38; // [rsp+E8h] [rbp+5Fh] BYREF

  v37 = a2;
  Handle = 0LL;
  v35 = 0LL;
  v38 = 0;
  a5 = 0;
  v15 = PiPnpRtlCtx;
  v36 = *(_QWORD *)&PiPnpRtlCtx;
  v32 = 1;
  if ( !a4 )
  {
    ObjectProperty = PnpOpenObjectRegKey(a1, a2, a3, 33554433, 0, (__int64)&Handle);
    if ( ObjectProperty < 0 )
      goto LABEL_8;
    v15 = v36;
  }
  if ( a8 || (ObjectProperty = PnpOpenObjectRegKey(v15, a6, a7, 33554433, 0, (__int64)&v35), ObjectProperty >= 0) )
  {
    if ( a3 )
    {
      v25 = Handle;
      if ( a4 )
        v25 = a4;
      ObjectPropertyKeys = PnpGetObjectPropertyKeys(a1, a2, a3, (__int64)v25, v28, 0, 0LL, 0, (__int64)&v38);
    }
    else
    {
      v29 = 0;
      ObjectPropertyKeys = PnpGetGenericStorePropertyKeys(a1, a4, 0LL, 0LL);
    }
    ObjectProperty = ObjectPropertyKeys;
    if ( (int)(ObjectPropertyKeys + 0x80000000) < 0 || ObjectPropertyKeys == -1073741789 )
    {
      if ( !v38 )
      {
        ObjectProperty = 0;
        goto LABEL_8;
      }
      P = (PVOID)ExAllocatePool2(256LL, 20LL * v38, 1667526736LL);
      if ( !P )
      {
        ObjectProperty = -1073741670;
        goto LABEL_8;
      }
      if ( a3 )
      {
        v26 = Handle;
        if ( a4 )
          v26 = a4;
        GenericStorePropertyKeys = PnpGetObjectPropertyKeys(
                                     a1,
                                     a2,
                                     a3,
                                     (__int64)v26,
                                     v29,
                                     0,
                                     (__int64)P,
                                     v38,
                                     (__int64)&v38);
      }
      else
      {
        GenericStorePropertyKeys = PnpGetGenericStorePropertyKeys(a1, a4, 0LL, 0LL);
      }
      ObjectProperty = GenericStorePropertyKeys;
      if ( GenericStorePropertyKeys < 0 )
        goto LABEL_32;
      v31 = 256;
      Pool2 = (void *)ExAllocatePool2(256LL, 256LL, 1667526736LL);
      if ( !Pool2 )
      {
LABEL_45:
        ObjectProperty = -1073741670;
        goto LABEL_32;
      }
      v21 = 0LL;
      if ( !v38 )
        goto LABEL_31;
      while ( 1 )
      {
        if ( a9 && !a9((char *)P + 20 * v21, a10) )
          goto LABEL_30;
        if ( a3 )
        {
          v27 = (int)Handle;
          if ( a4 )
            v27 = (int)a4;
          v22 = (char *)P + 20 * v21;
          ObjectProperty = PnpGetObjectProperty(
                             a1,
                             v37,
                             a3,
                             v27,
                             0LL,
                             (__int64)v22,
                             (__int64)&v32,
                             (__int64)Pool2,
                             v31,
                             (__int64)&a5,
                             a11);
          if ( ObjectProperty == -1073741822 )
            goto LABEL_33;
        }
        else
        {
          v22 = (char *)P + 20 * v21;
          v30 = (int)Pool2;
          ObjectProperty = PnpGetGenericStoreProperty(a1, a4, 0LL, v22, &v32);
        }
        if ( ObjectProperty != -1073741789 )
        {
          if ( ObjectProperty < 0 )
            goto LABEL_31;
          v23 = v35;
          if ( a8 )
            v23 = a8;
          v24 = PiDevCfgSetObjectProperty(v36, 0, a6, a7, (__int64)v23, v30, (__int64)v22, v32, (__int64)Pool2, a5, a11);
          ObjectProperty = v24;
          if ( v24 != -1073741790 )
          {
            if ( v24 < 0 )
              goto LABEL_31;
            goto LABEL_30;
          }
LABEL_33:
          ObjectProperty = 0;
          goto LABEL_30;
        }
        if ( a5 <= v31 )
        {
          ObjectProperty = -1073741595;
LABEL_31:
          ExFreePoolWithTag(Pool2, 0);
LABEL_32:
          ExFreePoolWithTag(P, 0);
          break;
        }
        ExFreePoolWithTag(Pool2, 0);
        v31 = a5;
        Pool2 = (void *)ExAllocatePool2(256LL, a5, 1667526736LL);
        if ( !Pool2 )
          goto LABEL_45;
        ObjectProperty = 0;
        LODWORD(v21) = v21 - 1;
LABEL_30:
        v21 = (unsigned int)(v21 + 1);
        if ( (unsigned int)v21 >= v38 )
          goto LABEL_31;
      }
    }
  }
LABEL_8:
  if ( Handle )
    ZwClose(Handle);
  if ( v35 )
    ZwClose(v35);
  return (unsigned int)ObjectProperty;
}
