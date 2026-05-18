/*
 * XREFs of sub_180052B30 @ 0x180052B30
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_1800436D4 @ 0x1800436D4 (sub_1800436D4.c)
 *     sub_180049838 @ 0x180049838 (sub_180049838.c)
 *     sub_1800520F8 @ 0x1800520F8 (sub_1800520F8.c)
 *     sub_1800521F8 @ 0x1800521F8 (sub_1800521F8.c)
 *     sub_1800690B8 @ 0x1800690B8 (sub_1800690B8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180052B30(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v4; // r14
  char v5; // si
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rdx
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  __int64 v14; // rdi
  unsigned __int8 v15; // bl
  __int64 v16; // rcx
  unsigned __int8 v17; // r14
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  __int128 v22; // [rsp+30h] [rbp-40h] BYREF
  __int64 v23[2]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v24[2]; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v25[16]; // [rsp+60h] [rbp-10h] BYREF

  v4 = 0LL;
  v5 = 1;
  if ( sub_1800521F8((__int64)a1) )
  {
    v6 = 0LL;
    do
    {
      v7 = a1[13];
      v8 = *(_QWORD *)(v6 + v7);
      if ( v8 && *(_BYTE *)(v6 + v7 + 16) )
      {
        v9 = *(_QWORD *)(v8 + 144);
        if ( v9 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v9 + 8), 1u);
          v9 = *(_QWORD *)(v8 + 144);
        }
        v24[0] = *(_QWORD *)(v8 + 136);
        v24[1] = v9;
        v10 = (_QWORD *)sub_1800690B8(v24[0], v25);
        (*(void (__fastcall **)(_QWORD, _QWORD *, unsigned __int64, __int64))(*(_QWORD *)*v10 + 40LL))(*v10, a1, v4, a2);
        sub_180010910((__int64)v25);
        sub_180010910((__int64)v24);
      }
      ++v4;
      v6 += 88LL;
    }
    while ( v4 < sub_1800521F8((__int64)a1) );
  }
  sub_1800520F8((__int64)a1, (__int64)v23);
  if ( sub_1800122C0(v23) )
  {
    v22 = 0LL;
    v11 = a1[8];
    if ( v11 )
    {
      v12 = *(_DWORD *)(v11 + 8);
      while ( v12 )
      {
        v13 = v12;
        v12 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 8), v12 + 1, v12);
        if ( v13 == v12 )
        {
          v14 = a1[7];
          v22 = *(_OWORD *)(a1 + 7);
          goto LABEL_15;
        }
      }
    }
    v14 = v22;
LABEL_15:
    v15 = sub_180049838(v23[0], 9u);
    v17 = sub_180049838(v16, 8u);
    sub_1800436D4(v14);
    v18 = *(_QWORD *)(v14 + 448) | 0x100LL;
    if ( !v17 )
      v18 = *(_QWORD *)(v14 + 448) & 0xFFFFFFFFFFFFFEFFuLL;
    *(_QWORD *)(v14 + 448) = v18;
    sub_1800436D4(v14);
    v19 = *(_QWORD *)(v14 + 448) | 0x200LL;
    if ( !v15 )
      v19 = *(_QWORD *)(v14 + 448) & 0xFFFFFFFFFFFFFDFFuLL;
    *(_QWORD *)(v14 + 448) = v19;
    if ( !v15 && v17 )
      v5 = 0;
    sub_1800436D4(v14);
    v20 = *(_QWORD *)(v14 + 448) | 0x10000LL;
    if ( !v5 )
      v20 = *(_QWORD *)(v14 + 448) & 0xFFFFFFFFFFFEFFFFuLL;
    *(_QWORD *)(v14 + 448) = v20;
    sub_180010910((__int64)&v22);
  }
  return sub_180010910((__int64)v23);
}
