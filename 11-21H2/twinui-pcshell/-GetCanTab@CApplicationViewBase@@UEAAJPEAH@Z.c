/*
 * XREFs of ?GetCanTab@CApplicationViewBase@@UEAAJPEAH@Z @ 0x18003C050
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18009FDA8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationViewBase::GetCanTab(CApplicationViewBase *this, int *a2)
{
  int v4; // r8d
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v10; // [rsp+30h] [rbp+8h] BYREF
  char v11; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v11, (char *)this + 48);
  v4 = *((_DWORD *)this + 33);
  if ( !v4 )
  {
    v5 = (*(__int64 (__fastcall **)(CApplicationViewBase *, char *))(*(_QWORD *)this + 528LL))(this, &v10);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE4,
        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
        (const char *)(unsigned int)v5,
        v8);
      goto LABEL_5;
    }
    v4 = 2 - (v10 != 0);
    *((_DWORD *)this + 33) = v4;
  }
  *a2 = v4 == 1;
  v6 = 0;
LABEL_5:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v11);
  return v6;
}
