/*
 * XREFs of sub_140274860 @ 0x140274860
 * Callers:
 *     sub_14026D048 @ 0x14026D048 (sub_14026D048.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140239CA8 @ 0x140239CA8 (sub_140239CA8.c)
 *     sub_140274C80 @ 0x140274C80 (sub_140274C80.c)
 *     sub_140274D10 @ 0x140274D10 (sub_140274D10.c)
 *     sub_140274E48 @ 0x140274E48 (sub_140274E48.c)
 *     sub_140286884 @ 0x140286884 (sub_140286884.c)
 *     sub_140286F90 @ 0x140286F90 (sub_140286F90.c)
 *     sub_140287180 @ 0x140287180 (sub_140287180.c)
 *     sub_140287660 @ 0x140287660 (sub_140287660.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF100 @ 0x1402CF100 (sub_1402CF100.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_14032F750 @ 0x14032F750 (sub_14032F750.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_14058C0E4 @ 0x14058C0E4 (sub_14058C0E4.c)
 *     sub_14059DF58 @ 0x14059DF58 (sub_14059DF58.c)
 *     sub_1405C4B8C @ 0x1405C4B8C (sub_1405C4B8C.c)
 */

__int64 __fastcall sub_140274860(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 v3; // r12
  unsigned __int64 v5; // rdi
  __int64 v6; // r13
  __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r14
  int v10; // edx
  ULONG_PTR *v11; // rax
  __int64 v12; // rbx
  unsigned __int8 v13; // bl
  __int64 v14; // r13
  __int64 v15; // rbp
  __int64 v16; // rdx
  ULONG_PTR v17; // rsi
  int v18; // eax
  __int64 v19; // rbp
  BOOL v20; // edi
  KIRQL v21; // bl
  __int64 result; // rax
  __int64 v23; // rdx
  _DWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // r8
  int v29; // eax
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-98h]
  __int64 v31; // [rsp+28h] [rbp-90h] BYREF
  __int64 v32; // [rsp+30h] [rbp-88h]
  __int64 v33; // [rsp+38h] [rbp-80h]
  ULONG_PTR *v34; // [rsp+40h] [rbp-78h]
  __int64 v35; // [rsp+48h] [rbp-70h]
  _OWORD v36[6]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int8 v38; // [rsp+C8h] [rbp+10h]
  __int64 v39; // [rsp+D8h] [rbp+20h]

  v2 = *(_DWORD *)(a1 + 56);
  v3 = 0LL;
  v31 = 0LL;
  v39 = 0LL;
  v5 = *(_QWORD *)(a1 + 88);
  v6 = **(_QWORD **)(a1 + 48);
  v7 = *(_QWORD *)(a1 + 32) >> 12;
  BugCheckParameter2 = *(_QWORD *)(a1 + 48);
  v33 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a2 + 174));
  v35 = v6;
  v8 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  memset(v36, 0, 32);
  v9 = 0LL;
  v10 = *(_DWORD *)(v6 + 56);
  if ( (v10 & 0x400) != 0 )
    v11 = &StartContext;
  else
    v11 = *(ULONG_PTR **)(qword_140C51F48 + 8LL * (*(_WORD *)(v6 + 60) & 0x3FF));
  v34 = v11;
  if ( (v10 & 0x420) != 0 )
  {
    v12 = 0LL;
    v32 = 0LL;
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 24) << 12;
    BugCheckParameter2 = sub_140286F90(v6, v12, &v31);
    v32 = v7 + v31;
  }
  if ( (v2 & 0x18) != 0x18 )
  {
    v25 = sub_140287180(v6, v12 + (v7 << 12) - 1, 0LL);
    v17 = BugCheckParameter2;
    sub_14059DF58(BugCheckParameter2, v25);
    goto LABEL_24;
  }
  v38 = sub_1402CF4F0(a2);
  v13 = v38;
  if ( !v7 )
    goto LABEL_21;
  v14 = v33;
  v15 = 0LL;
  do
  {
    if ( !v9 || (v8 & 0xFFF) == 0 )
    {
      v15 += sub_14032F750(v36);
      if ( v9 )
        sub_14020D8D0(a2, v9);
      v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      sub_14031DE00(a2, v9, 0LL);
    }
    v16 = *(_QWORD *)v8;
    if ( v8 >= 0xFFFFF6FB7DBED000uLL
      && v8 <= 0xFFFFF6FB7DBED7F8uLL
      && (dword_140D06880 & 0xC00000) != 0
      && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
      && (v16 & 1) != 0
      && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
    {
      v26 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
      if ( v26 )
      {
        v27 = *(_QWORD *)(v26 + 8 * ((v8 >> 3) & 0x1FF));
        v28 = v16 | 0x20;
        if ( (v27 & 0x20) == 0 )
          v28 = *(_QWORD *)v8;
        v16 = v28;
        if ( (v27 & 0x42) != 0 )
          v16 = v28 | 0x42;
      }
    }
    if ( !v16 )
      goto LABEL_18;
    if ( (v16 & 1) != 0 )
    {
      if ( dword_140C52B68 )
        sub_140274D10(a2, v8);
      sub_1402CF100(v36, a2, v8);
      goto LABEL_18;
    }
    if ( (v16 & 0x400) != 0 )
    {
      if ( (unsigned int)sub_140317A80(v8) && (unsigned int)sub_140229550() )
        goto LABEL_64;
    }
    else if ( (v16 & 0x800) != 0 )
    {
      v29 = sub_140239CA8(v8);
      if ( v29 == 1 )
        continue;
      if ( v29 == 3 )
        ++v15;
      if ( (unsigned int)sub_140317A80(v8) && (unsigned int)sub_140229550() )
      {
LABEL_64:
        *(_QWORD *)v8 = 0LL;
        sub_1402294F0(v8, 0LL);
        goto LABEL_17;
      }
    }
    else
    {
      sub_140274E48(v14, v16, 1LL);
      if ( (unsigned int)sub_140317A80(v8) && (unsigned int)sub_140229550() )
        goto LABEL_64;
    }
    *(_QWORD *)v8 = 0LL;
LABEL_17:
    v13 = v38;
LABEL_18:
    v8 += 8LL;
    --v7;
    if ( (v8 & 0x78) == 0 )
    {
      v24 = (*(_BYTE *)(a2 + 184) & 7) == 2 ? &unk_140C53D00 : (_DWORD *)(a2 + 192);
      if ( (*v24 & 0x40000000) != 0 || (unsigned int)sub_140274C80(a2, v9) || KeShouldYieldProcessor() )
      {
        v15 += sub_14032F750(v36);
        sub_14020D8D0(a2, v9);
        sub_1402B0CE0(a2, v13);
        v9 = 0LL;
        sub_1402CF4F0(a2);
      }
    }
  }
  while ( v7 );
  v6 = v35;
  v39 = v15;
LABEL_21:
  v39 += sub_14032F750(v36);
  if ( v9 )
    sub_14020D8D0(a2, v9);
  sub_1402B0CE0(a2, v13);
  v17 = BugCheckParameter2;
LABEL_24:
  v18 = *(_DWORD *)(v6 + 56);
  if ( (v18 & 0x20) != 0 || (v18 & 0x400) != 0 )
  {
    v19 = a1;
    v17 = 0LL;
    if ( (v18 & 0x20) != 0 && (*(_BYTE *)(a1 + 56) & 4) != 0 )
      sub_14058C0E4(v6);
  }
  else
  {
    v19 = a1;
  }
  v20 = *(_QWORD *)(v6 + 64) != 0LL;
  v21 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 72));
  if ( v17 )
    v3 = sub_140286884(v17);
  --*(_QWORD *)(v6 + 48);
  --*(_QWORD *)(v6 + 40);
  result = sub_140287660(v6, v21);
  v23 = *(_QWORD *)(v19 + 40);
  if ( v23 )
  {
    if ( !v39 || (v23 -= v39) != 0 )
      result = sub_14028CE10(v33, v23);
  }
  if ( v3 )
    return sub_1405C4B8C(v34, v20, v3);
  return result;
}
