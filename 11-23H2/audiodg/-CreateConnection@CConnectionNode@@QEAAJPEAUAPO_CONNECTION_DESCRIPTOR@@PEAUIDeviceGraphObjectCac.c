/*
 * XREFs of ?CreateConnection@CConnectionNode@@QEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@@Z @ 0x140010D48
 * Callers:
 *     ?CreateConnection@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z @ 0x140010C00 (-CreateConnection@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z.c)
 * Callees:
 *     ?GetAudioFormat@@YAXPEAUIAudioMediaType@@PEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z @ 0x140010B50 (-GetAudioFormat@@YAXPEAUIAudioMediaType@@PEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14001267C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140012720 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?CalculateAlignmentMask@@YAIPEBU_UNCOMPRESSEDAUDIOFORMAT@@@Z @ 0x1400171BC (-CalculateAlignmentMask@@YAIPEBU_UNCOMPRESSEDAUDIOFORMAT@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::details::lambda_call__lambda_4077c0e74b282fea5d37049cc4734ddb___::_lambda_call__lambda_4077c0e74b282fea5d37049cc4734ddb___ @ 0x14008E8B8 (wil--details--lambda_call__lambda_4077c0e74b282fea5d37049cc4734ddb___--_lambda_call__lambda_4077.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CConnectionNode::CreateConnection(
        CConnectionNode *this,
        struct APO_CONNECTION_DESCRIPTOR *a2,
        struct IDeviceGraphObjectCache *a3)
{
  void *v6; // rax
  void *v7; // rax
  unsigned int v8; // eax
  int v9; // r9d
  int v10; // r10d
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // r9
  __int64 v15; // rdx
  int v16[2]; // [rsp+20h] [rbp-18h] BYREF
  char v17; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  GetAudioFormat(a2->pFormat, (struct _UNCOMPRESSEDAUDIOFORMAT *)((char *)this + 24));
  v6 = AERTGetDLLRTHeap();
  v7 = AERTAllocate(0x28uLL, v6);
  *((_QWORD *)this + 13) = v7;
  if ( v7 )
  {
    *(_QWORD *)v16 = this;
    v17 = 1;
    *((_OWORD *)this + 4) = *(_OWORD *)&a2->Type;
    *((_OWORD *)this + 5) = *(_OWORD *)&a2->u32MaxFrameCount;
    *((_QWORD *)this + 12) = *(_QWORD *)&a2->u32Signature;
    if ( *((_QWORD *)this + 9) )
    {
      v8 = CalculateAlignmentMask((const struct _UNCOMPRESSEDAUDIOFORMAT *)((char *)this + 24));
      if ( (v8 & v10) == 0 )
      {
LABEL_4:
        *((_DWORD *)this + 16) = v9;
        **((_QWORD **)this + 13) = *((_QWORD *)this + 9);
        *(_DWORD *)(*((_QWORD *)this + 13) + 8LL) = 0;
        *(_DWORD *)(*((_QWORD *)this + 13) + 16LL) = 1094930505;
        *(_QWORD *)(*((_QWORD *)this + 13) + 24LL) = 0LL;
        *(_DWORD *)(*((_QWORD *)this + 13) + 32LL) = 0;
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 8LL))(*((_QWORD *)this + 11));
        return 0LL;
      }
      v13 = -2147467261;
      v14 = 2147500035LL;
      v15 = 131LL;
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(struct IDeviceGraphObjectCache *, char *, char *))(*(_QWORD *)a3 + 40LL))(
              a3,
              (char *)this + 64,
              (char *)this + 144);
      v13 = v12;
      if ( v12 >= 0 )
      {
        v9 = 0;
        goto LABEL_4;
      }
      v14 = (unsigned int)v12;
      v15 = 124LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (unsigned int)"avcore\\audiocore\\engine\\core\\objectcache\\devicegraphobjects.cpp",
      (const char *)v14,
      v16[0]);
    wil::details::lambda_call__lambda_4077c0e74b282fea5d37049cc4734ddb___::_lambda_call__lambda_4077c0e74b282fea5d37049cc4734ddb___(v16);
    return v13;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x74,
      (unsigned int)"avcore\\audiocore\\engine\\core\\objectcache\\devicegraphobjects.cpp",
      (const char *)0x8007000ELL,
      v16[0]);
    return 2147942414LL;
  }
}
