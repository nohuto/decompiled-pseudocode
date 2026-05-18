/*
 * XREFs of sub_18000EDBC @ 0x18000EDBC
 * Callers:
 *     sub_18000DA64 @ 0x18000DA64 (sub_18000DA64.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_18000D84C @ 0x18000D84C (sub_18000D84C.c)
 *     sub_18000F018 @ 0x18000F018 (sub_18000F018.c)
 *     sub_18000F364 @ 0x18000F364 (sub_18000F364.c)
 *     sub_18000FD34 @ 0x18000FD34 (sub_18000FD34.c)
 *     sub_18001031C @ 0x18001031C (sub_18001031C.c)
 *     sub_180010348 @ 0x180010348 (sub_180010348.c)
 */

__int64 __fastcall sub_18000EDBC(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  _DWORD *v8; // rbx
  _WORD *v9; // rcx
  unsigned __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int16 v13; // ax
  _WORD *v14; // rax
  int v15; // r8d
  unsigned __int64 v16; // r14
  int v17; // esi
  int v18; // eax
  __int64 v19; // rdx
  unsigned int v20; // edi
  __int64 v21; // rdx
  int v22; // r8d
  HANDLE ProcessHeap; // rax
  unsigned __int64 v25; // rax
  __int128 v26; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v27[528]; // [rsp+40h] [rbp-C0h] BYREF
  void *retaddr; // [rsp+298h] [rbp+198h]

  *a3 = 0LL;
  v6 = sub_18000F018(8u, 0x78uLL);
  v8 = (_DWORD *)v6;
  if ( v6 )
  {
    v26 = 0LL;
    if ( (v6 & 3) != 0 )
      sub_18001031C(v7);
    v9 = v27;
    v10 = v6 >> 2;
    v11 = a1 - (_QWORD)v27;
    v12 = 260LL;
    do
    {
      if ( v12 == -2147483386 )
        break;
      v13 = *(_WORD *)((char *)v9 + v11);
      if ( !v13 )
        break;
      *v9++ = v13;
      --v12;
    }
    while ( v12 );
    v14 = v9 - 1;
    if ( v12 )
      v14 = v9;
    *v14 = 0;
    sub_18000FD34(v27, v12, L"_p0");
    v15 = 1;
    v16 = v10 >> 31;
    v17 = v10 & 0x7FFFFFFF;
    if ( v17 )
      v15 = v17;
    v18 = sub_180010348((unsigned int)&v26, v17, v15, (unsigned int)v27);
    v20 = v18;
    if ( v18 < 0 )
    {
      v21 = 133LL;
LABEL_17:
      sub_18000F364(retaddr, v21, "wil", (unsigned int)v18);
      sub_18000F364(retaddr, 325LL, "wil", v20);
      sub_18000D84C((__int64 *)&v26);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v8);
      return v20;
    }
    sub_18000FD34(v27, v19, L"h");
    v22 = 1;
    if ( (_DWORD)v16 )
      v22 = v16;
    v18 = sub_180010348((unsigned int)&v26 + 8, v16, v22, (unsigned int)v27);
    v20 = v18;
    if ( v18 < 0 )
    {
      v21 = 137LL;
      goto LABEL_17;
    }
    *v8 = 1;
    *((_QWORD *)v8 + 1) = *a2;
    v25 = v26;
    *a2 = 0LL;
    *((_OWORD *)v8 + 1) = __PAIR128__(*((unsigned __int64 *)&v26 + 1), v25);
    v26 = 0uLL;
    memset((char *)v8 + 34, 0, 0x56uLL);
    *((_WORD *)v8 + 16) = 88;
    v8[9] = 1;
    memset(v8 + 10, 0, 0x50uLL);
    *a3 = v8;
    sub_18000D84C((__int64 *)&v26);
    return 0LL;
  }
  else
  {
    sub_18000F364(retaddr, 322LL, "wil", 2147942414LL);
    return 2147942414LL;
  }
}
