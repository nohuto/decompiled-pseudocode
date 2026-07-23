/*
 * XREFs of sub_140B03800 @ 0x140B03800
 * Callers:
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 *     sub_140B020A4 @ 0x140B020A4 (sub_140B020A4.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     ntoskrnl_7 @ 0x1402AA8D0 (ntoskrnl_7.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     sub_1403B6CE8 @ 0x1403B6CE8 (sub_1403B6CE8.c)
 *     HviIsAnyHypervisorPresent @ 0x1403C03A0 (HviIsAnyHypervisorPresent.c)
 *     sub_1403C13E4 @ 0x1403C13E4 (sub_1403C13E4.c)
 *     sub_1403CB7F4 @ 0x1403CB7F4 (sub_1403CB7F4.c)
 *     sub_1403DCE64 @ 0x1403DCE64 (sub_1403DCE64.c)
 *     sub_1403DDE4C @ 0x1403DDE4C (sub_1403DDE4C.c)
 *     sub_1403DE2DC @ 0x1403DE2DC (sub_1403DE2DC.c)
 *     sub_1403FB1CC @ 0x1403FB1CC (sub_1403FB1CC.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140543EB0 @ 0x140543EB0 (sub_140543EB0.c)
 *     sub_140568560 @ 0x140568560 (sub_140568560.c)
 *     sub_140568CA4 @ 0x140568CA4 (sub_140568CA4.c)
 *     sub_14057B0EC @ 0x14057B0EC (sub_14057B0EC.c)
 *     sub_1406D2264 @ 0x1406D2264 (sub_1406D2264.c)
 *     sub_140829870 @ 0x140829870 (sub_140829870.c)
 *     sub_14082A0D8 @ 0x14082A0D8 (sub_14082A0D8.c)
 *     sub_1408486C4 @ 0x1408486C4 (sub_1408486C4.c)
 *     sub_140A5943C @ 0x140A5943C (sub_140A5943C.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140AD6B50 @ 0x140AD6B50 (sub_140AD6B50.c)
 *     sub_140B036D4 @ 0x140B036D4 (sub_140B036D4.c)
 *     sub_140B190F0 @ 0x140B190F0 (sub_140B190F0.c)
 *     sub_140B24034 @ 0x140B24034 (sub_140B24034.c)
 *     sub_140B24E48 @ 0x140B24E48 (sub_140B24E48.c)
 *     sub_140B29BDC @ 0x140B29BDC (sub_140B29BDC.c)
 *     sub_140B2CB08 @ 0x140B2CB08 (sub_140B2CB08.c)
 *     sub_140B2EDD8 @ 0x140B2EDD8 (sub_140B2EDD8.c)
 *     sub_140B30F84 @ 0x140B30F84 (sub_140B30F84.c)
 *     sub_140B311E0 @ 0x140B311E0 (sub_140B311E0.c)
 *     sub_140B31500 @ 0x140B31500 (sub_140B31500.c)
 */

