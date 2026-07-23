/*
 * XREFs of sub_140A23A34 @ 0x140A23A34
 * Callers:
 *     sub_140A238FC @ 0x140A238FC (sub_140A238FC.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406CB238 @ 0x1406CB238 (sub_1406CB238.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 *     sub_140781814 @ 0x140781814 (sub_140781814.c)
 *     sub_140784B14 @ 0x140784B14 (sub_140784B14.c)
 *     sub_140862B44 @ 0x140862B44 (sub_140862B44.c)
 *     sub_140A2CF6C @ 0x140A2CF6C (sub_140A2CF6C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A23A34(__int64 a1, const WCHAR *a2, int a3, int a4, char a5)
{
  WCHAR *Pool2; // rdi
  int v6; // ebx
  int v9; // r13d
  unsigned int v10; // r15d
  int v11; // eax
  int inited; // ebx
  unsigned __int64 v13; // rax
  unsigned __int16 Length; // bx
  const WCHAR *v15; // r15
  __int64 v16; // r9
  char *v17; // r13
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v25; // [rsp+20h] [rbp-50h]
  HANDLE v26; // [rsp+40h] [rbp-30h] BYREF
  char *v27; // [rsp+48h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v31; // [rsp+C0h] [rbp+50h] BYREF
  int v32; // [rsp+C8h] [rbp+58h]

  v32 = a4;
  Pool2 = 0LL;
  v31 = 0;
  v6 = a4;
  v27 = 0LL;
  v26 = 0LL;
  Handle = 0LL;
  v9 = 4;
  DestinationString = 0LL;
  if ( !a3 || (a3 & 0xFFFFFCCC) != 0 )
    goto LABEL_43;
  v10 = (a3 & 0x200) != 0 ? 600 : 480;
  Pool2 = (WCHAR *)ExAllocatePool2(256LL, v10, 1380994640LL);
  if ( !Pool2 )
  {
LABEL_42:
    inited = -1073741801;
    goto LABEL_44;
  }
  while ( 1 )
  {
    v11 = sub_140781814(v10 >> 1, a2, a3, v6, v25, Pool2, v10 >> 1, &v31);
    inited = v11;
    if ( v11 != -1073741789 )
      break;
    ExFreePoolWithTag(Pool2, 0);
    Pool2 = 0LL;
    v13 = 2LL * v31;
    if ( v13 > 0xFFFFFFFF )
    {
      inited = -1073741675;
      goto LABEL_44;
    }
    v10 = 2 * v31;
    Pool2 = (WCHAR *)ExAllocatePool2(256LL, (unsigned int)v13, 1380994640LL);
    if ( !Pool2 )
      goto LABEL_42;
    v6 = v32;
  }
  if ( v11 < 0 )
    goto LABEL_44;
  if ( (a3 & 0x100) != 0 )
  {
    v15 = Pool2;
    if ( a1 )
      v18 = *(_QWORD *)(a1 + 224);
    else
      v18 = 0LL;
    inited = sub_140A2CF6C(v18, 0LL, 0x2000000LL, &v26);
    if ( inited < 0 )
      goto LABEL_44;
    v17 = (char *)v26;
    goto LABEL_26;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, Pool2);
  if ( inited < 0 )
    goto LABEL_44;
  Length = DestinationString.Length;
  if ( DestinationString.Length >= v10
    || DestinationString.Length <= 0x32u
    || !RtlPrefixUnicodeString(&stru_14000AD68, &DestinationString, 1u) )
  {
LABEL_43:
    inited = -1073741811;
    goto LABEL_44;
  }
  v15 = Pool2 + 25;
  DestinationString.MaximumLength -= 50;
  DestinationString.Buffer = Pool2 + 25;
  DestinationString.Length = Length - 50;
  if ( RtlPrefixUnicodeString(&stru_14000AD58, &DestinationString, 1u) )
  {
    v9 = 9;
    v15 = Pool2 + 47;
  }
  else if ( RtlPrefixUnicodeString(&stru_14000AD48, &DestinationString, 1u) )
  {
    v9 = 14;
    v15 = Pool2 + 43;
  }
  inited = sub_14078014C(a1, v9, (__int64)&v27);
  if ( inited >= 0 )
  {
    v17 = v27;
LABEL_26:
    if ( a3 == 49 || (inited = sub_140784B14(a1, a2, 0x30u, v16, 1, 0, (__int64)&Handle, 0LL), inited >= 0) )
    {
      if ( a5 )
      {
        if ( a1 && (v19 = *(_QWORD *)(a1 + 224)) != 0 )
          v20 = *(_QWORD *)(v19 + 8);
        else
          v20 = 0LL;
        v21 = sub_1406CB238((__int64)v17, (__int64)v15, v20, 0);
      }
      else
      {
        if ( a1 && (v22 = *(_QWORD *)(a1 + 224)) != 0 )
          v23 = *(_QWORD *)(v22 + 8);
        else
          v23 = 0LL;
        v21 = sub_140862B44(v17, v15, v23);
      }
      if ( v21 != -1073741444 && v21 < 0 )
        inited = v21;
    }
  }
LABEL_44:
  if ( Handle )
    ZwClose(Handle);
  if ( v26 )
    ZwClose(v26);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)inited;
}
