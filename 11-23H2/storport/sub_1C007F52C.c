/*
 * XREFs of sub_1C007F52C @ 0x1C007F52C
 * Callers:
 *     sub_1C0079C54 @ 0x1C0079C54 (sub_1C0079C54.c)
 *     sub_1C007DA18 @ 0x1C007DA18 (sub_1C007DA18.c)
 * Callees:
 *     sub_1C0055B44 @ 0x1C0055B44 (sub_1C0055B44.c)
 *     sub_1C0055B8C @ 0x1C0055B8C (sub_1C0055B8C.c)
 *     sub_1C007A530 @ 0x1C007A530 (sub_1C007A530.c)
 *     sub_1C007D14C @ 0x1C007D14C (sub_1C007D14C.c)
 *     sub_1C007D404 @ 0x1C007D404 (sub_1C007D404.c)
 *     sub_1C007FC98 @ 0x1C007FC98 (sub_1C007FC98.c)
 *     sub_1C00801DC @ 0x1C00801DC (sub_1C00801DC.c)
 *     sub_1C0081478 @ 0x1C0081478 (sub_1C0081478.c)
 */

__int64 __fastcall sub_1C007F52C(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r15
  int *v5; // r14
  int v7; // edi
  __int64 v8; // r13
  unsigned int v9; // edx
  int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 result; // rax
  unsigned int v14; // [rsp+80h] [rbp+48h] BYREF
  __int64 v15; // [rsp+88h] [rbp+50h] BYREF
  __int64 v16; // [rsp+90h] [rbp+58h] BYREF
  __int64 v17; // [rsp+98h] [rbp+60h] BYREF

  v2 = *(_QWORD *)(a2 + 40);
  v3 = *(_QWORD *)(a2 + 48);
  v5 = *(int **)a1;
  v15 = 0LL;
  v7 = 0;
  v14 = 0;
  v17 = v2;
  v16 = v3;
  if ( v2 && v3 )
  {
    sub_1C0055B44(v5, v2, &v15, &v14);
    v8 = v15;
    v9 = v14;
    v10 = v15;
    *(_BYTE *)(v15 + 56) = -6;
    v7 = sub_1C0081478(v10, v9, a2, 1, *(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 4));
    if ( v7 >= 0 )
    {
      sub_1C007A530(*(_DWORD *)(v8 + 16));
      v7 = sub_1C007D14C(v5, v2, v11, 0);
      if ( v7 >= 0 )
      {
        sub_1C0055B8C(v5, "CloseSession", 0, 0, 0LL, 0LL);
        v7 = sub_1C007D14C(v5, v3, v12, 1);
        if ( v7 >= 0 )
        {
          sub_1C0055B44(v5, v3, &v15, &v14);
          if ( !(unsigned int)sub_1C007FC98(a1, v15, v14) )
            v7 = sub_1C00801DC(a1);
          _InterlockedExchange((volatile __int32 *)(a1 + 52), 0);
        }
      }
    }
    sub_1C007D404(v5, &v17, &v16);
    *(_QWORD *)(a2 + 40) = 0LL;
    *(_QWORD *)(a2 + 48) = 0LL;
  }
  *(_QWORD *)(a2 + 4) = 0LL;
  result = (unsigned int)v7;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_WORD *)(a2 + 24) = 0;
  return result;
}
