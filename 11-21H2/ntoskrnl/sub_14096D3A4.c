/*
 * XREFs of sub_14096D3A4 @ 0x14096D3A4
 * Callers:
 *     MmRotatePhysicalView @ 0x140660170 (MmRotatePhysicalView.c)
 * Callees:
 *     sub_140200A64 @ 0x140200A64 (sub_140200A64.c)
 *     sub_140200AEC @ 0x140200AEC (sub_140200AEC.c)
 *     sub_140200CF0 @ 0x140200CF0 (sub_140200CF0.c)
 *     sub_140213398 @ 0x140213398 (sub_140213398.c)
 *     sub_14021378C @ 0x14021378C (sub_14021378C.c)
 *     sub_140215598 @ 0x140215598 (sub_140215598.c)
 *     sub_140215AA8 @ 0x140215AA8 (sub_140215AA8.c)
 *     sub_140215E54 @ 0x140215E54 (sub_140215E54.c)
 *     MmSizeOfMdl @ 0x140231480 (MmSizeOfMdl.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402B2E00 @ 0x1402B2E00 (sub_1402B2E00.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x140319E90 (MmProbeAndLockPages.c)
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405952D8 @ 0x1405952D8 (sub_1405952D8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14096D3A4(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, unsigned __int64 a5)
{
  SIZE_T v6; // r15
  __int64 result; // rax
  int v8; // esi
  __int64 v9; // r9
  unsigned __int64 *v10; // r14
  unsigned __int64 *v11; // rcx
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  int v14; // edi
  SIZE_T v15; // rax
  struct _MDL *v16; // rax
  struct _MDL *v17; // rdi
  __int64 v18; // r15
  unsigned int i; // [rsp+40h] [rbp-78h]
  int v20; // [rsp+44h] [rbp-74h]
  char *P; // [rsp+50h] [rbp-68h]
  int v22; // [rsp+58h] [rbp-60h]
  __int128 v23; // [rsp+68h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-40h]

  v23 = 0LL;
  CurrentThread = 0LL;
  v6 = a5 << 12;
  if ( a5 << 12 > 0xFFFFFFFF )
    return 3221225990LL;
  v22 = v6 + a3 - 1;
  v20 = sub_140200CF0(a2);
  v8 = 0;
  v10 = (unsigned __int64 *)(v9 + 48);
  v11 = (unsigned __int64 *)(v9 + 48);
  P = (char *)(v9 + 48);
  for ( i = 0; i < a5; P += 8 )
  {
    v12 = *v11;
    if ( (unsigned int)sub_1402B2E00(*v11) )
    {
      result = sub_14021378C(48 * v12 - 0x220000000000LL);
      if ( (int)result < 0 )
        return result;
    }
    else
    {
      v13 = sub_140215598(v12);
      v14 = sub_140215E54(1, v13, 1LL, v20, 0LL, 0LL);
      if ( v14 < 0 )
        goto LABEL_21;
      ++v8;
    }
    ++i;
    v11 = (unsigned __int64 *)(P + 8);
  }
  if ( (unsigned int)sub_14032A4B0(a1, a5, 0) )
  {
    v15 = MmSizeOfMdl((PVOID)a3, v6);
    v16 = (struct _MDL *)sub_1402828F0(64, v15, 0x6F666E49u);
    v17 = v16;
    if ( v16 )
    {
      v16->Next = 0LL;
      v16->Size = 8 * ((((a3 & 0xFFF) + v6 + 4095) >> 12) + 6);
      v16->MdlFlags = 0;
      v16->StartVa = (PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL);
      v16->ByteOffset = a3 & 0xFFF;
      v16->ByteCount = v6;
      MmProbeAndLockPages(v16, 1, IoReadAccess);
      *((_QWORD *)&v23 + 1) = a2;
      CurrentThread = KeGetCurrentThread();
      sub_140200AEC(a3, v22, &v23);
      v17->MdlFlags |= 0x2000u;
      if ( (int)sub_14042A5E0(a4, v17) < 0 )
        sub_1405952D8(a4, (__int64)v17, a2);
      sub_140213398(a3, (__int64)v10, &v17[1].Next, v20, a5, 0LL, 16);
      sub_140200A64(&v23);
      MmUnlockPages(v17);
      ExFreePoolWithTag(v17, 0);
      return 0LL;
    }
    sub_14028CE10(a1, a5);
  }
  v14 = -1073741670;
LABEL_21:
  while ( v8 )
  {
    v18 = *v10;
    if ( !(unsigned int)sub_1402B2E00(*v10) )
    {
      sub_140215AA8(1, v18, 1uLL);
      --v8;
    }
    ++v10;
  }
  return (unsigned int)v14;
}
