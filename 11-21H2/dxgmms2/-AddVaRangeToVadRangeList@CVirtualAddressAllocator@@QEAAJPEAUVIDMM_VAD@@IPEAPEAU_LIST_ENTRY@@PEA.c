/*
 * XREFs of ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C008EDD4
 * Callers:
 *     ?MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_VAD_OWNER_TYPE@@PEAX_KU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@333@Z @ 0x1C008ECAC (-MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_.c)
 *     ?CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I_K1U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1@Z @ 0x1C00A720C (-CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00DACE0 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000242C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0002528 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0002588 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111@Z @ 0x1C0002C40 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0ppxxxxxqxx_EtwWriteTransfer @ 0x1C00301BC (McTemplateK0ppxxxxxqxx_EtwWriteTransfer.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z @ 0x1C00864E8 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z.c)
 *     ?CheckUniqueGpuVaMapping@@YAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C008DC24 (-CheckUniqueGpuVaMapping@@YAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z.c)
 *     ?AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_LIST_ENTRY@@2@Z @ 0x1C00A6C0C (-AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_L.c)
 *     ?VidMmiCalculateNewOwnerOffset@@YA_KPEAUVIDMM_MAPPED_VA_RANGE@@_J@Z @ 0x1C00A7338 (-VidMmiCalculateNewOwnerOffset@@YA_KPEAUVIDMM_MAPPED_VA_RANGE@@_J@Z.c)
 *     ?VidMmiLogEndVaRangeMapping@@YAXPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@_K22@Z @ 0x1C00A7354 (-VidMmiLogEndVaRangeMapping@@YAXPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@_K22@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::AddVaRangeToVadRangeList(
        struct _KTHREAD **this,
        struct VIDMM_VAD *a2,
        unsigned int a3,
        struct _LIST_ENTRY **a4,
        struct VIDMM_MAPPED_VA_RANGE *a5)
{
  __int64 v7; // rdi
  char *v9; // r15
  struct _LIST_ENTRY **v10; // rax
  struct _LIST_ENTRY *v11; // rdi
  __int64 v12; // rsi
  int v13; // edi
  __int64 *v14; // rsi
  _QWORD *v15; // rax
  __int64 v16; // rcx
  char **v17; // rcx
  char *v18; // rax
  unsigned __int64 v20; // rcx
  struct _LIST_ENTRY **p_Blink; // rsi
  struct _LIST_ENTRY *Blink; // r9
  struct _LIST_ENTRY *v23; // r12
  struct _LIST_ENTRY *v24; // r13
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  __int64 v27; // r10
  struct VIDMM_MAPPED_VA_RANGE *v28; // rax
  struct VIDMM_VAD *v29; // rdx
  struct _LIST_ENTRY *v30; // r9
  volatile signed __int32 *v31; // r15
  struct _LIST_ENTRY *v32; // r9
  __int64 v33; // r9
  __int64 v34; // rdi
  __int64 v35; // r10
  struct VIDMM_MAPPED_VA_RANGE *v36; // rax
  struct VIDMM_VAD *v37; // rdx
  struct _LIST_ENTRY *v38; // r9
  __int64 v39; // rcx
  struct _KTHREAD **v40; // r14
  struct _KTHREAD ***v41; // rax
  struct _KTHREAD *v42; // rcx
  __int64 VidMmAllocFromOwner; // rax
  __int64 v44; // r8
  __int64 v45; // [rsp+50h] [rbp-68h]
  char v46; // [rsp+C0h] [rbp+8h]
  unsigned __int64 v47; // [rsp+C8h] [rbp+10h]
  char v48; // [rsp+D0h] [rbp+18h]

  v48 = a3;
  v7 = a3;
  v46 = 0;
  if ( this[8] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 7));
    v46 = 1;
  }
  v9 = (char *)a2 + 24 * v7 + 96;
  v10 = a4;
  if ( !a4 )
    v10 = (struct _LIST_ENTRY **)((char *)a2 + 24 * v7 + 96);
  v11 = *v10;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        if ( v11 == (struct _LIST_ENTRY *)v9 )
        {
          v12 = *((_QWORD *)a5 + 7);
          if ( (int)(*((_DWORD *)a5 + 16) << 28) >> 28 != 1 )
          {
            if ( (int)(*((_DWORD *)a5 + 16) << 28) >> 28 == 4 )
            {
              v12 = *(_QWORD *)(v12 + 64);
            }
            else
            {
              if ( (int)(*((_DWORD *)a5 + 16) << 28) >> 28 != 5 )
                goto LABEL_12;
              v12 = *(_QWORD *)(v12 + 24);
            }
          }
          if ( v12 )
          {
            v13 = CheckUniqueGpuVaMapping(**(struct _VIDMM_GLOBAL_ALLOC ***)v12, a5);
            if ( v13 < 0 )
            {
              WdLogSingleEntry1(1LL, 9138LL);
              DxgkLogInternalTriageEvent(v39, 0x40000LL);
              goto LABEL_19;
            }
            v14 = (__int64 *)(v12 + 128);
            v15 = (_QWORD *)((char *)a5 + 24);
            v16 = *v14;
            if ( *(__int64 **)(*v14 + 8) != v14 )
              goto LABEL_53;
            *v15 = v16;
            *((_QWORD *)a5 + 4) = v14;
            *(_QWORD *)(v16 + 8) = v15;
            *v14 = (__int64)v15;
          }
LABEL_12:
          v17 = (char **)*((_QWORD *)v9 + 1);
          v18 = (char *)a5 + 8;
          if ( *v17 == v9 )
          {
            *(_QWORD *)v18 = v9;
            *((_QWORD *)a5 + 2) = v17;
            *v17 = v18;
            *((_QWORD *)v9 + 1) = v18;
            ++*((_DWORD *)a2 + 19);
            if ( (*((_BYTE *)a5 + 88) & 4) == 0 )
              goto LABEL_14;
            v40 = (struct _KTHREAD **)((char *)a2 + 56);
            if ( *v40 )
              goto LABEL_14;
            v41 = (struct _KTHREAD ***)(this + 16);
            v42 = this[16];
            if ( *((struct _KTHREAD ***)v42 + 1) == this + 16 )
            {
              *v40 = v42;
              v40[1] = (struct _KTHREAD *)v41;
              *((_QWORD *)v42 + 1) = v40;
              *v41 = v40;
LABEL_14:
              v13 = 0;
              goto LABEL_15;
            }
          }
LABEL_53:
          __fastfail(3u);
        }
        v20 = *((_QWORD *)a5 + 13);
        p_Blink = &v11[-1].Blink;
        Blink = v11[5].Blink;
        v23 = v11;
        v24 = v11;
        v11 = v11->Flink;
        if ( v20 <= (unsigned __int64)Blink )
        {
          v13 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, a5, Blink, v23);
          if ( v13 >= 0 )
            goto LABEL_15;
          goto LABEL_19;
        }
        v25 = *((_QWORD *)a5 + 12);
        v26 = (unsigned __int64)p_Blink[13];
      }
      while ( v25 >= v26 );
      if ( v25 <= (unsigned __int64)Blink )
        break;
      if ( v20 < v26 )
      {
        v27 = operator new(136LL, 0x39346956u, 256LL);
        if ( v27 )
        {
          v28 = (struct VIDMM_MAPPED_VA_RANGE *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                                                  v27,
                                                  (__int64)a2,
                                                  (__int64)p_Blink[12],
                                                  *((_QWORD *)a5 + 12),
                                                  v48,
                                                  (__int64)p_Blink[7],
                                                  (__int64)p_Blink[9],
                                                  (int)(*((_DWORD *)p_Blink + 16) << 28) >> 28,
                                                  (__int64)p_Blink[11],
                                                  (__int64)p_Blink[10],
                                                  (__int64)p_Blink[15],
                                                  (__int64)p_Blink[14]);
          v31 = (volatile signed __int32 *)v28;
          if ( v28 )
          {
            v13 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, v29, v28, v30, v24);
            if ( v13 < 0 )
            {
LABEL_47:
              VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v31);
              goto LABEL_19;
            }
            v13 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, a5, v32, v24);
            if ( v13 < 0 )
              goto LABEL_19;
            v47 = VidMmiCalculateNewOwnerOffset(
                    (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
                    *((_QWORD *)a5 + 12) - (_QWORD)p_Blink[12]);
            v34 = VidMmiCalculateNewOwnerOffset((struct VIDMM_MAPPED_VA_RANGE *)p_Blink, *((_QWORD *)a5 + 13) - v33);
            v35 = operator new(136LL, 0x39346956u, 256LL);
            if ( v35 )
            {
              v36 = (struct VIDMM_MAPPED_VA_RANGE *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                                                      v35,
                                                      (__int64)a2,
                                                      *((_QWORD *)a5 + 13),
                                                      (__int64)p_Blink[13],
                                                      v48,
                                                      (__int64)p_Blink[7],
                                                      v34,
                                                      (int)(*((_DWORD *)p_Blink + 16) << 28) >> 28,
                                                      (__int64)p_Blink[11],
                                                      (__int64)p_Blink[10],
                                                      (__int64)p_Blink[15],
                                                      (__int64)p_Blink[14]);
              v31 = (volatile signed __int32 *)v36;
              if ( v36 )
              {
                v13 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, v37, v36, v38, v24);
                if ( v13 >= 0 )
                {
                  VidMmiLogEndVaRangeMapping(
                    (struct CVirtualAddressAllocator *)this,
                    (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
                    v47,
                    *((_QWORD *)a5 + 12),
                    *((_QWORD *)a5 + 13));
                  CVirtualAddressAllocator::RemoveVaRangeFromVad((CVirtualAddressAllocator *)this, v24, 0, 0);
                  goto LABEL_15;
                }
                goto LABEL_47;
              }
            }
          }
        }
        v13 = -1073741801;
        goto LABEL_19;
      }
      VidMmiLogEndVaRangeMapping(
        (struct CVirtualAddressAllocator *)this,
        (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
        (unsigned __int64)p_Blink[9],
        *((_QWORD *)a5 + 12),
        (unsigned __int64)p_Blink[13]);
      p_Blink[13] = (struct _LIST_ENTRY *)*((_QWORD *)a5 + 12);
    }
    if ( v20 < v26 )
      break;
    VidMmiLogEndVaRangeMapping(
      (struct CVirtualAddressAllocator *)this,
      (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
      (unsigned __int64)p_Blink[9],
      (unsigned __int64)Blink,
      (unsigned __int64)p_Blink[13]);
    CVirtualAddressAllocator::RemoveVaRangeFromVad((CVirtualAddressAllocator *)this, v23, 0, 1);
  }
  v13 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, a5, Blink, v23);
  if ( v13 >= 0 )
  {
    VidMmiLogEndVaRangeMapping(
      (struct CVirtualAddressAllocator *)this,
      (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
      (unsigned __int64)p_Blink[9],
      (unsigned __int64)p_Blink[12],
      *((_QWORD *)a5 + 13));
    if ( GetVidMmAllocFromOwner((int)(*((_DWORD *)p_Blink + 16) << 28) >> 28, (__int64)p_Blink[7]) )
      p_Blink[9] = (struct _LIST_ENTRY *)VidMmiCalculateNewOwnerOffset(
                                           (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
                                           *((_QWORD *)a5 + 13) - (_QWORD)p_Blink[12]);
    p_Blink[12] = (struct _LIST_ENTRY *)*((_QWORD *)a5 + 13);
LABEL_15:
    if ( a4 )
      *a4 = (struct _LIST_ENTRY *)*((_QWORD *)a5 + 1);
    if ( (byte_1C006E942 & 0x20) != 0 )
    {
      VidMmAllocFromOwner = GetVidMmAllocFromOwner((int)(*((_DWORD *)a5 + 16) << 28) >> 28, *((_QWORD *)a5 + 7));
      LODWORD(v45) = v44;
      McTemplateK0ppxxxxxqxx_EtwWriteTransfer(
        *((_QWORD *)a5 + 9),
        &UpdateGpuVirtualAddressRangeMapping,
        v44,
        this,
        VidMmAllocFromOwner,
        *((_QWORD *)a5 + 9),
        *((_QWORD *)a5 + 12),
        *((_QWORD *)a5 + 13),
        *((_QWORD *)a5 + 11),
        *((_QWORD *)a5 + 10),
        v45,
        *((_QWORD *)a5 + 14),
        *((_QWORD *)a5 + 15));
    }
  }
LABEL_19:
  if ( v46 )
  {
    this[8] = 0LL;
    ExReleasePushLockExclusiveEx(this + 7, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v13;
}
