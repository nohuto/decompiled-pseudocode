/*
 * XREFs of sub_140813564 @ 0x140813564
 * Callers:
 *     sub_140813500 @ 0x140813500 (sub_140813500.c)
 *     sub_140A1E6EC @ 0x140A1E6EC (sub_140A1E6EC.c)
 *     sub_140A1EE84 @ 0x140A1EE84 (sub_140A1EE84.c)
 * Callees:
 *     sub_14025DBFC @ 0x14025DBFC (sub_14025DBFC.c)
 *     sub_1403A7874 @ 0x1403A7874 (sub_1403A7874.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140813564(void *a1, _QWORD *a2)
{
  unsigned int i; // r14d
  unsigned int *PoolWithTag; // rsi
  NTSTATUS v6; // eax
  NTSTATUS v7; // ebx
  _WORD *v8; // rax
  _WORD *v9; // r15
  SIZE_T NumberOfBytes; // [rsp+88h] [rbp+20h] BYREF

  for ( i = 0; ; ++i )
  {
    a1 = (void *)sub_14025DBFC((__int64)a1);
    PoolWithTag = 0LL;
    LODWORD(NumberOfBytes) = 0;
    v6 = sub_1403A7874(a1, KeyBasicInformation, 0LL, 0, (PULONG)&NumberOfBytes);
    v7 = v6;
    if ( v6 == -1073741789 )
    {
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x4B444342u);
      if ( !PoolWithTag )
        goto LABEL_13;
      v7 = sub_1403A7874(a1, KeyBasicInformation, PoolWithTag, NumberOfBytes, (PULONG)&NumberOfBytes);
      if ( v7 < 0 )
        goto LABEL_7;
      v8 = ExAllocatePoolWithTag(PagedPool, PoolWithTag[3] + 2LL, 0x4B444342u);
      v9 = v8;
      if ( v8 )
      {
        memmove(v8, PoolWithTag + 4, PoolWithTag[3]);
        v9[(unsigned __int64)PoolWithTag[3] >> 1] = 0;
        *a2 = v9;
      }
      else
      {
LABEL_13:
        v7 = -1073741670;
      }
    }
    else if ( v6 >= 0 )
    {
      v7 = -1073741811;
    }
LABEL_7:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x4B444342u);
    if ( v7 == -1073741443 )
    {
      __debugbreak();
      if ( i < 5 )
        continue;
    }
    break;
  }
  return (unsigned int)v7;
}
