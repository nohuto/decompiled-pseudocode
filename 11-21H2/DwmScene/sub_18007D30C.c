/*
 * XREFs of sub_18007D30C @ 0x18007D30C
 * Callers:
 *     sub_18006CDA0 @ 0x18006CDA0 (sub_18006CDA0.c)
 *     sub_180077414 @ 0x180077414 (sub_180077414.c)
 * Callees:
 *     sub_180012720 @ 0x180012720 (sub_180012720.c)
 *     sub_18007F898 @ 0x18007F898 (sub_18007F898.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18007D30C(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // rdx
  __int64 v6; // rax
  __int128 v8; // [rsp+40h] [rbp-18h] BYREF

  v8 = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  *(_QWORD *)&v8 = *a2;
  *((_QWORD *)&v8 + 1) = v4;
  sub_18007F898(a1, &v8);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))(*(_QWORD *)*a2 + 8LL))(
    *a2,
    *(_QWORD *)(a1 + 32),
    *(unsigned int *)(a1 + 8),
    *(unsigned int *)(a1 + 12),
    *(_DWORD *)(a1 + 20),
    *(_DWORD *)(a1 + 28));
  v5 = *(_QWORD **)(a1 + 48);
  if ( v5 == *(_QWORD **)(a1 + 56) )
  {
    sub_180012720((__int64 *)(a1 + 40), (__int64)v5, a2);
  }
  else
  {
    *v5 = 0LL;
    v5[1] = 0LL;
    v6 = a2[1];
    if ( v6 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    *v5 = *a2;
    v5[1] = a2[1];
    *(_QWORD *)(a1 + 48) += 16LL;
  }
  return sub_180010910((__int64)a2);
}
