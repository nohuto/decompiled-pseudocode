/*
 * XREFs of ?ReacquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJKPEA_K@Z @ 0x180066100
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_GReacquireResourceWorkItem@@QEAAPEAXI@Z @ 0x180109ECC (--_GReacquireResourceWorkItem@@QEAAPEAXI@Z.c)
 *     ?AddWorkItemToQueue@CConstraintModelResourceManager@@AEAAJPEAVReacquireResourceWorkItem@@@Z @ 0x18010A424 (-AddWorkItemToQueue@CConstraintModelResourceManager@@AEAAJPEAVReacquireResourceWorkItem@@@Z.c)
 */

__int64 __fastcall CConstraintModelResourceManager::ReacquireSaDeviceResource(
        CConstraintModelResourceManager *this,
        unsigned int a2,
        unsigned __int64 *a3)
{
  ReacquireResourceWorkItem *v3; // rbx
  unsigned __int64 *v4; // rdi
  ReacquireResourceWorkItem *v7; // rax
  int v8; // eax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = 0LL;
  v4 = a3;
  if ( a3 )
  {
    v7 = (ReacquireResourceWorkItem *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v3 = v7;
    if ( v7 )
    {
      *((_DWORD *)v7 + 4) = 0;
      *(_DWORD *)v7 = a2;
      *((_QWORD *)v7 + 1) = v4;
      v8 = CConstraintModelResourceManager::AddWorkItemToQueue(this, v7);
      LODWORD(v4) = v8;
      if ( v8 >= 0 )
      {
        LODWORD(v4) = 0;
        return (unsigned int)v4;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x603,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\constraintmodelresourcemanager.cpp",
        (const char *)(unsigned int)v8,
        v10);
    }
    else
    {
      LODWORD(v4) = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x601,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\constraintmodelresourcemanager.cpp",
        (const char *)0x8007000ELL,
        v10);
      v3 = 0LL;
    }
  }
  if ( v3 )
    ReacquireResourceWorkItem::`scalar deleting destructor'(v3, a2);
  return (unsigned int)v4;
}
