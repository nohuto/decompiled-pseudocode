/*
 * XREFs of ?_Invoke@CTaskWindow@@AEAAJW4WINDOW_ACTION_TYPE@1@@Z @ 0x1803C8570
 * Callers:
 *     ?Cloak@CTaskWindow@@UEAAJXZ @ 0x1803C7E10 (-Cloak@CTaskWindow@@UEAAJXZ.c)
 *     ?Uncloak@CTaskWindow@@UEAAJXZ @ 0x1803C8510 (-Uncloak@CTaskWindow@@UEAAJXZ.c)
 *     ?ValidateActivation@CTaskWindow@@UEAA_NXZ @ 0x1803C8540 (-ValidateActivation@CTaskWindow@@UEAA_NXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTaskWindow::_Invoke(__int64 a1, int a2)
{
  char v2; // r15
  signed int v5; // ebx
  int v7; // r12d
  const struct CTaskWindow::WINDOW_ACTION *const near *v8; // r14
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rdi
  signed int LastError; // eax
  int v13; // [rsp+20h] [rbp-58h] BYREF
  __int64 v14; // [rsp+28h] [rbp-50h]
  _DWORD v15[2]; // [rsp+30h] [rbp-48h] BYREF
  char v16; // [rsp+38h] [rbp-40h]
  __int64 v17; // [rsp+40h] [rbp-38h]
  __int64 v18; // [rsp+48h] [rbp-30h]

  v2 = 0;
  if ( a2 )
  {
    if ( (unsigned int)(a2 - 1) >= 2 )
      return (unsigned int)-2147019873;
  }
  else
  {
    v2 = 1;
  }
  v7 = *(_DWORD *)(a1 + 52);
  if ( v7 == -1 )
    return (unsigned int)-2147019873;
  v13 = *(_DWORD *)(a1 + 52);
  v8 = (&CTaskWindow::s_rgActions)[a2];
  v5 = 0;
  v9 = 0LL;
  v14 = *(_QWORD *)(a1 + 40);
  if ( *((_DWORD *)v8 + 2) )
  {
    while ( (*((unsigned __int8 (__fastcall **)(int *))*v8 + v9))(&v13) )
    {
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= *((_DWORD *)v8 + 2) )
        goto LABEL_11;
    }
    LastError = GetLastError();
    v5 = LastError;
    if ( LastError > 0 )
      v5 = (unsigned __int16)LastError | 0x80070000;
    if ( v5 >= 0 )
      return (unsigned int)-2147019873;
  }
  else
  {
LABEL_11:
    if ( *((_DWORD *)v8 + 6) )
    {
      v10 = *(_QWORD *)(a1 + 136);
      v15[0] = a2;
      v11 = 0LL;
      v15[1] = v7;
      v16 = v2;
      v17 = v10;
      v18 = a1 + 40;
      do
      {
        v5 = (*(__int64 (__fastcall **)(_DWORD *))(*((_QWORD *)v8 + 2) + 8 * v11))(v15);
        if ( v5 < 0 )
          break;
        v11 = (unsigned int)(v11 + 1);
      }
      while ( (unsigned int)v11 < *((_DWORD *)v8 + 6) );
    }
  }
  return (unsigned int)v5;
}
