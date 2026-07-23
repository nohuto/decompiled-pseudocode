/*
 * XREFs of sub_140772648 @ 0x140772648
 * Callers:
 *     sub_1406EB6A0 @ 0x1406EB6A0 (sub_1406EB6A0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

_UNKNOWN **__fastcall sub_140772648(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7)
{
  _UNKNOWN **result; // rax
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  if ( a6 )
  {
    v11 = a6;
    v12 = a5 + 8;
    do
    {
      v13 = 0LL;
      if ( *(_DWORD *)v12 )
      {
        while ( 1 )
        {
          v14 = *(_QWORD *)(*(_QWORD *)(v12 - 8) + 8 * v13);
          if ( *(_DWORD *)(a4 + 16) == *(_DWORD *)(v14 + 16) )
          {
            v15 = *(_QWORD *)a4 - *(_QWORD *)v14;
            if ( *(_QWORD *)a4 == *(_QWORD *)v14 )
              v15 = *(_QWORD *)(a4 + 8) - *(_QWORD *)(v14 + 8);
            if ( !v15 )
              break;
          }
          v13 = (unsigned int)(v13 + 1);
          if ( (unsigned int)v13 >= *(_DWORD *)v12 )
            goto LABEL_6;
        }
        *(_QWORD *)(a7 + 16) = *(_QWORD *)(v12 + 8);
        result = (_UNKNOWN **)sub_14042A5E0(a1, a2);
      }
LABEL_6:
      v12 += 24LL;
      --v11;
    }
    while ( v11 );
  }
  return result;
}
