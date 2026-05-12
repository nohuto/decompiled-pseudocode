/*
 * XREFs of sub_1C005A04C @ 0x1C005A04C
 * Callers:
 *     sub_1C0058378 @ 0x1C0058378 (sub_1C0058378.c)
 *     sub_1C00586DC @ 0x1C00586DC (sub_1C00586DC.c)
 *     sub_1C0058FA8 @ 0x1C0058FA8 (sub_1C0058FA8.c)
 *     sub_1C005A188 @ 0x1C005A188 (sub_1C005A188.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0 @ 0x1C005B568 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0.c)
 *     sub_1C005B7F4 @ 0x1C005B7F4 (sub_1C005B7F4.c)
 *     sub_1C005B9F4 @ 0x1C005B9F4 (sub_1C005B9F4.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0042880 @ 0x1C0042880 (sub_1C0042880.c)
 *     sub_1C0079C54 @ 0x1C0079C54 (sub_1C0079C54.c)
 *     sub_1C007A280 @ 0x1C007A280 (sub_1C007A280.c)
 *     sub_1C007A484 @ 0x1C007A484 (sub_1C007A484.c)
 */

__int64 __fastcall sub_1C005A04C(int *a1, unsigned int a2, __int64 a3, _BYTE *a4)
{
  int v5; // eax
  __int64 v8; // rdi
  __int64 v9; // rsi
  int v10; // ebx
  _OWORD v12[3]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v13; // [rsp+50h] [rbp-48h]

  v13 = 0LL;
  v5 = *a1;
  memset(v12, 0, sizeof(v12));
  if ( v5 == 1431193940 )
  {
    if ( (*((_BYTE *)a1 + 451) & 0x40) != 0 )
      return (unsigned int)-1073741637;
    v8 = *((_QWORD *)a1 + 437);
    if ( !v8 )
      return (unsigned int)-1073741637;
    v9 = *((_QWORD *)a1 + 438);
  }
  else
  {
    if ( v5 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*((_BYTE *)a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v8 = *((_QWORD *)a1 + 751);
    if ( !v8 )
      return (unsigned int)-1073741637;
    v9 = *((_QWORD *)a1 + 752);
  }
  if ( !v9 )
    return (unsigned int)-1073741637;
  v10 = sub_1C007A484(v8, 2LL, v12);
  if ( v10 >= 0 )
  {
    v10 = ((__int64 (__fastcall *)(__int64, _OWORD *, _QWORD, __int64))sub_1C007A280)(v8, v12, a2, a3);
    if ( v10 >= 0 )
    {
      *(_QWORD *)(a3 + 48) *= *(unsigned int *)(v9 + 100);
      *(_QWORD *)(a3 + 56) *= *(unsigned int *)(v9 + 100);
    }
    else
    {
      sub_1C0042880(a4, 32LL, (__int64)"TcglibGetLockingObject");
    }
    sub_1C0079C54(v8, v12);
  }
  else
  {
    sub_1C0042880(a4, 32LL, (__int64)"TcglibOpenSession");
  }
  return (unsigned int)v10;
}
