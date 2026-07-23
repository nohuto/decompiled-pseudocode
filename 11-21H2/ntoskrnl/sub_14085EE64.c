/*
 * XREFs of sub_14085EE64 @ 0x14085EE64
 * Callers:
 *     sub_1408301C0 @ 0x1408301C0 (sub_1408301C0.c)
 *     sub_1408303C0 @ 0x1408303C0 (sub_1408303C0.c)
 *     sub_140A35D9C @ 0x140A35D9C (sub_140A35D9C.c)
 * Callees:
 *     sub_14085EF30 @ 0x14085EF30 (sub_14085EF30.c)
 *     sub_140A35A74 @ 0x140A35A74 (sub_140A35A74.c)
 */

__int64 __fastcall sub_14085EE64(__int64 *a1, __int64 a2, _WORD *a3)
{
  __int64 v6; // rbx
  __int16 v7; // ax
  __int64 v8; // r8
  int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v14; // rdx

  if ( !a1 )
    return 3221225485LL;
  v6 = *a1;
  if ( !*a1 || !a2 || !*(_WORD *)(a2 + 4) && *(__int16 *)(a2 + 6) < 0 )
    return 3221225485LL;
  v7 = sub_14085EF30(*a1);
  v8 = (unsigned __int16)v7;
  if ( v7 < 0 )
  {
    v9 = *(unsigned __int16 *)(v6 + 6);
    v10 = *(unsigned __int16 *)(v6 + 4);
    if ( (unsigned __int16)v9 >= (unsigned __int16)v10 )
    {
      v14 = (unsigned int)(v9 + 4);
      if ( (unsigned int)v14 >= v10 )
      {
        v6 = sub_140A35A74(v6, v14, v8);
        if ( !v6 )
          return 3221225495LL;
      }
      *a1 = v6;
    }
    LOWORD(v8) = *(_WORD *)(v6 + 6);
    v11 = *(_QWORD *)(v6 + 16);
    v12 = 28LL * (__int16)v8;
    *(_WORD *)(v6 + 6) = v8 + 1;
    *(_OWORD *)(v12 + v11) = *(_OWORD *)a2;
    *(_QWORD *)(v12 + v11 + 16) = *(_QWORD *)(a2 + 16);
    *(_DWORD *)(v12 + v11 + 24) = *(_DWORD *)(a2 + 24);
  }
  if ( a3 )
    *a3 = v8;
  return 0LL;
}
