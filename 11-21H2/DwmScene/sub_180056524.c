/*
 * XREFs of sub_180056524 @ 0x180056524
 * Callers:
 *     sub_18004A774 @ 0x18004A774 (sub_18004A774.c)
 *     sub_18004B9DC @ 0x18004B9DC (sub_18004B9DC.c)
 *     sub_18004C088 @ 0x18004C088 (sub_18004C088.c)
 *     sub_18004C5C4 @ 0x18004C5C4 (sub_18004C5C4.c)
 *     sub_18004C658 @ 0x18004C658 (sub_18004C658.c)
 *     sub_180058180 @ 0x180058180 (sub_180058180.c)
 *     sub_180068E10 @ 0x180068E10 (sub_180068E10.c)
 *     sub_18008AF50 @ 0x18008AF50 (sub_18008AF50.c)
 *     sub_18008BE10 @ 0x18008BE10 (sub_18008BE10.c)
 *     sub_18008C410 @ 0x18008C410 (sub_18008C410.c)
 *     sub_18008CCE4 @ 0x18008CCE4 (sub_18008CCE4.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18005460C @ 0x18005460C (sub_18005460C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180056524(__int128 *a1, _QWORD *a2, unsigned int a3)
{
  __int64 v4; // rdx
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  __int64 v7; // rax
  __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  volatile signed __int32 *v13; // rcx
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v16[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v17; // [rsp+60h] [rbp+18h] BYREF

  v17 = a3;
  v4 = *((_QWORD *)a1 + 1);
  v15 = 0LL;
  if ( !v4 )
LABEL_21:
    sub_1800120F4();
  v5 = *(_DWORD *)(v4 + 8);
  do
  {
    if ( !v5 )
      goto LABEL_21;
    v6 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5);
  }
  while ( v6 != v5 );
  v15 = *a1;
  v7 = sub_18001D684();
  v8 = v7;
  if ( v7 )
  {
    *(_DWORD *)(v7 + 8) = 1;
    *(_DWORD *)(v7 + 12) = 1;
    *(_QWORD *)v7 = &std::_Ref_count_obj2<Spectre::Engine::ShaderPropertyLayout>::`vftable';
    sub_18005460C(v7 + 16, (__int64)&v15, &v17);
  }
  else
  {
    v8 = 0LL;
  }
  v9 = (_QWORD *)(v8 + 16);
  a2[1] = v8;
  *a2 = v8 + 16;
  if ( v8 != -16 )
  {
    v10 = *(_QWORD *)(v8 + 24);
    if ( !v10 || !*(_DWORD *)(v10 + 8) )
    {
      if ( v8 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
        v8 = a2[1];
      }
      v11 = 0LL;
      v16[0] = v9;
      v12 = 0LL;
      v16[1] = v8;
      if ( v8 )
      {
        v11 = v9;
        v12 = v8;
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 12));
      }
      *v9 = v11;
      v13 = (volatile signed __int32 *)v9[1];
      v9[1] = v12;
      if ( v13 && _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      sub_180010910((__int64)v16);
    }
  }
  sub_180010910((__int64)&v15);
  return a2;
}
