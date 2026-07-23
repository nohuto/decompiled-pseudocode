/*
 * XREFs of sub_1406A4A70 @ 0x1406A4A70
 * Callers:
 *     <none>
 * Callees:
 *     IoCancelIrp @ 0x14022D160 (IoCancelIrp.c)
 *     sub_1402A7370 @ 0x1402A7370 (sub_1402A7370.c)
 *     sub_1402AC790 @ 0x1402AC790 (sub_1402AC790.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

NTSTATUS __fastcall sub_1406A4A70(void *a1, unsigned __int64 a2)
{
  char v4; // r15
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE v6; // r8
  __int64 v7; // rcx
  NTSTATUS result; // eax
  struct _KTHREAD *v9; // rax
  unsigned __int8 CurrentIrql; // si
  _QWORD **v11; // rdi
  _QWORD *i; // rbx
  PVOID v13; // rbx
  char v14; // bl
  unsigned __int8 v15; // si
  _QWORD *j; // rcx
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v19; // r9
  int v20; // edx
  bool v21; // zf
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r10
  __int64 v24; // r9
  int v25; // eax
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF
  LARGE_INTEGER Interval; // [rsp+78h] [rbp+20h] BYREF

  Object = 0LL;
  v4 = 0;
  CurrentThread = KeGetCurrentThread();
  v6 = *((_BYTE *)CurrentThread + 562);
  if ( v6 )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v7 = a2;
    *(_DWORD *)v7 = *(_DWORD *)v7;
  }
  result = sub_1402AC790(a1, 0, v6, &Object, 0LL);
  if ( result >= 0 )
  {
    v9 = KeGetCurrentThread();
    ++*((_QWORD *)v9 + 114);
    __incgsdword(0x2EE4u);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    v11 = (_QWORD **)((char *)CurrentThread + 1280);
    for ( i = *v11; v11 != i; i = (_QWORD *)*i )
    {
      if ( (PVOID)i[20] == Object )
      {
        v4 = 1;
        IoCancelIrp((PIRP)(i - 4));
      }
    }
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v17 = KeGetCurrentIrql();
        if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v19 = *((_QWORD *)CurrentPrcb + 4375);
          v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v21 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
          *(_DWORD *)(v19 + 20) &= v20;
          if ( v21 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( v4 )
    {
      Interval.QuadPart = -100000LL;
      while ( 2 )
      {
        v14 = 0;
        v15 = KeGetCurrentIrql();
        __writecr8(1uLL);
        for ( j = *v11; v11 != j; j = (_QWORD *)*j )
        {
          if ( (PVOID)j[20] == Object )
          {
            v14 = 1;
            break;
          }
        }
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v22 = KeGetCurrentIrql();
            if ( v22 <= 0xFu && v15 <= 0xFu && v22 >= 2u )
            {
              v23 = KeGetCurrentPrcb();
              v24 = *((_QWORD *)v23 + 4375);
              v25 = ~(unsigned __int16)(-1LL << (v15 + 1));
              v21 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
              *(_DWORD *)(v24 + 20) &= v25;
              if ( v21 )
                sub_140418E4C((__int64)v23);
            }
          }
        }
        __writecr8(v15);
        if ( v14 )
        {
          KeDelayExecutionThread(0, 0, &Interval);
          continue;
        }
        break;
      }
    }
    v13 = Object;
    sub_1402A7370((__int64)Object, *((_QWORD *)KeGetCurrentThread() + 23), 0LL, (__int64)KeGetCurrentThread(), 1, 0);
    *(_DWORD *)a2 = 0;
    *(_QWORD *)(a2 + 8) = 0LL;
    ObfDereferenceObject(v13);
    return 0;
  }
  return result;
}
