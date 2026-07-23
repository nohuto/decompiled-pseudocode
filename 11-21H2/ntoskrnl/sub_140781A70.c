/*
 * XREFs of sub_140781A70 @ 0x140781A70
 * Callers:
 *     sub_140784B14 @ 0x140784B14 (sub_140784B14.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406E6244 @ 0x1406E6244 (sub_1406E6244.c)
 *     sub_140772AA0 @ 0x140772AA0 (sub_140772AA0.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 *     sub_140781814 @ 0x140781814 (sub_140781814.c)
 *     sub_140784B14 @ 0x140784B14 (sub_140784B14.c)
 *     sub_140A2CF6C @ 0x140A2CF6C (sub_140A2CF6C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140781A70(
        __int64 a1,
        const WCHAR *a2,
        int a3,
        int a4,
        unsigned int a5,
        char a6,
        _QWORD *a7,
        _DWORD *a8)
{
  int v8; // ebx
  int v11; // r13d
  wchar_t *Pool2; // rdi
  PVOID v13; // r15
  unsigned int v14; // r15d
  wchar_t *v15; // rsi
  int v16; // eax
  int inited; // ebx
  unsigned __int16 Length; // bx
  __int64 v19; // r15
  HANDLE v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // r13d
  int v23; // eax
  int v25; // edi
  HANDLE v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // [rsp+20h] [rbp-60h]
  PVOID P; // [rsp+40h] [rbp-40h] BYREF
  HANDLE v33; // [rsp+48h] [rbp-38h]
  HANDLE v34; // [rsp+50h] [rbp-30h] BYREF
  HANDLE v35; // [rsp+58h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF
  unsigned int v39; // [rsp+D0h] [rbp+50h] BYREF
  int v40; // [rsp+D8h] [rbp+58h]

  v40 = a4;
  v39 = 0;
  v8 = a4;
  v35 = 0LL;
  v34 = 0LL;
  v33 = 0LL;
  v11 = 4;
  Handle = 0LL;
  Pool2 = 0LL;
  P = 0LL;
  v13 = 0LL;
  DestinationString = 0LL;
  if ( a3 && (a3 & 0xFFFFFCCC) == 0 )
  {
    v14 = (a3 & 0x200) != 0 ? 600 : 480;
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, v14, 1380994640LL);
    if ( !Pool2 )
    {
LABEL_72:
      inited = -1073741801;
      goto LABEL_20;
    }
    while ( 1 )
    {
      v15 = Pool2;
      v16 = sub_140781814(v14 >> 1, a2, a3, v8, v31, Pool2, v14 >> 1, &v39);
      inited = v16;
      if ( v16 != -1073741789 )
        break;
      ExFreePoolWithTag(Pool2, 0);
      v27 = 2LL * v39;
      Pool2 = 0LL;
      if ( v27 > 0xFFFFFFFF )
      {
        inited = -1073741675;
        goto LABEL_20;
      }
      v14 = 2 * v39;
      Pool2 = (wchar_t *)ExAllocatePool2(256LL, (unsigned int)v27, 1380994640LL);
      if ( !Pool2 )
        goto LABEL_72;
      v8 = v40;
    }
    if ( v16 < 0 )
      goto LABEL_20;
    if ( (a3 & 0x100) != 0 )
    {
      v19 = (__int64)Pool2;
      if ( a1 )
        v28 = *(_QWORD *)(a1 + 224);
      else
        v28 = 0LL;
      inited = sub_140A2CF6C(v28, 0LL, 0x2000000LL, &v34);
      if ( inited >= 0 )
      {
        v20 = v34;
LABEL_15:
        v35 = v20;
        v21 = 0LL;
        if ( a1 )
          v21 = *(_QWORD *)(a1 + 224);
        v22 = a5;
        v23 = sub_14077FFEC(v21, (__int64)v20, v19, 0, a5, (__int64)a7);
        if ( !v23 )
        {
          *a8 = 2;
          goto LABEL_19;
        }
        if ( v23 != -1073741444 )
        {
          if ( v23 != -1073741772 )
            goto LABEL_62;
          if ( !a6 )
          {
            if ( (unsigned __int8)a3 != 48 || (a3 & 0xF00) != 0 )
              inited = -1073741772;
            else
              inited = -1073741127;
            goto LABEL_19;
          }
          if ( (unsigned __int8)a3 != 48 || (a3 & 0xF00) != 0 )
          {
            inited = sub_140784B14(a1, (_DWORD)a2, 48, 0, 1, 0, (__int64)&Handle, 0LL);
            if ( inited < 0 )
            {
LABEL_19:
              Pool2 = v15;
              goto LABEL_20;
            }
          }
          inited = sub_1406E6244(a1, a3, &P);
          if ( inited < 0 )
            goto LABEL_20;
          v25 = v22;
          if ( P )
            v25 = 917510;
          v23 = sub_140772AA0(a1);
          if ( v23 != -1073741444 )
          {
            if ( v23 >= 0 )
            {
              if ( v25 == v22 )
              {
                v26 = v33;
                v33 = 0LL;
                *a7 = v26;
                goto LABEL_19;
              }
              if ( a1 )
                v29 = *(_QWORD *)(a1 + 224);
              else
                v29 = 0LL;
              v30 = sub_14077FFEC(v29, (__int64)v33, 0LL, 0, v22, (__int64)a7);
              Pool2 = v15;
              if ( v30 == -1073741444 )
              {
                inited = -1073741772;
              }
              else if ( v30 < 0 )
              {
                inited = v30;
              }
              goto LABEL_20;
            }
LABEL_62:
            inited = v23;
            goto LABEL_19;
          }
        }
        inited = -1073741595;
        goto LABEL_19;
      }
LABEL_20:
      v13 = P;
      goto LABEL_21;
    }
    inited = RtlInitUnicodeStringEx(&DestinationString, Pool2);
    if ( inited < 0 )
      goto LABEL_20;
    Length = DestinationString.Length;
    if ( DestinationString.Length < v14
      && DestinationString.Length > 0x32u
      && RtlPrefixUnicodeString(&stru_140001000, &DestinationString, 1u) )
    {
      v19 = (__int64)(Pool2 + 25);
      DestinationString.MaximumLength -= 50;
      DestinationString.Buffer = Pool2 + 25;
      DestinationString.Length = Length - 50;
      if ( RtlPrefixUnicodeString(&stru_140001020, &DestinationString, 1u) )
      {
        v11 = 9;
        v19 = (__int64)(Pool2 + 47);
      }
      else if ( RtlPrefixUnicodeString(&stru_14000AD48, &DestinationString, 1u) )
      {
        v11 = 14;
        v19 = (__int64)(Pool2 + 43);
      }
      inited = sub_14078014C(a1, v11, (__int64)&v35);
      if ( inited >= 0 )
      {
        v20 = v35;
        goto LABEL_15;
      }
      goto LABEL_20;
    }
    v13 = P;
  }
  inited = -1073741811;
LABEL_21:
  if ( Handle )
    ZwClose(Handle);
  if ( v34 )
    ZwClose(v34);
  if ( v33 )
    ZwClose(v33);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)inited;
}
