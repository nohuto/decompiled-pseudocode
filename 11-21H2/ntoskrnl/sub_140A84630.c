/*
 * XREFs of sub_140A84630 @ 0x140A84630
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A83CA4 @ 0x140A83CA4 (sub_140A83CA4.c)
 *     sub_140A88430 @ 0x140A88430 (sub_140A88430.c)
 *     sub_140A88738 @ 0x140A88738 (sub_140A88738.c)
 *     sub_140A8942C @ 0x140A8942C (sub_140A8942C.c)
 */

__int64 __fastcall sub_140A84630(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  int v8; // r14d
  __int64 v9; // rbx
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v8 = sub_140A88738(a1);
  v9 = sub_140A88430(a1);
  if ( !v9 || (sub_140A83CA4(0), (result = sub_140A8942C(v8, v9, (_DWORD)retaddr, a2, a3, a4)) == 0) )
  {
    result = sub_14042A5E0(a1, a2);
    if ( result )
    {
      if ( v9 )
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 172));
    }
  }
  return result;
}
