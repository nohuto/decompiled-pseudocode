/*
 * XREFs of ?GetCount@CHybridPropertyStore@@UEAAJPEAK@Z @ 0x180155930
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180084444 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall CHybridPropertyStore::GetCount(CHybridPropertyStore *this, unsigned int *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+50h] [rbp+18h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  *a2 = 0;
  v5 = *((_QWORD *)this + 2);
  v12 = 0;
  v14 = v2;
  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v5 + 24LL))(v5, &v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 85LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\hybridpropertystore.cpp",
      (const char *)(unsigned int)v6);
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection(&v14);
    return v7;
  }
  v9 = *((_QWORD *)this + 3);
  v13 = 0;
  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v9 + 24LL))(v9, &v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 88LL;
    goto LABEL_5;
  }
  *a2 = v13 + v12;
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
