/*
 * XREFs of sub_140830280 @ 0x140830280
 * Callers:
 *     sub_1403C5EDC @ 0x1403C5EDC (sub_1403C5EDC.c)
 *     sub_1403C6028 @ 0x1403C6028 (sub_1403C6028.c)
 *     sub_14082EFE4 @ 0x14082EFE4 (sub_14082EFE4.c)
 *     sub_140A34D60 @ 0x140A34D60 (sub_140A34D60.c)
 *     sub_140A360D8 @ 0x140A360D8 (sub_140A360D8.c)
 *     sub_140A36378 @ 0x140A36378 (sub_140A36378.c)
 * Callees:
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140830280(HANDLE KeyHandle, PUNICODE_STRING ValueName, _DWORD *a3, void *a4, ULONG *a5)
{
  ULONG *v5; // rdi
  ULONG v10; // ebp
  ULONG Length; // ebp
  _DWORD *PoolWithTag; // rax
  _DWORD *v13; // rbx
  NTSTATUS v14; // eax
  unsigned int v15; // esi
  _DWORD *v16; // rcx
  ULONG v18; // eax
  ULONG ResultLength; // [rsp+78h] [rbp+20h] BYREF

  v5 = a5;
  if ( !a4 )
  {
    if ( !a5 )
    {
      ResultLength = 0;
      Length = 12;
LABEL_4:
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x72746C6Du);
      v13 = PoolWithTag;
      if ( PoolWithTag )
        memset(PoolWithTag, 0, Length);
      if ( v13 )
      {
        v14 = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, v13, Length, &ResultLength);
        v15 = v14;
        v16 = v13;
        if ( v14 == -1073741772 )
        {
LABEL_8:
          ExFreePoolWithTag(v16, 0);
          return v15;
        }
        if ( v14 < 0 )
        {
          if ( v14 != -2147483643 )
            goto LABEL_8;
        }
        else if ( a4 )
        {
          if ( !v5 )
            goto LABEL_17;
          v18 = v13[2];
          if ( v18 > *v5 )
          {
            v15 = -2147483643;
          }
          else if ( v18 <= Length )
          {
            memmove(a4, v13 + 3, v18);
            v16 = v13;
          }
          goto LABEL_16;
        }
        if ( !v5 )
        {
LABEL_17:
          if ( a3 )
            *a3 = v16[1];
          goto LABEL_8;
        }
LABEL_16:
        *v5 = v16[2];
        goto LABEL_17;
      }
      return (unsigned int)-1073741670;
    }
LABEL_3:
    v10 = *a5;
    ResultLength = 0;
    Length = v10 + 12;
    if ( !Length )
      return (unsigned int)-1073741670;
    goto LABEL_4;
  }
  if ( a5 )
    goto LABEL_3;
  return 3221225485LL;
}
