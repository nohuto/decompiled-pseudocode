/*
 * XREFs of sub_14067EE40 @ 0x14067EE40
 * Callers:
 *     sub_1402089E0 @ 0x1402089E0 (sub_1402089E0.c)
 *     sub_14053F5E8 @ 0x14053F5E8 (sub_14053F5E8.c)
 *     sub_140658008 @ 0x140658008 (sub_140658008.c)
 *     sub_14067BE48 @ 0x14067BE48 (sub_14067BE48.c)
 *     sub_14067E1BC @ 0x14067E1BC (sub_14067E1BC.c)
 *     sub_14069E98C @ 0x14069E98C (sub_14069E98C.c)
 *     sub_1406E8680 @ 0x1406E8680 (sub_1406E8680.c)
 *     sub_14071BC94 @ 0x14071BC94 (sub_14071BC94.c)
 *     sub_14090D9E8 @ 0x14090D9E8 (sub_14090D9E8.c)
 *     sub_14090DEF0 @ 0x14090DEF0 (sub_14090DEF0.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_14091CD70 @ 0x14091CD70 (sub_14091CD70.c)
 *     sub_14091CE30 @ 0x14091CE30 (sub_14091CE30.c)
 *     sub_1409237B4 @ 0x1409237B4 (sub_1409237B4.c)
 *     sub_1409239EC @ 0x1409239EC (sub_1409239EC.c)
 * Callees:
 *     sub_14069F668 @ 0x14069F668 (sub_14069F668.c)
 *     sub_140920E78 @ 0x140920E78 (sub_140920E78.c)
 */

__int64 __fastcall sub_14067EE40(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 *v4; // rdi
  __int64 *v6; // rbx
  __int16 v7; // r12
  __int64 v9; // rdi
  signed __int64 *v10; // rsi
  signed __int64 v11; // rbx
  __int64 result; // rax
  _PRIVILEGE_SET *v13; // rcx
  _PRIVILEGE_SET *v14; // rcx

  v4 = (__int64 *)(a1 + 120);
  v6 = *(__int64 **)(a1 + 120);
  v7 = a2;
  while ( v6 != v4 )
  {
    if ( *(v6 - 2) )
    {
      LOBYTE(a2) = a4;
      result = sub_14069F668(v6 - 4, a2, 0LL);
    }
    v14 = (_PRIVILEGE_SET *)_InterlockedExchange64(v6 + 7, 0LL);
    if ( v14 )
      result = sub_140920E78(v14);
    *((_WORD *)v6 + 8) |= v7;
    v6 = (__int64 *)*v6;
  }
  v9 = 0LL;
  v10 = (signed __int64 *)(a1 + 136);
  do
  {
    v11 = *v10;
    if ( (unsigned __int64)*v10 >= 3 )
    {
      result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v9 + 136), 2LL, v11);
      if ( v11 == result )
      {
        if ( *(_QWORD *)(v11 + 16) )
        {
          LOBYTE(a2) = a4;
          sub_14069F668(v11, a2, 0LL);
        }
        v13 = (_PRIVILEGE_SET *)_InterlockedExchange64((volatile __int64 *)(v11 + 88), 0LL);
        if ( v13 )
          sub_140920E78(v13);
        *(_WORD *)(v11 + 48) |= v7;
        result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v9 + 136), v11, 2LL);
      }
    }
    v9 = (unsigned int)(v9 + 1);
    ++v10;
  }
  while ( (unsigned int)v9 < 4 );
  return result;
}
