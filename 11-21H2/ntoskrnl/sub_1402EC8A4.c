/*
 * XREFs of sub_1402EC8A4 @ 0x1402EC8A4
 * Callers:
 *     sub_140291EE4 @ 0x140291EE4 (sub_140291EE4.c)
 *     sub_1402B5240 @ 0x1402B5240 (sub_1402B5240.c)
 *     sub_1402EE104 @ 0x1402EE104 (sub_1402EE104.c)
 * Callees:
 *     sub_1402EB944 @ 0x1402EB944 (sub_1402EB944.c)
 *     sub_1402EC920 @ 0x1402EC920 (sub_1402EC920.c)
 */

_QWORD *__fastcall sub_1402EC8A4(ULONG_PTR a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rdi
  ULONG_PTR v4; // rcx

  result = (_QWORD *)(a1 + 8);
  if ( (_QWORD *)*result != result )
  {
    if ( *(_DWORD *)(a1 + 4) )
    {
      result = (_QWORD *)sub_1402EC920(a1);
      v3 = result;
      if ( result )
      {
        result = (_QWORD *)sub_1402EB944((__int64)KeGetCurrentPrcb(), a1, (__int64)result, 0);
        if ( !(_BYTE)result )
        {
          ++*(_DWORD *)(a1 + 4);
          v4 = a1 + 24;
          result = *(_QWORD **)(a1 + 24);
          if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 )
            __fastfail(3u);
          *v3 = result;
          v3[1] = v4;
          result[1] = v3;
          *(_QWORD *)v4 = v3;
        }
      }
    }
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return result;
}
