/*
 * XREFs of sub_1C00A25F4 @ 0x1C00A25F4
 * Callers:
 *     sub_1C0007860 @ 0x1C0007860 (sub_1C0007860.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0004890 @ 0x1C0004890 (sub_1C0004890.c)
 *     sub_1C000729C @ 0x1C000729C (sub_1C000729C.c)
 *     sub_1C0018524 @ 0x1C0018524 (sub_1C0018524.c)
 *     sub_1C0019C38 @ 0x1C0019C38 (sub_1C0019C38.c)
 *     sub_1C001B1E0 @ 0x1C001B1E0 (sub_1C001B1E0.c)
 *     sub_1C001C288 @ 0x1C001C288 (sub_1C001C288.c)
 *     sub_1C001DFB4 @ 0x1C001DFB4 (sub_1C001DFB4.c)
 *     sub_1C001DFEC @ 0x1C001DFEC (sub_1C001DFEC.c)
 *     sub_1C0022954 @ 0x1C0022954 (sub_1C0022954.c)
 *     sub_1C0022DB0 @ 0x1C0022DB0 (sub_1C0022DB0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C00A25F4(__int64 a1, IRP *a2)
{
  int v2; // ebx
  __int64 *v3; // rdi
  void (__fastcall *v6)(_QWORD, __int64 *); // rax
  __int64 v7; // rdi
  const wchar_t *v8; // r10
  __int64 v10; // rcx
  char v11; // dl
  __int64 v12; // rcx
  __int64 v13; // [rsp+80h] [rbp+17h] BYREF
  __int128 v14; // [rsp+88h] [rbp+1Fh]

  v2 = *(_DWORD *)(a1 + 48);
  v3 = (__int64 *)(a1 + 24);
  v13 = 0LL;
  *(_DWORD *)(a1 + 48) = 5;
  v6 = *(void (__fastcall **)(_QWORD, __int64 *))(a1 + 3432);
  if ( v6 )
  {
    v10 = *v3;
    LODWORD(v13) = 8;
    v11 = *(_BYTE *)(v10 + 56);
    *(_WORD *)((char *)&v13 + 5) = *(_WORD *)(a1 + 96);
    HIBYTE(v13) = *(_BYTE *)(a1 + 98);
    BYTE4(v13) = v11;
    v6(0LL, &v13);
    *(_QWORD *)(a1 + 3432) = 0LL;
  }
  if ( (unsigned int)(v2 - 6) > 1 )
    sub_1C001DFEC(a1);
  sub_1C001DFB4(a1);
  if ( sub_1C0004890(a1, 10) )
  {
    v12 = *v3;
    v14 = 0LL;
    LOWORD(v14) = 1;
    WORD1(v14) = *(_WORD *)(v12 + 56);
    WORD4(v14) = *(_WORD *)(a1 + 96);
    BYTE10(v14) = *(_BYTE *)(a1 + 98);
    DWORD1(v14) = 4;
    sub_1C0018524(v12 + 336);
  }
  if ( (byte_1C0093A05 & 0x10) != 0 )
  {
    v7 = *v3;
    v8 = (const wchar_t *)&unk_1C0082788;
    if ( *(_QWORD *)(v7 + 5016) )
      v8 = *(const wchar_t **)(v7 + 5016);
    sub_1C001B1E0(
      a1 + 169,
      a1 + 160,
      a1 + 2024,
      *(const wchar_t **)(v7 + 4656),
      *(_DWORD *)(v7 + 56),
      v7 + 5000,
      *(_BYTE *)(a1 + 96),
      *(_BYTE *)(a1 + 97),
      *(_BYTE *)(a1 + 98),
      a1 + 2024,
      (const char *)(a1 + 160),
      (const char *)(a1 + 169),
      (const char *)(a1 + 186),
      v8,
      (*(_BYTE *)(a1 + 450) & 0x40) != 0,
      *(_BYTE *)(a1 + 450) >> 7);
  }
  sub_1C001C288(a1, 52);
  sub_1C000729C(a1);
  sub_1C0019C38(a1);
  sub_1C0022DB0(a1);
  sub_1C0022954(a1);
  return sub_1C0003440(a2, 0, 0);
}
