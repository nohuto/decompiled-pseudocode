/*
 * XREFs of ?GetValue@CHybridPropertyStore@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180155A70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180084474 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ??8@YAHAEBU_tagpropertykey@@0@Z @ 0x1800D59A0 (--8@YAHAEBU_tagpropertykey@@0@Z.c)
 */

__int64 __fastcall CHybridPropertyStore::GetValue(
        CHybridPropertyStore *this,
        const struct _tagpropertykey *a2,
        struct tagPROPVARIANT *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  int v7; // ebx
  __int64 i; // rcx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v12 = v3;
  *(_OWORD *)&a3->vt = 0LL;
  a3->bstrblobVal.pData = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, const struct _tagpropertykey *, struct tagPROPVARIANT *))(**((_QWORD **)this + 3)
                                                                                                  + 40LL))(
         *((_QWORD *)this + 3),
         a2,
         a3);
  if ( v7 < 0 || !a3->vt )
  {
    for ( i = *((_QWORD *)this + 4); ; i = v9 + 20 )
    {
      if ( i == *((_QWORD *)this + 5) )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, const struct _tagpropertykey *, struct tagPROPVARIANT *))(**((_QWORD **)this + 2) + 40LL))(
               *((_QWORD *)this + 2),
               a2,
               a3);
        Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection(&v12);
        return (unsigned int)v7;
      }
      if ( (unsigned int)operator==(i, (__int64)a2) )
        break;
    }
    if ( v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x86,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\hybridpropertystore.cpp",
        (const char *)(unsigned int)v7);
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return (unsigned int)v7;
}
