/*
 * XREFs of sub_140348B40 @ 0x140348B40
 * Callers:
 *     sub_140214694 @ 0x140214694 (sub_140214694.c)
 *     sub_14022020C @ 0x14022020C (sub_14022020C.c)
 *     sub_140224210 @ 0x140224210 (sub_140224210.c)
 *     sub_140246BB0 @ 0x140246BB0 (sub_140246BB0.c)
 *     sub_140250B40 @ 0x140250B40 (sub_140250B40.c)
 *     sub_1402BA130 @ 0x1402BA130 (sub_1402BA130.c)
 *     ExFreeCacheAwareRundownProtection @ 0x1402D2AA0 (ExFreeCacheAwareRundownProtection.c)
 *     sub_1402D53C0 @ 0x1402D53C0 (sub_1402D53C0.c)
 *     sub_1403497C0 @ 0x1403497C0 (sub_1403497C0.c)
 *     ExFreeAutoExpandPushLock @ 0x14039EB60 (ExFreeAutoExpandPushLock.c)
 *     sub_1403A0424 @ 0x1403A0424 (sub_1403A0424.c)
 *     sub_1403A0690 @ 0x1403A0690 (sub_1403A0690.c)
 *     sub_1403A61E8 @ 0x1403A61E8 (sub_1403A61E8.c)
 *     sub_1403A8CB4 @ 0x1403A8CB4 (sub_1403A8CB4.c)
 *     sub_1403AA2B8 @ 0x1403AA2B8 (sub_1403AA2B8.c)
 *     sub_1403C5EDC @ 0x1403C5EDC (sub_1403C5EDC.c)
 *     sub_1403C62EC @ 0x1403C62EC (sub_1403C62EC.c)
 *     sub_1403C64C0 @ 0x1403C64C0 (sub_1403C64C0.c)
 *     sub_1403DAA2C @ 0x1403DAA2C (sub_1403DAA2C.c)
 *     ExFreePool2 @ 0x14063A800 (ExFreePool2.c)
 *     sub_14063AC94 @ 0x14063AC94 (sub_14063AC94.c)
 *     sub_14063AFCC @ 0x14063AFCC (sub_14063AFCC.c)
 *     sub_14063B798 @ 0x14063B798 (sub_14063B798.c)
 *     sub_14063BE80 @ 0x14063BE80 (sub_14063BE80.c)
 *     sub_14063C25C @ 0x14063C25C (sub_14063C25C.c)
 *     ExFreeCacheAwarePushLock @ 0x14063C290 (ExFreeCacheAwarePushLock.c)
 *     ExCreateDpcEvent @ 0x14063E200 (ExCreateDpcEvent.c)
 *     ExDeleteDpcEvent @ 0x14063E310 (ExDeleteDpcEvent.c)
 *     sub_14063EF78 @ 0x14063EF78 (sub_14063EF78.c)
 *     ExShareAddressSpaceWithDevice @ 0x14063F7C0 (ExShareAddressSpaceWithDevice.c)
 *     sub_140640A9C @ 0x140640A9C (sub_140640A9C.c)
 *     sub_140640FF0 @ 0x140640FF0 (sub_140640FF0.c)
 *     sub_140641EE0 @ 0x140641EE0 (sub_140641EE0.c)
 *     sub_140642A44 @ 0x140642A44 (sub_140642A44.c)
 *     sub_140642CDC @ 0x140642CDC (sub_140642CDC.c)
 *     sub_140643F08 @ 0x140643F08 (sub_140643F08.c)
 *     sub_140644808 @ 0x140644808 (sub_140644808.c)
 *     sub_140644930 @ 0x140644930 (sub_140644930.c)
 *     sub_140644D30 @ 0x140644D30 (sub_140644D30.c)
 *     sub_140644EEC @ 0x140644EEC (sub_140644EEC.c)
 *     sub_140646C90 @ 0x140646C90 (sub_140646C90.c)
 *     sub_140647164 @ 0x140647164 (sub_140647164.c)
 *     sub_14064717C @ 0x14064717C (sub_14064717C.c)
 *     sub_140648860 @ 0x140648860 (sub_140648860.c)
 *     sub_140648D4C @ 0x140648D4C (sub_140648D4C.c)
 *     sub_140652A5C @ 0x140652A5C (sub_140652A5C.c)
 *     sub_140655178 @ 0x140655178 (sub_140655178.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140AFC9DC @ 0x140AFC9DC (sub_140AFC9DC.c)
 *     sub_140AFF7C8 @ 0x140AFF7C8 (sub_140AFF7C8.c)
 *     sub_140B2A324 @ 0x140B2A324 (sub_140B2A324.c)
 *     sub_140B54800 @ 0x140B54800 (sub_140B54800.c)
 *     sub_140B54AE4 @ 0x140B54AE4 (sub_140B54AE4.c)
 *     sub_140B54FF8 @ 0x140B54FF8 (sub_140B54FF8.c)
 *     sub_140B55478 @ 0x140B55478 (sub_140B55478.c)
 *     sub_140B55668 @ 0x140B55668 (sub_140B55668.c)
 * Callees:
 *     sub_140216928 @ 0x140216928 (sub_140216928.c)
 *     sub_140221790 @ 0x140221790 (sub_140221790.c)
 *     sub_14022FB20 @ 0x14022FB20 (sub_14022FB20.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     sub_1403493B0 @ 0x1403493B0 (sub_1403493B0.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     sub_14034CEB0 @ 0x14034CEB0 (sub_14034CEB0.c)
 *     sub_140350B40 @ 0x140350B40 (sub_140350B40.c)
 *     sub_140362864 @ 0x140362864 (sub_140362864.c)
 *     sub_140362B58 @ 0x140362B58 (sub_140362B58.c)
 *     sub_140364860 @ 0x140364860 (sub_140364860.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140366C48 @ 0x140366C48 (sub_140366C48.c)
 *     sub_140366FB0 @ 0x140366FB0 (sub_140366FB0.c)
 *     sub_140367DEC @ 0x140367DEC (sub_140367DEC.c)
 *     sub_140370928 @ 0x140370928 (sub_140370928.c)
 *     sub_140371654 @ 0x140371654 (sub_140371654.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140461DE4 @ 0x140461DE4 (sub_140461DE4.c)
 *     sub_14056DBFC @ 0x14056DBFC (sub_14056DBFC.c)
 *     sub_1405F1BBC @ 0x1405F1BBC (sub_1405F1BBC.c)
 *     sub_1405F2F0C @ 0x1405F2F0C (sub_1405F2F0C.c)
 *     sub_1405F3028 @ 0x1405F3028 (sub_1405F3028.c)
 *     sub_1405FF880 @ 0x1405FF880 (sub_1405FF880.c)
 *     sub_14062DEE4 @ 0x14062DEE4 (sub_14062DEE4.c)
 *     sub_14063D44C @ 0x14063D44C (sub_14063D44C.c)
 *     sub_14063E4D0 @ 0x14063E4D0 (sub_14063E4D0.c)
 *     sub_14063F394 @ 0x14063F394 (sub_14063F394.c)
 *     sub_1406423A4 @ 0x1406423A4 (sub_1406423A4.c)
 *     sub_140A9D69C @ 0x140A9D69C (sub_140A9D69C.c)
 */

