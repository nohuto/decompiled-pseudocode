/*
 * XREFs of sub_140A281F8 @ 0x140A281F8
 * Callers:
 *     sub_140A280B8 @ 0x140A280B8 (sub_140A280B8.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     wcsrchr @ 0x1403E34B0 (wcsrchr.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406CB238 @ 0x1406CB238 (sub_1406CB238.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 *     sub_140862B44 @ 0x140862B44 (sub_140862B44.c)
 *     sub_140A28CA4 @ 0x140A28CA4 (sub_140A28CA4.c)
 *     sub_140A2CF6C @ 0x140A2CF6C (sub_140A2CF6C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A281F8(__int64 a1, int a2, int a3, __int64 a4, char a5)
{
  int v6; // ebx
  int v8; // r13d
  wchar_t *Pool2; // rdi
  unsigned int v10; // r12d
  int v11; // r9d
  int v12; // eax
  int inited; // ebx
  unsigned __int16 Length; // bx
  const WCHAR *v16; // r15
  char *v17; // r12
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // r8
  wchar_t *v24; // rax
  __int64 v25; // rax
  __int64 v26; // r8
  wchar_t *v27; // rax
  __int64 v28; // rax
  __int64 v29; // r8
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  char *v31; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF

  v31 = 0LL;
  v6 = a2;
  Handle = 0LL;
  v8 = 4;
  Pool2 = 0LL;
  DestinationString = 0LL;
  if ( !a3 || (a3 & 0xFFFFFE9F) != 0 )
  {
LABEL_13:
    inited = -1073741811;
    goto LABEL_14;
  }
  v10 = 317;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, 317LL, 1380994640LL);
  if ( !Pool2 )
  {
LABEL_57:
    inited = -1073741801;
    goto LABEL_14;
  }
  while ( 1 )
  {
    v12 = sub_140A28CA4(v10 >> 1, v6, a3, v11);
    inited = v12;
    if ( v12 != -1073741789 )
      break;
    ExFreePoolWithTag(Pool2, 0);
    v10 = 0;
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, 0LL, 1380994640LL);
    if ( !Pool2 )
      goto LABEL_57;
    v6 = a2;
  }
  if ( v12 >= 0 )
  {
    if ( (a3 & 0x100) != 0 )
    {
      v16 = Pool2;
      v18 = 0LL;
      if ( a1 )
        v18 = *(_QWORD *)(a1 + 224);
      inited = sub_140A2CF6C(v18, 0LL, 0x2000000LL, &Handle);
      if ( inited < 0 )
        goto LABEL_14;
      v17 = (char *)Handle;
    }
    else
    {
      inited = RtlInitUnicodeStringEx(&DestinationString, Pool2);
      if ( inited < 0 )
        goto LABEL_14;
      Length = DestinationString.Length;
      if ( DestinationString.Length >= v10
        || DestinationString.Length <= 0x32u
        || !RtlPrefixUnicodeString(&stru_14000AD68, &DestinationString, 1u) )
      {
        goto LABEL_13;
      }
      v16 = Pool2 + 25;
      DestinationString.MaximumLength -= 50;
      DestinationString.Buffer = Pool2 + 25;
      DestinationString.Length = Length - 50;
      if ( RtlPrefixUnicodeString(&stru_14000AE08, &DestinationString, 1u) )
      {
        v8 = 11;
        v16 = Pool2 + 46;
      }
      inited = sub_14078014C(a1, v8, (__int64)&v31);
      if ( inited < 0 )
        goto LABEL_14;
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
    if ( v21 == -1073741444 )
      goto LABEL_14;
    if ( v21 < 0 )
      goto LABEL_40;
    v24 = wcsrchr(v16, 0x5Cu);
    if ( !v24 )
      goto LABEL_42;
    *v24 = 0;
    if ( a1 && (v25 = *(_QWORD *)(a1 + 224)) != 0 )
      v26 = *(_QWORD *)(v25 + 8);
    else
      v26 = 0LL;
    v21 = sub_140862B44(v17, v16, v26);
    if ( v21 != -1073741535 )
    {
      if ( v21 < 0 )
        goto LABEL_40;
      v27 = wcsrchr(v16, 0x5Cu);
      if ( !v27 )
      {
LABEL_42:
        inited = -1073741595;
        goto LABEL_14;
      }
      *v27 = 0;
      if ( a1 && (v28 = *(_QWORD *)(a1 + 224)) != 0 )
        v29 = *(_QWORD *)(v28 + 8);
      else
        v29 = 0LL;
      v21 = sub_140862B44(v17, v16, v29);
      if ( v21 != -1073741535 && v21 < 0 )
LABEL_40:
        inited = v21;
    }
  }
LABEL_14:
  if ( Handle )
    ZwClose(Handle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)inited;
}
