/*
 * XREFs of SmmCreatePhysicalObjectInternal @ 0x1C001B924
 * Callers:
 *     SmmCreatePhysicalObject @ 0x1C001B724 (SmmCreatePhysicalObject.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     SmmInitializePhysicalObject @ 0x1C001BA20 (SmmInitializePhysicalObject.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     McTemplateK0xxqqtpqp_EtwWriteTransfer @ 0x1C006ECE0 (McTemplateK0xxqqtpqp_EtwWriteTransfer.c)
 */

_QWORD *__fastcall SmmCreatePhysicalObjectInternal(int a1, int a2, int a3, __int64 a4, char a5, __int64 a6, int a7)
{
  int v10; // r14d
  __int64 v11; // rdi
  _QWORD *v12; // rbx
  __int64 v13; // r9
  int v14; // r8d
  volatile signed __int64 *v15; // rcx
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // edx
  int v21; // ecx
  int v22; // r8d

  v10 = a4;
  v11 = 0LL;
  v12 = (_QWORD *)operator new[](0x68uLL, 0x31737844u, 64LL, a4);
  if ( !v12 )
  {
    _InterlockedIncrement(&dword_1C0130B54);
    WdLogSingleEntry1(6LL, 327LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v18,
        v17,
        v19,
        0,
        1,
        -1,
        (__int64)L"Failed to allocate (NonPaged) SYSMM_PHYSICAL_OBJECT",
        327LL,
        0LL,
        0LL,
        0LL,
        0LL);
    return 0LL;
  }
  if ( (dword_1C0130B08 & 0x20) != 0 )
  {
    v11 = operator new[](0x90uLL, 0x31737844u, 64LL, v13);
    if ( !v11 )
    {
      _InterlockedIncrement(&dword_1C0130B58);
      WdLogSingleEntry1(6LL, 336LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v21,
          v20,
          v22,
          0,
          1,
          -1,
          (__int64)L"Failed to allocate SYSMM_PHYSICAL_OBJECT_DEBUG",
          336LL,
          0LL,
          0LL,
          0LL,
          0LL);
      ExFreePoolWithTag(v12, 0);
      return 0LL;
    }
  }
  v12[3] = v11;
  SmmInitializePhysicalObject((_DWORD)v12, a1, a2, a3, v10, a5, a6, a7);
  _InterlockedExchangeAdd64(&qword_1C0130B10, *v12);
  v15 = (volatile signed __int64 *)&unk_1C0130B20;
  if ( (*((_DWORD *)v12 + 11) & 1) == 0 )
    v15 = (volatile signed __int64 *)&unk_1C0130B18;
  _InterlockedExchangeAdd64(v15, *v12);
  if ( (Microsoft_Windows_DxgKrnl_SysMmEnableBits & 1) != 0 )
    McTemplateK0xxqqtpqp_EtwWriteTransfer(
      (_DWORD)v15,
      (unsigned int)&CreatePhysicalObject,
      v14,
      a2,
      v12[1],
      a1,
      v10,
      a5,
      a6,
      a7,
      (char)v12);
  return v12;
}
