/*
 * XREFs of ?SetApplicationHandlesGroupingParams@CProcess@@UEAAXXZ @ 0x18001BE20
 * Callers:
 *     <none>
 * Callees:
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x18001DE58 (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CProcess::SetApplicationHandlesGroupingParams(CProcess *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 ***v3; // rdi
  __int64 **i; // rbx
  void *v5; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+38h] [rbp+10h]

  *((_BYTE *)this + 784) = 1;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v6 = v2;
  v3 = (__int64 ***)*((_QWORD *)this + 9);
  for ( i = *v3; i != (__int64 **)v3; i = (__int64 **)*i )
  {
    v5 = 0LL;
    if ( (int)wil::details::weak_query_policy::query(
                (struct IWeakReference *)i[3],
                &GUID_01de3f73_63e1_4021_a563_2efba2c7fb9b,
                &v5) >= 0 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 96LL))(v5);
    if ( v5 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
