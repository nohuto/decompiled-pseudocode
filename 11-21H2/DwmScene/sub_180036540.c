/*
 * XREFs of sub_180036540 @ 0x180036540
 * Callers:
 *     sub_18001A2B0 @ 0x18001A2B0 (sub_18001A2B0.c)
 *     sub_180034E40 @ 0x180034E40 (sub_180034E40.c)
 *     sub_18006D0B0 @ 0x18006D0B0 (sub_18006D0B0.c)
 *     sub_180071A08 @ 0x180071A08 (sub_180071A08.c)
 *     sub_1800729F8 @ 0x1800729F8 (sub_1800729F8.c)
 *     sub_1800737B0 @ 0x1800737B0 (sub_1800737B0.c)
 *     sub_180074808 @ 0x180074808 (sub_180074808.c)
 *     sub_1800751B0 @ 0x1800751B0 (sub_1800751B0.c)
 *     sub_180075490 @ 0x180075490 (sub_180075490.c)
 *     sub_180076154 @ 0x180076154 (sub_180076154.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180036888 @ 0x180036888 (sub_180036888.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180036540(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  __int64 *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  volatile signed __int32 *v10; // rcx
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 *v13; // rdi
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  _QWORD v17[2]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v18[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( !*a4 )
  {
    v7 = (__int64 *)sub_180036888(a1, v18);
    v8 = *v7;
    v9 = v7[1];
    *v7 = 0LL;
    v7[1] = 0LL;
    v17[0] = *a4;
    *a4 = v8;
    v17[1] = a4[1];
    a4[1] = v9;
    sub_180010910((__int64)v17);
    sub_180010910((__int64)v18);
  }
  v10 = 0LL;
  v11 = a4[1];
  if ( v11 )
  {
    v10 = (volatile signed __int32 *)a4[1];
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 12));
  }
  v12 = *(__int64 **)(*(_QWORD *)(a1 + 728) + 8LL);
  v13 = *(__int64 **)(a1 + 728);
  while ( !*((_BYTE *)v12 + 25) )
  {
    if ( v12[5] >= (unsigned __int64)v10 )
    {
      v13 = v12;
      v12 = (__int64 *)*v12;
    }
    else
    {
      v12 = (__int64 *)v12[2];
    }
  }
  if ( *((_BYTE *)v13 + 25) || (unsigned __int64)v10 < v13[5] )
    v13 = *(__int64 **)(a1 + 728);
  if ( v10 && _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
  if ( v13 == *(__int64 **)(a1 + 728) || (v14 = (_QWORD *)v13[6], !((v13[7] - (__int64)v14) >> 4)) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    v15 = v14[1];
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
      v15 = v14[1];
    }
    *a2 = *v14;
    a2[1] = v15;
  }
  sub_180010910((__int64)a4);
  return a2;
}
