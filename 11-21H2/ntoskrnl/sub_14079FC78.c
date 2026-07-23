/*
 * XREFs of sub_14079FC78 @ 0x14079FC78
 * Callers:
 *     sub_1407A0088 @ 0x1407A0088 (sub_1407A0088.c)
 * Callees:
 *     IoCancelIrp @ 0x14022D160 (IoCancelIrp.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405566C0 @ 0x1405566C0 (sub_1405566C0.c)
 */

struct _KTHREAD *__fastcall sub_14079FC78(LARGE_INTEGER a1)
{
  struct _KTHREAD *result; // rax
  _QWORD **v2; // rbx
  unsigned __int8 CurrentIrql; // si
  _QWORD *i; // rdi
  unsigned int v5; // r15d
  unsigned int v6; // r14d
  unsigned __int8 v7; // di
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  int v11; // eax
  bool v12; // zf
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r10
  __int64 v15; // r9
  int v16; // eax
  unsigned int v17; // eax
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  __int64 v20; // r8
  int v21; // eax
  LARGE_INTEGER Interval; // [rsp+50h] [rbp+8h] BYREF

  Interval = a1;
  result = KeGetCurrentThread();
  v2 = (_QWORD **)((char *)result + 1280);
  if ( *v2 != v2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    for ( i = *v2; v2 != i; i = (_QWORD *)*i )
      IoCancelIrp((PIRP)(i - 4));
    v5 = 100 * dword_140C54E78;
    v6 = 0;
    Interval.QuadPart = -100000LL;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v8 = KeGetCurrentIrql();
        if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v10 = *((_QWORD *)CurrentPrcb + 4375);
          v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
          *(_DWORD *)(v10 + 20) &= v11;
          if ( v12 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    while ( 1 )
    {
      v7 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( *v2 == v2 )
        break;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v13 = KeGetCurrentIrql();
          if ( v13 <= 0xFu && v7 <= 0xFu && v13 >= 2u )
          {
            v14 = KeGetCurrentPrcb();
            v15 = *((_QWORD *)v14 + 4375);
            v16 = ~(unsigned __int16)(-1LL << (v7 + 1));
            v12 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
            *(_DWORD *)(v15 + 20) &= v16;
            if ( v12 )
              sub_140418E4C((__int64)v14);
          }
        }
      }
      __writecr8(v7);
      KeDelayExecutionThread(0, 0, &Interval);
      v17 = v6++;
      if ( v17 > v5 )
        sub_1405566C0();
    }
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v18 = KeGetCurrentIrql();
        if ( v18 <= 0xFu && v7 <= 0xFu && v18 >= 2u )
        {
          v19 = KeGetCurrentPrcb();
          v20 = *((_QWORD *)v19 + 4375);
          v21 = ~(unsigned __int16)(-1LL << (v7 + 1));
          v12 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
          *(_DWORD *)(v20 + 20) &= v21;
          if ( v12 )
            sub_140418E4C((__int64)v19);
        }
      }
    }
    result = (struct _KTHREAD *)v7;
    __writecr8(v7);
  }
  return result;
}
