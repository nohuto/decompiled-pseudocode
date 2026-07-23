/*
 * XREFs of sub_140811FE0 @ 0x140811FE0
 * Callers:
 *     sub_140813744 @ 0x140813744 (sub_140813744.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14064CD50 @ 0x14064CD50 (sub_14064CD50.c)
 *     sub_14081210C @ 0x14081210C (sub_14081210C.c)
 *     sub_140812260 @ 0x140812260 (sub_140812260.c)
 *     sub_1408124A0 @ 0x1408124A0 (sub_1408124A0.c)
 *     sub_140812698 @ 0x140812698 (sub_140812698.c)
 *     sub_1408127B8 @ 0x1408127B8 (sub_1408127B8.c)
 *     sub_1408138F0 @ 0x1408138F0 (sub_1408138F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140811FE0(_QWORD *a1)
{
  void *v2; // rdi
  int v3; // eax
  void *v4; // rbp
  unsigned int v5; // ebx
  __int64 v6; // rbx
  unsigned int v7; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // r14
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  void *Src; // [rsp+68h] [rbp+10h] BYREF
  __int64 v21; // [rsp+70h] [rbp+18h] BYREF

  v21 = 0LL;
  Src = 0LL;
  DestinationString = 0LL;
  v2 = 0LL;
  v3 = sub_140812698(&Src);
  v4 = Src;
  v5 = v3;
  if ( v3 >= 0 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *((_WORD *)Src + v6) );
    v7 = v6 + 1;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2 * v7 + 12, 0x4B444342u);
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      v9 = PoolWithTag + 3;
      *PoolWithTag = 1;
      PoolWithTag[1] = 2 * v7 + 12;
      PoolWithTag[2] = 3;
      memmove(PoolWithTag + 3, v4, 2LL * v7);
      v10 = sub_14081210C(v2, 0LL, &v21);
      v5 = v10;
      if ( v10 < 0 )
      {
        sub_1408138F0(4LL, L"Failed to add system store from file. File: %ws Status: %x", v9, (unsigned int)v10);
        if ( v5 == -1073741757 )
        {
          RtlInitUnicodeString(&DestinationString, (PCWSTR)v4);
          sub_14064CD50((__int64)&DestinationString, v17, v18);
        }
      }
      else
      {
        v12 = v21;
        LOBYTE(v11) = 1;
        v13 = sub_140812260(v21, v11);
        v5 = v13;
        if ( v13 < 0 )
        {
          sub_1408138F0(4LL, L"Failed to mark system store. File: %ws Status: %x", v9, (unsigned int)v13);
          sub_1408124A0(v12);
        }
        else if ( (unsigned __int8)sub_1408127B8(v12, v14, v15) )
        {
          *a1 = v12;
        }
        else
        {
          sub_1408138F0(4LL, L"File is not system store. File: %ws Status: %x", v9, v5);
          sub_1408124A0(v12);
          v5 = -1073741672;
        }
      }
    }
    else
    {
      v5 = -1073741670;
    }
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4B444342u);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x4B444342u);
  return v5;
}
