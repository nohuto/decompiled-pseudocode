/*
 * XREFs of sub_1406986FC @ 0x1406986FC
 * Callers:
 *     sub_140698510 @ 0x140698510 (sub_140698510.c)
 * Callees:
 *     sub_1406987CC @ 0x1406987CC (sub_1406987CC.c)
 *     sub_140699288 @ 0x140699288 (sub_140699288.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406986FC(int a1, int a2, int a3, __int64 a4, PVOID *a5)
{
  __int64 Pool2; // rax
  int v10; // eax
  unsigned int v11; // ebx
  _DWORD v13[4]; // [rsp+50h] [rbp-28h] BYREF

  v13[0] = 40;
  *a5 = 0LL;
  do
  {
    if ( *a5 )
      ExFreePoolWithTag(*a5, 0x58706E50u);
    Pool2 = ExAllocatePool2(256LL, 2LL * v13[0], 1483763280LL);
    *a5 = (PVOID)Pool2;
    if ( !Pool2 )
    {
      v11 = -1073741670;
      goto LABEL_12;
    }
    if ( a2 )
      v10 = sub_1406987CC(v13[0], a1, a2, a3, a4, Pool2, v13[0], (__int64)v13);
    else
      v10 = sub_140699288(qword_140D00AC0, a3, a4, Pool2, v13[0], (__int64)v13);
    v11 = v10;
  }
  while ( v10 == -1073741789 );
  if ( v10 >= 0 )
    return v11;
LABEL_12:
  if ( *a5 )
  {
    ExFreePoolWithTag(*a5, 0x58706E50u);
    *a5 = 0LL;
  }
  return v11;
}
