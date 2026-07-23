/*
 * XREFs of sub_1404053F0 @ 0x1404053F0
 * Callers:
 *     sub_1404055A0 @ 0x1404055A0 (sub_1404055A0.c)
 * Callees:
 *     KeReadStateSemaphore @ 0x140242A20 (KeReadStateSemaphore.c)
 *     sub_140400BBC @ 0x140400BBC (sub_140400BBC.c)
 *     sub_140400C30 @ 0x140400C30 (sub_140400C30.c)
 *     sub_140400C78 @ 0x140400C78 (sub_140400C78.c)
 *     sub_140400C90 @ 0x140400C90 (sub_140400C90.c)
 *     sub_140400DE4 @ 0x140400DE4 (sub_140400DE4.c)
 *     sub_140401350 @ 0x140401350 (sub_140401350.c)
 *     sub_1404055F4 @ 0x1404055F4 (sub_1404055F4.c)
 */

__int64 __fastcall sub_1404053F0(
        PRKSEMAPHORE Semaphore,
        PRKSEMAPHORE a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        PRKSEMAPHORE Semaphorea)
{
  unsigned int v9; // ebp
  unsigned int StateSemaphore; // ebx
  unsigned int v11; // eax
  struct _KSEMAPHORE *v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rsi
  char *v17; // rbx
  __int64 v18; // rax
  struct _KSEMAPHORE *v19; // rdi
  int v20; // r8d
  int v21; // edx
  char v24; // [rsp+B8h] [rbp+30h]
  struct _KSEMAPHORE *Semaphoreb; // [rsp+C0h] [rbp+38h]

  v9 = 0;
  StateSemaphore = KeReadStateSemaphore(Semaphore);
  v11 = KeReadStateSemaphore(a2);
  v12 = a2;
  if ( StateSemaphore > v11 )
    v12 = Semaphore;
  KeReadStateSemaphore(v12);
  v13 = (unsigned int)sub_140401350();
  v14 = sub_140400BBC();
  v15 = sub_140400BBC();
  v16 = v13 + v13 + a6;
  v17 = (char *)Semaphorea - 2 * v13;
  v18 = sub_140400C30();
  v24 = sub_140400C78(v18) & 1;
  Semaphoreb = (struct _KSEMAPHORE *)sub_140400C30();
  v19 = (struct _KSEMAPHORE *)sub_140400C30();
  if ( (unsigned int)sub_140400C90() || (sub_140400C78((__int64)v19) & 1) == 0 )
  {
    return 209715726;
  }
  else
  {
    sub_1404055F4(Semaphoreb, v19, 0LL, v14, v15, v16, (__int64)v17);
    if ( v24 )
    {
      sub_140400DE4(v15, (int)a2, a5, v16, (__int64)v17);
      v20 = a4;
      v21 = (int)Semaphore;
    }
    else
    {
      sub_140400DE4(v15, (int)Semaphore, a4, v16, (__int64)v17);
      v20 = a5;
      v21 = (int)a2;
    }
    sub_140400DE4(v14, v21, v20, v16, (__int64)v17);
  }
  return v9;
}
