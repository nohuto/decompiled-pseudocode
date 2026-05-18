/*
 * XREFs of sub_18005E29C @ 0x18005E29C
 * Callers:
 *     sub_18002F830 @ 0x18002F830 (sub_18002F830.c)
 *     sub_18007E464 @ 0x18007E464 (sub_18007E464.c)
 *     sub_180091F9C @ 0x180091F9C (sub_180091F9C.c)
 *     sub_1800D9B40 @ 0x1800D9B40 (sub_1800D9B40.c)
 *     sub_1800D9F90 @ 0x1800D9F90 (sub_1800D9F90.c)
 *     sub_1800E7B30 @ 0x1800E7B30 (sub_1800E7B30.c)
 *     sub_1800E7FB0 @ 0x1800E7FB0 (sub_1800E7FB0.c)
 *     sub_1800E8560 @ 0x1800E8560 (sub_1800E8560.c)
 *     sub_1800E9C20 @ 0x1800E9C20 (sub_1800E9C20.c)
 *     sub_1800EA210 @ 0x1800EA210 (sub_1800EA210.c)
 *     sub_1800EA840 @ 0x1800EA840 (sub_1800EA840.c)
 *     sub_1800EE7A4 @ 0x1800EE7A4 (sub_1800EE7A4.c)
 *     sub_1800EEF60 @ 0x1800EEF60 (sub_1800EEF60.c)
 *     sub_1800EF4E0 @ 0x1800EF4E0 (sub_1800EF4E0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18005E29C(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 *v3; // r10
  __int64 v4; // rax
  __int64 *v5; // r9
  __int64 *v6; // rcx
  __int64 v7; // rcx
  _QWORD *result; // rax

  v3 = *(__int64 **)(a1 + 112);
  v4 = 0LL;
  v5 = v3;
  v6 = (__int64 *)v3[1];
  while ( !*((_BYTE *)v6 + 25) )
  {
    if ( *((_DWORD *)v6 + 8) >= a3 )
    {
      v5 = v6;
      v6 = (__int64 *)*v6;
    }
    else
    {
      v6 = (__int64 *)v6[2];
    }
  }
  if ( *((_BYTE *)v5 + 25) || a3 < *((_DWORD *)v5 + 8) || v5 == v3 )
  {
    a2[1] = 0LL;
    v7 = 0LL;
  }
  else
  {
    v7 = v5[6];
    *a2 = 0LL;
    a2[1] = 0LL;
    if ( v7 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      v7 = v5[6];
    }
    v4 = v5[5];
  }
  *a2 = v4;
  result = a2;
  a2[1] = v7;
  return result;
}
