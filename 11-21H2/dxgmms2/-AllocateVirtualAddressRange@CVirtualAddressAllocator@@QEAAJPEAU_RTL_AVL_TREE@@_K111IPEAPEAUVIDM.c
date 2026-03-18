/*
 * XREFs of ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C008DD00
 * Callers:
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C007B4E8 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C009B234 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C009BB44 (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C00029AC (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqxx_EtwWriteTransfer @ 0x1C00302BC (McTemplateK0pqxx_EtwWriteTransfer.c)
 *     ?RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0086684 (-RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1C00866CC (-FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z.c)
 *     ?FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z @ 0x1C008E120 (-FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z.c)
 *     ?InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C009D6B4 (-InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z @ 0x1C009D760 (-AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z.c)
 *     ?CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00A42B4 (-CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::AllocateVirtualAddressRange(
        CVirtualAddressAllocator *this,
        struct _RTL_AVL_TREE *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned int a7,
        struct VIDMM_VAD **a8,
        unsigned __int8 a9)
{
  unsigned __int8 v9; // r10
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // r13d
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  int v18; // ebp
  struct VIDMM_VAD *NodeInFreeList; // rax
  __int64 v20; // r8
  struct VIDMM_VAD *v21; // rdi
  __int64 v22; // rdx
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rdx
  int v28; // ecx
  _QWORD *v29; // rax
  __int64 v30; // rcx
  struct VIDMM_VAD **v31; // r13
  struct VIDMM_VAD **v32; // rcx
  struct VIDMM_VAD *v33; // rdx
  __int64 v34; // r8
  struct _RTL_AVL_TREE *v35; // rax
  struct _RTL_BALANCED_NODE *v36; // rbx
  struct _RTL_BALANCED_NODE *v37; // rax
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v41; // r8
  struct VIDMM_VAD *Vad; // r12
  unsigned __int64 v43; // rdx
  struct VIDMM_VAD *v44; // r14
  __int64 v45; // rax
  char *v46; // rbx
  char **v47; // rdi
  __int64 v48; // rcx
  _QWORD *v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rcx
  unsigned __int64 v52; // r10
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v58; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v59; // [rsp+58h] [rbp-70h]
  unsigned __int64 v60; // [rsp+60h] [rbp-68h]
  unsigned __int64 v61; // [rsp+68h] [rbp-60h]
  unsigned __int64 v62; // [rsp+70h] [rbp-58h]
  __int64 v63; // [rsp+78h] [rbp-50h]
  unsigned __int64 v64; // [rsp+80h] [rbp-48h]
  unsigned __int64 v65; // [rsp+88h] [rbp-40h]
  __int64 v66; // [rsp+90h] [rbp-38h]
  struct _RTL_AVL_TREE *v67; // [rsp+D8h] [rbp+10h] BYREF

  v67 = a2;
  v9 = a9;
  if ( a9 )
  {
    v11 = *((_QWORD *)this + 12);
    if ( !v11 || (*(_DWORD *)(v11 + 96) & 2) != 0 && !*(_BYTE *)(*((_QWORD *)this + 11) + 40177LL) )
      v9 = 0;
  }
  v12 = *((_QWORD *)this + 11);
  if ( v12 )
    v13 = *(_DWORD *)(v12 + 7016);
  else
    v13 = 1;
  v14 = a3 + a4;
  if ( a3 + a4 <= a4 )
  {
    WdLogSingleEntry1(1LL, 929LL);
    DxgkLogInternalTriageEvent(v50, 0x40000LL);
    return 3221225485LL;
  }
  if ( !a7 || (v15 = a7 - 1, ((unsigned int)v15 & a7) != 0) )
  {
    WdLogSingleEntry1(1LL, 935LL);
    DxgkLogInternalTriageEvent(v56, 0x40000LL);
    return 3221225485LL;
  }
  else
  {
    v63 = a7 - 1;
    v59 = 0LL;
    v65 = 0LL;
    v64 = ~(unsigned __int64)(unsigned int)v15;
    v66 = 0LL;
    if ( (v15 & a4) != 0 )
    {
      WdLogSingleEntry1(1LL, 945LL);
      DxgkLogInternalTriageEvent(v51, 0x40000LL);
      return 3221225485LL;
    }
    v16 = a6;
    v17 = a5;
    v58 = a4;
    v59 = a3 + a4;
    v60 = a5;
    if ( !a6 )
      v16 = *((_QWORD *)this + 2);
    v61 = v16;
    v18 = 0;
    v62 = a3;
    if ( v9 && dword_1C006E500 && v14 != *((_QWORD *)this + 2) )
    {
      v52 = a3 + 4096;
      if ( a3 + 4096 < a3 || v14 + 4096 < v14 )
      {
        WdLogSingleEntry1(1LL, 967LL);
        HIDWORD(v57) = 0;
        DxgkLogInternalTriageEvent(v53, 0x40000LL);
        a3 = v62;
        v16 = v61;
        v17 = v60;
      }
      else
      {
        a3 += 4096LL;
        v62 = v52;
        v59 = v14 + 4096;
        v18 = 1;
      }
    }
    if ( v17 < v16 && v16 - v17 >= a3 )
    {
      NodeInFreeList = CVirtualAddressAllocator::FindNodeInFreeList(this, &v58);
      v21 = NodeInFreeList;
      if ( !NodeInFreeList )
      {
        WdLogSingleEntry0(3LL);
        return 3221225473LL;
      }
      v22 = *((_QWORD *)NodeInFreeList + 3);
      v23 = v65;
      v24 = v65 + v62;
      if ( v22 == v65 )
      {
        if ( *((_QWORD *)NodeInFreeList + 4) - v22 != v62 )
        {
          v25 = operator new[](24 * (v13 + 4), 0x39346956u, 256LL);
          v27 = v25;
          if ( v25 )
          {
            *(_QWORD *)(v25 + 24) = v23;
            v28 = (*(_DWORD *)(v25 + 72) ^ (16 * v13)) & 0x7F0;
            *(_QWORD *)(v25 + 32) = v24;
            *(_DWORD *)(v25 + 72) ^= v28;
            if ( v13 )
            {
              v29 = (_QWORD *)(v25 + 96);
              v30 = v13;
              do
              {
                v29[1] = v29;
                *v29 = v29;
                v29[2] = 0LL;
                v29 += 3;
                --v30;
              }
              while ( v30 );
            }
            v31 = a8;
            *(_QWORD *)(v27 + 88) = v27 + 80;
            *(_QWORD *)(v27 + 80) = v27 + 80;
            v32 = (struct VIDMM_VAD **)*((_QWORD *)v21 + 6);
            *v31 = (struct VIDMM_VAD *)v27;
            v33 = (struct VIDMM_VAD *)(v27 + 40);
            if ( *v32 == (struct VIDMM_VAD *)((char *)v21 + 40) )
            {
              *(_QWORD *)v33 = (char *)v21 + 40;
              *((_QWORD *)v33 + 1) = v32;
              *v32 = v33;
              *((_QWORD *)v21 + 6) = v33;
              if ( (byte_1C006E942 & 0x20) != 0 )
              {
                LODWORD(v57) = *((_DWORD *)v21 + 18);
                McTemplateK0pqxx_EtwWriteTransfer(
                  (__int64)v32,
                  &DestroyGpuVirtualAddressRange,
                  v26,
                  this,
                  v57,
                  *((_QWORD *)v21 + 3),
                  *((_QWORD *)v21 + 4));
              }
              RtlAvlRemoveNode((char *)this + 40, v21);
              *((_DWORD *)v21 + 18) &= 0xFFFFFFF0;
              LOBYTE(v34) = 0;
              v35 = (struct _RTL_AVL_TREE *)(*((_QWORD *)v21 + 4) - v24);
              *((_QWORD *)v21 + 3) = v24;
              v36 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5);
              v67 = v35;
              if ( v36 )
              {
                while ( 1 )
                {
                  if ( (int)CompareVadSizeAvl(&v67, v36) < 0 )
                  {
                    v37 = v36->Children[0];
                    if ( !v36->Children[0] )
                    {
                      LOBYTE(v34) = 0;
                      break;
                    }
                  }
                  else
                  {
                    v37 = v36->Children[1];
                    if ( !v37 )
                    {
                      LOBYTE(v34) = 1;
                      break;
                    }
                  }
                  v36 = v37;
                }
              }
              RtlAvlInsertNodeEx((char *)this + 40, v36, v34, v21);
              v39 = *((_DWORD *)v21 + 18) & 0xFFFFE7F0 | 1;
              *((_DWORD *)v21 + 18) = v39;
              if ( (byte_1C006E942 & 0x20) != 0 )
              {
                LODWORD(v57) = v39;
                McTemplateK0pqxx_EtwWriteTransfer(
                  v39,
                  &CreateGpuVirtualAddressRange,
                  v38,
                  this,
                  v57,
                  *((_QWORD *)v21 + 3),
                  *((_QWORD *)v21 + 4));
              }
              goto LABEL_35;
            }
LABEL_46:
            __fastfail(3u);
          }
          _InterlockedIncrement(&dword_1C006E84C);
          WdLogSingleEntry1(6LL, 1027LL);
          goto LABEL_58;
        }
        CVirtualAddressAllocator::RemoveVadFromFreeList(this, NodeInFreeList, v20);
        v31 = a8;
        *a8 = v21;
      }
      else
      {
        Vad = CVirtualAddressAllocator::AllocateVad(v65, v65 + v62, v13);
        if ( !Vad )
        {
          _InterlockedIncrement(&dword_1C006E84C);
          WdLogSingleEntry1(6LL, 1060LL);
LABEL_58:
          DxgkLogInternalTriageEvent(v54, 262145LL);
          return 3221225495LL;
        }
        v43 = *((_QWORD *)v21 + 4);
        v44 = 0LL;
        if ( v24 < v43 )
        {
          v44 = CVirtualAddressAllocator::AllocateVad(v24, v43, v13);
          if ( !v44 )
          {
            _InterlockedIncrement(&dword_1C006E84C);
            WdLogSingleEntry1(6LL, 1073LL);
            DxgkLogInternalTriageEvent(v55, 262145LL);
            CVirtualAddressAllocator::FreeVad(Vad);
            return 3221225495LL;
          }
        }
        CVirtualAddressAllocator::RemoveVadFromFreeList(this, v21, v41);
        *((_QWORD *)v21 + 4) = v65;
        CVirtualAddressAllocator::InsertVadToFreeList(this, v21);
        v45 = *((_QWORD *)v21 + 5);
        v46 = (char *)Vad + 40;
        v31 = a8;
        v47 = (char **)((char *)v21 + 40);
        *a8 = Vad;
        if ( *(char ***)(v45 + 8) != v47 )
          goto LABEL_46;
        *(_QWORD *)v46 = v45;
        *((_QWORD *)Vad + 6) = v47;
        *(_QWORD *)(v45 + 8) = v46;
        *v47 = v46;
        if ( v44 )
        {
          CVirtualAddressAllocator::InsertVadToFreeList(this, v44);
          v48 = *(_QWORD *)v46;
          v49 = (_QWORD *)((char *)v44 + 40);
          if ( *(char **)(*(_QWORD *)v46 + 8LL) != v46 )
            goto LABEL_46;
          *v49 = v48;
          *((_QWORD *)v44 + 6) = v46;
          *(_QWORD *)(v48 + 8) = v49;
          *(_QWORD *)v46 = v49;
        }
      }
LABEL_35:
      *((_DWORD *)*v31 + 18) = (v18 << 12) | *((_DWORD *)*v31 + 18) & 0xFFFFEFFF;
      return 0LL;
    }
    return 3221225485LL;
  }
}
