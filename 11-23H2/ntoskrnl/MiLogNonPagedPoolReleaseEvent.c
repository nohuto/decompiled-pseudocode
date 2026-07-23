/*
 * XREFs of MiLogNonPagedPoolReleaseEvent @ 0x140641C90
 * Callers:
 *     MiClearNonPagedPtes @ 0x140212458 (MiClearNonPagedPtes.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

__int64 __fastcall MiLogNonPagedPoolReleaseEvent(_QWORD *a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 result; // rax
  __int128 v5; // [rsp+30h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-28h]
  __int128 *v7; // [rsp+48h] [rbp-20h] BYREF
  int v8; // [rsp+50h] [rbp-18h]
  int v9; // [rsp+54h] [rbp-14h]

  do
  {
    v5 = 0LL;
    v6 = 0LL;
    v2 = a1[1] | 0x8000000000000000uLL;
    v3 = v2;
    do
    {
      a1 = (_QWORD *)*a1;
      v2 -= 8LL;
    }
    while ( a1 && (a1[1] | 0x8000000000000000uLL) == v2 );
    v9 = 0;
    *(_QWORD *)&v5 = v5 & 0xFFFFFFFFFFFFFFF0uLL | 5;
    v6 = (__int64)(v3 - v2) >> 3;
    v8 = 24;
    *((_QWORD *)&v5 + 1) = (__int64)((v2 << 25) + 0x10000000) >> 16;
    v7 = &v5;
    result = EtwTraceKernelEvent((int)&v7, 1, 0x20000001u, 633, 289413892);
  }
  while ( a1 );
  return result;
}
