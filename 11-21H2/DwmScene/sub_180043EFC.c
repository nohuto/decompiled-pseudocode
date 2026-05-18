/*
 * XREFs of sub_180043EFC @ 0x180043EFC
 * Callers:
 *     sub_1800456DC @ 0x1800456DC (sub_1800456DC.c)
 *     sub_18004576C @ 0x18004576C (sub_18004576C.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180043EFC(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  volatile signed __int32 *v8; // rcx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = sub_18001D684();
  if ( v4 )
  {
    *(_DWORD *)(v4 + 8) = 1;
    *(_QWORD *)v4 = &std::_Ref_count<Spectre::Engine::Scene>::`vftable';
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)(v4 + 16) = a2;
  }
  *a1 = a2;
  a1[1] = v4;
  if ( a2 )
  {
    v5 = a2[1];
    if ( !v5 || !*(_DWORD *)(v5 + 8) )
    {
      if ( v4 )
      {
        _InterlockedAdd((volatile signed __int32 *)(v4 + 8), 1u);
        v4 = a1[1];
      }
      v6 = 0LL;
      v10[0] = a2;
      v7 = 0LL;
      v10[1] = v4;
      if ( v4 )
      {
        v6 = a2;
        v7 = v4;
        _InterlockedAdd((volatile signed __int32 *)(v4 + 12), 1u);
      }
      *a2 = v6;
      v8 = (volatile signed __int32 *)a2[1];
      a2[1] = v7;
      if ( v8 && _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64))(*(_QWORD *)v8 + 8LL))(v8, v7, 1LL);
      sub_180010910((__int64)v10);
    }
  }
  return a1;
}
