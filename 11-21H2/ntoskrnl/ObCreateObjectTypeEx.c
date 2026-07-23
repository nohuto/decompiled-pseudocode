/*
 * XREFs of ObCreateObjectTypeEx @ 0x140824B30
 * Callers:
 *     ObCreateObjectType @ 0x140824B10 (ObCreateObjectType.c)
 *     sub_14085B100 @ 0x14085B100 (sub_14085B100.c)
 *     sub_14085C5A8 @ 0x14085C5A8 (sub_14085C5A8.c)
 *     sub_140862F14 @ 0x140862F14 (sub_140862F14.c)
 *     sub_1408633F0 @ 0x1408633F0 (sub_1408633F0.c)
 *     sub_1408636E8 @ 0x1408636E8 (sub_1408636E8.c)
 *     sub_140AFD20C @ 0x140AFD20C (sub_140AFD20C.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14066960C @ 0x14066960C (sub_14066960C.c)
 *     sub_1406A9B40 @ 0x1406A9B40 (sub_1406A9B40.c)
 *     sub_1406B9100 @ 0x1406B9100 (sub_1406B9100.c)
 *     sub_1406B96B0 @ 0x1406B96B0 (sub_1406B96B0.c)
 *     sub_14072E5D0 @ 0x14072E5D0 (sub_14072E5D0.c)
 *     RtlxUnicodeStringToOemSize @ 0x140759A50 (RtlxUnicodeStringToOemSize.c)
 *     RtlUnicodeStringToAnsiString @ 0x140759C40 (RtlUnicodeStringToAnsiString.c)
 *     sub_140825158 @ 0x140825158 (sub_140825158.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall ObCreateObjectTypeEx(
        PCUNICODE_STRING SourceString,
        __int128 *a2,
        __int64 a3,
        __int16 *a4,
        _QWORD *a5)
{
  __int16 *v8; // r13
  unsigned int Length; // ecx
  unsigned __int8 v10; // r12
  char v11; // al
  unsigned int v12; // ecx
  wchar_t *Buffer; // rdx
  wchar_t v14; // ax
  _OWORD *v15; // rbx
  UNICODE_STRING v16; // xmm6
  int v17; // esi
  size_t v18; // rax
  _QWORD *v19; // rbx
  bool v20; // zf
  char v21; // r13
  unsigned __int16 v22; // r15
  void *Pool2; // rax
  PVOID v24; // r15
  _DWORD *v25; // r8
  unsigned int v26; // ecx
  int v27; // edx
  int v28; // ecx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rcx
  PVOID *v32; // rdx
  unsigned int v33; // edi
  PVOID v34; // rdx
  unsigned int v35; // eax
  struct _KTHREAD *v36; // rcx
  int v37; // ecx
  __int64 v38; // rdx
  unsigned int v40; // r9d
  _BYTE *v41; // rdx
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __m256i v49; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v50; // [rsp+60h] [rbp-A8h]
  __int16 *v51; // [rsp+68h] [rbp-A0h]
  size_t Size[2]; // [rsp+70h] [rbp-98h] BYREF
  _DWORD *v53; // [rsp+80h] [rbp-88h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  PVOID P; // [rsp+98h] [rbp-70h]
  _QWORD *v56; // [rsp+A0h] [rbp-68h]
  _OWORD v57[4]; // [rsp+A8h] [rbp-60h] BYREF
  _OWORD v58[14]; // [rsp+E8h] [rbp-20h] BYREF

  v56 = a5;
  v51 = a4;
  v8 = a4;
  memset(v58, 0, 0xD8uLL);
  Size[0] = 0LL;
  memset(&v49.m256i_u64[1], 0, 24);
  memset(v57, 0, 60);
  DestinationString = 0LL;
  if ( !SourceString
    || (Length = SourceString->Length, !(_WORD)Length)
    || (Length & 1) != 0
    || !a2
    || (*((_DWORD *)a2 + 2) & 0xFFFEE00D) != 0
    || *(_WORD *)a2 != 120
    || (v10 = 2, *((_BYTE *)a2 + 3) >= 2u)
    || (v11 = *((_BYTE *)a2 + 2), (v11 & 0x10) != 0) && !*((_QWORD *)a2 + 7) && !*((_QWORD *)a2 + 8)
    || (v11 & 4) == 0 && (*((_DWORD *)a2 + 9) & 0xFFFFFDFF) != 0 && ((unsigned __int8)v8 & 1) == 0 )
  {
    DbgPrintEx(0, 0, "Error creating object type\n");
    __debugbreak();
  }
  v12 = Length >> 1;
  Buffer = SourceString->Buffer;
  LODWORD(v50) = *((_DWORD *)a2 + 9);
  if ( !v12 )
  {
LABEL_13:
    if ( qword_140C24F00 )
    {
      sub_1406B96B0((__int64)&v49.m256i_i64[1], (__int64)qword_140C24F00);
      if ( sub_1406A9B40(&SourceString->Length, 0x40u, &v49.m256i_i64[1]) )
      {
        if ( v49.m256i_i64[1] )
          sub_14066960C((__int64)&v49.m256i_i64[1]);
        return 3221225525LL;
      }
    }
    DestinationString.Buffer = (wchar_t *)ExAllocatePool2(256LL, SourceString->MaximumLength, 1833853519LL);
    if ( !DestinationString.Buffer )
    {
      if ( v49.m256i_i64[1] )
        sub_14066960C((__int64)&v49.m256i_i64[1]);
      return 3221225626LL;
    }
    DestinationString.MaximumLength = SourceString->MaximumLength;
    RtlCopyUnicodeString(&DestinationString, SourceString);
    v15 = qword_140C246D8;
    v16 = DestinationString;
    if ( !qword_140C246D8 )
    {
      v42 = *a2;
      BYTE8(v58[2]) = 2;
      v15 = v58;
      v43 = a2[1];
      LODWORD(v58[12]) = 1416258127;
      v58[4] = v42;
      v44 = a2[2];
      v58[5] = v43;
      v45 = a2[3];
      v58[6] = v44;
      v46 = a2[4];
      v58[7] = v45;
      v47 = a2[5];
      v58[8] = v46;
      v48 = a2[6];
      v58[9] = v47;
      *(_QWORD *)&v47 = *((_QWORD *)a2 + 14);
      v58[10] = v48;
      *(_QWORD *)&v58[11] = v47;
      v58[1] = DestinationString;
    }
    memset(v57, 0, sizeof(v57));
    LODWORD(v57[0]) = 16;
    *(_QWORD *)((char *)&v57[1] + 4) = *((_QWORD *)v15 + 13);
    HIDWORD(v57[1]) = 2048;
    v17 = sub_14072E5D0((int *)v57, 0, (__int64)v15, &DestinationString, 216, Size, 0LL);
    if ( v17 < 0 )
    {
      if ( v49.m256i_i64[1] )
        sub_14066960C((__int64)&v49.m256i_i64[1]);
      ExFreePoolWithTag(DestinationString.Buffer, 0);
    }
    else
    {
      v18 = Size[0];
      *(_QWORD *)(Size[0] + 32) = 0LL;
      v19 = (_QWORD *)(v18 + 48);
      v20 = (_DWORD)dword_140C4E560 == 0;
      *(UNICODE_STRING *)(v18 + 64) = v16;
      if ( v20 || (v17 = sub_140825158(v18 + 48, a3), v17 >= 0) )
      {
        *(_OWORD *)((char *)v19 + 44) = 0LL;
        *((_DWORD *)v19 + 15) = 0;
        if ( qword_140C246D8 )
        {
          v21 = 1;
          v22 = ((RtlxUnicodeStringToOemSize(SourceString) + 2) & 0xFFFC) + 1;
          Size[1] = v22;
          Pool2 = (void *)ExAllocatePool2(256LL, v22, 1851023951LL);
          P = Pool2;
          if ( !Pool2 )
            goto LABEL_84;
          memset(Pool2, 0, Size[1]);
          Size[1] = 0LL;
          WORD1(Size[1]) = v22;
          v24 = P;
          v53 = P;
          if ( RtlUnicodeStringToAnsiString((PANSI_STRING)&Size[1], SourceString, 0) >= 0 )
          {
            v25 = v53;
            v26 = SourceString->Length >> 1;
            if ( v26 < 4 )
            {
              v40 = WORD1(Size[1]);
              v41 = (char *)v53 + v26;
              do
              {
                if ( v26 < v40 )
                  *v41 = 32;
                ++v26;
                ++v41;
              }
              while ( v26 < 4 );
            }
            v21 = 0;
            *((_DWORD *)v19 + 48) = *v25;
          }
          ExFreePoolWithTag(v24, 0);
          if ( v21 )
          {
LABEL_84:
            v8 = v51;
            if ( SourceString->Length < 4u )
              *((_DWORD *)v19 + 48) = 1063936591;
            else
              *((_DWORD *)v19 + 48) = *(_DWORD *)SourceString->Buffer;
          }
          else
          {
            v8 = v51;
          }
        }
        else
        {
          qword_140C246D8 = v19;
          *((_DWORD *)v19 + 11) = 1;
          *((_DWORD *)v19 + 48) = 1416258127;
        }
        v27 = v50;
        *((_OWORD *)v19 + 4) = *a2;
        *((_OWORD *)v19 + 5) = a2[1];
        *((_OWORD *)v19 + 6) = a2[2];
        *((_OWORD *)v19 + 7) = a2[3];
        *((_OWORD *)v19 + 8) = a2[4];
        *((_OWORD *)v19 + 9) = a2[5];
        *((_OWORD *)v19 + 10) = a2[6];
        v19[22] = *((_QWORD *)a2 + 14);
        *((_DWORD *)v19 + 25) = v27;
        if ( (NtGlobalFlag & 0x4000) != 0 )
          *((_BYTE *)v19 + 66) |= 0x20u;
        v28 = (*((_BYTE *)a2 + 2) & 0x10) != 0 ? 104 : 88;
        if ( (v27 & 1) != 0 )
          *((_DWORD *)v19 + 26) += v28;
        else
          *((_DWORD *)v19 + 27) += v28;
        if ( !*((_QWORD *)a2 + 11) )
          v19[19] = sub_140725080;
        v19[23] = 0LL;
        v19[1] = v19;
        *v19 = v19;
        v19[26] = v19 + 25;
        v19[25] = v19 + 25;
        if ( (*((_BYTE *)v19 + 66) & 4) != 0 )
        {
          *((_DWORD *)v19 + 23) |= 0x100000u;
          v8 = &word_140C24FA0;
        }
        v19[4] = v8;
        CurrentThread = KeGetCurrentThread();
        --*((_WORD *)CurrentThread + 243);
        ExAcquirePushLockExclusiveEx((ULONG_PTR)qword_140C246D8 + 184, 0LL);
        if ( (*(_BYTE *)(Size[0] + 26) & 1) != 0 )
          v30 = (_QWORD *)(Size[0] - 32);
        else
          v30 = 0LL;
        v31 = qword_140C246D8;
        v32 = (PVOID *)*((_QWORD *)qword_140C246D8 + 1);
        if ( *v32 != qword_140C246D8 )
          __fastfail(3u);
        *v30 = qword_140C246D8;
        v30[1] = v32;
        *v32 = v30;
        v33 = -1073741670;
        v31[1] = v30;
        v34 = qword_140C246D8;
        v35 = *((_DWORD *)qword_140C246D8 + 11);
        if ( v35 >= 0x100 )
          v17 = -1073741670;
        else
          qword_140C24700[v35 - 1] = (__int64)v19;
        ExReleasePushLockEx((ULONG_PTR)v34 + 184, 0LL);
        v36 = KeGetCurrentThread();
        v20 = (*((_WORD *)v36 + 243))++ == 0xFFFF;
        if ( v20 && *((struct _KTHREAD **)v36 + 19) != (struct _KTHREAD *)((char *)v36 + 152) )
          KiCheckForKernelApcDelivery();
        if ( v19 != qword_140C246D8 )
        {
          if ( v17 < 0 )
          {
LABEL_90:
            if ( v49.m256i_i64[1] )
              sub_14066960C((__int64)&v49.m256i_i64[1]);
            v33 = v17;
            goto LABEL_93;
          }
          v37 = 3;
          v38 = 3LL;
          while ( _InterlockedCompareExchange64(&qword_140D07490[v38], 1LL, 0LL) )
          {
            v38 = ++v37;
            if ( (unsigned __int64)v37 >= 0x100 )
            {
              v17 = -1073741823;
              goto LABEL_90;
            }
          }
          v10 = v37;
        }
        qword_140D07490[v10] = (__int64)v19;
        *((_BYTE *)v19 + 40) = v10;
        if ( !qword_140C24F00 || sub_1406B9100((char *)qword_140C24F00, (char *)v19, (__int64)&v49.m256i_i64[1]) )
        {
          if ( v49.m256i_i64[1] )
            sub_14066960C((__int64)&v49.m256i_i64[1]);
          *v56 = v19;
          return 0LL;
        }
        qword_140D07490[v10] = 0LL;
        if ( v49.m256i_i64[1] )
          sub_14066960C((__int64)&v49.m256i_i64[1]);
LABEL_93:
        ObfDereferenceObject(v19);
        return v33;
      }
      if ( v49.m256i_i64[1] )
        sub_14066960C((__int64)&v49.m256i_i64[1]);
      ObfDereferenceObject(v19);
    }
    return (unsigned int)v17;
  }
  while ( 1 )
  {
    v14 = *Buffer;
    --v12;
    ++Buffer;
    if ( v14 == 92 )
      return 3221225523LL;
    if ( !v12 )
      goto LABEL_13;
  }
}
