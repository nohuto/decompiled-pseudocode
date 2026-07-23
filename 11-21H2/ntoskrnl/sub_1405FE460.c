/*
 * XREFs of sub_1405FE460 @ 0x1405FE460
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A88738 @ 0x140A88738 (sub_140A88738.c)
 *     sub_140A88A3C @ 0x140A88A3C (sub_140A88A3C.c)
 */

__int64 __fastcall sub_1405FE460(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        _QWORD *a8)
{
  _QWORD *Pool2; // rbx
  int v11; // edi

  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 24LL, 1449943368LL);
  if ( Pool2 )
  {
    sub_140A88738(a1);
    v11 = sub_14042A5E0(a1, a2);
    if ( v11 < 0 )
    {
      ExFreePoolWithTag(Pool2, 0);
    }
    else
    {
      Pool2[2] = *a8;
      sub_140A88A3C(Pool2);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v11;
}
