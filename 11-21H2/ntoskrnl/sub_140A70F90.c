/*
 * XREFs of sub_140A70F90 @ 0x140A70F90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_140359DE0 @ 0x140359DE0 (sub_140359DE0.c)
 *     ?do_max_length@?$codecvt@_WDH@std@@MEBAHXZ @ 0x140360698 (-do_max_length@-$codecvt@_WDH@std@@MEBAHXZ.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_1403D820C @ 0x1403D820C (sub_1403D820C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     DbgBreakPointWithStatus @ 0x140429800 (DbgBreakPointWithStatus.c)
 *     sub_1406EC048 @ 0x1406EC048 (sub_1406EC048.c)
 *     sub_1407B6B90 @ 0x1407B6B90 (sub_1407B6B90.c)
 *     sub_1407D80A4 @ 0x1407D80A4 (sub_1407D80A4.c)
 *     sub_1407FCBC0 @ 0x1407FCBC0 (sub_1407FCBC0.c)
 *     sub_1409E8E6C @ 0x1409E8E6C (sub_1409E8E6C.c)
 */

void sub_140A70F90()
{
  ULONG_PTR v0; // r14
  __int64 v1; // r15
  char v2; // r12
  char v3; // al
  int v4; // ebx
  __int64 *v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 *v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // r9
  ULONG_PTR v10; // r9
  __int64 v11; // rcx
  NTSTATUS v12; // eax
  unsigned __int64 v13; // [rsp+20h] [rbp-50h] BYREF
  __int64 v14; // [rsp+28h] [rbp-48h]
  __int128 v15; // [rsp+30h] [rbp-40h] BYREF
  __int128 v16; // [rsp+40h] [rbp-30h]
  __int128 v17; // [rsp+50h] [rbp-20h]

  v0 = qword_140C115C8;
  v1 = qword_140C115C0;
  v2 = byte_140C161E8;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v3 = std::codecvt<wchar_t,char,int>::do_max_length();
  v13 = qword_140C115D0;
  v14 = 1LL;
  qword_140C115C0 = 0LL;
  v4 = v3 & 7 | 0xB8;
  qword_140C115C8 = 0LL;
  qword_140C115D0 = 0LL;
  _InterlockedExchange(&dword_140C0B22C, 0);
  sub_1403D820C();
  v5 = 0LL;
  if ( v0 || v1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      v8 = sub_1407B6B90(v7);
      v5 = v8;
      if ( !v8 )
        break;
      if ( v8 == (__int64 *)v0 )
      {
        sub_14030D5C0(v0, 0LL, (__int64)&v15, v9);
        if ( v5 )
          goto LABEL_3;
        break;
      }
      v7 = v8;
      if ( v8 == (__int64 *)v1 )
      {
        sub_1407D80A4((__int64)v8, 0x40010004u);
        goto LABEL_30;
      }
    }
    v10 = v1;
    if ( v0 )
      v10 = v0;
    DbgPrintEx(0, 0, "EX debug work: Unable to find process %p\n", v10, v13, v14, v15, v16, v17);
  }
LABEL_3:
  v6 = v13;
  if ( v13 )
  {
    if ( sub_140359DE0(v13) )
      v11 = -3LL;
    else
      v11 = -(__int64)(v13 < 0xFFFF800000000000uLL);
    v12 = sub_1406EC048((char *)v11, 1uLL, (__int64)&v13, v4);
    if ( v12 < 0 )
      DbgPrintEx(0, 0, "EX page in: MmPrefetchVirtualMemory failed, 0x%08x\n", v12);
    v6 = v13;
  }
  if ( v2 )
  {
    sub_1409E8E6C();
    v6 = v13;
  }
  if ( v0 || v1 || v6 || v2 )
    DbgBreakPointWithStatus(7u);
  if ( v5 )
  {
    sub_1402D0930((__int64)&v15, 0LL);
LABEL_30:
    sub_1407FCBC0(v5);
  }
}
