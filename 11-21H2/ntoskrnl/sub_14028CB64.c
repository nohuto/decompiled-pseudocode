/*
 * XREFs of sub_14028CB64 @ 0x14028CB64
 * Callers:
 *     sub_14028CA70 @ 0x14028CA70 (sub_14028CA70.c)
 *     sub_1402B7320 @ 0x1402B7320 (sub_1402B7320.c)
 * Callees:
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402BEEA0 @ 0x1402BEEA0 (sub_1402BEEA0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_14033B6A0 @ 0x14033B6A0 (sub_14033B6A0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall sub_14028CB64(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // rbp
  __int64 v8; // rdx
  char v9; // al
  char v10; // r8
  char v11; // r9
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v16; // rdx
  bool v17; // zf
  signed __int32 v18; // eax
  _QWORD v20[2]; // [rsp+28h] [rbp-40h] BYREF
  __int128 v21; // [rsp+38h] [rbp-30h]

  v6 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  sub_1402F2700(a1);
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
  if ( a3 )
    v8 = 0LL;
  else
    v8 = 4294967293LL;
  *(_QWORD *)(a1 + 16) = sub_14033B6A0(*(_QWORD *)(a1 + 16), v8);
  v9 = *(_BYTE *)(a1 + 34);
  v20[0] = v7;
  v20[1] = a2;
  v21 = 0LL;
  *(_BYTE *)(a1 + 34) = v9 ^ (v9 ^ v10) & 7;
  LOBYTE(v21) = v11;
  v12 = sub_1402BEEA0(v20);
  v13 = v12;
  if ( v12 )
  {
    sub_14028CE10(v6, v12);
    v14 = v13;
    if ( (ULONG_PTR *)v6 != &StartContext )
      goto LABEL_14;
    CurrentPrcb = KeGetCurrentPrcb();
    v16 = *((int *)CurrentPrcb + 8615);
    if ( (_DWORD)v16 == -1 )
      goto LABEL_14;
    if ( v13 + v16 <= 0x100 )
    {
      do
      {
        if ( v13 >= 0x80000 )
          break;
        v18 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v13 + v16, v16);
        v17 = (_DWORD)v16 == v18;
        LODWORD(v16) = v18;
        if ( v17 )
          return v13;
      }
      while ( v18 != -1 && v13 + v18 <= 0x100 );
    }
    if ( (int)v16 > 192
      && (_DWORD)v16 == _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, 192, v16) )
    {
      v14 = v13 + (int)v16 - 192;
    }
    if ( v14 )
LABEL_14:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 16960), v14);
  }
  return v13;
}
