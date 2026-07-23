/*
 * XREFs of sub_1409A233C @ 0x1409A233C
 * Callers:
 *     sub_1409A2D68 @ 0x1409A2D68 (sub_1409A2D68.c)
 * Callees:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 */

__int64 __fastcall sub_1409A233C(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 result; // rax
  __int128 v5; // [rsp+30h] [rbp-9h] BYREF
  int v6; // [rsp+40h] [rbp+7h]
  int v7; // [rsp+44h] [rbp+Bh]
  __int64 v8; // [rsp+48h] [rbp+Fh]
  __int64 v9; // [rsp+50h] [rbp+17h]
  __int64 v10; // [rsp+58h] [rbp+1Fh]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp+27h]
  __int64 v12; // [rsp+68h] [rbp+2Fh]
  __int64 v13; // [rsp+70h] [rbp+37h]
  void *v14; // [rsp+78h] [rbp+3Fh]
  __int128 *v15; // [rsp+80h] [rbp+47h]
  __int64 v16; // [rsp+88h] [rbp+4Fh]

  if ( a1 )
  {
    result = *(_QWORD *)(a1 + 24);
    if ( result )
    {
      *((_QWORD *)&v5 + 1) = *(_QWORD *)(a1 + 24);
      v9 = *(int *)(a1 + 16);
      v10 = *(_QWORD *)(a1 + 8);
      v6 = a3;
      v7 = a2;
      *(_QWORD *)&v5 = 21LL;
      v8 = 416LL;
      v13 = 0LL;
      v16 = 0LL;
      CurrentThread = KeGetCurrentThread();
      v15 = &v5;
      v12 = a4;
      v14 = &sub_1409A24C0;
      return sub_14074F950(0x57u, &v5, 96, 0LL, 0);
    }
  }
  return result;
}
