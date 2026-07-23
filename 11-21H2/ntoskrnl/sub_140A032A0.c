/*
 * XREFs of sub_140A032A0 @ 0x140A032A0
 * Callers:
 *     sub_140A0350C @ 0x140A0350C (sub_140A0350C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140543148 @ 0x140543148 (sub_140543148.c)
 *     sub_1405432A8 @ 0x1405432A8 (sub_1405432A8.c)
 *     sub_1405436CC @ 0x1405436CC (sub_1405436CC.c)
 *     RtlCompareUnicodeString @ 0x1407CAA80 (RtlCompareUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

void __fastcall sub_140A032A0(__int64 *a1)
{
  void *v2; // rsi
  WCHAR *PoolWithTag; // rax
  WCHAR *v4; // r14
  __int64 v5; // rdx
  char v6; // r12
  unsigned int v7; // edx
  int v8; // eax
  __int64 v9; // r13
  size_t v10; // rbx
  unsigned int v11; // r15d
  unsigned int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // eax
  PVOID v16; // rax
  unsigned int Length; // edx
  unsigned __int16 MaximumLength; // ax
  void *v19; // rcx
  size_t v20; // r8
  wchar_t *Buffer; // rdx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  SIZE_T NumberOfBytes; // [rsp+78h] [rbp+48h] BYREF
  unsigned int v24; // [rsp+80h] [rbp+50h] BYREF
  unsigned int v25; // [rsp+88h] [rbp+58h]

  v24 = 0;
  v2 = 0LL;
  DestinationString = 0LL;
  LODWORD(NumberOfBytes) = 0;
  if ( byte_140D0688B )
  {
    PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x72766F43u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x40uLL);
      if ( sub_1405432A8(v4, v5, &NumberOfBytes, &v24) )
      {
        RtlInitUnicodeString(&DestinationString, v4);
        v6 = *((_BYTE *)a1 + 12);
        v7 = *((_DWORD *)a1 + 2);
        v8 = *((_DWORD *)a1 + 12);
        v9 = *a1;
        v25 = v7;
        if ( v6 )
        {
          if ( v6 == 1 && v8 == 2 )
          {
            v10 = v24;
            if ( !RtlCompareUnicodeString((PCUNICODE_STRING)a1 + 1, &DestinationString, 1u) )
            {
              v7 = v25;
              goto LABEL_11;
            }
          }
        }
        else if ( !v8 )
        {
          v10 = (unsigned int)NumberOfBytes;
LABEL_11:
          v11 = -1;
          if ( (unsigned int)v10 < 0xFFFFFFE0 )
          {
            v12 = DestinationString.Length + v10 + 32;
            if ( v12 < 0x20 )
              v12 = -1;
            v11 = v12;
          }
          v13 = *((_DWORD *)a1 + 14);
          v14 = v13 + v11;
          if ( v13 + v11 >= v13 )
          {
            *((_DWORD *)a1 + 14) = v14;
            if ( v7 >= v14 )
            {
              v15 = 4096;
              if ( (unsigned int)v10 > 0x1000 )
                v15 = v10;
              v16 = ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x72766F43u);
              v2 = v16;
              if ( v16 )
              {
                if ( sub_140543148(v6, v10, v16) )
                {
                  *(_DWORD *)(v9 + 4) = 1;
                  *(_DWORD *)v9 = v11;
                  *(_DWORD *)(v9 + 24) = v10;
                  memmove((void *)(v9 + 28), v2, v10);
                  Length = DestinationString.Length;
                  MaximumLength = DestinationString.MaximumLength;
                  v19 = (void *)(v10 + v9 + 32);
                  *(_WORD *)(v9 + 8) = DestinationString.Length;
                  v20 = Length;
                  Buffer = DestinationString.Buffer;
                  *(_QWORD *)(v9 + 16) = v19;
                  *(_WORD *)(v9 + 10) = MaximumLength;
                  memmove(v19, Buffer, v20);
                  ++*((_DWORD *)a1 + 13);
                  *a1 += v11;
                  if ( v6 )
                    sub_1405436CC();
                }
              }
            }
            else
            {
              ++*((_DWORD *)a1 + 13);
            }
          }
        }
      }
      ExFreePoolWithTag(v4, 0);
      if ( v2 )
        ExFreePoolWithTag(v2, 0);
    }
  }
}
