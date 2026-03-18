/*
 * XREFs of ?VmBusSendSubmitVailPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@U_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@PEAVDXGSYNCOBJECT@@PEAVDXGALLOCATION_VGPU@@I_K@Z @ 0x1C037E398
 * Callers:
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01752C0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005CCCC (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C0364EA8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C037E984 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitVailPresentHistoryToken(
        struct DXG_VMBUS_CHANNEL_BASE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        unsigned int a10,
        __int64 a11)
{
  int v15; // r8d
  struct DXGKVMB_COMMAND_BASE *v16; // rcx
  unsigned int v17; // ebx
  int v18; // eax
  int v19; // eax
  _OWORD *v20; // rdx
  int v21; // eax
  int v22; // r8d
  __int64 v23; // rax
  _OWORD *v24; // r8
  __int128 v25; // xmm1
  bool v26; // zf
  int v27; // eax
  struct _MDL *v29; // [rsp+20h] [rbp-158h]
  struct DXGKVMB_COMMAND_BASE *v30[2]; // [rsp+30h] [rbp-148h] BYREF
  unsigned int v31; // [rsp+40h] [rbp-138h]

  if ( a7 )
    v15 = *(_DWORD *)(a7 + 8);
  else
    v15 = 0;
  v31 = 0;
  *(_OWORD *)v30 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v30, a1, v15 + 1160, 0LL, 0LL, 0LL);
  v16 = v30[0];
  if ( v30[0] )
  {
    v18 = *(_DWORD *)(a2 + 504);
    *(_QWORD *)v30[0] = 0LL;
    *((_DWORD *)v16 + 5) = 0;
    *((_BYTE *)v16 + 12) = 0;
    *((_DWORD *)v16 + 3) &= 0x1FFu;
    *((_DWORD *)v16 + 2) = v18;
    *((_DWORD *)v16 + 4) = 64;
    if ( a3 )
      v19 = *(_DWORD *)(a3 + 28);
    else
      v19 = 0;
    v20 = a6;
    *((_DWORD *)v16 + 6) = v19;
    *((_QWORD *)v16 + 4) = a5;
    v21 = a8;
    *((_QWORD *)v16 + 6) = a7;
    *((_QWORD *)v16 + 5) = a6;
    *((_QWORD *)v16 + 7) = a4;
    if ( a8 )
      v21 = *(_DWORD *)(a8 + 84);
    *((_DWORD *)v16 + 16) = v21;
    if ( a9 )
      v22 = *(_DWORD *)(a9 + 20);
    else
      v22 = 0;
    v23 = 8LL;
    *((_DWORD *)v16 + 17) = v22;
    v24 = (_OWORD *)((char *)v16 + 72);
    do
    {
      *v24 = *v20;
      v24[1] = v20[1];
      v24[2] = v20[2];
      v24[3] = v20[3];
      v24[4] = v20[4];
      v24[5] = v20[5];
      v24[6] = v20[6];
      v24 += 8;
      v25 = v20[7];
      v20 += 8;
      *(v24 - 1) = v25;
      --v23;
    }
    while ( v23 );
    *v24 = *v20;
    v24[1] = v20[1];
    v24[2] = v20[2];
    *((_QWORD *)v24 + 6) = *((_QWORD *)v20 + 6);
    v26 = *((_DWORD *)v16 + 18) == 2;
    *((_QWORD *)v16 + 10) = a11;
    if ( v26 )
    {
      *((_QWORD *)v16 + 17) = 0LL;
      *((_DWORD *)v16 + 33) &= ~0x2000000u;
      *((_QWORD *)v16 + 15) = 0LL;
      *((_QWORD *)v16 + 12) = a10;
      *((_QWORD *)v16 + 18) = 0LL;
    }
    if ( a7 )
      v27 = *(_DWORD *)(a7 + 8);
    else
      v27 = 0;
    *((_DWORD *)v16 + 288) = v27;
    if ( a7 )
      memmove((char *)v16 + 1160, (const void *)(a7 + 16), *(unsigned int *)(a7 + 8));
    v17 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(a1, (unsigned __int8 *)v30[1], v30[0], v31, v29);
  }
  else
  {
    v17 = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v30);
  return v17;
}
