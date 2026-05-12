/*
 * XREFs of sub_1C00580FC @ 0x1C00580FC
 * Callers:
 *     sub_1C0050C54 @ 0x1C0050C54 (sub_1C0050C54.c)
 *     sub_1C0052C58 @ 0x1C0052C58 (sub_1C0052C58.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0042880 @ 0x1C0042880 (sub_1C0042880.c)
 *     sub_1C00596F4 @ 0x1C00596F4 (sub_1C00596F4.c)
 *     sub_1C005B184 @ 0x1C005B184 (sub_1C005B184.c)
 *     sub_1C0079980 @ 0x1C0079980 (sub_1C0079980.c)
 *     sub_1C0079C54 @ 0x1C0079C54 (sub_1C0079C54.c)
 *     sub_1C0079D34 @ 0x1C0079D34 (sub_1C0079D34.c)
 *     sub_1C007A484 @ 0x1C007A484 (sub_1C007A484.c)
 */

__int64 __fastcall sub_1C00580FC(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned int a4, __int64 a5, _BYTE *a6)
{
  unsigned int v6; // r12d
  int v7; // ebx
  char v8; // r15
  __int64 v10; // rdi
  _BYTE *v11; // rax
  const char *v13; // r8
  __int64 v14; // r8
  _OWORD v15[2]; // [rsp+30h] [rbp-59h] BYREF
  int v16; // [rsp+50h] [rbp-39h]
  _OWORD v17[3]; // [rsp+58h] [rbp-31h] BYREF
  __int64 v18; // [rsp+88h] [rbp-1h]

  v6 = a3;
  v16 = 0;
  v7 = 0;
  v18 = 0LL;
  v8 = a2;
  memset(v15, 0, sizeof(v15));
  memset(v17, 0, sizeof(v17));
  if ( a3 >= 2u || !(_BYTE)a2 && a3 != 1 )
    return (unsigned int)-1073741811;
  if ( *(_DWORD *)a1 == 1431193940 )
  {
    if ( (*(_BYTE *)(a1 + 451) & 0x40) != 0 )
      return (unsigned int)-1073741637;
    v10 = *(_QWORD *)(a1 + 3496);
    if ( !v10 )
      return (unsigned int)-1073741637;
    v11 = *(_BYTE **)(a1 + 3504);
  }
  else
  {
    if ( *(_DWORD *)a1 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*(_BYTE *)(a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v10 = *(_QWORD *)(a1 + 6008);
    if ( !v10 )
      return (unsigned int)-1073741637;
    v11 = *(_BYTE **)(a1 + 6016);
  }
  if ( !v11 || !(_BYTE)a2 && (!v11[152] || !v11[153]) )
    return (unsigned int)-1073741637;
  if ( !v11[53] )
  {
    LOBYTE(a2) = 1;
    v7 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, _OWORD *, _BYTE *))sub_1C00596F4)(
           v10,
           a2,
           a4,
           a5,
           v15,
           a6);
    if ( v7 >= 0 )
    {
      v7 = sub_1C007A484(v10, 1LL, v17);
      if ( v7 < 0 )
      {
        sub_1C0042880(a6, 32LL, (__int64)"TcglibOpenSession");
        return (unsigned int)v7;
      }
      v7 = sub_1C0079980(v10, v17, v6, v15);
      if ( v7 < 0 )
      {
        v13 = "TcglibActivateLockingSpEx";
LABEL_30:
        sub_1C0042880(a6, 32LL, (__int64)v13);
        goto LABEL_31;
      }
      sub_1C0079C54(v10, v17);
      v7 = sub_1C005B184(a1, a6);
      if ( v7 >= 0 )
      {
        v7 = sub_1C007A484(v10, 2LL, v17);
        if ( v7 < 0 )
        {
          v13 = "TcglibOpenSession";
          goto LABEL_30;
        }
        LOBYTE(v14) = v8 == 0;
        v7 = sub_1C0079D34(v10, v17, v14, v15);
        if ( v7 < 0 )
        {
          v13 = "TcglibConfigureLockingSpEx";
          goto LABEL_30;
        }
      }
LABEL_31:
      sub_1C0079C54(v10, v17);
    }
  }
  return (unsigned int)v7;
}