__int64 __fastcall sub_140348B40(ULONG_PTR BugCheckParameter3)
{
  char v2; // al
  int v3; // eax
  __int64 v4; // rcx
  ULONG_PTR v5; // rax
  unsigned __int64 v6; // rbx
  ULONG_PTR v7; // rdi
  int v8; // r12d
  unsigned int v9; // ebp
  int v10; // r15d
  __int64 v11; // r14
  __int64 v12; // rax
  int v13; // r11d
  __int64 v14; // r9
  unsigned int v15; // edx
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  int v20; // ecx
  unsigned int v21; // esi
  int v22; // eax
  unsigned __int64 v23; // rbx
  ULONG_PTR v24; // r8
  char v25; // cl
  ULONG_PTR v26; // rdx
  char v27; // al
  char v28; // al
  __int64 v29; // rdx
  __int64 result; // rax
  __int64 v31; // rdx
  int v32; // ecx
  __int64 v33; // r8
  ULONG_PTR v34; // rdx
  __int16 v35; // ax
  ULONG_PTR v36; // rbp
  ULONG_PTR BugCheckParameter4; // r14
  __int64 v38; // rcx
  __int64 v39; // rcx
  int v40; // edi
  KIRQL v41; // r13
  __int64 v42; // r8
  volatile signed __int32 *v43; // r10
  unsigned __int64 v44; // r9
  int v45; // r11d
  unsigned int v46; // edx
  __int64 v47; // rcx
  ULONG_PTR v48; // rdi
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v60; // r8
  int v61; // eax
  bool v62; // zf
  char v63; // cl
  int v64; // ecx
  __int128 v65; // [rsp+30h] [rbp-78h]
  __int128 v66; // [rsp+40h] [rbp-68h] BYREF
  __int128 v67; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v68; // [rsp+B0h] [rbp+8h] BYREF
  int v69; // [rsp+B4h] [rbp+Ch]
  unsigned __int64 *v70; // [rsp+B8h] [rbp+10h] BYREF

  if ( BugCheckParameter3 >= 0xFFFF800000000000uLL && byte_140C53F50[((BugCheckParameter3 >> 39) & 0x1FF) - 256] == 1 )
    v2 = 5;
  else
    v2 = 3;
  v65 = 0LL;
  *(_WORD *)((char *)&v65 + 1) = 1;
  LOBYTE(v65) = v2;
  if ( (_WORD)BugCheckParameter3 )
  {
    v3 = 0;
LABEL_6:
    v4 = v3;
    v68 = 0x100000;
    v69 = 0x1000000;
    v5 = BugCheckParameter3 & ~(*(&v68 + v3) - 1LL);
    v6 = (qword_140C5A5C0 ^ v5 ^ *(_QWORD *)(v5 + 16) ^ 0xA2E64EADA2E64EADuLL) - 192 * v4 - 320;
    goto LABEL_7;
  }
  v66 = v65;
  v53 = sub_140362B58(&v66);
  v54 = sub_14022FB20(v53 + 16, 2 * ((BugCheckParameter3 - *(_QWORD *)(v53 + 8)) >> 20));
  if ( v54 )
  {
    v3 = v54 - 1;
    if ( v3 != 2 )
      goto LABEL_6;
  }
  v70 = 0LL;
  v68 = 0;
  v67 = v65;
  sub_140362864(BugCheckParameter3, &v67, &v70, &v68);
  v6 = *v70;
LABEL_7:
  if ( !v6 )
    KeBugCheckEx(0xC2u, 0LL, 0LL, BugCheckParameter3, 0LL);
  if ( dword_140C11770 && (unsigned int)sub_140461DE4(v6) )
  {
    if ( _InterlockedExchangeAdd(&dword_140C11770, 0xFFFFFFFF) == 1 )
      _InterlockedDecrement(&dword_140C53440);
    return sub_1406423A4(v6, BugCheckParameter3);
  }
  if ( (BugCheckParameter3 & 0xFFF) != 0 )
  {
    v7 = BugCheckParameter3 - 16;
    if ( (*(_BYTE *)(BugCheckParameter3 - 13) & 8) == 0
      || dword_140C11770 && (v56 = sub_140366C48(BugCheckParameter3), (unsigned int)sub_140461DE4(v56)) )
    {
LABEL_11:
      if ( (*(_BYTE *)(v7 + 3) & 4) != 0 )
      {
        v7 += -16LL * (unsigned __int8)*(_WORD *)v7;
        *(_BYTE *)(v7 + 3) |= 4u;
      }
      v8 = v7 + 16;
      v9 = *(_DWORD *)(v7 + 4);
      v10 = *(unsigned __int8 *)(v7 + 3);
      v11 = 16LL * (unsigned __int8)*(_WORD *)(v7 + 2);
      goto LABEL_14;
    }
    if ( BugCheckParameter3 >= 0xFFFF800000000000uLL )
    {
      v32 = (unsigned __int8)byte_140C53F50[((BugCheckParameter3 >> 39) & 0x1FF) - 256];
      if ( v32 == 1 )
      {
        v33 = 1LL;
        goto LABEL_60;
      }
      if ( v32 != 5 && (_BYTE)v32 == 6 )
      {
        v33 = 1LL;
        goto LABEL_60;
      }
    }
    v33 = 0LL;
LABEL_60:
    v34 = BugCheckParameter3 - 16;
    if ( (*(_BYTE *)(v7 + 3) & 4) != 0 )
      v34 = -16LL * (unsigned __int8)*(_WORD *)v7 + v7;
    v35 = *(_WORD *)(v34 + 2);
    v36 = *(unsigned int *)(v34 + 4);
    if ( (v35 & 0x800) != 0 )
    {
      BugCheckParameter4 = qword_140D06E00 ^ v34 ^ *(_QWORD *)(v34 + 8);
      *(_QWORD *)(v34 + 8) = qword_140D06E00 ^ v34;
      if ( BugCheckParameter4 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        if ( BugCheckParameter4 < 0xFFFF800000000000uLL || (*(_BYTE *)BugCheckParameter4 & 0x7F) != 3 )
          KeBugCheckEx(0xC2u, 0xDuLL, BugCheckParameter3, v36, BugCheckParameter4);
        if ( (PEPROCESS)BugCheckParameter4 != PsInitialSystemProcess )
          sub_1403493B0(*(_QWORD *)(BugCheckParameter4 + 1384), BugCheckParameter4, v33, 16LL * (unsigned __int8)v35);
        ObDereferenceObjectDeferDeleteWithTag((PVOID)BugCheckParameter4, v36);
      }
    }
    goto LABEL_11;
  }
  v40 = sub_140366FB0(BugCheckParameter3);
  if ( v40 == 32 )
  {
    v40 = 0;
    v41 = ExAcquireSpinLockShared(&dword_140C11780);
    goto LABEL_79;
  }
  v41 = ExAcquireSpinLockShared(&dword_140C11780);
  if ( (v40 & 0x20) == 0 )
  {
LABEL_79:
    v42 = qword_140C157B8;
    v43 = &dword_140D31100;
    v44 = qword_140C157C0;
    goto LABEL_80;
  }
  v55 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL);
  v42 = *(_QWORD *)(v55 + 824);
  v43 = (volatile signed __int32 *)(v55 + 792);
  v44 = *(_QWORD *)(v55 + 832);
