/*
 * XREFs of sub_18000EE74 @ 0x18000EE74
 * Callers:
 *     sub_18000D43C @ 0x18000D43C (sub_18000D43C.c)
 * Callees:
 *     sub_18000D45C @ 0x18000D45C (sub_18000D45C.c)
 *     sub_18000D5C4 @ 0x18000D5C4 (sub_18000D5C4.c)
 *     sub_18000D644 @ 0x18000D644 (sub_18000D644.c)
 *     sub_18000EF68 @ 0x18000EF68 (sub_18000EF68.c)
 *     sub_18000FBC8 @ 0x18000FBC8 (sub_18000FBC8.c)
 *     sub_18000FD54 @ 0x18000FD54 (sub_18000FD54.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000EE74(char *lpMem)
{
  __int64 v2; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  char v6; // [rsp+50h] [rbp+18h] BYREF
  DWORD LastError; // [rsp+54h] [rbp+1Ch]

  if ( byte_1801D32B8 || qword_1801D3290 && (unsigned __int8)qword_1801D3290() )
  {
    return (unsigned int)--*(_DWORD *)lpMem;
  }
  else
  {
    sub_18000FBC8(lpMem + 8, &v5);
    if ( !--*(_DWORD *)lpMem )
    {
      sub_18000FD54(lpMem + 16, 0LL);
      sub_18000FD54(lpMem + 24, 0LL);
      v2 = v5;
      if ( v5 )
      {
        v6 = 0;
        LastError = GetLastError();
        sub_18000EF68(v2);
        sub_18000D644((__int64)&v6);
      }
      v5 = 0LL;
      sub_18000D45C((__int64)lpMem);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
    return sub_18000D5C4(&v5);
  }
}
