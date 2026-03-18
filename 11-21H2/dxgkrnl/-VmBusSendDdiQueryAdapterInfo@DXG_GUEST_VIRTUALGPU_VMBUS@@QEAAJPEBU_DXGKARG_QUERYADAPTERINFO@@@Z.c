/*
 * XREFs of ?VmBusSendDdiQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C037643C
 * Callers:
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C016BE48 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005CCCC (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C0364EA8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1C037E5E0 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDdiQueryAdapterInfo(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        const struct _DXGKARG_QUERYADAPTERINFO *a2)
{
  UINT OutputDataSize; // edi
  unsigned int v5; // edx
  unsigned int v6; // eax
  UINT InputDataSize; // ebx
  __int64 v8; // rbx
  __int64 v9; // r14
  int v10; // ebp
  _DWORD *v11; // rbx
  unsigned int v13[4]; // [rsp+30h] [rbp-158h] BYREF
  __int128 v14; // [rsp+40h] [rbp-148h] BYREF
  int v15; // [rsp+50h] [rbp-138h]

  OutputDataSize = a2->OutputDataSize;
  v5 = *((_DWORD *)DXGGLOBAL_GetGlobal() + 450);
  if ( a2->Type == DXGKQAITYPE_DRIVERCAPS )
  {
    v6 = v5 < 0x28 ? 584 : 592;
  }
  else
  {
    if ( a2->Type != DXGKQAITYPE_PHYSICALADAPTERCAPS )
      goto LABEL_7;
    v6 = v5 < 0x1B ? 24 : 32;
  }
  if ( v6 < OutputDataSize )
    OutputDataSize = v6;
LABEL_7:
  InputDataSize = a2->InputDataSize;
  v15 = 0;
  v8 = InputDataSize + 40;
  v13[0] = (OutputDataSize + 7) & 0xFFFFFFF8;
  v14 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v14, this, v13[0] + v8, 0LL, 0LL, 0LL);
  v9 = v14;
  if ( (_QWORD)v14 )
  {
    *(_QWORD *)v14 = 0LL;
    *(_DWORD *)(v9 + 8) = 0;
    *(_DWORD *)(v9 + 20) = 0;
    *(_BYTE *)(v9 + 12) = 0;
    *(_DWORD *)(v9 + 12) &= 0x1FFu;
    *(_DWORD *)(v9 + 16) = 3;
    *(_DWORD *)(v9 + 24) = a2->Type;
    *(_DWORD *)(v9 + 28) = a2->InputDataSize;
    *(_DWORD *)(v9 + 32) = OutputDataSize;
    memmove((void *)(v9 + 36), a2->pInputData, a2->InputDataSize);
    v11 = (_DWORD *)(v9 + v8);
    v10 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v14, v11, v13);
    if ( v10 >= 0 )
    {
      if ( v13[0] >= OutputDataSize )
      {
        switch ( *(_DWORD *)(v9 + 24) )
        {
          case 1:
            v11[12] &= 0x3Fu;
            v11[13] &= ~0x80000000;
            v11[15] &= 0x7Fu;
            v11[16] &= 0x7FFu;
            v11[17] &= 0x1FFFFu;
            v11[144] &= 0x7Fu;
            if ( (int)v11[84] > 12288 )
              v11[84] = 12288;
            break;
          case 0xD:
            *v11 &= 0xFFFu;
            v11[5] &= 1u;
            break;
          case 0xF:
            v11[4] &= 0x3Fu;
            break;
        }
        if ( OutputDataSize >= a2->OutputDataSize )
          OutputDataSize = a2->OutputDataSize;
        memmove(a2->pOutputData, v11, OutputDataSize);
      }
      else
      {
        v10 = -1073741823;
      }
    }
  }
  else
  {
    v10 = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v14);
  return (unsigned int)v10;
}
