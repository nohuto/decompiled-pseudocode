/*
 * XREFs of MmProbeAndLockPages @ 0x140319E90
 * Callers:
 *     sub_1403F9330 @ 0x1403F9330 (sub_1403F9330.c)
 *     FsRtlKernelFsControlFile @ 0x1406A4560 (FsRtlKernelFsControlFile.c)
 *     sub_1406A904C @ 0x1406A904C (sub_1406A904C.c)
 *     sub_1406DDC90 @ 0x1406DDC90 (sub_1406DDC90.c)
 *     CcMdlRead @ 0x1407085F0 (CcMdlRead.c)
 *     MmProbeAndLockProcessPages @ 0x140708890 (MmProbeAndLockProcessPages.c)
 *     sub_14073A450 @ 0x14073A450 (sub_14073A450.c)
 *     sub_1407BB560 @ 0x1407BB560 (sub_1407BB560.c)
 *     sub_1407F5914 @ 0x1407F5914 (sub_1407F5914.c)
 *     sub_140857D34 @ 0x140857D34 (sub_140857D34.c)
 *     sub_14088151A @ 0x14088151A (sub_14088151A.c)
 *     sub_1409152A4 @ 0x1409152A4 (sub_1409152A4.c)
 *     sub_1409328A8 @ 0x1409328A8 (sub_1409328A8.c)
 *     sub_140933A9C @ 0x140933A9C (sub_140933A9C.c)
 *     sub_140935790 @ 0x140935790 (sub_140935790.c)
 *     sub_14096D3A4 @ 0x14096D3A4 (sub_14096D3A4.c)
 *     sub_140971B68 @ 0x140971B68 (sub_140971B68.c)
 *     sub_140978430 @ 0x140978430 (sub_140978430.c)
 *     sub_140979274 @ 0x140979274 (sub_140979274.c)
 *     sub_14097A358 @ 0x14097A358 (sub_14097A358.c)
 *     sub_14098F634 @ 0x14098F634 (sub_14098F634.c)
 *     sub_1409AF550 @ 0x1409AF550 (sub_1409AF550.c)
 *     sub_1409D43FC @ 0x1409D43FC (sub_1409D43FC.c)
 *     sub_140A06B80 @ 0x140A06B80 (sub_140A06B80.c)
 *     sub_140A07780 @ 0x140A07780 (sub_140A07780.c)
 *     sub_140A0EC90 @ 0x140A0EC90 (sub_140A0EC90.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_140319F70 @ 0x140319F70 (sub_140319F70.c)
 *     sub_14031A4F0 @ 0x14031A4F0 (sub_14031A4F0.c)
 *     sub_14031B810 @ 0x14031B810 (sub_14031B810.c)
 *     sub_14032E700 @ 0x14032E700 (sub_14032E700.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406FEC50 @ 0x1406FEC50 (sub_1406FEC50.c)
 */

void __stdcall MmProbeAndLockPages(PMDL MemoryDescriptorList, KPROCESSOR_MODE AccessMode, LOCK_OPERATION Operation)
{
  NTSTATUS v6; // eax
  unsigned int v7; // eax
  NTSTATUS v8; // eax
  _BYTE *v9; // rdi
  NTSTATUS v10; // ebx
  __int64 v11; // rax
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rdx
  _QWORD v15[22]; // [rsp+40h] [rbp-B8h] BYREF

  memset(v15, 0, sizeof(v15));
  v6 = sub_140319F70(
         (unsigned int)v15,
         (_DWORD)MemoryDescriptorList,
         LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset,
         MemoryDescriptorList->ByteCount,
         AccessMode != 0,
         Operation != IoReadAccess,
         1);
  if ( v6 < 0 )
    RtlRaiseStatus(v6);
  v7 = sub_14031B810(v15);
  v8 = sub_14031A4F0(v15, v7, 3LL);
  v9 = (_BYTE *)v15[16];
  v10 = v8;
  if ( v15[16] )
  {
    v11 = *(unsigned int *)(v15[16] + 52LL);
    LODWORD(v11) = v11 & 0x7FFFFFFF;
    v12 = v15[14] + (v11 | ((unsigned __int64)*(unsigned __int8 *)(v15[16] + 34LL) << 31));
    v13 = v15[15];
    *(_DWORD *)(v15[16] + 52LL) ^= (v12 ^ *(_DWORD *)(v15[16] + 52LL)) & 0x7FFFFFFF;
    v9[34] = v12 >> 31;
    v14 = v13 - v15[14];
    if ( v14 )
      sub_1406FEC50(v15[11], v14);
    sub_14032E700(v9);
  }
  if ( v10 < 0 )
    RtlRaiseStatus(v10);
}
