/*
 * XREFs of sub_1800EB150 @ 0x1800EB150
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800F110C @ 0x1800F110C (sub_1800F110C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800EB150(__int64 a1, __int64 a2)
{
  __int64 v3; // r9
  __int64 v4; // r8
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  char *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  char v14; // [rsp+60h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(a1 + 96);
  v12 = 0LL;
  v4 = *(_QWORD *)(a1 + 80);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 8);
    while ( v5 )
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5);
      if ( v6 == v5 )
      {
        v12 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
  }
  v7 = (char *)sub_1800F110C((unsigned int)&v13, a2, v12, v3, a2, 1);
  v8 = 0LL;
  if ( &v14 != v7 )
  {
    v8 = *(_QWORD *)v7;
    *(_QWORD *)v7 = 0LL;
  }
  v9 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 104) = v8;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  sub_180010910((__int64)&v12);
  return sub_18002BBC0(a1, *(unsigned int *)(*(_QWORD *)(a1 + 96) + 12LL));
}
