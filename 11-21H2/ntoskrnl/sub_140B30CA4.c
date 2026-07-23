/*
 * XREFs of sub_140B30CA4 @ 0x140B30CA4
 * Callers:
 *     sub_140B15F88 @ 0x140B15F88 (sub_140B15F88.c)
 * Callees:
 *     sub_140B2C540 @ 0x140B2C540 (sub_140B2C540.c)
 *     sub_140B4DCBC @ 0x140B4DCBC (sub_140B4DCBC.c)
 */

__int64 __fastcall sub_140B30CA4(__int64 a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rax
  __int64 *v4; // rbx
  __int64 result; // rax
  __int64 v6; // rax
  __int64 *v7; // rbx

  if ( !dword_140D011A8
    || (result = sub_140B2C540((__int64)L"DEVICES", 1), (int)(result + 0x80000000) < 0)
    || (_DWORD)result == -1073741772 )
  {
    v2 = *(_QWORD *)(a1 + 240);
    v3 = (__int64 *)(v2 + 312);
    v4 = *(__int64 **)(v2 + 312);
    while ( v4 != v3 )
    {
      if ( (*((_DWORD *)v4 + 6) & 0x80u) != 0 )
      {
        result = sub_140B2C540(v4[6], 1);
        if ( (int)result < 0 )
          return result;
      }
      v2 = *(_QWORD *)(a1 + 240);
      v4 = (__int64 *)*v4;
      v3 = (__int64 *)(v2 + 312);
    }
    if ( dword_140D011A8 )
    {
      v6 = v2 + 312;
      v7 = *(__int64 **)(v2 + 312);
      while ( v7 != (__int64 *)v6 )
      {
        if ( (v7[3] & 0x40) != 0 )
        {
          result = sub_140B4DCBC(v7);
          if ( (int)result < 0 )
            return result;
        }
        v7 = (__int64 *)*v7;
        v6 = *(_QWORD *)(a1 + 240) + 312LL;
      }
    }
    return 0LL;
  }
  return result;
}
