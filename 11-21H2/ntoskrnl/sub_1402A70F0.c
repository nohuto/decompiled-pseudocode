/*
 * XREFs of sub_1402A70F0 @ 0x1402A70F0
 * Callers:
 *     sub_1402FA820 @ 0x1402FA820 (sub_1402FA820.c)
 *     sub_1402FD4DC @ 0x1402FD4DC (sub_1402FD4DC.c)
 *     sub_1403841DC @ 0x1403841DC (sub_1403841DC.c)
 *     sub_140724008 @ 0x140724008 (sub_140724008.c)
 *     sub_14072ACC0 @ 0x14072ACC0 (sub_14072ACC0.c)
 *     SePrivilegeCheck @ 0x14072B5E0 (SePrivilegeCheck.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 *     sub_14079E490 @ 0x14079E490 (sub_14079E490.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1402A70F0(__int64 a1, __int64 a2, unsigned int a3, char a4, char a5)
{
  int v5; // r10d
  __int64 v7; // r9
  _DWORD *v8; // rax
  __int64 v9; // rdx
  int v10; // r11d
  unsigned __int8 v11; // cf
  __int64 v13; // [rsp+0h] [rbp-18h] BYREF
  __int64 v14; // [rsp+8h] [rbp-10h] BYREF

  v5 = 0;
  v14 = 0LL;
  v13 = 0LL;
  if ( a5 )
  {
    _InterlockedExchange64(&v14, *(_QWORD *)(a1 + 72));
    _InterlockedExchange64(&v13, *(_QWORD *)(a1 + 64));
    v7 = v14 & v13;
    _InterlockedOr((volatile signed __int32 *)&v13, 0);
    if ( a3 )
    {
      v8 = (_DWORD *)(a2 + 8);
      v9 = a3;
      do
      {
        v10 = *v8 & 0x7FFFFFFF;
        v11 = _bittest64(&v7, (unsigned int)*(v8 - 2));
        *v8 = v10;
        if ( v11 )
        {
          *v8 = v10 | 0x80000000;
          ++v5;
        }
        v8 += 3;
        --v9;
      }
      while ( v9 );
    }
    if ( (a4 & 1) != 0 )
    {
      if ( v5 != a3 )
        return 0;
    }
    else if ( !v5 )
    {
      return 0;
    }
  }
  return 1;
}
