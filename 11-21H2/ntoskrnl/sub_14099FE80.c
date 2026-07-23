/*
 * XREFs of sub_14099FE80 @ 0x14099FE80
 * Callers:
 *     sub_14099FFFC @ 0x14099FFFC (sub_14099FFFC.c)
 * Callees:
 *     sub_14099FD78 @ 0x14099FD78 (sub_14099FD78.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14099FE80(
        __int64 a1,
        char *a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 *a6,
        _QWORD *a7)
{
  _QWORD *Pool2; // rsi
  unsigned __int64 v8; // rdi
  char *v11; // r14
  int v13; // ebx
  unsigned __int64 v14; // r15
  unsigned __int64 i; // rbp
  __int64 v16; // r14
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rax
  __int64 v20; // [rsp+70h] [rbp+18h] BYREF

  v20 = 0LL;
  Pool2 = 0LL;
  v8 = 0LL;
  v11 = a2;
  if ( a3 )
  {
    if ( (unsigned __int64)&a2[44 * a3] <= a5 )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(64LL, 8 * a3, 1817210704LL);
      if ( Pool2 )
      {
        v13 = 0;
        v14 = 0LL;
        if ( a3 )
        {
          while ( 1 )
          {
            v13 = sub_14099FD78(a1, v11, a4, a5, &v20);
            if ( v13 < 0 )
              break;
            ++v14;
            Pool2[v8] = v20;
            v11 += 44;
            ++v8;
            if ( v14 >= a3 )
              goto LABEL_18;
          }
          for ( i = 0LL; i < v8; ++i )
          {
            v16 = Pool2[i];
            v17 = 0LL;
            if ( *(_QWORD *)(v16 + 72) )
            {
              do
              {
                ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(v16 + 80) + 8 * v17), 0x6C506F50u);
                v18 = *(_QWORD *)(v16 + 72);
                ++v17;
              }
              while ( v17 < v18 );
              if ( v18 )
                ExFreePoolWithTag(*(PVOID *)(v16 + 80), 0x6C506F50u);
            }
            ExFreePoolWithTag((PVOID)v16, 0x6C506F50u);
          }
          ExFreePoolWithTag(Pool2, 0x6C506F50u);
          Pool2 = 0LL;
          v8 = 0LL;
        }
      }
      else
      {
        v13 = -1073741670;
      }
    }
    else
    {
      v13 = -1073741306;
    }
  }
  else
  {
    v13 = -1073741811;
  }
LABEL_18:
  *a7 = Pool2;
  *a6 = v8;
  return (unsigned int)v13;
}
