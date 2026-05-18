/*
 * XREFs of sub_1800366A0 @ 0x1800366A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001DA38 @ 0x18001DA38 (sub_18001DA38.c)
 *     sub_180036888 @ 0x180036888 (sub_180036888.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800366A0(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  volatile signed __int32 *v11; // rcx
  __int64 v12; // rax
  __int64 *v13; // rax
  __int64 *v14; // rsi
  _QWORD *v15; // rdi
  _QWORD *v16; // rbp
  __int64 v17; // rsi
  __int64 v19; // rax
  _QWORD v20[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v21[40]; // [rsp+30h] [rbp-28h] BYREF

  if ( !*a4 )
  {
    v8 = (__int64 *)sub_180036888(a1, v21);
    v9 = *v8;
    v10 = v8[1];
    *v8 = 0LL;
    v8[1] = 0LL;
    v20[0] = *a4;
    *a4 = v9;
    v20[1] = a4[1];
    a4[1] = v10;
    sub_180010910((__int64)v20);
    sub_180010910((__int64)v21);
  }
  v11 = 0LL;
  v12 = a4[1];
  if ( v12 )
  {
    v11 = (volatile signed __int32 *)a4[1];
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 12));
  }
  v13 = *(__int64 **)(*(_QWORD *)(a1 + 728) + 8LL);
  v14 = *(__int64 **)(a1 + 728);
  while ( !*((_BYTE *)v13 + 25) )
  {
    if ( v13[5] >= (unsigned __int64)v11 )
    {
      v14 = v13;
      v13 = (__int64 *)*v13;
    }
    else
    {
      v13 = (__int64 *)v13[2];
    }
  }
  if ( *((_BYTE *)v14 + 25) || (unsigned __int64)v11 < v14[5] )
    v14 = *(__int64 **)(a1 + 728);
  if ( v11 && _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
  v15 = (_QWORD *)v14[6];
  v16 = (_QWORD *)v14[7];
  while ( 1 )
  {
    if ( v15 == v16 )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
      goto LABEL_21;
    }
    v17 = *v15;
    if ( sub_18001DA38((_QWORD *)(*v15 + 24LL), a3) )
      break;
    v15 += 2;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v19 = v15[1];
  if ( v19 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
    v17 = *v15;
    v19 = v15[1];
  }
  *a2 = v17;
  a2[1] = v19;
LABEL_21:
  sub_180010910((__int64)a4);
  return a2;
}
