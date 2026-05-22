/*
 * XREFs of ?Open@SipcPrivateNamespace@@QEAAJAEBUSipcPrivateNamespaceAttributes@@@Z @ 0x1800FEF2C
 * Callers:
 *     ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z @ 0x1800FD0B0 (-AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z.c)
 * Callees:
 *     ?Return_GetLastError@in1diag0@details@wil@@YAJXZ @ 0x1800FC61C (-Return_GetLastError@in1diag0@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800FC644 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AXPEAX@Z$1?DeleteBoundaryDescriptor@@YAX0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x1800FCB88 (--1-$unique_storage@U-$handle_null_resource_policy@P6AXPEAX@Z$1-DeleteBoundaryDescriptor@@YAX0@Z.c)
 *     ?GetBoundaryDescriptorAndInitializeName@SipcPrivateNamespace@@AEAAJPEAPEAX@Z @ 0x1800FE510 (-GetBoundaryDescriptorAndInitializeName@SipcPrivateNamespace@@AEAAJPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SipcPrivateNamespace::Open(
        SipcPrivateNamespace *this,
        const struct SipcPrivateNamespaceAttributes *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int BoundaryDescriptorAndInitializeName; // ebx
  HANDLE v8; // rax
  __int64 v9; // rdx
  wil::details::in1diag0 *v10; // rcx
  __int64 v11; // r8
  const char *v12; // r9
  LPVOID lpBoundaryDescriptor; // [rsp+38h] [rbp+10h] BYREF

  if ( IsValidSid((char *)a2 + 16) && IsValidSid((char *)a2 + 84) )
  {
    *(_OWORD *)((char *)this + 84) = *(_OWORD *)a2;
    *(_OWORD *)((char *)this + 100) = *((_OWORD *)a2 + 1);
    *(_OWORD *)((char *)this + 116) = *((_OWORD *)a2 + 2);
    *(_OWORD *)((char *)this + 132) = *((_OWORD *)a2 + 3);
    *(_OWORD *)((char *)this + 148) = *((_OWORD *)a2 + 4);
    *(_OWORD *)((char *)this + 164) = *((_OWORD *)a2 + 5);
    *(_OWORD *)((char *)this + 180) = *((_OWORD *)a2 + 6);
    *(_OWORD *)((char *)this + 196) = *((_OWORD *)a2 + 7);
    *(_OWORD *)((char *)this + 212) = *((_OWORD *)a2 + 8);
    *(_QWORD *)((char *)this + 228) = *((_QWORD *)a2 + 18);
    lpBoundaryDescriptor = 0LL;
    BoundaryDescriptorAndInitializeName = SipcPrivateNamespace::GetBoundaryDescriptorAndInitializeName(
                                            this,
                                            &lpBoundaryDescriptor);
    if ( BoundaryDescriptorAndInitializeName >= 0 )
    {
      v8 = OpenPrivateNamespaceW(lpBoundaryDescriptor, (LPCWSTR)this + 4);
      *(_QWORD *)this = v8;
      if ( v8 )
        BoundaryDescriptorAndInitializeName = 0;
      else
        BoundaryDescriptorAndInitializeName = wil::details::in1diag0::Return_GetLastError(v10, v9, v11, v12);
    }
    wil::details::unique_storage<wil::details::handle_null_resource_policy<void (*)(void *),&void DeleteBoundaryDescriptor(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<void (*)(void *),&void DeleteBoundaryDescriptor(void *)>>(&lpBoundaryDescriptor);
  }
  else
  {
    BoundaryDescriptorAndInitializeName = -2147024809;
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x80070057LL, v4, v5, v6);
  }
  return (unsigned int)BoundaryDescriptorAndInitializeName;
}
