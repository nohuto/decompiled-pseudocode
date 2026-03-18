/*
 * XREFs of NVMeIoCompletionQueueCreate @ 0x1C001F6C0
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

__int64 __fastcall NVMeIoCompletionQueueCreate(__int64 a1, __int64 a2, char a3)
{
  _WORD *v3; // rdi
  char v4; // bl
  __int64 v6; // r14
  _BYTE *v7; // r13
  char v8; // r15
  bool v9; // cc
  unsigned __int16 v10; // r12
  _BYTE *v11; // rax
  __int64 v12; // r9
  __int64 v13; // r8
  int v14; // eax
  unsigned int v15; // eax
  char v16; // cl
  __int64 result; // rax
  __int64 SrbExtension; // rax
  __int64 v19; // rdi
  __int64 v20; // rbx
  _BYTE *v21; // [rsp+90h] [rbp+48h]
  void *v23; // [rsp+A8h] [rbp+60h]

  v3 = (_WORD *)(a1 + 338);
  v4 = a3;
  v21 = 0LL;
  v23 = 0LL;
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
      if ( !v21 )
        goto LABEL_32;
      memset(v21, 0, 0x80uLL);
      NVMeAllocateDmaBuffer(a1, 0x2000u);
      if ( !v23 )
      {
        if ( v21 )
          StorPortExtendedFunction(1LL, a1, v21);
LABEL_32:
        if ( v6 )
        {
          do
          {
            SrbExtension = GetSrbExtension(v6);
            v19 = *(_QWORD *)(v6 + 40);
            v20 = *(_QWORD *)(SrbExtension + 4232);
            NVMeFreeDmaBuffer(a1, 0x2000LL, (__int64 *)(v6 + 56), *(_QWORD *)(v20 + 104));
            StorPortExtendedFunction(1LL, a1, v20);
            v6 = v19;
          }
          while ( v19 );
        }
        return 3238002689LL;
      }
      memset(v23, 0, 0x10A0uLL);
      v21[11] = 0;
      *((_DWORD *)v21 + 5) = 251658240;
      *((_QWORD *)v21 + 12) = v23;
      *((_QWORD *)v21 + 8) = v23;
      *((_QWORD *)v21 + 13) = 0LL;
      *v21 = 1;
      *((_QWORD *)v23 + 529) = v21;
      v11 = v23;
    }
    else
    {
      LocalCommandReuse(a1, a1 + 944);
      v11 = *(_BYTE **)(a1 + 1040);
      v21 = (_BYTE *)(a1 + 944);
      v4 = a3;
      v23 = v11;
    }
    v11[4253] |= 1u;
    *((_BYTE *)v23 + 4253) &= ~2u;
    *((_WORD *)v23 + 2122) = 0;
    v12 = *(_QWORD *)(a1 + 880);
    v13 = 392LL * v10;
    *((_BYTE *)v23 + 4096) = 5;
    *((_QWORD *)v23 + 515) = *(_QWORD *)(v13 + *(_QWORD *)(a1 + 880) - 384);
    *((_WORD *)v23 + 2068) = v10;
    *((_WORD *)v23 + 2069) = *(_WORD *)(a1 + 334) - 1;
    v14 = *((_DWORD *)v23 + 1035) | 1;
    *((_DWORD *)v23 + 1035) = v14;
    if ( *(_BYTE *)(a1 + 20) || *(_BYTE *)(v13 + v12 - 144) )
      v15 = v14 & 0xFFFFFFFD;
    else
      v15 = v14 | 2;
    *((_DWORD *)v23 + 1035) = v15;
    *((_WORD *)v23 + 2071) = *(_WORD *)(v13 + *(_QWORD *)(a1 + 880) - 216);
    if ( (v4 || v8) && (*((_QWORD *)v23 + 528) = NVMeIoCompletionQueueCreateCompletion, v8) )
    {
      if ( v7 )
        *((_QWORD *)v7 + 5) = v21 + 8;
      else
        v6 = (__int64)(v21 + 8);
      v7 = v21 + 8;
    }
    else
    {
      ProcessCommand(a1, (__int64)(v21 + 8));
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
        v16 = v21[11];
        if ( v16 != 1 )
        {
          result = 3238002689LL;
          if ( v16 == 5 )
            return 3238002700LL;
          return result;
        }
      }
    }
    v9 = ++v10 <= *v3;
  }
  if ( v8 && v6 )
    ProcessMultipleCommands(a1, v6);
  return 0LL;
}
