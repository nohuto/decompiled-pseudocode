/*
 * XREFs of IoResolveDependency @ 0x1403CBF80
 * Callers:
 *     <none>
 * Callees:
 *     sub_14076ACA8 @ 0x14076ACA8 (sub_14076ACA8.c)
 *     sub_14076BC20 @ 0x14076BC20 (sub_14076BC20.c)
 *     sub_14076BD4C @ 0x14076BD4C (sub_14076BD4C.c)
 *     sub_1407756F4 @ 0x1407756F4 (sub_1407756F4.c)
 *     sub_14084428C @ 0x14084428C (sub_14084428C.c)
 *     sub_1408442B0 @ 0x1408442B0 (sub_1408442B0.c)
 *     sub_1408442E8 @ 0x1408442E8 (sub_1408442E8.c)
 *     sub_14084436C @ 0x14084436C (sub_14084436C.c)
 *     sub_14084440C @ 0x14084440C (sub_14084440C.c)
 *     sub_14084442C @ 0x14084442C (sub_14084442C.c)
 *     sub_14085CB58 @ 0x14085CB58 (sub_14085CB58.c)
 *     sub_1409429D4 @ 0x1409429D4 (sub_1409429D4.c)
 *     sub_140942B10 @ 0x140942B10 (sub_140942B10.c)
 *     sub_140942B4C @ 0x140942B4C (sub_140942B4C.c)
 *     sub_140942CE4 @ 0x140942CE4 (sub_140942CE4.c)
 */

__int64 __fastcall IoResolveDependency(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  void *v6; // r8
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rsi
  int v11; // edi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // [rsp+20h] [rbp-18h] BYREF
  __int64 v19; // [rsp+28h] [rbp-10h]

  v2 = a1;
  v18 = 1LL;
  LOBYTE(a1) = 1;
  sub_1407756F4(a1);
  v19 = v2;
  v4 = sub_14084436C(&v18);
  v6 = (void *)v4;
  if ( v4 )
  {
    v15 = *(_QWORD *)(v4 + 48);
    if ( !v15 )
    {
      v11 = 0;
      if ( a2 )
      {
        v16 = *(_QWORD *)(a2 + 312);
        if ( *(_QWORD *)(v16 + 80) )
        {
          sub_140942CE4(*(PVOID *)(v16 + 80), v6);
          goto LABEL_8;
        }
      }
      sub_140942B4C(a2, v6);
      goto LABEL_7;
    }
    if ( v15 == a2 )
    {
      v11 = 0;
      goto LABEL_12;
    }
    sub_1409429D4(v6, v2);
  }
  if ( !a2 || (v7 = *(_QWORD *)(a2 + 312), !*(_QWORD *)(v7 + 80)) )
  {
    LODWORD(v18) = 0;
    v19 = a2;
    v8 = sub_14084442C(&v18, v5, v6);
    v10 = v8;
    if ( v8 )
    {
      v11 = sub_1408442E8(v8, v2, v9);
      if ( v11 >= 0 )
      {
        sub_14084440C(v10);
        goto LABEL_7;
      }
      sub_14085CB58(a2, v10);
      sub_14084440C(v10);
    }
    else
    {
      v11 = -1073741670;
    }
LABEL_12:
    sub_14084428C();
    return (unsigned int)v11;
  }
  v11 = sub_1408442E8(*(_QWORD *)(v7 + 80), v2, v6);
  if ( v11 < 0 )
    goto LABEL_12;
LABEL_7:
  if ( a2 )
  {
LABEL_8:
    v12 = *(_QWORD *)(a2 + 312);
    v13 = *(_QWORD *)(v12 + 40);
    if ( v13 && (*(_DWORD *)(v13 + 396) & 0x20000) == 0 && (unsigned __int8)sub_140942B10(*(_QWORD *)(v12 + 40)) )
      sub_14076ACA8(v17);
  }
  sub_14076BD4C(a2);
  sub_1408442B0(a2);
  sub_14084428C();
  sub_14076BC20();
  return (unsigned int)v11;
}
