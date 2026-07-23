/*
 * XREFs of sub_14085CA7C @ 0x14085CA7C
 * Callers:
 *     sub_14081059C @ 0x14081059C (sub_14081059C.c)
 *     sub_14085C97C @ 0x14085C97C (sub_14085C97C.c)
 * Callees:
 *     sub_14085CAE8 @ 0x14085CAE8 (sub_14085CAE8.c)
 *     sub_140942DE4 @ 0x140942DE4 (sub_140942DE4.c)
 */

__int64 __fastcall sub_14085CA7C(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebp
  _QWORD *v4; // r14
  _QWORD *v5; // rbx
  _QWORD *v7; // rsi
  _QWORD *v8; // rdi
  _QWORD *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]

  v11 = 0LL;
  LODWORD(v12) = 0;
  if ( a1 )
  {
    v3 = 0;
    sub_14085CAE8(a1, a2);
    v4 = (_QWORD *)(a1 + 32);
    v5 = *(_QWORD **)(a1 + 32);
    while ( v5 != v4 )
    {
      v7 = v5;
      v5 = (_QWORD *)*v5;
      if ( !*((_BYTE *)v7 + 56) )
      {
        v8 = (_QWORD *)v7[5];
        while ( v8 != v7 + 5 )
        {
          v9 = v8;
          v8 = (_QWORD *)*v8;
          if ( *((_DWORD *)v9 + 4) == 1 )
          {
            v10 = v7[3];
            LODWORD(v11) = 0;
            v12 = *(_QWORD *)(v10 + 48);
            v3 = sub_140942DE4(&v11);
          }
        }
        *((_BYTE *)v7 + 56) = 1;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
