/*
 * XREFs of ?GetViews@CApplicationViewManager@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x18012C4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1801243A0 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?RefreshCollection@CApplicationViewManager@@UEAAJXZ @ 0x18012C5C0 (-RefreshCollection@CApplicationViewManager@@UEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationViewManager::GetViews(RTL_SRWLOCK *this, struct IObjectArray **a2)
{
  int Instance; // eax
  unsigned int v5; // edi
  __int64 v6; // rbp
  struct IObjectArray *v7; // rcx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IObjectArray *v11; // [rsp+48h] [rbp+10h] BYREF
  RTL_SRWLOCK *v12; // [rsp+50h] [rbp+18h]

  *a2 = 0LL;
  v11 = 0LL;
  Instance = CEnumerableObjectCollection::CreateInstance((__int64)this, (const struct _GUID *)a2, (void **)&v11);
  v5 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x99,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)Instance);
LABEL_15:
    v7 = v11;
    goto LABEL_6;
  }
  v12 = this + 66;
  AcquireSRWLockShared(this + 66);
  v6 = 0LL;
  if ( this[68].Ptr )
  {
    while ( 1 )
    {
      v9 = ((__int64 (__fastcall *)(struct IObjectArray *, _QWORD))v11->lpVtbl[1].QueryInterface)(
             v11,
             *((_QWORD *)this[67].Ptr + v6));
      v5 = v9;
      if ( v9 < 0 )
        break;
      if ( (PVOID)++v6 >= this[68].Ptr )
        goto LABEL_3;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA0,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v9);
    if ( this != (RTL_SRWLOCK *)-528LL )
      ReleaseSRWLockShared(this + 66);
    goto LABEL_15;
  }
LABEL_3:
  if ( this != (RTL_SRWLOCK *)-528LL )
    ReleaseSRWLockShared(this + 66);
  CApplicationViewManager::RefreshCollection((CApplicationViewManager *)this);
  v7 = 0LL;
  *a2 = v11;
  v5 = 0;
LABEL_6:
  if ( v7 )
  {
    v11 = 0LL;
    ((void (__fastcall *)(struct IObjectArray *))v7->lpVtbl->Release)(v7);
  }
  return v5;
}
