/*
 * XREFs of sub_14077DE70 @ 0x14077DE70
 * Callers:
 *     sub_140762C04 @ 0x140762C04 (sub_140762C04.c)
 *     sub_14076341C @ 0x14076341C (sub_14076341C.c)
 *     sub_140763500 @ 0x140763500 (sub_140763500.c)
 *     sub_1407635A4 @ 0x1407635A4 (sub_1407635A4.c)
 *     sub_140763800 @ 0x140763800 (sub_140763800.c)
 *     sub_14076426C @ 0x14076426C (sub_14076426C.c)
 *     sub_1407646C0 @ 0x1407646C0 (sub_1407646C0.c)
 *     sub_140764758 @ 0x140764758 (sub_140764758.c)
 *     sub_140764970 @ 0x140764970 (sub_140764970.c)
 *     sub_1407661D0 @ 0x1407661D0 (sub_1407661D0.c)
 *     sub_140778100 @ 0x140778100 (sub_140778100.c)
 *     sub_140778830 @ 0x140778830 (sub_140778830.c)
 *     sub_14077D784 @ 0x14077D784 (sub_14077D784.c)
 *     sub_14078BF98 @ 0x14078BF98 (sub_14078BF98.c)
 *     sub_1409539A8 @ 0x1409539A8 (sub_1409539A8.c)
 * Callees:
 *     sub_1402E0978 @ 0x1402E0978 (sub_1402E0978.c)
 *     sub_1402E0AC4 @ 0x1402E0AC4 (sub_1402E0AC4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14077DE70(_WORD *a1, unsigned __int64 a2, ULONG a3, PVOID *a4)
{
  int v4; // ebx
  unsigned __int64 v9; // rbx
  _WORD *Pool2; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v11 = 0LL;
  *a4 = 0LL;
  if ( a1 )
  {
    v4 = sub_1402E0AC4(a1, a2, &v11);
    if ( v4 >= 0 )
    {
      if ( !v11 )
        return (unsigned int)v4;
      v9 = 2 * (v11 + 1);
      if ( is_mul_ok(v11 + 1, 2uLL) )
      {
        Pool2 = (_WORD *)ExAllocatePool2(256LL, 2 * (v11 + 1), a3);
        *a4 = Pool2;
        if ( Pool2 )
        {
          v4 = sub_1402E0978(Pool2, v9, (__int64)a1);
          if ( v4 >= 0 )
            return (unsigned int)v4;
        }
        else
        {
          v4 = -1073741670;
        }
      }
      else
      {
        v4 = -1073741675;
      }
    }
    if ( *a4 )
    {
      ExFreePoolWithTag(*a4, a3);
      *a4 = 0LL;
    }
  }
  return (unsigned int)v4;
}
