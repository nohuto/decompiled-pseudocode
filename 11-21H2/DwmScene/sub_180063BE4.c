/*
 * XREFs of sub_180063BE4 @ 0x180063BE4
 * Callers:
 *     sub_180062060 @ 0x180062060 (sub_180062060.c)
 *     sub_180064450 @ 0x180064450 (sub_180064450.c)
 *     sub_18007D3EC @ 0x18007D3EC (sub_18007D3EC.c)
 *     sub_18007F0F0 @ 0x18007F0F0 (sub_18007F0F0.c)
 *     sub_1800A8370 @ 0x1800A8370 (sub_1800A8370.c)
 *     sub_1800A8588 @ 0x1800A8588 (sub_1800A8588.c)
 *     sub_1800ACF60 @ 0x1800ACF60 (sub_1800ACF60.c)
 *     sub_1800AD2F0 @ 0x1800AD2F0 (sub_1800AD2F0.c)
 * Callees:
 *     sub_180028544 @ 0x180028544 (sub_180028544.c)
 */

_QWORD *__fastcall sub_180063BE4(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // eax
  _QWORD *v4; // rdx
  __int64 *v5; // r10
  __int64 *v6; // r8
  __int64 v7; // rcx
  __int64 *v8; // r9
  __int64 v9; // rax

  v3 = sub_180028544(*a3);
  v6 = (__int64 *)v5[1];
  v7 = 0LL;
  v8 = v5;
  while ( !*((_BYTE *)v6 + 25) )
  {
    if ( *((_DWORD *)v6 + 8) >= v3 )
    {
      v8 = v6;
      v6 = (__int64 *)*v6;
    }
    else
    {
      v6 = (__int64 *)v6[2];
    }
  }
  if ( *((_BYTE *)v8 + 25) || v3 < *((_DWORD *)v8 + 8) || v8 == v5 )
  {
    v4[1] = 0LL;
    *v4 = 0LL;
  }
  else
  {
    *v4 = 0LL;
    v4[1] = 0LL;
    v9 = v8[6];
    if ( v9 )
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    *v4 = v8[5];
    v7 = v8[6];
  }
  v4[1] = v7;
  return v4;
}
