/*
 * XREFs of sub_180013F50 @ 0x180013F50
 * Callers:
 *     sub_180014288 @ 0x180014288 (sub_180014288.c)
 *     sub_18004AC38 @ 0x18004AC38 (sub_18004AC38.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 */

void __fastcall sub_180013F50(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r8
  volatile signed __int32 *v7; // rcx

  *a1 = a2;
  a1[1] = a3;
  if ( a2 )
  {
    v3 = *(_QWORD *)(a2 + 16);
    if ( !v3 || !*(_DWORD *)(v3 + 8) )
    {
      if ( a3 )
        _InterlockedIncrement((volatile signed __int32 *)(a3 + 8));
      v4 = a1[1];
      v5 = 0LL;
      v6 = 0LL;
      if ( v4 )
      {
        v5 = a2;
        v6 = a1[1];
        _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
      }
      *(_QWORD *)(a2 + 8) = v5;
      v7 = *(volatile signed __int32 **)(a2 + 16);
      *(_QWORD *)(a2 + 16) = v6;
      if ( v7 )
        sub_180010574(v7);
      if ( v4 )
        sub_180010530(v4);
    }
  }
}
