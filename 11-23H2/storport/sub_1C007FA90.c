/*
 * XREFs of sub_1C007FA90 @ 0x1C007FA90
 * Callers:
 *     sub_1C007B138 @ 0x1C007B138 (sub_1C007B138.c)
 *     sub_1C007B1C8 @ 0x1C007B1C8 (sub_1C007B1C8.c)
 * Callees:
 *     sub_1C0055B44 @ 0x1C0055B44 (sub_1C0055B44.c)
 *     sub_1C0055B8C @ 0x1C0055B8C (sub_1C0055B8C.c)
 *     sub_1C007A530 @ 0x1C007A530 (sub_1C007A530.c)
 *     sub_1C007D14C @ 0x1C007D14C (sub_1C007D14C.c)
 *     sub_1C007D38C @ 0x1C007D38C (sub_1C007D38C.c)
 *     sub_1C007FC98 @ 0x1C007FC98 (sub_1C007FC98.c)
 *     sub_1C008061C @ 0x1C008061C (sub_1C008061C.c)
 *     sub_1C0081478 @ 0x1C0081478 (sub_1C0081478.c)
 */

__int64 __fastcall sub_1C007FA90(__int64 a1, __int64 a2, char a3, char a4)
{
  int *v4; // rbp
  ULONG_PTR v5; // r12
  ULONG_PTR v7; // r15
  int v9; // edi
  __int64 v10; // r11
  __int64 v11; // r14
  bool v12; // dl
  __int64 v13; // r8
  const char *v14; // rdx
  __int64 v15; // r8
  unsigned int v17; // [rsp+70h] [rbp+8h] BYREF
  __int64 v18; // [rsp+78h] [rbp+10h] BYREF
  char v19; // [rsp+88h] [rbp+20h]

  v19 = a4;
  v4 = *(int **)a1;
  v5 = *(_QWORD *)(a2 + 40);
  v7 = *(_QWORD *)(a2 + 48);
  v18 = 0LL;
  v17 = 0;
  v9 = sub_1C0055B44(v4, v5, &v18, &v17);
  if ( v9 >= 0 )
  {
    v11 = v18;
    v12 = !a3 && v19 != 0;
    *(_BYTE *)(v18 + 56) = -(a3 != 0) - 4;
    *(_BYTE *)(v11 + 57) = v12;
    v9 = sub_1C0081478(v11, v17, v10, 2, *(_DWORD *)(v10 + 8), *(_DWORD *)(v10 + 4));
    if ( v9 >= 0 )
    {
      sub_1C007A530(*(_DWORD *)(v11 + 16));
      v9 = sub_1C007D14C(v4, v5, v13, 0);
      if ( v9 >= 0 )
      {
        v14 = "StartTransaction";
        if ( !a3 )
          v14 = "EndTransaction";
        sub_1C0055B8C(v4, v14, 0, 0, 0LL, 0LL);
        v9 = sub_1C007D14C(v4, v7, v15, 1);
        if ( v9 >= 0 )
        {
          sub_1C0055B44(v4, v7, &v18, &v17);
          if ( !(unsigned int)sub_1C007FC98(a1, v18, v17) )
            v9 = sub_1C008061C(a1);
          _InterlockedExchange((volatile __int32 *)(a1 + 52), 0);
        }
      }
    }
  }
  sub_1C007D38C(v4, v5, v7);
  return (unsigned int)v9;
}
