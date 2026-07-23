/*
 * XREFs of sub_1407448BC @ 0x1407448BC
 * Callers:
 *     sub_14074761C @ 0x14074761C (sub_14074761C.c)
 *     sub_140747740 @ 0x140747740 (sub_140747740.c)
 *     sub_14084F060 @ 0x14084F060 (sub_14084F060.c)
 *     sub_14094C2D0 @ 0x14094C2D0 (sub_14094C2D0.c)
 *     sub_14094E998 @ 0x14094E998 (sub_14094E998.c)
 *     DoScreenSave @ 0x14094EA0C (DoScreenSave.c)
 *     sub_14094ED84 @ 0x14094ED84 (sub_14094ED84.c)
 *     sub_14094F4CC @ 0x14094F4CC (sub_14094F4CC.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140746CCC @ 0x140746CCC (sub_140746CCC.c)
 *     sub_1407476FC @ 0x1407476FC (sub_1407476FC.c)
 *     sub_14077F2EC @ 0x14077F2EC (sub_14077F2EC.c)
 */

__int64 __fastcall sub_1407448BC(__int64 a1, __int64 a2, _QWORD *a3)
{
  _BYTE *v6; // rcx
  __int64 v7; // r9
  __int64 *v8; // rdx
  _QWORD *v9; // r8
  __int64 v10; // rax
  int v11; // ebp
  unsigned int v12; // edi
  int *v13; // rsi
  _BYTE v15[128]; // [rsp+40h] [rbp-A8h] BYREF

  memset(a3, 0, 0x48uLL);
  a3[1] = a1;
  if ( a2 )
  {
    a3[2] = a2;
  }
  else
  {
    v11 = sub_14077F2EC(qword_140D00AC0, a1, 16, 0, 983103, 0, (__int64)(a3 + 2), 0LL);
    if ( v11 < 0 )
    {
LABEL_13:
      sub_1407476FC(a3);
      return (unsigned int)v11;
    }
    *(_DWORD *)a3 |= 0x80000000;
  }
  memset(v15, 0, 0x78uLL);
  v6 = &v15[8];
  v7 = 3LL;
  v8 = off_140D3B738;
  v9 = a3 + 3;
  do
  {
    v10 = *v8++;
    *((_QWORD *)v6 + 1) = v9;
    v9 += 2;
    *((_QWORD *)v6 - 1) = v10;
    *(_DWORD *)v6 = 8210;
    *((_DWORD *)v6 + 5) = 6;
    v6 += 40;
    --v7;
  }
  while ( v7 );
  v11 = sub_140746CCC((_DWORD)v6, a3[1], 1, a3[2], (__int64)v15, 3);
  if ( v11 < 0 )
    goto LABEL_13;
  v12 = 0;
  v13 = (int *)&v15[32];
  do
  {
    if ( *v13 < 0 )
      RtlInitUnicodeString((PUNICODE_STRING)&a3[2 * v12 + 3], 0LL);
    ++v12;
    v13 += 10;
  }
  while ( v12 < 3 );
  return (unsigned int)v11;
}