LABEL_80:
  v45 = 1;
  v46 = (((40543 * (unsigned __int64)(unsigned int)(BugCheckParameter3 >> 12)) >> 32) ^ (40543
                                                                                       * (BugCheckParameter3 >> 12))) & (v44 - 1);
  while ( *(_QWORD *)(32LL * v46 + v42) != BugCheckParameter3 )
  {
    if ( ++v46 >= v44 )
    {
      if ( !v45 )
      {
LABEL_119:
        if ( (v40 & 0x21) != 0
          || v42 != qword_140C157B8
          || (unsigned int)sub_140287F30(*((_QWORD *)KeGetCurrentThread() + 23)) == -1
          || (v57 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL),
              v42 = *(_QWORD *)(v57 + 824),
              v43 = (volatile signed __int32 *)(v57 + 792),
              v44 = *(_QWORD *)(v57 + 832),
              !v42)
          || !v44 )
        {
          KeBugCheckEx(0x19u, 0x22uLL, BugCheckParameter3, v40, 0LL);
        }
        goto LABEL_80;
      }
      v46 = 0;
      v45 = 0;
    }
  }
  v47 = v42 + 32LL * v46;
  if ( !v47 )
    goto LABEL_119;
  v9 = *(_DWORD *)(v47 + 8);
  v11 = *(_QWORD *)(v47 + 16);
  v10 = (*(_DWORD *)(v47 + 12) >> 8) & 0xFFF;
  if ( (*(_DWORD *)(v47 + 12) & 0x800) != 0 )
    v48 = BugCheckParameter3 ^ qword_140D06E00 ^ *(_QWORD *)(v47 + 24);
  else
    v48 = -1LL;
  _InterlockedDecrement(v43);
  *(_QWORD *)(v47 + 24) = 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)v47);
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C11780);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && v41 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v60 = *((_QWORD *)CurrentPrcb + 4375);
        v61 = ~(unsigned __int16)(-1LL << (v41 + 1));
        v62 = (v61 & *(_DWORD *)(v60 + 20)) == 0;
        *(_DWORD *)(v60 + 20) &= v61;
        if ( v62 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v41);
  if ( v48 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    sub_140367DEC((PVOID)v48, v11);
  v7 = BugCheckParameter3;
  v8 = BugCheckParameter3;
LABEL_14:
  if ( (dword_140D069E8 & 0x207) != 0 )
  {
    if ( (dword_140D069E8 & 0x200) != 0 && !v10 )
      sub_14063E4D0(v7, v11);
    if ( (dword_140D069E8 & 1) != 0 )
      sub_14056DBFC(v7);
    if ( (dword_140D069E8 & 4) != 0 )
      sub_14063D44C(v7, v11);
    if ( (dword_140D069E8 & 2) != 0 )
      sub_14063F394(v7);
  }
  if ( (dword_140D069E8 & 0x10) != 0 )
    sub_140A9D69C(v7, v9, v11, BugCheckParameter3);
  if ( v9 == dword_140D05128 )
    __debugbreak();
  v12 = DWORD1(xmmword_140D06900);
  if ( (BYTE4(xmmword_140D06900) & 0x41) != 0 )
    v12 = sub_14062DEE4(3618, v10, v9, v8, v11);
  if ( (v10 & 0x20) != 0 )
  {
    v13 = qword_140C11760;
    v14 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL) + 896LL);
  }
  else
  {
    LODWORD(v12) = HIDWORD(KeGetPcr()[1].LockArray);
    v13 = qword_140C157A0;
    v14 = (__int64)*(&qword_140C117A0 + v12);
  }
  v15 = v13 & ((40543 * v9) ^ ((40543 * (unsigned __int64)v9) >> 32));
  while ( 1 )
  {
    v16 = *(_DWORD *)(v14 + 80LL * v15);
    v17 = v14 + 80LL * v15;
    if ( v16 == v9 )
      break;
    if ( v16 || (v10 & 0x20) != 0 || (v49 = *(_DWORD *)(qword_140C157D0 + 80LL * v15)) == 0 )
    {
      v15 = v13 & (v15 + 1);
      if ( v15 == (v13 & ((40543 * v9) ^ ((40543 * (unsigned __int64)v9) >> 32))) )
      {
        sub_140221790(v9, v11, v10);
        goto LABEL_29;
      }
    }
    else
    {
      *(_DWORD *)v17 = v49;
      v50 = *(_QWORD *)(qword_140C157D0 + 80LL * v15 + 72);
      if ( v50 )
        *(_QWORD *)(v17 + 72) = v50;
    }
  }
  sub_140216928((v10 & 1) == 0, v11, v17);
