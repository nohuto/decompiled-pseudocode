/*
 * XREFs of sub_1800F2230 @ 0x1800F2230
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800DA9A8 @ 0x1800DA9A8 (sub_1800DA9A8.c)
 *     sub_1800F17D0 @ 0x1800F17D0 (sub_1800F17D0.c)
 *     sub_1800F27A8 @ 0x1800F27A8 (sub_1800F27A8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800F2230(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 *v5; // rsi
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 **v10; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 v14[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+38h] [rbp-28h]
  __int64 v17; // [rsp+40h] [rbp-20h]
  __int64 v18; // [rsp+48h] [rbp-18h]
  __int64 v19; // [rsp+50h] [rbp-10h]
  __int64 v20; // [rsp+58h] [rbp-8h]
  __int64 v21; // [rsp+90h] [rbp+30h] BYREF

  sub_1800F27A8(a1, v14);
  sub_1800DA9A8(v14[0], &v21);
  v2 = **(__int64 ***)(a1 + 552);
  v3 = v21;
  while ( !*((_BYTE *)v2 + 25) )
  {
    v4 = v2[5] + 144;
    if ( v2[5] + 48 != v4 )
    {
      v5 = (__int64 *)(v2[5] + 88);
      do
      {
        v6 = *(v5 - 5);
        v15 = v6;
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
        v7 = *(v5 - 4);
        v16 = v7;
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
        v8 = *(v5 - 2);
        if ( v8 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
          v8 = *(v5 - 2);
          v3 = v21;
          v7 = v16;
          v6 = v15;
        }
        v17 = *(v5 - 3);
        v18 = v8;
        v9 = *v5;
        if ( *v5 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
          v9 = *v5;
          v3 = v21;
          v7 = v16;
          v6 = v15;
        }
        v19 = *(v5 - 1);
        v20 = v9;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 944LL))(v3, v6);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 944LL))(v3, v7);
        sub_1800F17D0(&v15);
        v5 += 6;
      }
      while ( v5 - 5 != (__int64 *)v4 );
    }
    v10 = (__int64 **)v2[2];
    if ( *((_BYTE *)v10 + 25) )
    {
      for ( i = (__int64 *)v2[1]; !*((_BYTE *)i + 25) && v2 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v2 = i;
      v2 = i;
    }
    else
    {
      v2 = (__int64 *)v2[2];
      for ( j = *v10; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v2 = j;
    }
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return sub_180010910((__int64)v14);
}
