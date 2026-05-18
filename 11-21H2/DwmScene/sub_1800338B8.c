/*
 * XREFs of sub_1800338B8 @ 0x1800338B8
 * Callers:
 *     sub_18003A638 @ 0x18003A638 (sub_18003A638.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE04 @ 0x18001DE04 (sub_18001DE04.c)
 *     sub_18001DE7C @ 0x18001DE7C (sub_18001DE7C.c)
 *     sub_18001F31C @ 0x18001F31C (sub_18001F31C.c)
 *     sub_18001F56C @ 0x18001F56C (sub_18001F56C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800338B8(__int64 *a1, __int64 a2)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r8
  __int128 v12; // [rsp+20h] [rbp-48h] BYREF
  __int128 v13; // [rsp+30h] [rbp-38h]
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF

  v4 = *a1;
  v5 = *(_QWORD *)(*a1 + 8);
  *(_QWORD *)&v13 = v5;
  DWORD2(v13) = 0;
  v6 = v4;
  while ( !*(_BYTE *)(v5 + 25) )
  {
    *(_QWORD *)&v13 = v5;
    if ( (unsigned __int8)sub_18001DE04((_QWORD *)(v5 + 32), (_QWORD *)a2) )
    {
      DWORD2(v13) = 0;
      v5 = *(_QWORD *)(v5 + 16);
    }
    else
    {
      DWORD2(v13) = 1;
      v6 = v5;
      v5 = *(_QWORD *)v5;
    }
  }
  if ( *(_BYTE *)(v6 + 25) || (unsigned __int8)sub_18001DE04((_QWORD *)a2, (_QWORD *)(v6 + 32)) )
  {
    if ( a1[1] == 0x38E38E38E38E38ELL )
      sub_18001F56C();
    v14 = v4;
    v12 = (unsigned __int64)a1;
    v7 = sub_180011088(0x48uLL);
    *(_QWORD *)(v7 + 48) = 0LL;
    *(_QWORD *)(v7 + 56) = 0LL;
    *(_OWORD *)(v7 + 32) = *(_OWORD *)a2;
    *(_OWORD *)(v7 + 48) = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 24) = 15LL;
    *(_BYTE *)a2 = 0;
    *(_DWORD *)(v7 + 64) = 0;
    sub_18001DE7C((__int64 *)v7, &v14);
    sub_18001DE7C((__int64 *)(v8 + 8), &v14);
    sub_18001DE7C((__int64 *)(v9 + 16), &v14);
    *(_WORD *)(v10 + 24) = 0;
    v12 = v13;
    v6 = sub_18001F31C(a1, (__int64)&v12, v10);
  }
  return v6 + 64;
}
