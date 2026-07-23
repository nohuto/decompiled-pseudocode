/*
 * XREFs of sub_14031B510 @ 0x14031B510
 * Callers:
 *     sub_14031A5C0 @ 0x14031A5C0 (sub_14031A5C0.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_1402341A4 @ 0x1402341A4 (sub_1402341A4.c)
 *     sub_14023A0E4 @ 0x14023A0E4 (sub_14023A0E4.c)
 *     sub_1402CFEB0 @ 0x1402CFEB0 (sub_1402CFEB0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14058DCA8 @ 0x14058DCA8 (sub_14058DCA8.c)
 */

__int64 __fastcall sub_14031B510(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  __int64 v6; // rax
  int v7; // ebp
  __int64 result; // rax
  __int64 v9; // r15
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned __int64 BugCheckParameter4; // rdi
  int v14; // eax
  ULONG_PTR v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // [rsp+C8h] [rbp+20h] BYREF

  v3 = a3;
  v4 = (unsigned __int64)a2;
  if ( a3 == 3 )
    v6 = sub_140317A10((unsigned __int64)a2);
  else
    v6 = *a2;
  v17 = v6;
  if ( !v6 )
  {
    if ( !(_DWORD)v3 )
      return (*(_DWORD *)a1 & 1) != 0;
    return 0LL;
  }
  if ( (v6 & 1) == 0 )
  {
    if ( (int)v3 >= 1 )
    {
      if ( !sub_14023A0E4(v4) )
        goto LABEL_38;
    }
    else if ( !(_DWORD)v3 )
    {
      return 1LL;
    }
    if ( (*(_DWORD *)a1 & 0x80u) == 0 )
    {
      v12 = *(_QWORD *)(a1 + 16);
      if ( v12 )
        sub_14032F1B0(v12);
      if ( *(_QWORD *)(a1 + 160) )
        sub_14042A5E0(a1, a2);
      if ( (*(_BYTE *)(a1 + 4) & 1) == 0 )
        sub_1402341A4(a1);
      BugCheckParameter4 = (__int64)(v4 << 25) >> 16;
      sub_1402CFEB0(BugCheckParameter4);
      v14 = sub_14031C860(2uLL, BugCheckParameter4);
      v15 = v14;
      if ( v14 < 0 )
      {
        sub_14058DCA8(1LL);
        KeBugCheckEx(0x7Au, 1uLL, v15, *((_QWORD *)KeGetCurrentThread() + 23), BugCheckParameter4);
      }
      return 1LL;
    }
    return 0LL;
  }
  if ( v4 == 0xFFFFF6FB7DBEDF68uLL )
    return 0LL;
  if ( (v6 & 0x80u) != 0LL )
  {
LABEL_38:
    if ( (*(_DWORD *)a1 & 0x40) == 0 )
      return 1LL;
    v16 = *(_QWORD *)(a1 + 168);
    for ( *(_DWORD *)v16 = v3; (_DWORD)v3; LODWORD(v3) = v3 - 1 )
      v4 = (__int64)(v4 << 25) >> 16;
    if ( v4 < ((*(_QWORD *)(a1 + 32) >> 9) & 0x7FFFFFFFF8uLL) - 0x98000000000LL )
      v4 = ((*(_QWORD *)(a1 + 32) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_QWORD *)(v16 + 8) = v4;
    return 3LL;
  }
  v7 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 0x200) != 0
    && qword_140C532D8 != (PVOID)qword_140C532E0
    && (PVOID)(((unsigned __int64)sub_140317A10((unsigned __int64)&v17) >> 12) & 0xFFFFFFFFFFLL) == *(&qword_140C532D8 + v3) )
  {
    return 0LL;
  }
  if ( (int)v3 > ((*(unsigned __int8 *)(a1 + 4) >> 2) & 7) )
    return 2LL;
  if ( (v7 & 0x40) == 0 )
    return 1LL;
  v9 = *(_QWORD *)(a1 + 168);
  if ( (v7 & 4) != 0 )
  {
    sub_14031DE00(*(_QWORD *)(a1 + 24), v4, 0LL);
    sub_14020D8D0(*(_QWORD *)(a1 + 24), ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    *(_QWORD *)(a1 + 48) = v4;
  }
  v10 = (__int64)(v4 << 25) >> 16;
  v11 = ((*(_QWORD *)(a1 + 32) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  result = 3LL;
  if ( v10 >= v11 )
    v11 = v10;
  *(_QWORD *)(v9 + 8) = v11;
  return result;
}
