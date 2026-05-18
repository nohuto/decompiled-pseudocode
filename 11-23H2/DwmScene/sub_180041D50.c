/*
 * XREFs of sub_180041D50 @ 0x180041D50
 * Callers:
 *     sub_18005C290 @ 0x18005C290 (sub_18005C290.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_1800105A8 @ 0x1800105A8 (sub_1800105A8.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_18001C7FC @ 0x18001C7FC (sub_18001C7FC.c)
 *     sub_18002A37C @ 0x18002A37C (sub_18002A37C.c)
 *     sub_18002E108 @ 0x18002E108 (sub_18002E108.c)
 *     sub_18002E114 @ 0x18002E114 (sub_18002E114.c)
 *     sub_18002E120 @ 0x18002E120 (sub_18002E120.c)
 *     sub_18003D2E4 @ 0x18003D2E4 (sub_18003D2E4.c)
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 *     sub_1800410C0 @ 0x1800410C0 (sub_1800410C0.c)
 *     sub_180041410 @ 0x180041410 (sub_180041410.c)
 *     ?GetExecutingCollection@ContextBase@details@Concurrency@@QEAAPEAV_TaskCollectionBase@23@XZ @ 0x180041434 (-GetExecutingCollection@ContextBase@details@Concurrency@@QEAAPEAV_TaskCollectionBase@23@XZ.c)
 *     sub_180041890 @ 0x180041890 (sub_180041890.c)
 *     sub_18005BBA4 @ 0x18005BBA4 (sub_18005BBA4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180041D50(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, _QWORD *a5, __int64 a6)
{
  _QWORD *v10; // rax
  __int64 v11; // rdx
  volatile __int32 *v12; // rax
  __int32 v13; // r8d
  __int64 v14; // rbx
  Concurrency::details::ContextBase *v15; // rcx
  struct Concurrency::details::_TaskCollectionBase *ExecutingCollection; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rsi
  _QWORD *v20; // rax
  bool v21; // di
  __int64 v22; // rbx
  __int64 *v23; // r15
  __int64 *i; // rdi
  __int64 v25; // rbx
  int v26; // eax
  _DWORD *v27; // rdx
  unsigned int v29; // [rsp+30h] [rbp-89h] BYREF
  __int64 v30; // [rsp+38h] [rbp-81h]
  __int64 v31; // [rsp+40h] [rbp-79h] BYREF
  __int64 v32; // [rsp+48h] [rbp-71h]
  _QWORD v33[3]; // [rsp+50h] [rbp-69h] BYREF
  __int64 v34; // [rsp+68h] [rbp-51h] BYREF
  __int64 v35; // [rsp+70h] [rbp-49h]
  __int64 v36; // [rsp+78h] [rbp-41h] BYREF
  __int64 v37; // [rsp+80h] [rbp-39h]
  _QWORD v38[5]; // [rsp+88h] [rbp-31h] BYREF

  v38[4] = a2;
  sub_18002A37C(a1 + 16);
  v10 = sub_180012440(v38, a2);
  sub_1800410C0(a1, &v31, (__int64)v10);
  v30 = v31 + 76;
  v29 = 1;
  sub_18002E120(&v29);
  v12 = (volatile __int32 *)sub_18001C7FC(v11);
  while ( _InterlockedExchange(v12, v13) )
    ;
  v14 = v31;
  if ( sub_180041890(v31) )
  {
    ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(v15);
    v17 = sub_18005BBA4(*a4, ExecutingCollection);
    v19 = a6 | v18 | v17;
    v20 = (_QWORD *)sub_180041410(v14, &v34);
    v21 = sub_180011DE0(v20);
    if ( v35 )
      sub_180010530(v35);
    if ( v21 )
    {
      v22 = *(_QWORD *)sub_180041410(v14, &v36);
      if ( v37 )
        sub_180010530(v37);
      (**(void (__fastcall ***)(_QWORD, _QWORD *, __int64, __int64))*a5)(*a5, v33, v22, *a4);
      v23 = (__int64 *)v33[1];
      for ( i = (__int64 *)v33[0]; i != v23; ++i )
      {
        v25 = *i;
        sub_18003E330(*i);
        if ( (*(_QWORD *)(v25 + 448) & *(_QWORD *)(*a4 + 512)) == *(_QWORD *)(*a4 + 504) )
          sub_18003D2E4(*i, v19, a3, a4);
      }
      sub_1800105A8((__int64)v33);
    }
  }
  v29 = 0;
  sub_18002E108(v30);
  v26 = sub_18002E114(&v29);
  *v27 = v26;
  if ( v32 )
    sub_180010530(v32);
  return sub_180013348(a2);
}
