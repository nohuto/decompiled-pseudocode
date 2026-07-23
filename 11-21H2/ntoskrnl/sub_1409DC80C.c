/*
 * XREFs of sub_1409DC80C @ 0x1409DC80C
 * Callers:
 *     sub_1406932C0 @ 0x1406932C0 (sub_1406932C0.c)
 * Callees:
 *     MmUnmapVideoDisplay @ 0x140215660 (MmUnmapVideoDisplay.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1409DC350 @ 0x1409DC350 (sub_1409DC350.c)
 *     sub_1409DC494 @ 0x1409DC494 (sub_1409DC494.c)
 *     sub_1409DCAD0 @ 0x1409DCAD0 (sub_1409DCAD0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1409DC80C(_QWORD *a1, _DWORD *a2, _QWORD *a3, _DWORD *a4)
{
  _QWORD *v7; // rdi
  int v8; // edi
  __int64 v9; // r14
  unsigned int v10; // eax
  PVOID v11; // rax
  void *v12; // rsi
  __int64 result; // rax
  __int64 v14; // r14
  __int64 v15; // rdi
  _OWORD *PoolWithTag; // rax
  _BYTE v17[4]; // [rsp+30h] [rbp-58h] BYREF
  int v18; // [rsp+34h] [rbp-54h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-50h] BYREF
  int v20; // [rsp+40h] [rbp-48h]
  unsigned int NumberOfBytes; // [rsp+44h] [rbp-44h] BYREF
  _QWORD NumberOfBytes_4[8]; // [rsp+48h] [rbp-40h] BYREF

  v7 = a1;
  NumberOfBytes_4[0] = 0LL;
  NumberOfBytes = 0;
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  if ( !byte_140C16588 )
  {
    if ( (int)sub_1409DC494(NumberOfBytes_4, v17, &NumberOfBytes) < 0 )
    {
      BaseAddress = 0LL;
      NumberOfBytes_4[0] = 0LL;
      NumberOfBytes = 0;
      v8 = sub_1409DC350(1, NumberOfBytes_4, &BaseAddress, &NumberOfBytes);
      v20 = v8;
      if ( v8 >= 0 )
      {
        qword_140C165B0 = 0LL;
        dword_140C165BC = 0;
        v15 = NumberOfBytes_4[0];
        if ( *(_BYTE *)(NumberOfBytes_4[0] + 1LL) <= 8u )
        {
          qword_140C16590 = 0LL;
          dword_140C16584 = 0;
        }
        else
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x73696D57u);
          if ( PoolWithTag )
          {
            *PoolWithTag = *(_OWORD *)(v15 + 8);
            dword_140C16584 = 1;
            qword_140C16590 = (__int64)PoolWithTag;
            v20 = 0;
          }
          else
          {
            ExFreePoolWithTag(0LL, 0);
            v20 = -1073741823;
          }
        }
        if ( BaseAddress )
          MmUnmapVideoDisplay(BaseAddress, NumberOfBytes);
        ExReleaseResourceLite(&stru_140C165C0);
        sub_1402F9540((__int64)KeGetCurrentThread());
        v8 = v20;
      }
    }
    else
    {
      v18 = 0;
      LODWORD(BaseAddress) = 0;
      v8 = sub_1409DCAD0(NumberOfBytes_4[0], NumberOfBytes, 0, (unsigned int)&v18, 0LL, (__int64)&BaseAddress);
      if ( v8 >= 0 )
      {
        v9 = (unsigned int)(16 * v18);
        v10 = v9 + 8 * (_DWORD)BaseAddress;
        if ( v10 )
        {
          v11 = ExAllocatePoolWithTag(PagedPool, v10, 0x73696D57u);
          v12 = v11;
          if ( !v11 )
          {
            KeReleaseMutex(&Object, 0);
            return 3221225626LL;
          }
          v14 = (__int64)v11 + v9;
          v8 = sub_1409DCAD0(
                 NumberOfBytes_4[0],
                 NumberOfBytes,
                 (_DWORD)v11,
                 (unsigned int)&v18,
                 v14,
                 (__int64)&BaseAddress);
          if ( v8 < 0 )
          {
            ExFreePoolWithTag(v12, 0);
          }
          else
          {
            qword_140C16590 = (__int64)v12;
            dword_140C16584 = v18;
            qword_140C165B0 = v14;
            dword_140C165BC = (int)BaseAddress;
          }
        }
      }
    }
    byte_140C16588 = v8 != -1073741670;
    dword_140C16580 = v8;
    v7 = a1;
  }
  KeReleaseMutex(&Object, 0);
  result = (unsigned int)dword_140C16580;
  if ( dword_140C16580 >= 0 )
  {
    *v7 = qword_140C16590;
    *a2 = dword_140C16584;
    *a3 = qword_140C165B0;
    *a4 = dword_140C165BC;
  }
  return result;
}
