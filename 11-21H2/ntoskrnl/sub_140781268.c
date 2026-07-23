/*
 * XREFs of sub_140781268 @ 0x140781268
 * Callers:
 *     sub_140787E30 @ 0x140787E30 (sub_140787E30.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_140772AA0 @ 0x140772AA0 (sub_140772AA0.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 *     sub_1407871C4 @ 0x1407871C4 (sub_1407871C4.c)
 *     sub_140A2CF6C @ 0x140A2CF6C (sub_140A2CF6C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140781268(__int64 a1, int a2, int a3, int a4, unsigned int a5, char a6, __int64 a7, _DWORD *a8)
{
  int v10; // ebx
  int v11; // r12d
  unsigned int v12; // r14d
  wchar_t *Pool2; // rdi
  int v14; // eax
  int inited; // ebx
  unsigned __int16 Length; // bx
  __int64 v17; // r14
  HANDLE v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v22; // rcx
  HANDLE v23; // [rsp+40h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF

  Handle = 0LL;
  v23 = 0LL;
  v10 = a4;
  v11 = 4;
  v12 = (a3 & 0x200) != 0 ? 320 : 200;
  DestinationString = 0LL;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, v12, 1380994640LL);
  if ( !Pool2 )
  {
LABEL_47:
    inited = -1073741801;
    goto LABEL_22;
  }
  while ( 1 )
  {
    v14 = sub_1407871C4(v12 >> 1, a2, a3, v10);
    inited = v14;
    if ( v14 != -1073741789 )
      break;
    ExFreePoolWithTag(Pool2, 0);
    v12 = 0;
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, 0LL, 1380994640LL);
    if ( !Pool2 )
      goto LABEL_47;
    v10 = a4;
  }
  if ( v14 >= 0 )
  {
    if ( (a3 & 0x100) != 0 )
    {
      v17 = (__int64)Pool2;
      if ( a1 )
        v22 = *(_QWORD *)(a1 + 224);
      else
        v22 = 0LL;
      inited = sub_140A2CF6C(v22, 0LL, 0x2000000LL, &Handle);
      if ( inited < 0 )
        goto LABEL_22;
      v18 = Handle;
      v23 = Handle;
    }
    else
    {
      inited = RtlInitUnicodeStringEx(&DestinationString, Pool2);
      if ( inited < 0 )
        goto LABEL_22;
      Length = DestinationString.Length;
      if ( DestinationString.Length >= v12
        || DestinationString.Length <= 0x32u
        || !RtlPrefixUnicodeString(&stru_140001000, &DestinationString, 1u) )
      {
        inited = -1073741811;
        goto LABEL_22;
      }
      v17 = (__int64)(Pool2 + 25);
      DestinationString.MaximumLength -= 50;
      DestinationString.Buffer = Pool2 + 25;
      DestinationString.Length = Length - 50;
      if ( RtlPrefixUnicodeString(&stru_140001010, &DestinationString, 1u) )
      {
        v11 = 7;
        v17 = (__int64)(Pool2 + 39);
      }
      else if ( RtlPrefixUnicodeString(&stru_140001020, &DestinationString, 1u) )
      {
        v11 = 8;
        v17 = (__int64)(Pool2 + 47);
      }
      else if ( RtlPrefixUnicodeString(&stru_14000AD48, &DestinationString, 1u) )
      {
        v11 = 14;
        v17 = (__int64)(Pool2 + 43);
      }
      inited = sub_14078014C(a1, v11, (__int64)&v23);
      if ( inited < 0 )
        goto LABEL_22;
      v18 = v23;
    }
    if ( a6 )
    {
      v20 = sub_140772AA0(a1);
LABEL_20:
      if ( v20 != -1073741444 )
      {
        if ( v20 >= 0 )
          goto LABEL_22;
        goto LABEL_30;
      }
      inited = -1073741595;
      goto LABEL_22;
    }
    if ( a1 )
      v19 = *(_QWORD *)(a1 + 224);
    else
      v19 = 0LL;
    v20 = sub_14077FFEC(v19, (__int64)v18, v17, 0, a5, a7);
    if ( v20 >= 0 )
      goto LABEL_18;
    if ( v20 != -1073741772 )
      goto LABEL_20;
    if ( v11 != 8 || !*(_BYTE *)(a1 + 4) )
    {
LABEL_30:
      inited = v20;
      goto LABEL_22;
    }
    inited = sub_14078014C(a1, 9, (__int64)&v23);
    if ( inited >= 0 )
    {
      v20 = sub_14077FFEC(*(_QWORD *)(a1 + 224), (__int64)v23, v17, 0, a5, a7);
      if ( v20 >= 0 )
      {
LABEL_18:
        *a8 = 2;
        goto LABEL_22;
      }
      goto LABEL_20;
    }
  }
LABEL_22:
  if ( Handle )
    ZwClose(Handle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)inited;
}
