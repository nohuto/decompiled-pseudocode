/*
 * XREFs of sub_1408125C4 @ 0x1408125C4
 * Callers:
 *     sub_140644D30 @ 0x140644D30 (sub_140644D30.c)
 *     sub_140800338 @ 0x140800338 (sub_140800338.c)
 *     sub_140802068 @ 0x140802068 (sub_140802068.c)
 *     sub_14081D3A0 @ 0x14081D3A0 (sub_14081D3A0.c)
 *     sub_1408288D4 @ 0x1408288D4 (sub_1408288D4.c)
 *     sub_14099C9CC @ 0x14099C9CC (sub_14099C9CC.c)
 *     sub_140A1CA9C @ 0x140A1CA9C (sub_140A1CA9C.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140811F10 @ 0x140811F10 (sub_140811F10.c)
 *     sub_14081210C @ 0x14081210C (sub_14081210C.c)
 *     sub_140812260 @ 0x140812260 (sub_140812260.c)
 *     sub_140812318 @ 0x140812318 (sub_140812318.c)
 *     sub_1408134D8 @ 0x1408134D8 (sub_1408134D8.c)
 *     sub_14081369C @ 0x14081369C (sub_14081369C.c)
 *     sub_140813744 @ 0x140813744 (sub_140813744.c)
 *     sub_1408138F0 @ 0x1408138F0 (sub_1408138F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1408125C4(unsigned __int16 *a1, unsigned int a2, __int64 *a3)
{
  unsigned __int16 *v3; // rbx
  char v4; // si
  int v7; // r14d
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  const wchar_t *v14; // r8
  unsigned int v15; // r10d
  unsigned int v16; // ebp
  _DWORD *PoolWithTag; // rax
  void *v18; // r14
  _DWORD *v19; // r12
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rdi
  int v24; // eax
  __int64 v25; // [rsp+78h] [rbp+20h] BYREF

  v3 = a1;
  v4 = a2 & 1;
  LOBYTE(a1) = a2 & 1;
  v7 = a2 & 2;
  v8 = sub_14081369C(a1);
  if ( v8 < 0 )
  {
    if ( v3 )
      v14 = (const wchar_t *)*((_QWORD *)v3 + 1);
    else
      v14 = L"NULL";
    sub_1408138F0(
      4LL,
      L"BcdOpenStore: Failed to acquire BCD sync Mutant. Store: %wsFlags: 0x%x Status: %x",
      v14,
      a2,
      v8);
    return v15;
  }
  else
  {
    v25 = 0LL;
    v9 = 0;
    sub_1408138F0(2LL, L"Opening store. Flags: 0x%x", a2);
    if ( v3 )
    {
      if ( !v4 )
        sub_140811F10(0);
      v16 = *v3 + 14;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v16, 0x4B444342u);
      v18 = PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = 1;
        v19 = PoolWithTag + 3;
        PoolWithTag[1] = v16;
        PoolWithTag[2] = 3;
        memmove(PoolWithTag + 3, *((const void **)v3 + 1), *v3);
        *((_WORD *)v19 + ((unsigned __int64)*v3 >> 1)) = 0;
        sub_1408138F0(2LL, L"Store path: \"%s\"", v19);
        if ( v4 )
        {
          sub_1408138F0(v20, L"Store will be accessed with offline registry APIs.");
          v9 = 32;
        }
        v21 = sub_14081210C((__int64)v18, v9, &v25);
        v12 = v21;
        if ( v21 >= 0 )
        {
          v23 = v25;
          sub_140812318(v25, L"GuidCache", (__int64)L"Description");
          v24 = sub_140812260(v23, 0);
          v12 = v24;
          if ( v24 >= 0 )
            *a3 = v23;
          else
            sub_1408138F0(4LL, L"Failed to clear system store flag. Status: %x", (unsigned int)v24);
        }
        else
        {
          v22 = 4LL;
          if ( v21 == -1073741809 )
            v22 = 2LL;
          sub_1408138F0(
            v22,
            L"BcdOpenStore: Failed to add store from file %ws. StoreFlags: 0x%x Status: %x",
            v19,
            v9,
            v21);
        }
        ExFreePoolWithTag(v18, 0x4B444342u);
      }
      else
      {
        v12 = -1073741801;
      }
    }
    else if ( v4 )
    {
      v12 = -1073741811;
    }
    else
    {
      if ( v7 )
        sub_1408138F0(v10, L"Store will be synchronized with firmware.");
      else
        v9 = 2;
      v11 = sub_140813744(a3, v9);
      v12 = v11;
      if ( v11 < 0 )
        sub_1408138F0(4LL, L"Failed to open system store. Status: %x", (unsigned int)v11);
    }
    LOBYTE(v10) = v4;
    sub_1408134D8(v10);
    return v12;
  }
}
