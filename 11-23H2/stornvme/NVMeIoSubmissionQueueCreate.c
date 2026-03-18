/*
 * XREFs of NVMeIoSubmissionQueueCreate @ 0x1C001FE50
 * Callers:
 *     IoQueuesCreation @ 0x1C000A728 (IoQueuesCreation.c)
 *     IoQueuesCreationAsync @ 0x1C000A8B4 (IoQueuesCreationAsync.c)
 * Callees:
 *     GetSrbExtension @ 0x1C0002298 (GetSrbExtension.c)
 *     ProcessCommand @ 0x1C00024B0 (ProcessCommand.c)
 *     Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage @ 0x1C0004648 (Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x1C0004D40 (memset.c)
 *     LocalCommandReuse @ 0x1C000C29C (LocalCommandReuse.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C2EC (NVMeAllocateDmaBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EFC4 (NVMeFreeDmaBuffer.c)
 *     ProcessMultipleCommands @ 0x1C00250BC (ProcessMultipleCommands.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025E80 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeIoSubmissionQueueCreate(__int64 a1, __int64 a2, char a3)
{
  _WORD *v3; // rdi
  char v4; // bl
  __int64 v6; // r14
  _BYTE *v7; // r13
  char v8; // r15
  bool v9; // cc
  unsigned __int16 v10; // r12
  _BYTE *v11; // rax
  __int64 v12; // rdx
  char v13; // cl
  __int64 SrbExtension; // rax
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 result; // rax
  _BYTE *v18; // [rsp+90h] [rbp+48h]
  void *v20; // [rsp+A8h] [rbp+60h]

  v3 = (_WORD *)(a1 + 336);
  v4 = a3;
  v18 = 0LL;
  v20 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( (*(_DWORD *)(a1 + 136) & 8) == 0 || (v8 = 1, *v3 >= *(_WORD *)(a1 + 332)) )
    v8 = 0;
  v9 = *v3 != 0;
  v10 = 1;
  while ( v9 )
  {
    if ( v4 )
    {
      StorPortExtendedFunction(0LL, a1, 128LL);
      if ( !v18 )
        goto LABEL_26;
      memset(v18, 0, 0x80uLL);
      NVMeAllocateDmaBuffer(a1, 0x2000u);
      if ( !v20 )
      {
        if ( v18 )
          StorPortExtendedFunction(1LL, a1, v18);
LABEL_26:
        if ( v6 )
        {
          do
          {
            SrbExtension = GetSrbExtension(v6);
            v15 = *(_QWORD *)(v6 + 40);
            v16 = *(_QWORD *)(SrbExtension + 4232);
            NVMeFreeDmaBuffer(a1, 0x2000LL, (__int64 *)(v6 + 56), *(_QWORD *)(v16 + 104));
            StorPortExtendedFunction(1LL, a1, v16);
            v6 = v15;
          }
          while ( v15 );
        }
        return 3238002689LL;
      }
      memset(v20, 0, 0x10A0uLL);
      v18[11] = 0;
      *((_DWORD *)v18 + 5) = 251658240;
      *((_QWORD *)v18 + 12) = v20;
      *((_QWORD *)v18 + 8) = v20;
      *((_QWORD *)v18 + 13) = 0LL;
      *v18 = 1;
      *((_QWORD *)v20 + 529) = v18;
      v11 = v20;
    }
    else
    {
      LocalCommandReuse(a1, a1 + 944);
      v11 = *(_BYTE **)(a1 + 1040);
      v18 = (_BYTE *)(a1 + 944);
      v4 = a3;
      v20 = v11;
    }
    v11[4253] |= 1u;
    *((_BYTE *)v20 + 4253) &= ~2u;
    *((_WORD *)v20 + 2122) = 0;
    v12 = 136LL * v10;
    *((_BYTE *)v20 + 4096) = 1;
    *((_QWORD *)v20 + 515) = *(_QWORD *)(v12 + *(_QWORD *)(a1 + 872) - 128);
    *((_WORD *)v20 + 2068) = v10;
    *((_WORD *)v20 + 2069) = *(_WORD *)(a1 + 334) - 1;
    *((_DWORD *)v20 + 1035) = *((_DWORD *)v20 + 1035) & 0xFFFFFFF8 | 5;
    *((_WORD *)v20 + 2071) = *(_WORD *)(v12 + *(_QWORD *)(a1 + 872) - 86);
    if ( (v4 || v8) && (*((_QWORD *)v20 + 528) = NVMeIoSubmissionQueueCreateCompletion, v8) )
    {
      if ( v7 )
        *((_QWORD *)v7 + 5) = v18 + 8;
      else
        v6 = (__int64)(v18 + 8);
      v7 = v18 + 8;
    }
    else
    {
      ProcessCommand(a1, (__int64)(v18 + 8));
      if ( v4 )
      {
        if ( *(_WORD *)(a1 + 472) == *(_WORD *)(a1 + 332) )
        {
          StorPortExtendedFunction(81LL, a1, 1000LL);
          _InterlockedAdd((volatile signed __int32 *)(a1 + 932), 1u);
        }
      }
      else
      {
        Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage();
        WaitForCommandCompleteWithCustomTimeout(a1);
        v13 = v18[11];
        if ( v13 != 1 )
        {
          result = 3238002689LL;
          if ( v13 == 5 )
            return 3238002700LL;
          return result;
        }
        v4 = a3;
      }
    }
    v9 = ++v10 <= *v3;
  }
  if ( v8 && v6 )
    ProcessMultipleCommands(a1, v6);
  return 0LL;
}
