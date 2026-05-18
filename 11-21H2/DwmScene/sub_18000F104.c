/*
 * XREFs of sub_18000F104 @ 0x18000F104
 * Callers:
 *     sub_18010D9D0 @ 0x18010D9D0 (sub_18010D9D0.c)
 * Callees:
 *     sub_18000D464 @ 0x18000D464 (sub_18000D464.c)
 *     sub_18000D6D4 @ 0x18000D6D4 (sub_18000D6D4.c)
 *     sub_18000D84C @ 0x18000D84C (sub_18000D84C.c)
 *     sub_18000DD84 @ 0x18000DD84 (sub_18000DD84.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

int __fastcall sub_18000F104(LPVOID lpMem)
{
  void *v2; // rbx
  DWORD v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  bool v7; // zf
  int result; // eax
  DWORD LastError; // eax
  DWORD v10; // edi
  DWORD v11; // eax
  DWORD v12; // edi
  DWORD v13; // ebx
  HANDLE ProcessHeap; // rax
  __int64 retaddr; // [rsp+48h] [rbp+28h]
  void *v16; // [rsp+58h] [rbp+38h] BYREF
  BOOL (__fastcall *v17)(void *); // [rsp+60h] [rbp+40h] BYREF

  if ( byte_1801F73E0 || qword_1801F73B8 && (unsigned __int8)qword_1801F73B8() )
  {
    result = *(_DWORD *)lpMem - 1;
    *(_DWORD *)lpMem = result;
  }
  else
  {
    v2 = (void *)*((_QWORD *)lpMem + 1);
    v3 = WaitForSingleObjectEx(v2, 0xFFFFFFFF, 0);
    if ( v3 == 258 )
    {
      v2 = 0LL;
    }
    else if ( (v3 & 0xFFFFFF7F) != 0 )
    {
      sub_18000DD84(retaddr, v4, v5, v6);
    }
    v7 = *(_DWORD *)lpMem == 1;
    result = *(_DWORD *)lpMem - 1;
    *(_DWORD *)lpMem = result;
    if ( v7 )
    {
      if ( *((_QWORD *)lpMem + 2) )
      {
        v16 = (void *)*((_QWORD *)lpMem + 2);
        LastError = GetLastError();
        v17 = sub_18000DD30;
        v10 = LastError;
        sub_18000D464((__int64 (__fastcall **)(_QWORD))&v17, &v16);
        SetLastError(v10);
      }
      *((_QWORD *)lpMem + 2) = 0LL;
      if ( *((_QWORD *)lpMem + 3) )
      {
        v16 = (void *)*((_QWORD *)lpMem + 3);
        v11 = GetLastError();
        v17 = sub_18000DD30;
        v12 = v11;
        sub_18000D464((__int64 (__fastcall **)(_QWORD))&v17, &v16);
        SetLastError(v12);
      }
      *((_QWORD *)lpMem + 3) = 0LL;
      if ( v2 )
      {
        v16 = v2;
        v13 = GetLastError();
        v17 = (BOOL (__fastcall *)(void *))sub_18000F2F0;
        sub_18000D464((__int64 (__fastcall **)(_QWORD))&v17, &v16);
        SetLastError(v13);
      }
      sub_18000D6D4((char **)lpMem + 5);
      sub_18000D84C((__int64 *)lpMem + 2);
      if ( *((_QWORD *)lpMem + 1) )
      {
        v16 = (void *)*((_QWORD *)lpMem + 1);
        v17 = sub_18000DD30;
        sub_18000D464((__int64 (__fastcall **)(_QWORD))&v17, &v16);
      }
      ProcessHeap = GetProcessHeap();
      return HeapFree(ProcessHeap, 0, lpMem);
    }
    else if ( v2 )
    {
      v16 = v2;
      v17 = (BOOL (__fastcall *)(void *))sub_18000F2F0;
      return sub_18000D464((__int64 (__fastcall **)(_QWORD))&v17, &v16);
    }
  }
  return result;
}
