/*
 * XREFs of sub_140792DB0 @ 0x140792DB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_140792EFC @ 0x140792EFC (sub_140792EFC.c)
 *     sub_1407931C0 @ 0x1407931C0 (sub_1407931C0.c)
 */

__int64 __fastcall sub_140792DB0(
        unsigned __int64 a1,
        unsigned __int64 a2,
        int a3,
        int a4,
        volatile void *Address,
        SIZE_T Length)
{
  struct _KTHREAD *CurrentThread; // rax
  int v8; // ebx
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v13; // [rsp+50h] [rbp-18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v8 = -1073741811;
  v9 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2152LL);
  if ( v9 )
  {
    if ( !a1 || !a2 )
      goto LABEL_11;
    if ( a3 && (!a4 || a4 == -1073741267) )
    {
      v10 = 0x7FFFFFFF0000LL;
      v11 = 0x7FFFFFFF0000LL;
      if ( a1 < 0x7FFFFFFF0000LL )
        v11 = a1;
      v13 = *(_QWORD *)v11;
      if ( a2 < 0x7FFFFFFF0000LL )
        v10 = a2;
      v8 = sub_1407931C0(v9, (unsigned int)&v13, *(_QWORD *)v10, a3, a4);
      if ( v8 >= 0 )
      {
LABEL_11:
        if ( (_DWORD)Length )
        {
          if ( (unsigned int)Length < 0x1030 )
          {
            v8 = -1073741789;
          }
          else
          {
            ProbeForWrite(Address, (unsigned int)Length, 8u);
            v8 = sub_140792EFC(v9, Address, (unsigned int)Length);
          }
        }
      }
    }
  }
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)v8;
}
