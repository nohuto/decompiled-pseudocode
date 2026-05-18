/*
 * XREFs of sub_180047028 @ 0x180047028
 * Callers:
 *     sub_180064450 @ 0x180064450 (sub_180064450.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_18001DE70 @ 0x18001DE70 (sub_18001DE70.c)
 *     sub_18002C73C @ 0x18002C73C (sub_18002C73C.c)
 *     sub_18003070C @ 0x18003070C (sub_18003070C.c)
 *     sub_180030718 @ 0x180030718 (sub_180030718.c)
 *     sub_180030724 @ 0x180030724 (sub_180030724.c)
 *     sub_18004231C @ 0x18004231C (sub_18004231C.c)
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 *     sub_18004614C @ 0x18004614C (sub_18004614C.c)
 *     sub_1800465B0 @ 0x1800465B0 (sub_1800465B0.c)
 *     ?GetExecutingCollection@ContextBase@details@Concurrency@@QEAAPEAV_TaskCollectionBase@23@XZ @ 0x1800465E4 (-GetExecutingCollection@ContextBase@details@Concurrency@@QEAAPEAV_TaskCollectionBase@23@XZ.c)
 *     sub_180046AD4 @ 0x180046AD4 (sub_180046AD4.c)
 *     sub_180063D04 @ 0x180063D04 (sub_180063D04.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180047028(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, _QWORD *a5, __int64 a6)
{
  __int64 *v10; // rax
  __int64 v11; // rdx
  volatile __int32 *v12; // rax
  __int32 v13; // r8d
  __int64 v14; // rsi
  Concurrency::details::ContextBase *v15; // rcx
  struct Concurrency::details::_TaskCollectionBase *ExecutingCollection; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r14
  _QWORD *v20; // rax
  bool v21; // bl
  __int64 v22; // rbx
  __int64 *v23; // r12
  __int64 *v24; // rsi
  __int64 v25; // rbx
  int v26; // eax
  _DWORD *v27; // rdx
  __int64 result; // rax
  unsigned __int64 v29; // rdx
  unsigned int v30; // [rsp+30h] [rbp-89h] BYREF
  __int64 v31; // [rsp+38h] [rbp-81h]
  __int64 v32[2]; // [rsp+40h] [rbp-79h] BYREF
  __int128 v33; // [rsp+50h] [rbp-69h] BYREF
  __int64 v34; // [rsp+60h] [rbp-59h]
  _QWORD v35[2]; // [rsp+68h] [rbp-51h] BYREF
  _QWORD v36[2]; // [rsp+78h] [rbp-41h] BYREF
  __int64 v37[5]; // [rsp+88h] [rbp-31h] BYREF

  v37[4] = a2;
  sub_18002C73C(a1 + 16);
  v10 = sub_1800129F4(v37, a2);
  sub_18004614C(a1, v32, (char *)v10);
  v31 = v32[0] + 76;
  v30 = 1;
  sub_180030724(&v30);
  v12 = (volatile __int32 *)sub_18001DE70(v11);
  while ( _InterlockedExchange(v12, v13) )
    ;
  v14 = v32[0];
  if ( sub_180046AD4(v32[0]) )
  {
    ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(v15);
    v17 = sub_180063D04(*a4, ExecutingCollection);
    v19 = a6 | v18 | v17;
    v20 = sub_1800465B0(v14, v35);
    v21 = sub_1800122C0(v20);
    sub_180010910((__int64)v35);
    if ( v21 )
    {
      v22 = *sub_1800465B0(v14, v36);
      sub_180010910((__int64)v36);
      (**(void (__fastcall ***)(_QWORD, __int128 *, __int64, __int64))*a5)(*a5, &v33, v22, *a4);
      v23 = (__int64 *)*((_QWORD *)&v33 + 1);
      v24 = (__int64 *)v33;
      if ( (_QWORD)v33 != *((_QWORD *)&v33 + 1) )
      {
        do
        {
          v25 = *v24;
          sub_180043668(*v24);
          if ( (*(_QWORD *)(v25 + 448) & *(_QWORD *)(*a4 + 512)) == *(_QWORD *)(*a4 + 504) )
            sub_18004231C(*v24, v19, a3, a4);
          ++v24;
        }
        while ( v24 != v23 );
        v24 = (__int64 *)v33;
      }
      if ( v24 )
      {
        sub_180010884((char *)v24, (v34 - (_QWORD)v24) & 0xFFFFFFFFFFFFFFF8uLL);
        v33 = 0LL;
        v34 = 0LL;
      }
    }
  }
  v30 = 0;
  sub_18003070C(v31);
  v26 = sub_180030718(&v30);
  *v27 = v26;
  result = sub_180010910((__int64)v32);
  v29 = *(_QWORD *)(a2 + 24);
  if ( v29 >= 8 )
    result = sub_180010884(*(char **)a2, 2 * v29 + 2);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_WORD *)a2 = 0;
  return result;
}
