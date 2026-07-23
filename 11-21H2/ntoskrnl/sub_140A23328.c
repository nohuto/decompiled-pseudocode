/*
 * XREFs of sub_140A23328 @ 0x140A23328
 * Callers:
 *     sub_140A231DC @ 0x140A231DC (sub_140A231DC.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406CB238 @ 0x1406CB238 (sub_1406CB238.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 *     sub_1407871C4 @ 0x1407871C4 (sub_1407871C4.c)
 *     sub_140862B44 @ 0x140862B44 (sub_140862B44.c)
 *     sub_140A2CF6C @ 0x140A2CF6C (sub_140A2CF6C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A23328(__int64 a1, const WCHAR *a2, __int16 a3, int a4, char a5)
{
  int v7; // edi
  int v8; // r12d
  unsigned int v9; // r14d
  _WORD *Pool2; // rbx
  _WORD *v11; // rsi
  int v12; // eax
  int inited; // edi
  unsigned __int64 v14; // rax
  unsigned __int16 Length; // bx
  const WCHAR *v16; // r14
  char *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // r8
  int v24; // r15d
  __int64 v25; // rax
  __int64 v26; // r8
  int v27; // eax
  __int64 v28; // r8
  __int64 v30; // [rsp+20h] [rbp-40h]
  char *v31; // [rsp+40h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v35; // [rsp+B0h] [rbp+50h] BYREF
  int v36; // [rsp+B8h] [rbp+58h]

  v36 = a4;
  Handle = 0LL;
  v35 = 0;
  v31 = 0LL;
  v7 = a4;
  v8 = 4;
  v9 = (a3 & 0x200) != 0 ? 320 : 200;
  DestinationString = 0LL;
  Pool2 = (_WORD *)ExAllocatePool2(256LL, v9, 1380994640LL);
  if ( !Pool2 )
  {
LABEL_59:
    inited = -1073741801;
    goto LABEL_60;
  }
  while ( 1 )
  {
    v11 = Pool2;
    v12 = sub_1407871C4(v9 >> 1, a2, a3, v7, v30, Pool2, v9 >> 1, &v35);
    inited = v12;
    if ( v12 != -1073741789 )
      break;
    ExFreePoolWithTag(Pool2, 0);
    Pool2 = 0LL;
    v14 = 2LL * v35;
    if ( v14 > 0xFFFFFFFF )
    {
      inited = -1073741675;
      goto LABEL_60;
    }
    v9 = 2 * v35;
    Pool2 = (_WORD *)ExAllocatePool2(256LL, (unsigned int)v14, 1380994640LL);
    if ( !Pool2 )
      goto LABEL_59;
    v7 = v36;
  }
  if ( v12 >= 0 )
  {
    if ( (a3 & 0x100) != 0 )
    {
      v16 = Pool2;
      if ( a1 )
        v18 = *(_QWORD *)(a1 + 224);
      else
        v18 = 0LL;
      inited = sub_140A2CF6C(v18, 0LL, 0x2000000LL, &Handle);
      if ( inited < 0 )
        goto LABEL_60;
      v17 = (char *)Handle;
      v31 = (char *)Handle;
    }
    else
    {
      inited = RtlInitUnicodeStringEx(&DestinationString, Pool2);
      if ( inited < 0 )
        goto LABEL_60;
      Length = DestinationString.Length;
      if ( DestinationString.Length >= v9
        || DestinationString.Length <= 0x32u
        || !RtlPrefixUnicodeString(&stru_14000AD68, &DestinationString, 1u) )
      {
        inited = -1073741811;
        Pool2 = v11;
        goto LABEL_60;
      }
      v16 = v11 + 25;
      DestinationString.MaximumLength -= 50;
      DestinationString.Buffer = v11 + 25;
      DestinationString.Length = Length - 50;
      if ( RtlPrefixUnicodeString(&stru_14000AD78, &DestinationString, 1u) )
      {
        v8 = 7;
        v16 = v11 + 39;
      }
      else if ( RtlPrefixUnicodeString(&stru_14000AD58, &DestinationString, 1u) )
      {
        v8 = 8;
        v16 = v11 + 47;
      }
      else if ( RtlPrefixUnicodeString(&stru_14000AD48, &DestinationString, 1u) )
      {
        v8 = 14;
        v16 = v11 + 43;
      }
      inited = sub_14078014C(a1, v8, (__int64)&v31);
      Pool2 = v11;
      if ( inited < 0 )
        goto LABEL_60;
      v17 = v31;
    }
    if ( a5 )
    {
      if ( a1 && (v19 = *(_QWORD *)(a1 + 224)) != 0 )
        v20 = *(_QWORD *)(v19 + 8);
      else
        v20 = 0LL;
      v21 = sub_1406CB238((__int64)v17, (__int64)v16, v20, 0);
    }
    else
    {
      if ( a1 && (v22 = *(_QWORD *)(a1 + 224)) != 0 )
        v23 = *(_QWORD *)(v22 + 8);
      else
        v23 = 0LL;
      v21 = sub_140862B44(v17, v16, v23);
    }
    v24 = v21;
    if ( v21 && v21 != -1073741444 && v21 != -1073741772 )
      goto LABEL_57;
    if ( v8 == 8 && *(_BYTE *)(a1 + 4) )
    {
      inited = sub_14078014C(a1, 9, (__int64)&v31);
      Pool2 = v11;
      if ( inited < 0 )
        goto LABEL_60;
      v25 = *(_QWORD *)(a1 + 224);
      if ( a5 )
      {
        if ( v25 )
          v26 = *(_QWORD *)(v25 + 8);
        else
          v26 = 0LL;
        v27 = sub_1406CB238((__int64)v31, (__int64)v16, v26, 0);
      }
      else
      {
        if ( v25 )
          v28 = *(_QWORD *)(v25 + 8);
        else
          v28 = 0LL;
        v27 = sub_140862B44(v31, v16, v28);
      }
      if ( v24 == -1073741772 || v27 != -1073741772 )
        v24 = v27;
    }
    Pool2 = v11;
    if ( v24 != -1073741444 )
    {
LABEL_57:
      Pool2 = v11;
      if ( v24 < 0 )
        inited = v24;
    }
  }
LABEL_60:
  if ( Handle )
    ZwClose(Handle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)inited;
}
