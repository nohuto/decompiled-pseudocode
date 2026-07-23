/*
 * XREFs of PoFxSetTargetDripsDevicePowerState @ 0x14098CEF0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_140355350 @ 0x140355350 (sub_140355350.c)
 *     sub_1405CD96C @ 0x1405CD96C (sub_1405CD96C.c)
 *     sub_1405D5234 @ 0x1405D5234 (sub_1405D5234.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PoFxSetTargetDripsDevicePowerState(ULONG_PTR a1, int a2)
{
  unsigned int v2; // ebx
  char v5; // bp
  __int64 v6; // rcx
  __int64 Pool2; // rax
  int v9; // [rsp+60h] [rbp+18h] BYREF
  int v10; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0;
  v9 = 0;
  v10 = 0;
  if ( dword_140C23CB0 < 0 )
  {
    if ( a2 == 1 || a2 > 4 )
      return (unsigned int)-1073741811;
    v5 = dword_140C542C0;
    if ( dword_140C542C0 == -1 )
      return (unsigned int)-1073741823;
    if ( !a1 )
      return (unsigned int)-1073741811;
    sub_140355350(a1);
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 824), 0, 0) & 0x10) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 56);
      if ( v6 )
      {
        if ( sub_1405D5234(v6, v5, 1, &v9, &v10) )
        {
          if ( !a2 && v9 == v10 || a2 == v9 )
            goto LABEL_20;
          if ( v10 <= 1 || !a2 || a2 > v10 )
          {
            Pool2 = ExAllocatePool2(64LL, 64LL, 1297630800LL);
            if ( Pool2 )
            {
              *(_QWORD *)(Pool2 + 8) = Pool2;
              *(_QWORD *)Pool2 = Pool2;
              *(_QWORD *)(Pool2 + 16) = a1;
              *(_DWORD *)(Pool2 + 24) = a2;
              *(_QWORD *)(Pool2 + 48) = sub_14098E120;
              *(_QWORD *)(Pool2 + 56) = Pool2;
              *(_QWORD *)(Pool2 + 32) = 0LL;
              ExQueueWorkItem((PWORK_QUEUE_ITEM)(Pool2 + 32), DelayedWorkQueue);
              return v2;
            }
            v2 = -1073741670;
            goto LABEL_20;
          }
        }
      }
    }
    v2 = -1073741823;
LABEL_20:
    sub_1405CD96C(a1);
    return v2;
  }
  return (unsigned int)-1073741637;
}
