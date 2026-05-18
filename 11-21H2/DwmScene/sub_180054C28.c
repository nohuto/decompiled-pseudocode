/*
 * XREFs of sub_180054C28 @ 0x180054C28
 * Callers:
 *     sub_180056668 @ 0x180056668 (sub_180056668.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_180054530 @ 0x180054530 (sub_180054530.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180054C28(_QWORD *a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  volatile signed __int32 *v14; // rcx
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF

  v8 = sub_18001D684();
  v9 = v8;
  if ( v8 )
  {
    *(_OWORD *)v8 = 0LL;
    *(_DWORD *)(v8 + 8) = 1;
    *(_DWORD *)(v8 + 12) = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj2<Spectre::Engine::ShaderFamily>::`vftable';
    sub_180054530(v8 + 16, a2, a3, a4);
  }
  else
  {
    v9 = 0LL;
  }
  v10 = (_QWORD *)(v9 + 16);
  *a1 = v9 + 16;
  a1[1] = v9;
  if ( v9 != -16 )
  {
    v11 = *(_QWORD *)(v9 + 24);
    if ( !v11 || !*(_DWORD *)(v11 + 8) )
    {
      if ( v9 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
        v9 = a1[1];
      }
      v16[0] = v10;
      v16[1] = v9;
      v12 = 0LL;
      v13 = 0LL;
      if ( v9 )
      {
        v12 = v10;
        v13 = v9;
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 12));
      }
      *v10 = v12;
      v14 = (volatile signed __int32 *)v10[1];
      v10[1] = v13;
      if ( v14 && _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
      sub_180010910((__int64)v16);
    }
  }
  return a1;
}
