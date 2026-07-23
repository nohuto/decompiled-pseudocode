/*
 * XREFs of sub_140A28FC4 @ 0x140A28FC4
 * Callers:
 *     sub_140A28E58 @ 0x140A28E58 (sub_140A28E58.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_140772AA0 @ 0x140772AA0 (sub_140772AA0.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 *     sub_140A28CA4 @ 0x140A28CA4 (sub_140A28CA4.c)
 *     sub_140A2CF6C @ 0x140A2CF6C (sub_140A2CF6C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A28FC4(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  wchar_t *Pool2; // rdi
  __int64 v10; // rbx
  int v12; // r13d
  unsigned __int64 v13; // r12
  __int64 v14; // r9
  int v15; // eax
  int inited; // ebx
  unsigned __int16 Length; // bx
  __int64 v18; // r14
  HANDLE v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v24; // [rsp+20h] [rbp-40h]
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  void *v26; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v29; // [rsp+B8h] [rbp+58h] BYREF

  Pool2 = 0LL;
  v29 = 0;
  v26 = 0LL;
  v10 = a2;
  Handle = 0LL;
  v12 = 4;
  DestinationString = 0LL;
  if ( !a3 || (a3 & 0xFFFFFE9F) != 0 )
    goto LABEL_36;
  LODWORD(v13) = 317;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, 317LL, 1380994640LL);
  if ( !Pool2 )
  {
LABEL_35:
    inited = -1073741801;
    goto LABEL_37;
  }
  while ( 1 )
  {
    v15 = sub_140A28CA4((unsigned int)v13 >> 1, v10, a3, v14, v24, Pool2, (unsigned int)v13 >> 1, &v29);
    inited = v15;
    if ( v15 != -1073741789 )
      break;
    ExFreePoolWithTag(Pool2, 0);
    Pool2 = 0LL;
    v13 = 2LL * v29;
    if ( v13 > 0xFFFFFFFF )
    {
      inited = -1073741675;
      goto LABEL_37;
    }
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, (unsigned int)v13, 1380994640LL);
    if ( !Pool2 )
      goto LABEL_35;
    v10 = a2;
  }
  if ( v15 >= 0 )
  {
    if ( (a3 & 0x100) != 0 )
    {
      v18 = (__int64)Pool2;
      if ( a1 )
        v20 = *(_QWORD *)(a1 + 224);
      else
        v20 = 0LL;
      inited = sub_140A2CF6C(v20, 0LL, 0x2000000LL, &Handle);
      if ( inited < 0 )
        goto LABEL_37;
      v19 = Handle;
LABEL_24:
      if ( a6 )
      {
        v21 = sub_140772AA0(a1);
      }
      else
      {
        if ( a1 )
          v22 = *(_QWORD *)(a1 + 224);
        else
          v22 = 0LL;
        v21 = sub_14077FFEC(v22, (__int64)v19, v18, 0, a5, a7);
        if ( v21 >= 0 )
        {
          *a8 = 2;
          goto LABEL_37;
        }
      }
      if ( v21 == -1073741444 )
      {
        inited = -1073741595;
      }
      else if ( v21 < 0 )
      {
        inited = v21;
      }
      goto LABEL_37;
    }
    inited = RtlInitUnicodeStringEx(&DestinationString, Pool2);
    if ( inited < 0 )
      goto LABEL_37;
    Length = DestinationString.Length;
    if ( DestinationString.Length < (unsigned int)v13
      && DestinationString.Length > 0x32u
      && RtlPrefixUnicodeString(&stru_14000AD68, &DestinationString, 1u) )
    {
      v18 = (__int64)(Pool2 + 25);
      DestinationString.MaximumLength -= 50;
      DestinationString.Buffer = Pool2 + 25;
      DestinationString.Length = Length - 50;
      if ( RtlPrefixUnicodeString(&stru_14000AE08, &DestinationString, 1u) )
      {
        v12 = 11;
        v18 = (__int64)(Pool2 + 46);
      }
      inited = sub_14078014C(a1, v12, (__int64)&v26);
      if ( inited < 0 )
        goto LABEL_37;
      v19 = v26;
      goto LABEL_24;
    }
LABEL_36:
    inited = -1073741811;
  }
LABEL_37:
  if ( Handle )
    ZwClose(Handle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)inited;
}
