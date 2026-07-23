/*
 * XREFs of sub_1409A00F0 @ 0x1409A00F0
 * Callers:
 *     sub_14099FD78 @ 0x14099FD78 (sub_14099FD78.c)
 *     sub_14099FFFC @ 0x14099FFFC (sub_14099FFFC.c)
 * Callees:
 *     sub_1402E0AC4 @ 0x1402E0AC4 (sub_1402E0AC4.c)
 *     sub_1405DEF84 @ 0x1405DEF84 (sub_1405DEF84.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409A00F0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  _WORD *v5; // rsi
  int v6; // ebx
  unsigned __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 Pool2; // rax
  unsigned __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v5 = (_WORD *)(a3 + a2);
  *(_OWORD *)a1 = 0LL;
  v11 = 0LL;
  v6 = sub_1402E0AC4(v5, a4 - (_QWORD)v5, &v11);
  if ( v6 >= 0 )
  {
    v7 = v11;
    if ( v11 <= 0x7FFF )
    {
      if ( v11 )
      {
        v8 = 2 * v11;
        *(_WORD *)(a1 + 2) = 2 * v11;
        Pool2 = ExAllocatePool2(64LL, v8, 1817210704LL);
        *(_QWORD *)(a1 + 8) = Pool2;
        if ( Pool2 )
        {
          v6 = sub_1405DEF84(a1, (int)v5, v7);
          if ( v6 < 0 )
          {
            ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0x6C506F50u);
            *(_OWORD *)a1 = 0LL;
          }
        }
        else
        {
          *(_WORD *)(a1 + 2) = 0;
          return (unsigned int)-1073741670;
        }
      }
      else
      {
        return 0;
      }
    }
    else
    {
      return (unsigned int)-1073741820;
    }
  }
  return (unsigned int)v6;
}
