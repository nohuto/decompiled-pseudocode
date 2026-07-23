/*
 * XREFs of KeCapturePersistentThreadState @ 0x1405558E0
 * Callers:
 *     sub_14092BC54 @ 0x14092BC54 (sub_14092BC54.c)
 *     sub_140A36E2C @ 0x140A36E2C (sub_140A36E2C.c)
 * Callees:
 *     RtlGetNtProductType @ 0x140245CC0 (RtlGetNtProductType.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     sub_1403CFB04 @ 0x1403CFB04 (sub_1403CFB04.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405528FC @ 0x1405528FC (sub_1405528FC.c)
 *     sub_1405548F0 @ 0x1405548F0 (sub_1405548F0.c)
 *     sub_140554938 @ 0x140554938 (sub_140554938.c)
 *     sub_14055547C @ 0x14055547C (sub_14055547C.c)
 *     sub_140555698 @ 0x140555698 (sub_140555698.c)
 *     sub_140564F3C @ 0x140564F3C (sub_140564F3C.c)
 */

__int64 __fastcall KeCapturePersistentThreadState(
        __int64 a1,
        struct _KTHREAD *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        size_t Size)
{
  size_t v8; // rbx
  struct _KTHREAD *CurrentThread; // r14
  void *v13; // r8
  unsigned __int64 v14; // rdx
  ULONG ActiveProcessorCount; // eax
  __int64 v16; // rdx
  unsigned int v17; // esi
  _OWORD *v18; // rcx
  int v19; // eax
  _OWORD *v20; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int64 v23; // rdx
  __int64 v24; // rcx
  size_t v25; // r8
  int v26; // esi
  __int64 v27; // rcx
  size_t v28; // r8
  int v29; // esi
  const void *v30; // rcx
  unsigned __int64 v31; // rax
  const void *v32; // r14
  unsigned int v33; // eax
  int v34; // edi
  size_t v35; // r8
  struct _KTHREAD *v36; // rax
  unsigned int v37; // edi
  int v38; // r14d
  unsigned int v39; // r15d
  int v40; // eax
  __int64 v41; // r14
  unsigned int v42; // edi
  unsigned int v43; // eax
  const void *v44; // rsi
  unsigned int v45; // eax
  __int64 v46; // rcx
  __int64 result; // rax
  int v48; // [rsp+20h] [rbp-20h] BYREF
  __int64 v49; // [rsp+28h] [rbp-18h] BYREF
  int v50; // [rsp+30h] [rbp-10h]

