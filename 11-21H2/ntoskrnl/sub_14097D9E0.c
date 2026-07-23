/*
 * XREFs of sub_14097D9E0 @ 0x14097D9E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140221A30 @ 0x140221A30 (sub_140221A30.c)
 *     sub_140281A58 @ 0x140281A58 (sub_140281A58.c)
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14030B820 @ 0x14030B820 (sub_14030B820.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405AAA4C @ 0x1405AAA4C (sub_1405AAA4C.c)
 *     sub_1405AAEC8 @ 0x1405AAEC8 (sub_1405AAEC8.c)
 *     sub_1405AAF90 @ 0x1405AAF90 (sub_1405AAF90.c)
 *     sub_1405ABA64 @ 0x1405ABA64 (sub_1405ABA64.c)
 *     sub_1405AC580 @ 0x1405AC580 (sub_1405AC580.c)
 *     sub_1405B3370 @ 0x1405B3370 (sub_1405B3370.c)
 *     sub_14097C8DC @ 0x14097C8DC (sub_14097C8DC.c)
 */

NTSTATUS __fastcall sub_14097D9E0(HANDLE Handle, _QWORD *a2, void *a3)
{
  int v5; // ebx
  struct _KTHREAD *CurrentThread; // r13
  void *v7; // rdi
  KPROCESSOR_MODE v8; // al
  unsigned __int64 v9; // r12
  __int64 v10; // rcx
  NTSTATUS result; // eax
  __int64 Flink; // rsi
  PMDL v13; // r15
  __int64 v14; // r10
  IRP **v15; // r14
  int v16; // esi
  IRP *Irp; // r10
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // r15
  unsigned __int64 v23; // rdx
  struct _MDL *v24; // rcx
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 ByteOffset; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // r9
  __int64 v30; // r8
  signed __int64 v31; // r8
  __int64 v32; // r10
  __int16 v33; // ax
  bool v34; // zf
  char v35; // al
  __int64 v36; // rax
  __int64 v37; // r14
  void *v38; // rcx
  KPROCESSOR_MODE v39; // [rsp+30h] [rbp-1108h]
  __int64 v40; // [rsp+38h] [rbp-1100h]
  PVOID Object; // [rsp+40h] [rbp-10F8h] BYREF
  __int64 v42; // [rsp+48h] [rbp-10F0h] BYREF
  __int64 v43; // [rsp+50h] [rbp-10E8h]
  void *Src; // [rsp+58h] [rbp-10E0h]
  unsigned __int64 v45; // [rsp+60h] [rbp-10D8h]
  __int64 v46; // [rsp+68h] [rbp-10D0h]
  __int64 v47; // [rsp+70h] [rbp-10C8h]
  unsigned __int64 v48; // [rsp+78h] [rbp-10C0h]
  _QWORD *v49; // [rsp+80h] [rbp-10B8h]
  _OWORD v50[3]; // [rsp+90h] [rbp-10A8h] BYREF
  _BYTE Mdl[4144]; // [rsp+C0h] [rbp-1078h] BYREF

  Src = a3;
  v49 = a2;
  memset(v50, 0, sizeof(v50));
  memset(Mdl, 0, sizeof(Mdl));
  Object = 0LL;
  v42 = 0LL;
  v5 = 0;
  CurrentThread = KeGetCurrentThread();
  v40 = (__int64)CurrentThread;
  v7 = (void *)*((_QWORD *)CurrentThread + 23);
  v8 = *((_BYTE *)CurrentThread + 562);
  v39 = v8;
  if ( v8 )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v10 = (__int64)a2;
    *(_QWORD *)v10 = *(_QWORD *)v10;
    v9 = *a2;
    v45 = *a2;
    *a2 = 0LL;
  }
  else
  {
    v9 = *a2;
    v45 = *a2;
  }
  if ( !v9 )
    return -1073741584;
  Flink = 0LL;
  v43 = 0LL;
  v13 = (PMDL)Mdl;
  result = sub_1405AC580(Handle, 2u, v8, &Object, &v42);
  v14 = 0LL;
  if ( result >= 0 )
  {
    if ( v42 )
    {
      Flink = *(_QWORD *)(sub_140287970(v42) + 8);
      v43 = Flink;
    }
    else
    {
      v15 = (IRP **)Object;
      if ( Object )
        goto LABEL_14;
      v5 = 4;
    }
    Object = v7;
    v15 = (IRP **)v7;
LABEL_14:
    v46 = v14;
    if ( Flink || (Flink = (__int64)v15[210][1].Tail.Overlay.ListEntry.Flink, (v43 = Flink) != 0) )
    {
      v18 = sub_1405AAF90(Flink);
      v13 = (PMDL)Irp;
      v19 = 512LL;
      if ( v9 > 0x200 / v18 )
      {
        v20 = 786432LL;
        if ( v9 <= 0xC0000 / v18 )
        {
          v19 = v9 * v18;
          goto LABEL_26;
        }
        v21 = ~(v18 - 1);
        while ( 1 )
        {
          v19 = v20 & v21;
LABEL_26:
          if ( v19 <= 0x200 )
            break;
          v13 = IoAllocateMdl(0LL, (_DWORD)v19 << 12, 0, 0, Irp);
          Irp = 0LL;
          if ( v13 )
          {
            v5 |= 8u;
            break;
          }
          if ( v18 == 0x40000 && v19 == 0x40000 )
          {
            v5 |= 0x10u;
            --*(_WORD *)(v40 + 486);
            v22 = v43;
            ExAcquirePushLockExclusiveEx(v43 + 96, 0LL);
            v13 = *(PMDL *)(v22 + 88);
            Irp = 0LL;
            break;
          }
          v21 = v18 + (v19 >> 1) - 1;
          v20 = ~(v18 - 1);
        }
      }
      if ( !v13 )
      {
        v13 = (PMDL)Mdl;
        v19 = 512LL;
      }
      v23 = v19 / v18;
      while ( 1 )
      {
        if ( v9 < v23 )
          v23 = v9;
        v48 = v23;
        v13->Next = (struct _MDL *)Irp;
        v13->Size = 8 * ((((v23 << 12) + 4095) >> 12) + 6);
        v13->MdlFlags = (__int16)Irp;
        v13->StartVa = Irp;
        v13->ByteOffset = (unsigned int)Irp;
        v13->ByteCount = (_DWORD)v23 << 12;
        v5 &= ~1u;
        v24 = v13 + 1;
        if ( v39 == (_BYTE)Irp )
        {
          memmove(v24, Src, 8 * v23);
        }
        else
        {
          v16 = sub_14097C8DC(v24, (char *)Src, v23);
          if ( v16 < 0 )
            break;
        }
        v26 = v40;
        if ( *(IRP ***)(v40 + 184) != v15 )
        {
          sub_14030D5C0((ULONG_PTR)v15, 0LL, (__int64)v50, v25);
          v5 |= 1u;
          v26 = v40;
        }
        if ( !v42 )
        {
          sub_14030B820(v26, (__int64)v15);
          if ( (*((_DWORD *)v15 + 281) & 0x20) != 0 )
          {
            CurrentThread = (struct _KTHREAD *)v40;
            sub_140281A58(v40, (__int64)v15);
            v16 = -1073741558;
            goto LABEL_65;
          }
        }
        v16 = sub_1405AAA4C(v43, (__int64)v13);
        ByteOffset = v13->ByteOffset;
        v47 = ByteOffset;
        Irp = 0LL;
        if ( ByteOffset )
        {
          if ( !v42 )
            sub_1405B3370((__int64)v15, v18 * (unsigned int)ByteOffset);
          v46 += ByteOffset;
        }
        if ( (IRP *)v42 == Irp )
        {
          sub_140281A58(v40, (__int64)v15);
          Irp = 0LL;
        }
        if ( v13->ByteCount )
        {
          v28 = sub_1405AAEC8(v43);
          v31 = -(__int64)(v18 * v30);
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 17512), v31);
          if ( v42 == v32 )
            v31 = _InterlockedExchangeAdd64((volatile signed __int64 *)Object + 254, v31);
          v13->MdlFlags |= 2u;
          v13->ByteCount <<= 12;
          sub_1405ABA64((__int64)v13, v18, v31, v29);
          sub_140221A30((ULONG_PTR)v13, 0);
          v9 = v45;
          v15 = (IRP **)Object;
          Irp = 0LL;
        }
        v9 -= v47;
        v45 = v9;
        if ( v16 || !v9 )
          break;
        if ( (v5 & 1) != 0 )
        {
          sub_1402D0930((__int64)v50, 0LL);
          v5 &= ~1u;
          Irp = 0LL;
        }
        if ( v15[176] == Irp )
          goto LABEL_61;
        v33 = *((_WORD *)v15 + 1206);
        if ( v33 == 332 || (v34 = v33 == 452, v35 = (char)Irp, v34) )
          v35 = 1;
        v34 = v35 == 0;
        v36 = 4LL;
        if ( v34 )
LABEL_61:
          v36 = 8LL;
        v23 = v48;
        Src = (char *)Src + v48 * v36;
      }
      CurrentThread = (struct _KTHREAD *)v40;
    }
    else
    {
      v16 = -1073741585;
    }
LABEL_65:
    if ( (v5 & 8) != 0 )
    {
      v13->MdlFlags &= ~2u;
      IoFreeMdl(v13);
    }
    if ( (v5 & 0x10) != 0 )
    {
      v37 = v43;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v43 + 96), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v37 + 96);
      sub_1402AFC00(v37 + 96);
      v34 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
      if ( v34 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
        KiCheckForKernelApcDelivery();
      v15 = (IRP **)Object;
    }
    if ( (v5 & 1) != 0 )
      sub_1402D0930((__int64)v50, 0LL);
    if ( (v5 & 4) == 0 )
    {
      v38 = (void *)v42;
      if ( !v42 )
        v38 = v15;
      ObfDereferenceObjectWithTag(v38, 0x68506D4Du);
    }
    *v49 = v46;
    return v16;
  }
  return result;
}
