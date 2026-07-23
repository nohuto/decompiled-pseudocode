/*
 * XREFs of sub_1407A4774 @ 0x1407A4774
 * Callers:
 *     sub_1407A4638 @ 0x1407A4638 (sub_1407A4638.c)
 * Callees:
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     MmUnsecureVirtualMemory @ 0x1406F8010 (MmUnsecureVirtualMemory.c)
 *     sub_1407A4A8C @ 0x1407A4A8C (sub_1407A4A8C.c)
 *     sub_1407A5A54 @ 0x1407A5A54 (sub_1407A5A54.c)
 *     sub_1407A6A34 @ 0x1407A6A34 (sub_1407A6A34.c)
 *     sub_1407A7F84 @ 0x1407A7F84 (sub_1407A7F84.c)
 *     sub_1407B0F40 @ 0x1407B0F40 (sub_1407B0F40.c)
 */

__int64 __fastcall sub_1407A4774(ULONG_PTR BugCheckParameter2, char a2, unsigned __int8 a3)
{
  ULONG_PTR v3; // rdi
  int v5; // r14d
  ULONG_PTR v7; // rbp
  __int64 v8; // r9
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // esi
  _QWORD *v13; // rsi
  int v14; // eax
  __int64 v15; // rax
  _OWORD v16[3]; // [rsp+20h] [rbp-58h] BYREF

  v5 = a3;
  v3 = *(_QWORD *)(BugCheckParameter2 + 16);
  memset(v16, 0, sizeof(v16));
  v7 = 0LL;
  sub_1407A6A34(v3);
  v9 = *(_DWORD *)(v3 + 48);
  if ( (v9 & 1) == 0 )
  {
    if ( !a2 )
      goto LABEL_7;
    if ( *(_DWORD *)(BugCheckParameter2 + 76) )
      goto LABEL_7;
    v10 = *(_DWORD *)(v3 + 52);
    if ( v10 > 2 )
      goto LABEL_7;
    if ( v10 != 1 )
    {
      v13 = *(_QWORD **)(v3 + 56);
      if ( v13 == (_QWORD *)BugCheckParameter2 )
        v13 = (_QWORD *)*v13;
      v14 = *(_DWORD *)(BugCheckParameter2 + 72);
      if ( (v14 & 8) == 0 )
      {
        v15 = sub_1407A4A8C(
                *(_QWORD *)(BugCheckParameter2 + 32),
                *(_QWORD *)(BugCheckParameter2 + 40),
                *(_QWORD *)(BugCheckParameter2 + 48));
        if ( !v15 )
          goto LABEL_7;
        *(_QWORD *)(BugCheckParameter2 + 64) = v15;
        v14 = *(_DWORD *)(BugCheckParameter2 + 72);
      }
      *(_DWORD *)(BugCheckParameter2 + 72) = v14 & 0xFFFFFFFE;
      sub_1407A7F84(BugCheckParameter2);
      *(_DWORD *)(v3 + 48) |= 1u;
      *(_QWORD *)(v3 + 72) = BugCheckParameter2;
      *(_QWORD *)(v3 + 80) = v13;
      goto LABEL_7;
    }
    *(_QWORD *)(v3 + 80) = BugCheckParameter2;
    *(_DWORD *)(v3 + 48) = v9 | 1;
LABEL_7:
    ++*(_DWORD *)(BugCheckParameter2 + 76);
    v11 = 0;
    goto LABEL_8;
  }
  if ( BugCheckParameter2 == *(_QWORD *)(v3 + 80) )
  {
    if ( !a2 )
    {
      v7 = *(_QWORD *)(v3 + 72);
      if ( v7 )
      {
        if ( *(_QWORD *)(v7 + 64) )
        {
          sub_14030D5C0(*(_QWORD *)(v7 + 32), 0LL, (__int64)v16, v8);
          MmUnsecureVirtualMemory(*(HANDLE *)(v7 + 64));
          sub_1402D0930((__int64)v16, 0LL);
          *(_QWORD *)(v7 + 64) = 0LL;
        }
        *(_DWORD *)(v7 + 72) |= 1u;
        *(_QWORD *)(v3 + 72) = 0LL;
      }
      *(_QWORD *)(v3 + 80) = 0LL;
      *(_DWORD *)(v3 + 48) &= ~1u;
      goto LABEL_7;
    }
    if ( !*(_DWORD *)(BugCheckParameter2 + 76) )
      goto LABEL_7;
  }
  v11 = -1073741790;
LABEL_8:
  *(_DWORD *)(BugCheckParameter2 + 72) ^= (*(_DWORD *)(BugCheckParameter2 + 72) ^ (2 * v5)) & 2;
  sub_1407B0F40(v3);
  if ( v7 )
    sub_1407A5A54(v7);
  return v11;
}