LABEL_29:
  if ( (v10 & 0x40) != 0 )
    sub_1405FF880(BugCheckParameter3, v11);
  v19 = *(_QWORD *)(v6 + 40);
  if ( (unsigned __int64)(v11 - 513) <= 0xD7F && v19 )
  {
    v38 = v19
        + (((unsigned int)*((unsigned __int8 *)qword_140016470 + ((unsigned __int64)(unsigned int)(v11 + 15) >> 4))
          - 33
          + 1LL) << 6);
    ++*(_DWORD *)(v38 + 28);
    if ( *(_WORD *)v38 < *(_WORD *)(v38 + 16) )
      return (__int64)ExpInterlockedPushEntrySList((PSLIST_HEADER)v38, (PSLIST_ENTRY)v7);
    ++*(_DWORD *)(v38 + 32);
  }
  v20 = *(_DWORD *)(v6 + 220);
  v21 = *(_DWORD *)(v6 + 20) & 0x11000001;
  if ( v20 && v20 == *((_DWORD *)KeGetCurrentThread() + 308) )
    v21 = *(_DWORD *)(v6 + 20) & 0x11000000 | 1;
  if ( (v21 & 0x1000000) != 0
    || !*(_DWORD *)(v6 + 24)
    || (result = sub_1405F2F0C(v6, v7, v21, 0LL), v18 = result, (unsigned __int64)(result - 1) > 0xFFFFFFFFFFFFFFFDuLL)
    || (v63 = *(_BYTE *)(result + 2), (v63 & 0xF) == 0)
    || (v64 = v63 & 0xF) != 0 && (_WORD)v64 == 1 && (result = sub_14042A5E0(v6, v7), (int)result >= 0) )
  {
    if ( (*(_DWORD *)(v6 + 20) & 0x10000000) != 0 && sub_1405F3028(v6, v7, v21, v18) == -1 )
    {
      LODWORD(v31) = v6;
      return sub_1405F1BBC(9, v31, v7, 0, 0LL, 0LL);
    }
    if ( (_WORD)v7 )
    {
      v22 = 0;
    }
    else
    {
      v67 = *(_OWORD *)v6;
      v51 = sub_140362B58(&v67);
      v52 = sub_14022FB20(v51 + 16, 2 * ((v7 - *(_QWORD *)(v51 + 8)) >> 20));
      if ( !v52 )
        return sub_140370928(v6, v7, v21);
      v22 = v52 - 1;
      if ( v22 == 2 )
        return sub_140370928(v6, v7, v21);
    }
    v68 = 0;
    v23 = 192LL * v22 + 320 + v6;
    v24 = v7 & *(_QWORD *)v23;
    if ( (qword_140C5A5C0 ^ v23 ^ v24 ^ *(_QWORD *)(v24 + 0x10)) == 0xA2E64EADA2E64EADuLL )
    {
      v25 = *(_BYTE *)(v23 + 8);
      v26 = v24 + 32 * ((unsigned __int64)(unsigned int)(v7 - v24) >> v25);
      if ( v26 )
      {
        v27 = *(_BYTE *)(v26 + 24);
        if ( (v27 & 1) != 0 )
        {
          if ( (v27 & 2) != 0 )
          {
            if ( (v27 & 0xCu) >= 8 || (((1 << v25) - 1) & v7) == 0 )
            {
LABEL_46:
              if ( v7 <= (v26 & *(_QWORD *)v23) + ((__int64)(v26 - (v26 & *(_QWORD *)v23)) >> 5 << v25) )
                return sub_140350B40(v23, v26, v24, v21);
              v28 = *(_BYTE *)(v26 + 24) & 0xC;
              v29 = (v26 & *(_QWORD *)v23) + ((__int64)(v26 - (v26 & *(_QWORD *)v23)) >> 5 << v25);
              if ( v28 == 8 )
                return sub_140364860(*(_QWORD *)(v23 + 24), v29, v7, v21);
              result = sub_14034CEB0(*(_QWORD *)(v23 + 32), v29, v7, v21, (__int64)&v68);
              if ( (_DWORD)result )
              {
                v39 = *(_QWORD *)(v23 + 24);
                result = (unsigned int)*(unsigned __int16 *)(v39 + 60) - 16;
                if ( v68 <= (unsigned int)result )
                  return sub_140371654(v39, v68, 0LL);
              }
              return result;
            }
          }
          else
          {
            v26 -= 32LL * *(unsigned __int8 *)(v26 + 31);
            v24 = *(unsigned __int8 *)(v26 + 24);
            if ( (v24 & 3) == 3 )
            {
              LOBYTE(v24) = v24 & 0xC;
              if ( (unsigned __int8)v24 >= 8u )
                goto LABEL_46;
            }
          }
        }
      }
    }
    v31 = *(_QWORD *)(v23 + 56);
    return sub_1405F1BBC(9, v31, v7, 0, 0LL, 0LL);
  }
  return result;
}
