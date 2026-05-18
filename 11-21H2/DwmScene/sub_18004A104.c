/*
 * XREFs of sub_18004A104 @ 0x18004A104
 * Callers:
 *     sub_18004A0D8 @ 0x18004A0D8 (sub_18004A0D8.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_180049850 @ 0x180049850 (sub_180049850.c)
 */

bool __fastcall sub_18004A104(__int64 a1, unsigned __int16 a2)
{
  _QWORD *v4; // rax
  bool v5; // bl
  __int64 *v7; // rcx
  __int64 *v8; // rdx
  __int64 *v9; // rax
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (_QWORD *)sub_180049850(a1, (__int64)v10);
  v5 = sub_1800122C0(v4);
  sub_180010910((__int64)v10);
  if ( v5 )
    return 1;
  v7 = *(__int64 **)(a1 + 200);
  v8 = v7;
  v9 = (__int64 *)v7[1];
  while ( !*((_BYTE *)v9 + 25) )
  {
    if ( *((_WORD *)v9 + 14) >= a2 )
    {
      v7 = v9;
      v9 = (__int64 *)*v9;
    }
    else
    {
      v9 = (__int64 *)v9[2];
    }
  }
  return !*((_BYTE *)v7 + 25) && a2 >= *((_WORD *)v7 + 14) && v7 != v8 && (unsigned int)(*((_DWORD *)v7 + 8) - 1) <= 1;
}
