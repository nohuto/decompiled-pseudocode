/*
 * XREFs of MiAgeWorkingSet @ 0x14025BA00
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14025B730 (MiTrimOrAgeWorkingSet.c)
 *     MiForceAgeWorkingSet @ 0x140634DF0 (MiForceAgeWorkingSet.c)
 * Callees:
 *     MiIsStoreProcess @ 0x140216D94 (MiIsStoreProcess.c)
 *     MiFillLogProcessInfo @ 0x14025B6F0 (MiFillLogProcessInfo.c)
 *     MiTbFlushType @ 0x14025BD3C (MiTbFlushType.c)
 *     MiGetAvailablePagesBelowPriority @ 0x14025BD60 (MiGetAvailablePagesBelowPriority.c)
 *     MiComputeAgingAmount @ 0x14025BDB0 (MiComputeAgingAmount.c)
 *     MiWalkPageTables @ 0x14025BF90 (MiWalkPageTables.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x140368110 (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgCreate1Sz_char @ 0x1403C44FC (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAgeWorkingSet(__int64 a1, char a2, unsigned int a3, unsigned int a4)
{
  int v7; // r15d
  unsigned __int64 v8; // rdx
  unsigned int v9; // edi
  unsigned __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // r12
  _BYTE *Pool; // rbx
  __int64 v16; // rsi
  unsigned __int64 AvailablePagesBelowPriority; // rcx
  __int64 v18; // r11
  int v19; // r15d
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // r10
  int v25; // eax
  __int64 v26; // r9
  __int64 v27; // r11
  int v28; // r8d
  int v29; // r10d
  int v30; // [rsp+20h] [rbp-E0h]
  int v31; // [rsp+28h] [rbp-D8h]
  char v33; // [rsp+41h] [rbp-BFh] BYREF
  int v34; // [rsp+44h] [rbp-BCh] BYREF
  int v35; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v36; // [rsp+4Ch] [rbp-B4h] BYREF
  _QWORD *v37; // [rsp+50h] [rbp-B0h]
  __int64 v38; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+68h] [rbp-98h] BYREF
  __int64 v41; // [rsp+70h] [rbp-90h] BYREF
  __int64 v42; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v43[32]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v44[22]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v45[192]; // [rsp+230h] [rbp+130h] BYREF
  _DWORD v46[68]; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int64 v47[6]; // [rsp+400h] [rbp+300h] BYREF
  _BYTE v48[16]; // [rsp+430h] [rbp+330h] BYREF
  int *v49; // [rsp+440h] [rbp+340h]
  __int64 v50; // [rsp+448h] [rbp+348h]
  __int64 *v51; // [rsp+450h] [rbp+350h]
  __int64 v52; // [rsp+458h] [rbp+358h]
  __int64 *v53; // [rsp+460h] [rbp+360h]
  __int64 v54; // [rsp+468h] [rbp+368h]
  __int64 *v55; // [rsp+470h] [rbp+370h]
  __int64 v56; // [rsp+478h] [rbp+378h]
  __int64 *v57; // [rsp+480h] [rbp+380h]
  __int64 v58; // [rsp+488h] [rbp+388h]
  int *v59; // [rsp+490h] [rbp+390h]
  __int64 v60; // [rsp+498h] [rbp+398h]

  memset(v45, 0, 0xB8uLL);
  memset(v43, 0, sizeof(v43));
  memset(v44, 0, sizeof(v44));
  memset(v46, 0, 0x108uLL);
  v7 = 4;
  v8 = *(_QWORD *)(a1 + 144);
  v9 = 0;
  v37 = *(_QWORD **)(a1 + 16);
  v10 = v37[4];
  if ( v8 > v10 )
  {
    v11 = 10;
    if ( a4 )
      v11 = a4;
    v12 = MiComputeAgingAmount(a1, v8 - v10, a3, v11);
    v13 = *(unsigned __int16 *)(a1 + 174);
    v14 = v12;
    HIDWORD(v43[1]) = v11;
    Pool = 0LL;
    v16 = *(_QWORD *)(*(_QWORD *)(qword_140C673C8 + 8 * v13) + 16920LL);
    if ( (a3 & 3) != 0 )
    {
      AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(*(_QWORD *)(qword_140C673C8 + 8 * v13), 5LL);
      if ( AvailablePagesBelowPriority + *(_QWORD *)(v18 + 3384) < *(_QWORD *)(v16 + 72) )
      {
        if ( *(_BYTE *)(a1 + 186) != 2 )
        {
          v25 = 3;
          if ( AvailablePagesBelowPriority >= *(_QWORD *)(v16 + 64) )
            v25 = 5;
          LODWORD(v43[1]) = v25;
        }
        if ( (*(_BYTE *)(a1 + 184) & 7) != 0 || !(unsigned int)MiIsStoreProcess(a1 - 1664) )
          WORD2(v43[0]) = *(_WORD *)(v16 + 2350);
      }
      if ( v14 <= 0x100 )
        goto LABEL_44;
      v19 = 509;
      if ( v14 < 0x1FD )
        v19 = v14;
      Pool = (_BYTE *)MiAllocatePool(64LL, 8LL * (unsigned int)(v19 - 256) + 2072, 1935109453LL);
      if ( !Pool )
      {
LABEL_44:
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 124), 1, 0) )
        {
          Pool = v45;
          v19 = 20;
        }
        else
        {
          Pool = (_BYTE *)(v16 + 128);
          v19 = 256;
        }
      }
      *(_DWORD *)Pool = MiTbFlushType(a1);
      *((_DWORD *)Pool + 3) = 0;
      *((_WORD *)Pool + 2) = 0;
      *((_QWORD *)Pool + 2) = 0LL;
      *((_DWORD *)Pool + 2) = v19;
      *((_QWORD *)Pool + 3) = 0LL;
      if ( (*(_BYTE *)(a1 + 184) & 7) == 0 && *(_QWORD *)(a1 + 624) )
      {
        v46[1] = 32;
        v43[31] = v46;
      }
    }
    HIBYTE(v44[0]) = a2;
    v44[3] = a1;
    LODWORD(v43[0]) = a3;
    v43[6] = v14;
    v43[7] = Pool;
    v43[9] = 20LL;
    LODWORD(v43[8]) = MiTbFlushType(a1);
    v44[21] = v43;
    v44[19] = MiAgePte;
    v44[20] = MiAgeWorkingSetTail;
    WORD2(v43[8]) = 4;
    v43[10] = 0LL;
    v43[11] = 0LL;
    LODWORD(v44[0]) = 14;
    if ( (a3 & 2) != 0 )
      v20 = v37[2];
    else
      v20 = v37[1];
    v44[7] = v20;
    if ( !v20 )
      v44[5] = -1LL;
    v7 = MiWalkPageTables(v44);
    if ( Pool )
    {
      if ( Pool == (_BYTE *)(v16 + 128) )
      {
        _InterlockedAnd((volatile signed __int32 *)(v16 + 124), 0);
      }
      else if ( Pool != v45 )
      {
        ExFreePoolWithTag(Pool, 0);
      }
    }
    if ( v7 == 5 )
      ++*(_DWORD *)(v16 + 2568);
  }
  v21 = v43[3];
  v22 = v43[5];
  v38 = 0LL;
  v34 = 0;
  if ( *(_QWORD *)&qword_140C698E8 )
  {
    MiFillLogProcessInfo(a1, &v34, &v38);
    if ( *(_DWORD *)v23 > 5u
      && (*(_BYTE *)(v23 + 16) & 1) != 0
      && (*(_QWORD *)(v23 + 24) & 1LL) == *(_QWORD *)(v23 + 24) )
    {
      v33 = *(_BYTE *)(a1 + 184) & 7;
      v47[4] = (__int64)&v33;
      v47[5] = 1LL;
      tlgCreate1Sz_char(v48, v38);
      v49 = &v35;
      v35 = v34;
      v51 = &v39;
      v41 = v26;
      v53 = &v40;
      v50 = 4LL;
      v55 = &v41;
      v57 = &v42;
      v59 = (int *)&v36;
      v39 = v22;
      v52 = 8LL;
      v40 = v27;
      v54 = 8LL;
      v56 = 8LL;
      v42 = v21;
      v58 = 8LL;
      v36 = a3;
      v60 = 4LL;
      tlgWriteEx_EtwWriteEx(v29, (int)&word_1400389DE, v28, 1, v30, v31, 0xAu, (__int64)v47);
    }
  }
  LOBYTE(v9) = v7 == 5;
  return v9;
}
