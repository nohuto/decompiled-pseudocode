/*
 * XREFs of sub_140764814 @ 0x140764814
 * Callers:
 *     sub_140763800 @ 0x140763800 (sub_140763800.c)
 *     sub_140764758 @ 0x140764758 (sub_140764758.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1407648E4 @ 0x1407648E4 (sub_1407648E4.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140764814(void *Src, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v6; // ebx
  unsigned __int64 v7; // rdi
  void *Pool2; // rax
  __int64 v9; // rdi
  __int64 v10; // rcx
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  *a4 = 0LL;
  v6 = 0;
  if ( Src )
  {
    v6 = sub_1407648E4(Src, a2, &v12);
    if ( v6 >= 0 )
    {
      v7 = v12;
      if ( v12 > 2 )
      {
        if ( is_mul_ok(v12, 2uLL) )
        {
          v6 = 0;
          Pool2 = (void *)ExAllocatePool2(256LL, 2 * v12, 1466986064LL);
          *a4 = Pool2;
          if ( Pool2 )
          {
            memmove(Pool2, Src, 2 * v7);
            v9 = 2 * v7;
            v10 = 2LL;
            do
            {
              v9 -= 2LL;
              *(_WORD *)(v9 + *a4) = 0;
              --v10;
            }
            while ( v10 );
          }
          else
          {
            return (unsigned int)-1073741670;
          }
        }
        else
        {
          return (unsigned int)-1073741675;
        }
      }
    }
  }
  return (unsigned int)v6;
}
