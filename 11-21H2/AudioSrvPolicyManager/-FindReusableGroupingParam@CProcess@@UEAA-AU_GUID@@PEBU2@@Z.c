/*
 * XREFs of ?FindReusableGroupingParam@CProcess@@UEAA?AU_GUID@@PEBU2@@Z @ 0x180016DE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x18001DE58 (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
struct _GUID *__fastcall CProcess::FindReusableGroupingParam(
        CProcess *this,
        struct _GUID *__return_ptr retstr,
        const struct _GUID *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  __int64 v7; // rax
  int v8; // ebp
  __int64 ***v9; // rdi
  __int64 **i; // rbx
  _QWORD *v11; // rax
  void *v13; // [rsp+20h] [rbp-38h] BYREF
  GUID v14; // [rsp+28h] [rbp-30h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v7 = *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 - *(_QWORD *)&a3->Data1;
  if ( *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 == *(_QWORD *)&a3->Data1 )
    v7 = *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 - *(_QWORD *)a3->Data4;
  v8 = v7 != 0;
  v14 = GUID_00000000_0000_0000_0000_000000000000;
  v9 = (__int64 ***)*((_QWORD *)this + 9);
  for ( i = *v9; i != (__int64 **)v9; i = (__int64 **)*i )
  {
    v13 = 0LL;
    if ( (int)wil::details::weak_query_policy::query(
                (struct IWeakReference *)i[3],
                &GUID_01de3f73_63e1_4021_a563_2efba2c7fb9b,
                &v13) >= 0
      && !(*(unsigned int (__fastcall **)(void *))(*(_QWORD *)v13 + 128LL))(v13)
      && (*(unsigned int (__fastcall **)(void *))(*(_QWORD *)v13 + 32LL))(v13) != 2 )
    {
      v11 = (_QWORD *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v13 + 120LL))(v13);
      if ( (*v11 != *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
         || v11[1] != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4)
        && (unsigned int)++v8 > 1 )
      {
        if ( v13 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 16LL))(v13);
        *retstr = GUID_00000000_0000_0000_0000_000000000000;
        if ( v6 )
          goto LABEL_18;
        return retstr;
      }
      (*(void (__fastcall **)(void *, GUID *))(*(_QWORD *)v13 + 104LL))(v13, &v14);
    }
    if ( v13 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  *retstr = v14;
  if ( v6 )
LABEL_18:
    LeaveCriticalSection(v6);
  return retstr;
}