  v8 = Size;
  v49 = 0LL;
  v50 = 0;
  CurrentThread = a2;
  if ( !Size )
    return 0LL;
  if ( !a2 )
    CurrentThread = KeGetCurrentThread();
  if ( byte_140D00A88 || !byte_140C0C6B9 || (int)sub_1403CFB04((__int64)&v49) < 0 || (_BYTE)v49 )
    return 0LL;
  memset((void *)(v8 + 8), 0, 0x3FFF8uLL);
  v13 = (void *)v8;
  v14 = 2048LL;
  if ( (v8 & 4) != 0 )
  {
    v14 = 2047LL;
    v13 = (void *)(v8 + 4);
  }
  memset64(v13, 0x4547415045474150uLL, v14 >> 1);
  if ( (v14 & 1) != 0 )
    *((_DWORD *)v13 + v14 - 1) = 1162297680;
  *(_DWORD *)v8 = 1162297680;
  *(_DWORD *)(v8 + 4) = 875976004;
  *(_DWORD *)(v8 + 12) = (unsigned __int16)NtBuildNumber;
  *(_DWORD *)(v8 + 8) = (unsigned int)NtBuildNumber >> 28;
  *(_QWORD *)(v8 + 16) = *(_QWORD *)(*((_QWORD *)CurrentThread + 23) + 40LL) & 0xFFFFFFFFFFFFF000uLL;
  *(_QWORD *)(v8 + 24) = qword_140D069A8;
  *(_QWORD *)(v8 + 32) = &PsLoadedModuleList;
  *(_QWORD *)(v8 + 40) = &qword_140C1BF80;
  *(_DWORD *)(v8 + 48) = 34404;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  *(_QWORD *)(v8 + 3848) = 0LL;
  *(_DWORD *)(v8 + 3864) = 0;
  *(_DWORD *)(v8 + 52) = ActiveProcessorCount;
  *(_QWORD *)(v8 + 72) = a5;
  *(_QWORD *)(v8 + 80) = a6;
  *(_QWORD *)(v8 + 88) = a7;
  *(_DWORD *)(v8 + 56) = a3;
  *(_QWORD *)(v8 + 64) = a4;
  *(_DWORD *)(v8 + 3840) = -2147483645;
  *(_DWORD *)(v8 + 3844) = 1;
  *(_QWORD *)(v8 + 3856) = *(_QWORD *)(a1 + 248);
  *(_QWORD *)(v8 + 4000) = 0x40000LL;
  *(_DWORD *)(v8 + 4008) = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)(v8 + 4012) = MEMORY[0xFFFFF78000000018];
  *(_DWORD *)(v8 + 4144) = MEMORY[0xFFFFF78000000008];
  *(_DWORD *)(v8 + 4148) = MEMORY[0xFFFFF7800000000C];
  *(_DWORD *)(v8 + 3992) = 4;
  *(_DWORD *)(v8 + 4152) = 130;
  *(_DWORD *)(v8 + 4176) = 24;
  RtlGetNtProductType((PNT_PRODUCT_TYPE)(v8 + 4160));
  v16 = 9LL;
  *(_DWORD *)(v8 + 4164) = MEMORY[0xFFFFF780000002D0];
  v17 = 8320;
  v18 = (_OWORD *)a1;
  *(_DWORD *)(v8 + 4180) = MEMORY[0xFFFFF780000002C4];
  *(_DWORD *)(v8 + 8260) = 0;
  v19 = dword_140C4E588;
  *(_DWORD *)(v8 + 8256) = 0;
  *(_DWORD *)(v8 + 0x2000) = v19;
  v20 = (_OWORD *)(v8 + 840);
  *(_DWORD *)(v8 + 8196) = 0x40000;
  *(_DWORD *)(v8 + 8208) = 3840;
  *(_DWORD *)(v8 + 4152) |= 1u;
  *(_DWORD *)(v8 + 8204) = 840;
  do
  {
    *v20 = *v18;
    v20[1] = v18[1];
    v20[2] = v18[2];
    v20[3] = v18[3];
    v20[4] = v18[4];
    v20[5] = v18[5];
    v20[6] = v18[6];
    v20 += 8;
    v21 = v18[7];
    v18 += 8;
    *(v20 - 1) = v21;
    --v16;
  }
  while ( v16 );
  v22 = *v18;
  LODWORD(Size) = 896;
  *v20 = v22;
  v20[1] = v18[1];
  v20[2] = v18[2];
  v20[3] = v18[3];
  v20[4] = v18[4];
  if ( sub_14055547C(0x2080u, (unsigned int *)&Size) )
  {
    *(_DWORD *)(v8 + 4152) |= 0x400u;
    *(_QWORD *)(v8 + 128) = &unk_140C02190;
    *(_DWORD *)(v8 + 8304) = 8320;
    *(_DWORD *)(v8 + 8308) = 896;
    sub_140564F3C(v8 + 8320, v23);
    v17 = 9216;
  }
  LODWORD(Size) = 48896;
  if ( sub_14055547C(v17, (unsigned int *)&Size) )
  {
    *(_DWORD *)(v8 + 4152) |= 4u;
    *(_DWORD *)(v8 + 8220) = v17;
    memmove((void *)(v8 + v17), KeGetCurrentPrcb(), (unsigned int)Size);
    v17 += Size;
  }
  LODWORD(Size) = 2944;
  if ( sub_14055547C((v17 + 7) & 0xFFFFFFF8, (unsigned int *)&Size) )
  {
    *(_DWORD *)(v8 + 4152) |= 8u;
    v25 = (unsigned int)Size;
    v26 = v24;
    *(_DWORD *)(v8 + 8224) = v24;
    memmove((void *)(v8 + v24), *((const void **)CurrentThread + 23), v25);
    v17 = Size + v26;
  }
  LODWORD(Size) = 2288;
  if ( sub_14055547C((v17 + 7) & 0xFFFFFFF8, (unsigned int *)&Size) )
  {
    *(_DWORD *)(v8 + 4152) |= 0x10u;
    v28 = (unsigned int)Size;
    v29 = v27;
    *(_DWORD *)(v8 + 8228) = v27;
    memmove((void *)(v8 + v27), CurrentThread, v28);
    v17 = Size + v29;
  }
  if ( (*((_DWORD *)CurrentThread + 30) & 0x20000) != 0 )
  {
    v30 = (const void *)*((_QWORD *)CurrentThread + 6);
    v31 = *((_QWORD *)CurrentThread + 7);
    v32 = *(const void **)(a1 + 152);
    if ( (v30 > v32 || (unsigned __int64)v32 >= v31) && (v32 = v30, v31 <= (unsigned __int64)v30) )
      v33 = 0;
    else
      v33 = v31 - (_DWORD)v32;
    if ( v33 >= 0x7FFF )
      v33 = 0x7FFF;
    LODWORD(Size) = sub_1405548F0((__int64)v32, v33);
    if ( (_DWORD)Size )
    {
      if ( !sub_14055547C(v17, (unsigned int *)&Size) )
        *(_DWORD *)(v8 + 8260) |= 0x100u;
      *(_DWORD *)(v8 + 4152) |= 0x20u;
      v34 = Size;
      v35 = (unsigned int)Size;
      *(_DWORD *)(v8 + 8232) = v17;
      *(_DWORD *)(v8 + 8236) = v34;
      *(_QWORD *)(v8 + 8264) = v32;
      memmove((void *)(v8 + v17), v32, v35);
      v17 += v34;
    }
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    v36 = KeGetCurrentThread();
    LODWORD(Size) = 0;
    v37 = (v17 + 7) & 0xFFFFFFF8;
    v48 = 0;
    --*((_WORD *)v36 + 242);
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
    if ( (int)sub_1405528FC(0, &Size, &v48) >= 0 )
    {
      v38 = Size;
      LODWORD(Size) = 144 * Size;
      if ( (_DWORD)Size && sub_14055547C(v37, (unsigned int *)&Size) )
      {
        v39 = v37 + Size;
        LODWORD(Size) = (v48 + 7 + 6 * v38) & 0xFFFFFFF8;
        if ( (_DWORD)Size && sub_14055547C(v39, (unsigned int *)&Size) )
        {
          if ( (int)sub_140555698(v8, 0, v37, v39) >= 0 )
          {
            *(_DWORD *)(v8 + 4152) |= 0x40u;
            v40 = Size;
            *(_DWORD *)(v8 + 8240) = v37;
            *(_DWORD *)(v8 + 8244) = v38;
            *(_DWORD *)(v8 + 8248) = v39;
            v17 = v39 + v40;
            *(_DWORD *)(v8 + 8252) = v40;
          }
        }
        else
        {
          *(_DWORD *)(v8 + 8260) |= 0x100u;
        }
      }
      else
      {
        *(_DWORD *)(v8 + 8260) |= 0x100u;
      }
    }
    ExReleaseResourceLite(&PsLoadedModuleResource);
    KeLeaveCriticalRegion();
  }
  LODWORD(Size) = 4112;
  v41 = (v17 + 7) & 0xFFFFFFF8;
  sub_14055547C((v17 + 7) & 0xFFFFFFF8, (unsigned int *)&Size);
  if ( (unsigned int)Size > 0x10 )
  {
    v42 = Size - 16;
    v43 = sub_140554938(*(_QWORD *)(a1 + 248), (unsigned int)(Size - 16) >> 1);
    if ( v43 )
    {
      v44 = (const void *)(*(_QWORD *)(a1 + 248) - v43 + 1LL);
      v45 = sub_1405548F0((__int64)v44, v42);
      if ( v45 )
      {
        *(_DWORD *)(v8 + 4152) |= 0x800u;
        *(_DWORD *)(v8 + 8312) = v41;
        v46 = ((_DWORD)v41 + 23) & 0xFFFFFFF8;
        *(_DWORD *)(v8 + 8316) = 1;
        *(_DWORD *)(v41 + v8 + 8) = v46;
        *(_QWORD *)(v41 + v8) = v44;
        *(_DWORD *)(v41 + v8 + 12) = v45;
        memmove((void *)(v8 + v46), v44, v45);
      }
    }
  }
  *(_DWORD *)(v8 + 8200) = 262140;
  result = 0x40000LL;
  *(_DWORD *)(v8 + 262140) = 1145524820;
  return result;
}
