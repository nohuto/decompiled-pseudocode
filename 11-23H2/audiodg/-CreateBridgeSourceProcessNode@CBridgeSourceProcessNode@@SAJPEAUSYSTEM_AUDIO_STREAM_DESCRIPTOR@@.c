/*
 * XREFs of ?CreateBridgeSourceProcessNode@CBridgeSourceProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVCStreamProcessNode@@@Z @ 0x14005D638
 * Callers:
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJ_NPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000C590 (-CreateStreamPipeInstance@CPipeInstance@@SAJ_NPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STRE.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012E70 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     CreateAudioMediaType @ 0x14002A2A4 (CreateAudioMediaType.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CAutoPtr@VCBridgeSinkProcessNode@@@ATL@@QEAA@XZ @ 0x14005BFF4 (--1-$CAutoPtr@VCBridgeSinkProcessNode@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CBridgeSourceProcessNode::CreateBridgeSourceProcessNode(
        const WAVEFORMATEX **a1,
        struct CStreamProcessNode **a2)
{
  char *v4; // rax
  char *v5; // rbx
  int v6; // r9d
  struct IUnknown **v7; // r14
  HRESULT AudioMediaType; // eax
  unsigned int v9; // esi
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 (__fastcall ***v14)(_QWORD, __int64); // [rsp+50h] [rbp+18h] BYREF

  v4 = (char *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( !v4 )
  {
    v14 = 0LL;
    v9 = -2147024882;
    v10 = 2147942414LL;
    v11 = 879LL;
    goto LABEL_10;
  }
  v6 = *(_DWORD *)a1;
  v7 = (struct IUnknown **)(v4 + 48);
  *((_QWORD *)v4 + 1) = 0LL;
  *((_QWORD *)v4 + 2) = 0LL;
  *((_DWORD *)v4 + 10) = 5;
  v14 = (__int64 (__fastcall ***)(_QWORD, __int64))v4;
  *((_QWORD *)v4 + 4) = 0LL;
  *((_DWORD *)v4 + 6) = v6 != 0;
  *((_QWORD *)v4 + 6) = 0LL;
  *((_DWORD *)v4 + 14) = 0;
  *((_QWORD *)v4 + 8) = 0LL;
  *(_QWORD *)v4 = &CBridgeSourceProcessNode::`vftable';
  AudioMediaType = CreateAudioMediaType(a1[16], a1[16]->cbSize + 18, (IAudioMediaType **)v4 + 6);
  v9 = AudioMediaType;
  if ( AudioMediaType < 0 )
  {
    v10 = (unsigned int)AudioMediaType;
    v11 = 883LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
      (const char *)v10);
    ATL::CAutoPtr<CBridgeSinkProcessNode>::~CAutoPtr<CBridgeSinkProcessNode>(&v14);
    return v9;
  }
  *((_DWORD *)v5 + 15) = *(_DWORD *)a1;
  *((_DWORD *)v5 + 14) = *((_DWORD *)a1 + 3);
  if ( *((struct IUnknown **)v5 + 1) != *v7 )
    ATL::AtlComPtrAssign((struct IUnknown **)v5 + 1, *v7);
  if ( *((struct IUnknown **)v5 + 2) != *v7 )
    ATL::AtlComPtrAssign((struct IUnknown **)v5 + 2, *v7);
  *((_QWORD *)v5 + 8) = a1[14];
  result = 0LL;
  *a2 = (struct CStreamProcessNode *)v5;
  return result;
}
