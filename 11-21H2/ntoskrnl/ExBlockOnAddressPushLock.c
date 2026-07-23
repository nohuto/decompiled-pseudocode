/*
 * XREFs of ExBlockOnAddressPushLock @ 0x140369460
 * Callers:
 *     sub_1402A4298 @ 0x1402A4298 (sub_1402A4298.c)
 *     sub_1405F3A90 @ 0x1405F3A90 (sub_1405F3A90.c)
 *     sub_14067F520 @ 0x14067F520 (sub_14067F520.c)
 *     sub_1406E25B0 @ 0x1406E25B0 (sub_1406E25B0.c)
 *     sub_14071A870 @ 0x14071A870 (sub_14071A870.c)
 *     sub_1407ED964 @ 0x1407ED964 (sub_1407ED964.c)
 *     sub_1407ED9FC @ 0x1407ED9FC (sub_1407ED9FC.c)
 *     sub_1407EDA2C @ 0x1407EDA2C (sub_1407EDA2C.c)
 *     sub_1408331DC @ 0x1408331DC (sub_1408331DC.c)
 *     CmUnRegisterCallback @ 0x14090FD60 (CmUnRegisterCallback.c)
 *     sub_1409AF410 @ 0x1409AF410 (sub_1409AF410.c)
 * Callees:
 *     ExBlockPushLock @ 0x140369520 (ExBlockPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x140369540 (ExTimedWaitForUnblockPushLock.c)
 *     sub_140369634 @ 0x140369634 (sub_140369634.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall ExBlockOnAddressPushLock(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned __int64 a4, __int64 a5)
{
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  bool v12; // zf
  _BYTE v14[64]; // [rsp+20h] [rbp-48h] BYREF

  memset(v14, 0, sizeof(v14));
  ExBlockPushLock(a1, v14);
  if ( a4 > 8 )
    goto LABEL_8;
  v9 = a4 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 2;
      if ( v11 )
      {
        if ( v11 != 4 )
          goto LABEL_8;
        v12 = *a2 == *a3;
      }
      else
      {
        v12 = *(_DWORD *)a2 == *(_DWORD *)a3;
      }
    }
    else
    {
      v12 = *(_WORD *)a2 == *(_WORD *)a3;
    }
  }
  else
  {
    v12 = *(_BYTE *)a2 == *(_BYTE *)a3;
  }
  if ( v12 )
    return ExTimedWaitForUnblockPushLock(a1, v14, a5);
LABEL_8:
  sub_140369634(a1, v14, 0LL);
  return 0LL;
}
