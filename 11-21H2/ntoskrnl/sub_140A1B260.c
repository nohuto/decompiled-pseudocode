/*
 * XREFs of sub_140A1B260 @ 0x140A1B260
 * Callers:
 *     sub_1403CC5E8 @ 0x1403CC5E8 (sub_1403CC5E8.c)
 *     sub_14064B9D8 @ 0x14064B9D8 (sub_14064B9D8.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14064C978 @ 0x14064C978 (sub_14064C978.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A1B260(
        unsigned int *a1,
        UNICODE_STRING *a2,
        __int64 *a3,
        __int64 a4,
        unsigned int *a5,
        _BYTE *a6)
{
  unsigned int v6; // eax
  unsigned int v7; // r12d
  UNICODE_STRING *v10; // r15
  unsigned __int16 v13; // bx
  __int64 v14; // rdx
  unsigned int v15; // r8d
  __int64 Pool2; // r14
  _WORD *v17; // rsi
  size_t Length; // rbx
  wchar_t *Buffer; // rdx
  unsigned int v20; // ecx
  __int64 v21; // rbx
  unsigned __int16 v22; // si
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  UNICODE_STRING v24; // [rsp+30h] [rbp-30h]
  __int128 v25; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING v26; // [rsp+50h] [rbp-10h] BYREF

  v6 = *a1;
  v7 = 0;
  *(_DWORD *)(&v24.MaximumLength + 1) = 0;
  v10 = a2;
  DestinationString = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  if ( v6 )
  {
    if ( v6 > 0x42 )
      return 3221225485LL;
    RtlInitUnicodeString(&DestinationString, L"\r\n\t\t\t");
    RtlInitUnicodeString(&v26, L"?");
    v13 = (unsigned __int16)(*(_WORD *)a1 * (DestinationString.Length + word_140C0E8E0) - DestinationString.Length + 2) >> 1;
    if ( a4 && (v14 = *a5, v15 = v14 + v13, v15 < 0x400) )
    {
      Pool2 = a4 + 2 * v14;
      *a5 = v15;
    }
    else
    {
      Pool2 = ExAllocatePool2(256LL, 2LL * v13, 1799447891LL);
      if ( !Pool2 )
        return 3221225495LL;
      *a6 = 1;
    }
    v24.Buffer = (wchar_t *)Pool2;
    v24.MaximumLength = 2 * v13;
    v17 = (_WORD *)Pool2;
    if ( *a1 )
    {
      do
      {
        if ( (unsigned int)sub_14064C978(&a1[2 * v7 + 2 + v7], &v25) )
        {
          Length = v26.Length;
          Buffer = v26.Buffer;
        }
        else
        {
          Length = (unsigned __int16)v25;
          Buffer = (wchar_t *)*((_QWORD *)&v25 + 1);
        }
        memmove(v17, Buffer, Length);
        v20 = *a1;
        v17 = (_WORD *)((char *)v17 + Length);
        if ( v7 < *a1 - 1 )
        {
          v21 = DestinationString.Length;
          memmove(v17, DestinationString.Buffer, DestinationString.Length);
          v20 = *a1;
          v17 = (_WORD *)((char *)v17 + v21);
        }
        ++v7;
      }
      while ( v7 < v20 );
      v10 = a2;
    }
    *v17 = 0;
    v22 = (_WORD)v17 - Pool2;
    v24.Length = v22;
    if ( a3 )
    {
      *a3 = Pool2;
      a3[1] = (unsigned int)v22 + 2;
    }
    else
    {
      *v10 = v24;
    }
  }
  else if ( a3 )
  {
    a3[1] = 4LL;
    *a3 = (__int64)"-";
  }
  else if ( a2 )
  {
    RtlInitUnicodeString(a2, L"-");
  }
  return 0LL;
}
