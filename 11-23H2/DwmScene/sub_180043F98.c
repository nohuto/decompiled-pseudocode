/*
 * XREFs of sub_180043F98 @ 0x180043F98
 * Callers:
 *     sub_18004C480 @ 0x18004C480 (sub_18004C480.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_1800397A0 @ 0x1800397A0 (sub_1800397A0.c)
 *     sub_1800435C8 @ 0x1800435C8 (sub_1800435C8.c)
 *     ?GetUMSBackgroundPoller@ResourceManager@details@Concurrency@@QEAAPEAVUMSBackgroundPoller@23@XZ_0 @ 0x1800443B4 (-GetUMSBackgroundPoller@ResourceManager@details@Concurrency@@QEAAPEAVUMSBackgroundPoller@23@XZ_0.c)
 *     sub_1800444A4 @ 0x1800444A4 (sub_1800444A4.c)
 *     sub_1800444B8 @ 0x1800444B8 (sub_1800444B8.c)
 *     sub_180060ADC @ 0x180060ADC (sub_180060ADC.c)
 *     sub_180060AF4 @ 0x180060AF4 (sub_180060AF4.c)
 *     sub_180084738 @ 0x180084738 (sub_180084738.c)
 *     sub_180086AFC @ 0x180086AFC (sub_180086AFC.c)
 *     sub_180086BE0 @ 0x180086BE0 (sub_180086BE0.c)
 *     sub_180087454 @ 0x180087454 (sub_180087454.c)
 *     sub_180088290 @ 0x180088290 (sub_180088290.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180043F98(
        Concurrency::details::ResourceManager *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        char a5)
{
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // r8
  __int64 v12; // r11
  __int64 v13; // rcx
  bool v14; // al
  __int64 v15; // r13
  unsigned int i; // edi
  _QWORD *v17; // rax
  bool v18; // r12
  Concurrency::details::ResourceManager *v19; // r14
  unsigned __int8 v20; // al
  __int64 v21; // rdi
  _QWORD v23[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v24; // [rsp+48h] [rbp-18h] BYREF
  __int64 v25; // [rsp+50h] [rbp-10h]
  Concurrency::details::ResourceManager *v26; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v27; // [rsp+A8h] [rbp+48h] BYREF
  int v28; // [rsp+B0h] [rbp+50h]

  v27 = a2;
  v26 = a1;
  v28 = *(_DWORD *)(*a4 + 88);
  v7 = 0;
  Concurrency::details::ResourceManager::GetUMSBackgroundPoller(a1);
  v9 = sub_180060ADC(*(_QWORD *)(v8 + 136));
  sub_180060AF4(v13, v23, v10 | v9 | v11, *(unsigned int *)(v12 + 104));
  v14 = sub_180011DE0(v23);
  v15 = v23[0];
  if ( v14 )
  {
    sub_180011C50(*a4 + 72, &v24);
    sub_180086BE0(v15, &v24);
    if ( !(unsigned __int8)sub_1800444B8(v15 + 128) )
    {
      sub_180011C50(*a4 + 72, &v24);
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 192LL))(v24, &v27);
      if ( v25 )
        sub_180010530(v25);
      for ( i = 0; i < 6; ++i )
      {
        if ( ((1 << i) & (unsigned int)v27) != 0 )
        {
          v17 = (_QWORD *)sub_180087454(v15, &v24, i);
          v18 = sub_180011DE0(v17);
          if ( v25 )
            sub_180010530(v25);
          if ( v18 )
            v7 |= 1 << i;
        }
      }
      v19 = v26;
      v20 = sub_1800444A4(v26);
      sub_180086AFC(v15, (_DWORD)a4, v20, v7, a5);
      sub_180084738(*((_QWORD *)v19 + 15), a4, v7);
      v21 = *((_QWORD *)v19 + 21);
      if ( v21 )
      {
        LODWORD(v26) = v28;
        if ( sub_1800435C8(v21 + 128, (__int64)&v26) == *(_QWORD *)(v21 + 128) )
        {
          sub_180011C50(*a4 + 72, &v24);
          sub_180088290(*((_QWORD *)v19 + 21), &v24);
          if ( v25 )
            sub_180010530(v25);
        }
        sub_1800397A0(*a4);
      }
    }
  }
  *(_QWORD *)a2 = v15;
  *(_QWORD *)(a2 + 8) = v23[1];
  *(_DWORD *)(a2 + 16) = v7;
  return a2;
}
