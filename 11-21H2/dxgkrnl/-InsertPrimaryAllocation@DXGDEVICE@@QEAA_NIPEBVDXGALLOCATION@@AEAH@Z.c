/*
 * XREFs of ?InsertPrimaryAllocation@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@AEAH@Z @ 0x1C001417C
 * Callers:
 *     ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1C01C5F88 (-AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

char __fastcall DXGDEVICE::InsertPrimaryAllocation(
        struct _KTHREAD **this,
        unsigned int a2,
        const struct DXGALLOCATION *a3,
        int *a4)
{
  __int64 v4; // rbx
  int *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 v11; // rdi
  int v12; // ecx
  char v13; // bl
  unsigned int v14; // eax
  struct _KTHREAD *v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v19; // r14
  unsigned __int64 v20; // rax
  struct _KTHREAD *v21; // rax
  struct _KTHREAD *v22; // r12
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  struct _KTHREAD *v29; // rcx
  int v30; // edx
  int v31; // ecx
  int v32; // r8d
  char v33[8]; // [rsp+60h] [rbp-48h] BYREF
  DXGPUSHLOCK *v34; // [rsp+68h] [rbp-40h]
  int v35; // [rsp+70h] [rbp-38h]

  v4 = a2;
  v7 = a4;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33, this + 42, 0);
  DXGPUSHLOCK::AcquireExclusive(v34);
  v10 = (unsigned int)v4;
  v11 = *((unsigned int *)this + v4 + 238);
  v12 = (unsigned __int8)*((_DWORD *)this + v4 + 302);
  v13 = 0;
  v35 = 2;
  if ( (_DWORD)v11 == v12 )
  {
    v19 = v11;
    LODWORD(v11) = 2 * v11;
    if ( (unsigned int)v11 >= 0xFF )
    {
      LODWORD(v11) = 255;
    }
    else if ( (unsigned int)v11 < 4 )
    {
      LODWORD(v11) = 4;
    }
    if ( (_DWORD)v11 == (_DWORD)v19 )
    {
      WdLogSingleEntry1(2LL, 806LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v24,
          v23,
          v25,
          0,
          0,
          -1,
          (__int64)L"Reached maximum number of primary allocation, rejecting this request",
          806LL,
          0LL,
          0LL,
          0LL,
          0LL);
      goto LABEL_8;
    }
    v20 = 8LL * (unsigned int)v11;
    if ( !is_mul_ok((unsigned int)v11, 8uLL) )
      v20 = -1LL;
    v21 = (struct _KTHREAD *)operator new[](v20, 0x4B677844u, 256LL, v9);
    v22 = v21;
    if ( !v21 )
    {
      WdLogSingleEntry1(6LL, (unsigned int)v11);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v27,
          v26,
          v28,
          0,
          1,
          -1,
          (__int64)L"Failed to grow device primary allocation array to %d entries",
          (unsigned int)v11,
          0LL,
          0LL,
          0LL,
          0LL);
      goto LABEL_8;
    }
    if ( (_DWORD)v19 )
    {
      memmove(v21, this[v10 + 103], 8 * v19);
      v29 = this[v10 + 103];
      if ( v29 )
        ExFreePoolWithTag(v29, 0);
    }
    v7 = a4;
    this[v10 + 103] = v22;
    *((_DWORD *)this + v10 + 238) = v11;
  }
  v14 = 0;
  if ( (_DWORD)v11 )
  {
    v15 = this[v10 + 103];
    while ( 1 )
    {
      v16 = v14;
      if ( !*((_QWORD *)v15 + v14) )
        break;
      if ( ++v14 >= *((_DWORD *)this + v10 + 238) )
        goto LABEL_27;
    }
    v17 = WdLogNewEntry5_WdTrace(v15, v8);
    v13 = 1;
    *(_QWORD *)(v17 + 24) = a3;
    *(_QWORD *)(v17 + 32) = v10;
    *((_QWORD *)this[v10 + 103] + v16) = a3;
    ++*((_BYTE *)this + 4 * v10 + 1208);
    *v7 = (*((_DWORD *)this + v10 + 302) >> 8) & 1;
  }
  else
  {
LABEL_27:
    WdLogSingleEntry1(1LL, 858LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v31,
        v30,
        v32,
        0,
        2,
        -1,
        (__int64)L"Can't find room in device primary allocation array",
        858LL,
        0LL,
        0LL,
        0LL,
        0LL);
  }
LABEL_8:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
  return v13;
}
