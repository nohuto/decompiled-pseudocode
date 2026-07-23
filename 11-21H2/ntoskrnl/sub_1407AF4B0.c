/*
 * XREFs of sub_1407AF4B0 @ 0x1407AF4B0
 * Callers:
 *     PsRestoreImpersonation @ 0x140726090 (PsRestoreImpersonation.c)
 *     PsImpersonateClient @ 0x1407AF1B0 (PsImpersonateClient.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1407AF4B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rsi
  ULONG_PTR v7; // r14
  int v8; // eax
  bool v9; // dl
  BOOL v10; // ecx
  __int16 v11; // ax
  signed __int32 v13[8]; // [rsp+0h] [rbp-98h] BYREF
  char v14; // [rsp+20h] [rbp-78h]
  bool v15; // [rsp+21h] [rbp-77h]
  _DWORD *v16; // [rsp+28h] [rbp-70h]
  ULONG_PTR v17; // [rsp+30h] [rbp-68h]
  __int64 v18; // [rsp+38h] [rbp-60h]
  _OWORD v19[3]; // [rsp+48h] [rbp-50h] BYREF

  v18 = a1;
  memset(v19, 0, sizeof(v19));
  v6 = *(_DWORD **)(a1 + 240);
  v16 = v6;
  if ( v6 && (*(_DWORD *)(a1 + 116) & 0x400) == 0 )
  {
    v7 = *(_QWORD *)(a1 + 544);
    v17 = v7;
    if ( *(_QWORD *)(a2 + 184) == v7 )
    {
      v14 = 0;
    }
    else
    {
      sub_14030D5C0(v7, 0LL, (__int64)v19, a4);
      v14 = 1;
    }
    if ( a1 == a2 || sub_140347810((struct _EX_RUNDOWN_REF *)(a1 + 1352)) )
    {
      do
      {
        v8 = *(_DWORD *)(a1 + 1376) & 8;
        v9 = v8 != 0;
        v15 = v8 != 0;
        v10 = v8 != 0;
        v6[1511] = v10;
        v6[1530] = 0;
        if ( *(_QWORD *)(v7 + 1408) )
        {
          v11 = *(_WORD *)(v7 + 2412);
          if ( v11 == 332 || v11 == 452 )
          {
            v6[3047] = v10;
            v6[3057] = 0;
          }
        }
        _InterlockedOr(v13, 0);
      }
      while ( v9 != ((*(_DWORD *)(a1 + 1376) & 8) != 0) );
      if ( a1 != a2 )
        sub_1402AD030((struct _EX_RUNDOWN_REF *)(a1 + 1352));
    }
    if ( v14 )
      sub_1402D0930((__int64)v19, 0LL);
  }
  return 0LL;
}