char __fastcall sub_140B03800(int a1)
{
  ULONG ActiveProcessorCount; // eax
  __int64 v2; // rcx
  ULONG v3; // r14d
  __int64 v4; // rdx
  ULONG v5; // edi
  __int64 *v6; // rsi
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // r9d
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned __int64 v15; // rcx
  int v16; // edx
  __int64 v17; // rcx
  int v18; // eax
  struct _KPRCB *v20; // r10
  __int64 v21; // r10
  __int64 v22; // rdx
  __int64 v23; // r10
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  unsigned __int64 v27; // rdx
  int v28; // ecx
  unsigned int v29; // eax
  __int64 v30; // r9
  __int64 *v31; // rdx
  int v32; // r8d
  _QWORD *PoolWithTag; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  unsigned __int8 CurrentIrql; // si
  __int64 v38; // r9
  unsigned __int8 v39; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v41; // r8
  int v42; // eax
  bool v43; // zf
  _DWORD v44[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v45; // [rsp+38h] [rbp-28h]
  __int64 (__fastcall **v46)(); // [rsp+40h] [rbp-20h]
  __int64 v47; // [rsp+48h] [rbp-18h]
  __int64 v48; // [rsp+50h] [rbp-10h]
  int v49; // [rsp+90h] [rbp+30h] BYREF
  __int64 v50; // [rsp+98h] [rbp+38h] BYREF

  if ( a1 )
  {
    if ( a1 != 1 )
    {
      if ( a1 == 2 )
      {
        sub_1406D2264((char *)&dword_140C02FD0, (__int64)sub_14085FE00, (__int64)&dword_140C02FD0);
        sub_140B036D4(2LL, v25, v26);
      }
      else if ( a1 == 3 )
      {
        sub_140B2EDD8();
      }
      else
      {
        ExAcquireFastMutexUnsafe(&stru_140C2B9A0);
        sub_140B190F0();
        qword_140D068D0 = 0LL;
        ExReleaseFastMutexUnsafe(&stru_140C2B9A0);
        sub_140B29BDC();
        sub_1403DCE64();
        if ( dword_140D06D3C || !HviIsAnyHypervisorPresent() )
          byte_140D068E6 = 1;
        v50 = 0LL;
        v49 = 0;
        if ( (dword_140D0688C & 0x100000) != 0 )
        {
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x4A0uLL, 0x4850654Bu);
          qword_140C2A880 = (__int64)PoolWithTag;
          if ( PoolWithTag )
          {
            v36 = 37LL;
            do
            {
              PoolWithTag[1] = PoolWithTag;
              *PoolWithTag = PoolWithTag;
              PoolWithTag[2] = 0LL;
              *((_DWORD *)PoolWithTag + 6) = 0;
              PoolWithTag += 4;
              --v36;
            }
            while ( v36 );
            LODWORD(dword_140C2A840) = 275;
            qword_140C2A858 = (__int64)sub_14057B0D0;
            qword_140C2A860 = 0LL;
            qword_140C2A878 = 0LL;
            qword_140C2A850 = 0LL;
            if ( (int)sub_140543EB0(&v50, &v49, v34, v35) >= 0 )
            {
              dword_140C2A824 = (unsigned int)(v49 - 16) >> 3;
              qword_140C2A828 = v50;
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
              {
                v38 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
                *(_DWORD *)(v38 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
              }
              sub_14057B0EC();
              if ( dword_140D06B08 )
              {
                if ( (dword_140D06B08 & 1) != 0 )
                {
                  v39 = KeGetCurrentIrql();
                  if ( v39 <= 0xFu && CurrentIrql <= 0xFu && v39 >= 2u )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    v41 = *((_QWORD *)CurrentPrcb + 4375);
                    v42 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                    v43 = (v42 & *(_DWORD *)(v41 + 20)) == 0;
                    *(_DWORD *)(v41 + 20) &= v42;
                    if ( v43 )
                      sub_140418E4C((__int64)CurrentPrcb);
                  }
                }
              }
              __writecr8(CurrentIrql);
            }
          }
        }
        sub_140AD6B50();
      }
      return 1;
    }
    sub_140B30F84();
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    v2 = DesiredTime;
    v3 = ActiveProcessorCount;
    qword_140C2BD70 = 0LL;
    v4 = (ActiveProcessorCount + (DesiredTime + 29999999) / DesiredTime - 1) % ActiveProcessorCount;
    byte_140D05003 = (ActiveProcessorCount + (DesiredTime + 29999999) / DesiredTime - 1) / ActiveProcessorCount;
    if ( !dword_140D06D3C && HviIsAnyHypervisorPresent() )
    {
      if ( !byte_140D0688B || (dword_140D0689C & 0x20) != 0 )
      {
        dword_140D0501C = 0;
        v28 = 1;
        dword_140D05028 = 0;
        dword_140D05034 = 0;
        dword_140D05030 = 0;
        dword_140D05020 = 0;
        dword_140D05024 = 0;
      }
      else
      {
        v28 = 0;
      }
      sub_140568560(v28);
    }
    sub_140B2CB08(v2, v4);
    if ( dword_140C1B2A0 )
    {
      v29 = dword_140D05048;
      if ( !dword_140D05048 )
      {
        v29 = 1;
        dword_140D05048 = 1;
      }
      if ( v29 > 0x64 )
        dword_140D05048 = 100;
      sub_140568CA4();
    }
    v5 = 0;
    if ( v3 )
    {
      v6 = qword_140D088C0;
      while ( 1 )
      {
        v7 = *v6;
        sub_140A5943C(*v6);
        if ( dword_140D0516C )
        {
          if ( (int)sub_140829870(v7) < 0 )
            break;
        }
        if ( (int)sub_1403C13E4(v7, v8, v9, v10) < 0 )
          break;
        ++v5;
        ++v6;
        if ( v5 >= v3 )
          goto LABEL_19;
      }
    }
    else
    {
LABEL_19:
      if ( (unsigned __int8)sub_140B31500() && (int)sub_140B24E48() >= 0 && (int)sub_140B24034() >= 0 )
      {
        if ( (_BYTE)byte_140E01841 )
        {
          LOBYTE(byte_140D07050) = 1;
          dword_140D07058 = 10;
        }
        sub_1403FB1CC(0x640010u);
        sub_140B036D4(1LL, v11, v12);
        if ( (qword_140D068D8 & 0x800000) != 0 && qword_140D06A68 || (_DWORD)dword_140D06964 )
        {
          v44[1] = 6;
          v46 = off_140009C98;
          v45 = 512LL;
          v44[0] = 65548;
          v47 = 0LL;
          v48 = 0LL;
          if ( (int)sub_1408486C4(&qword_140C2AF58, v13, (unsigned __int16 *)v44) < 0 )
            qword_140C2AF58 = 0LL;
        }
        if ( sub_1403CB7F4() )
        {
          v14 = *(unsigned int *)(qword_140D088C0[0] + 68);
          v15 = v14 * (unsigned __int64)DesiredTime / 0xA;
          dword_140D06B94 = v15 / 0xF0;
          dword_140D050CC = v15 / 3;
          dword_140D06B98 = v15 / 3;
          v16 = dword_140D0517C;
          *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 5) = 3 * dword_140D050CC;
          _BitScanReverse64(&v15, 6000000 * v14);
          dword_140D06D54 = v15;
          if ( (unsigned int)dword_140D0517C < 0x32 )
          {
            v16 = 50;
            dword_140D0517C = 50;
          }
          if ( (unsigned int)dword_140D05178 < 2 )
            dword_140D05178 = 2;
          v17 = *(unsigned int *)(qword_140D088C0[0] + 68);
          dword_140D06D5C = v16 * *(_DWORD *)(qword_140D088C0[0] + 68);
          qword_140D05358 = v17 * HIDWORD(qword_140D05350);
          qword_140D05368 = *(unsigned int *)(qword_140D088C0[0] + 68) * (unsigned __int64)(unsigned int)dword_140D05360;
          if ( byte_140C097FC )
          {
            v30 = qword_140D06CC8;
            v31 = (__int64 *)&xmmword_140C02190;
            byte_140D01928 = 1;
            v32 = 112;
            do
            {
              *v31 = v30 ^ __ROR8__((unsigned __int64)&byte_140D01928 ^ _byteswap_uint64(qword_140D06E28 ^ *v31), v30);
              ++v31;
              --v32;
            }
            while ( v32 );
          }
          v18 = ntoskrnl_7((ULONG_PTR)sub_140B198D0, 0LL, 49152, 2, 0LL);
          if ( v18 < 0 )
            KeBugCheckEx(0x32u, v18, 0x5356694BuLL, 0LL, 0LL);
          sub_1403DDE4C();
          LODWORD(dword_140C2AA4C) = 268288;
          stru_140C2AA60.DeferredRoutine = (PKDEFERRED_ROUTINE)sub_1405794B0;
          stru_140C2AA60.TargetInfoAsUlong = 275;
          stru_140C2AA60.DeferredContext = 0LL;
          stru_140C2AA60.DpcData = 0LL;
          stru_140C2AA60.ProcessorHistory = 0LL;
          return 1;
        }
      }
    }
    return 0;
  }
  else
  {
    v20 = KeGetCurrentPrcb();
    if ( (qword_140D06958 & 0x8000) != 0 && dword_140D06B8C && (*((_QWORD *)v20 + 1440) & 3) != 3 )
    {
      v27 = *((_QWORD *)v20 + 1440) | 3LL;
      *((_QWORD *)v20 + 1440) = v27;
      __writemsr(0x122u, v27);
    }
    dword_140D06C38 = sub_1403DE2DC();
    sub_140B311E0(v21);
    sub_1403B6CE8();
    v24 = sub_14082A0D8(v23, v22);
    if ( v24 < 0 )
      KeBugCheckEx(0x31u, v24, 1uLL, 0LL, 0LL);
    return 1;
  }
}
