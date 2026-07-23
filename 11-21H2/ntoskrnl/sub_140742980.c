/*
 * XREFs of sub_140742980 @ 0x140742980
 * Callers:
 *     sub_140741B7C @ 0x140741B7C (sub_140741B7C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140689388 @ 0x140689388 (sub_140689388.c)
 *     sub_1407435A8 @ 0x1407435A8 (sub_1407435A8.c)
 *     sub_14080C884 @ 0x14080C884 (sub_14080C884.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 */

__int64 __fastcall sub_140742980(__int64 a1)
{
  int v1; // eax
  unsigned int v3; // ebx
  bool v5; // bp
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  UUID Uuid; // [rsp+20h] [rbp-38h] BYREF

  v1 = *(_DWORD *)(a1 + 104);
  v3 = 0;
  Uuid = 0LL;
  if ( (v1 & 8) != 0 )
  {
    return (unsigned int)-1073741431;
  }
  else if ( (v1 & 1) == 0 )
  {
    v5 = (int)sub_1407435A8(&Uuid) >= 0;
    v6 = (*(_DWORD *)(a1 + 104) & 2) != 0 ? 4 : 0;
    sub_140689388(0);
    v7 = sub_14080C884(a1, 0LL);
    v3 = v7;
    if ( v7 < 0 && v7 != -1073741697 && v7 != -1073741757 && v7 != -1073741670 && v5 )
    {
      *(_DWORD *)(a1 + 104) &= ~2u;
      v3 = sub_14080C884(a1, &Uuid);
    }
    sub_140AB4260(v9, v8, v10, v11);
    *(_DWORD *)(v6 + a1 + 108) = v3;
  }
  return v3;
}
