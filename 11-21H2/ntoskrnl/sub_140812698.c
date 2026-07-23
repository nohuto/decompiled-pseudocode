/*
 * XREFs of sub_140812698 @ 0x140812698
 * Callers:
 *     sub_140811FE0 @ 0x140811FE0 (sub_140811FE0.c)
 * Callees:
 *     wcscat_s @ 0x1403E7610 (wcscat_s.c)
 *     wcscpy_s @ 0x1403E76C0 (wcscpy_s.c)
 *     sub_1408138F0 @ 0x1408138F0 (sub_1408138F0.c)
 *     sub_140813EFC @ 0x140813EFC (sub_140813EFC.c)
 *     sub_1408140B4 @ 0x1408140B4 (sub_1408140B4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140812698(wchar_t **a1)
{
  wchar_t *v2; // rdi
  int v3; // eax
  const wchar_t *v4; // rbp
  int v5; // eax
  wchar_t *v6; // rsi
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r14
  wchar_t *PoolWithTag; // rax
  wchar_t *Src; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0LL;
  Src = 0LL;
  v3 = sub_1408140B4();
  if ( v3 == 1 )
  {
    v4 = L"\\Boot\\BCD";
  }
  else
  {
    if ( (unsigned int)(v3 - 2) > 1 )
    {
      v7 = -1073741637;
      sub_1408138F0(4LL, L"Failed to get system store path. Status: %x", 3221225659LL);
      return (unsigned int)v7;
    }
    v4 = L"\\EFI\\Microsoft\\Boot\\BCD";
  }
  sub_1408138F0(2LL, L"System store path: %s", v4);
  v5 = sub_140813EFC(&Src);
  v6 = Src;
  v7 = v5;
  if ( v5 < 0 )
  {
    sub_1408138F0(4LL, L"Failed to get system partition. Status: %x", (unsigned int)v5);
  }
  else
  {
    sub_1408138F0(2LL, L"System partition: %s", Src);
    v8 = -1LL;
    v9 = -1LL;
    do
      ++v9;
    while ( v6[v9] );
    do
      ++v8;
    while ( v4[v8] );
    v10 = (unsigned int)(v9 + v8 + 1);
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2 * v10, 0x4B444342u);
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      wcscpy_s(PoolWithTag, (unsigned int)v10, v6);
      wcscat_s(v2, (unsigned int)v10, v4);
      *a1 = v2;
    }
    else
    {
      v7 = -1073741801;
    }
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4B444342u);
  if ( v7 < 0 && v2 )
    ExFreePoolWithTag(v2, 0x4B444342u);
  return (unsigned int)v7;
}
