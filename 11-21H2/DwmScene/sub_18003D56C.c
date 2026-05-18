/*
 * XREFs of sub_18003D56C @ 0x18003D56C
 * Callers:
 *     sub_180052D40 @ 0x180052D40 (sub_180052D40.c)
 *     sub_1800B4528 @ 0x1800B4528 (sub_1800B4528.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_180028488 @ 0x180028488 (sub_180028488.c)
 *     sub_180028614 @ 0x180028614 (sub_180028614.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18003D56C(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  __int64 v7; // rdi
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF

  v3 = a1[15];
  if ( v3 && *(_DWORD *)(v3 + 8) )
  {
    *a2 = a1[14];
    a2[1] = v3;
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 12));
  }
  else
  {
    v12 = 0LL;
    v4 = a1[10];
    if ( v4 )
    {
      v5 = *(_DWORD *)(v4 + 8);
      while ( v5 )
      {
        v6 = v5;
        v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5);
        if ( v6 == v5 )
        {
          v7 = a1[9];
          v12 = *(_OWORD *)(a1 + 9);
          goto LABEL_9;
        }
      }
    }
    v7 = v12;
LABEL_9:
    if ( sub_1800122C0(&v12) && (unsigned int)sub_180028614(v7) )
    {
      v8 = sub_180028488(v7);
      v9 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 184LL))(v8);
      *a2 = 0LL;
      a2[1] = 0LL;
      v10 = v9[1];
      if ( v10 )
      {
        *a2 = *v9;
        a2[1] = v10;
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 12));
      }
    }
    else
    {
      *a2 = 0LL;
      a2[1] = 0LL;
    }
    sub_180010910((__int64)&v12);
  }
  return a2;
}
