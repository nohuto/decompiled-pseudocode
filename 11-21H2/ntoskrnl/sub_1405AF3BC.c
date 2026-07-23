/*
 * XREFs of sub_1405AF3BC @ 0x1405AF3BC
 * Callers:
 *     sub_1405BF718 @ 0x1405BF718 (sub_1405BF718.c)
 * Callees:
 *     sub_1402BEEA0 @ 0x1402BEEA0 (sub_1402BEEA0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1403872A4 @ 0x1403872A4 (sub_1403872A4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405AD9AC @ 0x1405AD9AC (sub_1405AD9AC.c)
 *     sub_1405BFE08 @ 0x1405BFE08 (sub_1405BFE08.c)
 */

__int64 __fastcall sub_1405AF3BC(__int64 a1, unsigned int a2, __int64 a3, _WORD *a4)
{
  unsigned int v5; // ebp
  __int64 v7; // r12
  ULONG_PTR v8; // r13
  __int64 result; // rax
  unsigned __int64 v10; // rdi
  __int64 v11; // rbx
  char v12; // al
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int16 v16; // cx
  unsigned __int64 v17; // rsi
  __int64 v18; // r13
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // r14
  int v21; // [rsp+30h] [rbp-98h] BYREF
  int v22; // [rsp+34h] [rbp-94h] BYREF
  _WORD *v23; // [rsp+38h] [rbp-90h]
  __int64 v24; // [rsp+40h] [rbp-88h]
  ULONG_PTR v25; // [rsp+48h] [rbp-80h]
  _QWORD v26[2]; // [rsp+50h] [rbp-78h] BYREF
  __int128 v27; // [rsp+60h] [rbp-68h]

  v23 = a4;
  v5 = 0;
  v21 = 0;
  v7 = qword_14001C780[a2];
  v24 = v7;
  v8 = a1 & ~(v7 - 1);
  v25 = v8;
  result = sub_1403872A4(a3, v8, a2, 1LL, 32, &v21);
  v10 = result;
  if ( result )
  {
    v11 = *(_QWORD *)(result + 16);
    v12 = sub_1402F2700(result);
    v15 = 1023LL;
    v26[1] = (v11 & 0x3E0) != 0;
    v27 = 0LL;
    LOBYTE(v27) = v12;
    v26[0] = v8;
    if ( *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL)) == a3 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v16 = *a4;
      v17 = v10 + 48 * v7 - 48;
      if ( v17 >= v10 )
      {
        v18 = (__int64)v23;
        v19 = v17 + 24;
        v20 = (unsigned __int64)(v16 & 0x3FF) << 43;
        do
        {
          v22 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)v19, 0x3FuLL) )
          {
            do
              sub_1402F32E0(&v22, v15, v13, v14);
            while ( *(__int64 *)v19 < 0 );
          }
          if ( (*(_BYTE *)(v19 + 11) & 0x40) != 0 )
            sub_1405AD9AC(v17, a3, v18);
          *(_QWORD *)(v19 + 16) = v20 | *(_QWORD *)(v19 + 16) & 0xFFE007FFFFFFFFFFuLL;
          if ( v17 != v10 )
            _InterlockedAnd64((volatile signed __int64 *)v19, 0x7FFFFFFFFFFFFFFFuLL);
          v17 -= 48LL;
          v19 -= 48LL;
        }
        while ( v17 >= v10 );
        v7 = v24;
        v8 = v25;
      }
      sub_1405BFE08(v23, a3, v8, v7);
      v5 = 1;
    }
    sub_1402BEEA0((__int64)v26);
    return v5;
  }
  return result;
}
