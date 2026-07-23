/*
 * XREFs of sub_1407ED0C8 @ 0x1407ED0C8
 * Callers:
 *     sub_1407ECFCC @ 0x1407ECFCC (sub_1407ECFCC.c)
 *     sub_140A14498 @ 0x140A14498 (sub_140A14498.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_14075B444 @ 0x14075B444 (sub_14075B444.c)
 *     sub_140797F3C @ 0x140797F3C (sub_140797F3C.c)
 *     sub_1407ED16C @ 0x1407ED16C (sub_1407ED16C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void *__fastcall sub_1407ED0C8(__int64 a1, int a2, unsigned int a3)
{
  _QWORD *v6; // rax
  void *v7; // rbx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+28h] [rbp-10h]

  v9 = 0LL;
  v10 = 0;
  v6 = sub_14075B444(a1, 0x580uLL);
  v7 = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 4) = 0;
    *((_DWORD *)v6 + 6) |= 1u;
    *v6 = 0LL;
    v6[1] = a1;
    *((_DWORD *)v6 + 5) = a2;
    if ( (unsigned int)sub_140797F3C((__int64)v6, 0, &v9, 0xCu) )
    {
      if ( (unsigned int)sub_1407ED16C(v7, &v9, a3) )
        return v7;
    }
    else
    {
      sub_1406E0C3C(1LL, (__int64)"SdbpOpenDatabaseInMemory");
    }
    ExFreePoolWithTag(v7, 0x74705041u);
  }
  else
  {
    sub_1406E0C3C(1LL, (__int64)"SdbpOpenDatabaseInMemory");
  }
  return 0LL;
}
