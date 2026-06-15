/*
 * XREFs of ?ReacquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJKPEA_K@Z @ 0x180014A90
 * Callers:
 *     <none>
 * Callees:
 *     ?AddWorkItemToQueue@CConstraintModelResourceManager@@AEAAJPEAVReacquireResourceWorkItem@@@Z @ 0x180014CC0 (-AddWorkItemToQueue@CConstraintModelResourceManager@@AEAAJPEAVReacquireResourceWorkItem@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$unique_ptr@VReacquireResourceWorkItem@@U?$default_delete@VReacquireResourceWorkItem@@@std@@@std@@QEAA@XZ @ 0x1800827EE (--1-$unique_ptr@VReacquireResourceWorkItem@@U-$default_delete@VReacquireResourceWorkItem@@@std@@.c)
 */

__int64 __fastcall CConstraintModelResourceManager::ReacquireSaDeviceResource(
        CConstraintModelResourceManager *this,
        int a2,
        unsigned __int64 *a3)
{
  unsigned int v3; // ebx
  _QWORD *v7; // rax
  int v8; // eax
  unsigned int v9; // edi
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _QWORD *v13; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  v13 = 0LL;
  if ( a3 )
  {
    v7 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v7 )
    {
      *(_DWORD *)v7 = a2;
      v7[1] = a3;
      *((_DWORD *)v7 + 4) = 0;
      v13 = v7;
      v8 = CConstraintModelResourceManager::AddWorkItemToQueue(this, (struct ReacquireResourceWorkItem *)v7);
      v9 = v8;
      if ( v8 >= 0 )
        return 0LL;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x649,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\constraintmodelresourcemanager.cpp",
        (const char *)(unsigned int)v8,
        v11);
      v3 = v9;
    }
    else
    {
      v3 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x647,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\constraintmodelresourcemanager.cpp",
        (const char *)0x8007000ELL,
        v11);
    }
  }
  std::unique_ptr<ReacquireResourceWorkItem>::~unique_ptr<ReacquireResourceWorkItem>(&v13);
  return v3;
}
