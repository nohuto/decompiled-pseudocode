/*
 * XREFs of ?Open@SipcPrivateNamespace@@QEAAJAEBUSipcPrivateNamespaceAttributes@@@Z @ 0x18011ABBC
 * Callers:
 *     ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z @ 0x180118C80 (-AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z.c)
 * Callees:
 *     ?Return_GetLastError@in1diag0@details@wil@@YAJXZ @ 0x18011831C (-Return_GetLastError@in1diag0@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x180118344 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ?GetBoundaryDescriptorAndInitializeName@SipcPrivateNamespace@@AEAAJPEAPEAX@Z @ 0x18011A190 (-GetBoundaryDescriptorAndInitializeName@SipcPrivateNamespace@@AEAAJPEAPEAX@Z.c)
 */

__int64 __fastcall SipcPrivateNamespace::Open(
        SipcPrivateNamespace *this,
        const struct SipcPrivateNamespaceAttributes *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int128 v7; // xmm0
  int BoundaryDescriptorAndInitializeName; // ebx
  char *v9; // rbx
  HANDLE v10; // rax
  __int64 v11; // rdx
  wil::details::in1diag0 *v12; // rcx
  __int64 v13; // r8
  const char *v14; // r9
  unsigned int LastError; // edi
  HANDLE BoundaryDescriptor; // [rsp+38h] [rbp+10h] BYREF

  if ( !IsValidSid((char *)a2 + 16) || !IsValidSid((char *)a2 + 84) )
  {
    BoundaryDescriptorAndInitializeName = -2147024809;
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x80070057LL, v4, v5, v6);
    return (unsigned int)BoundaryDescriptorAndInitializeName;
  }
  v7 = *(_OWORD *)a2;
  BoundaryDescriptor = 0LL;
  *(_OWORD *)((char *)this + 84) = v7;
  *(_OWORD *)((char *)this + 100) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 116) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 132) = *((_OWORD *)a2 + 3);
  *(_OWORD *)((char *)this + 148) = *((_OWORD *)a2 + 4);
  *(_OWORD *)((char *)this + 164) = *((_OWORD *)a2 + 5);
  *(_OWORD *)((char *)this + 180) = *((_OWORD *)a2 + 6);
  *(_OWORD *)((char *)this + 196) = *((_OWORD *)a2 + 7);
  *(_OWORD *)((char *)this + 212) = *((_OWORD *)a2 + 8);
  *(_QWORD *)((char *)this + 228) = *((_QWORD *)a2 + 18);
  BoundaryDescriptorAndInitializeName = SipcPrivateNamespace::GetBoundaryDescriptorAndInitializeName(
                                          this,
                                          &BoundaryDescriptor);
  if ( BoundaryDescriptorAndInitializeName < 0 )
  {
    if ( (char *)BoundaryDescriptor - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      DeleteBoundaryDescriptor(BoundaryDescriptor);
    return (unsigned int)BoundaryDescriptorAndInitializeName;
  }
  v9 = (char *)BoundaryDescriptor;
  v10 = OpenPrivateNamespaceW(BoundaryDescriptor, (LPCWSTR)this + 4);
  *(_QWORD *)this = v10;
  if ( v10 )
  {
    if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      DeleteBoundaryDescriptor(v9);
    return 0LL;
  }
  else
  {
    LastError = wil::details::in1diag0::Return_GetLastError(v12, v11, v13, v14);
    if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      DeleteBoundaryDescriptor(v9);
    return LastError;
  }
}
