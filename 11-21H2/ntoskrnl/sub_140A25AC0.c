/*
 * XREFs of sub_140A25AC0 @ 0x140A25AC0
 * Callers:
 *     sub_140A25980 @ 0x140A25980 (sub_140A25980.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406CB238 @ 0x1406CB238 (sub_1406CB238.c)
 *     sub_14076D6D4 @ 0x14076D6D4 (sub_14076D6D4.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 *     sub_140862B44 @ 0x140862B44 (sub_140862B44.c)
 *     sub_140A2CF6C @ 0x140A2CF6C (sub_140A2CF6C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A25AC0(__int64 a1, __int64 a2, int a3, __int64 a4, char a5)
{
  WCHAR *Pool2; // rdi
  __int64 v7; // rbx
  int v9; // r13d
  unsigned __int64 v10; // r12
  __int64 v11; // r9
  int v12; // eax
  int inited; // ebx
  unsigned __int16 Length; // bx
  const WCHAR *v16; // r15
  char *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // [rsp+20h] [rbp-40h]
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  char *v26; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v29; // [rsp+B8h] [rbp+58h] BYREF

  Pool2 = 0LL;
  v29 = 0;
  v26 = 0LL;
  v7 = a2;
  Handle = 0LL;
  v9 = 4;
  DestinationString = 0LL;
  if ( !a3 || (a3 & 0xFFFFFEAF) != 0 )
  {
LABEL_15:
    inited = -1073741811;
    goto LABEL_16;
  }
  LODWORD(v10) = 260;
  Pool2 = (WCHAR *)ExAllocatePool2(256LL, 260LL, 1380994640LL);
  if ( !Pool2 )
  {
LABEL_44:
    inited = -1073741801;
    goto LABEL_16;
  }
  while ( 1 )
  {
    v12 = sub_14076D6D4((unsigned int)v10 >> 1, v7, a3, v11, v24, Pool2, (unsigned int)v10 >> 1, &v29);
    inited = v12;
    if ( v12 != -1073741789 )
      break;
    ExFreePoolWithTag(Pool2, 0);
    Pool2 = 0LL;
    v10 = 2LL * v29;
    if ( v10 > 0xFFFFFFFF )
    {
      inited = -1073741675;
      goto LABEL_16;
    }
    Pool2 = (WCHAR *)ExAllocatePool2(256LL, (unsigned int)v10, 1380994640LL);
    if ( !Pool2 )
      goto LABEL_44;
    v7 = a2;
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
        goto LABEL_16;
      v17 = (char *)Handle;
      goto LABEL_30;
    }
    inited = RtlInitUnicodeStringEx(&DestinationString, Pool2);
    if ( inited < 0 )
      goto LABEL_16;
    Length = DestinationString.Length;
    if ( DestinationString.Length >= (unsigned int)v10
      || DestinationString.Length <= 0x32u
      || !RtlPrefixUnicodeString(&stru_14000AD68, &DestinationString, 1u) )
    {
      goto LABEL_15;
    }
    v16 = Pool2 + 25;
    DestinationString.MaximumLength -= 50;
    DestinationString.Buffer = Pool2 + 25;
    DestinationString.Length = Length - 50;
    if ( RtlPrefixUnicodeString(&stru_14000AD98, &DestinationString, 1u) )
    {
      v9 = 10;
      v16 = Pool2 + 50;
    }
    inited = sub_14078014C(a1, v9, (__int64)&v26);
    if ( inited >= 0 )
    {
      v17 = v26;
LABEL_30:
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
      if ( v21 != -1073741444 && v21 < 0 )
        inited = v21;
    }
  }
LABEL_16:
  if ( Handle )
    ZwClose(Handle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)inited;
}
