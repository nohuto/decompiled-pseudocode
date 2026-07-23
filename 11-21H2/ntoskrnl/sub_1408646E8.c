/*
 * XREFs of sub_1408646E8 @ 0x1408646E8
 * Callers:
 *     sub_1408276AC @ 0x1408276AC (sub_1408276AC.c)
 * Callees:
 *     sub_1402E0198 @ 0x1402E0198 (sub_1402E0198.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     sub_14082666C @ 0x14082666C (sub_14082666C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

bool __fastcall sub_1408646E8(const WCHAR *a1, int *a2)
{
  int v4; // ebx
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  wchar_t *Pool2; // rsi

  if ( wcsicmp(a1, L"SYSTEM") )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a1[v6] );
    v7 = (unsigned int)(2 * v6 + 86);
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, v7, 1650749520LL);
    if ( Pool2 )
    {
      v4 = sub_1402E0198(
             Pool2,
             v7 >> 1,
             L"%ws\\%ws%ws%ws",
             L"\\DriverStore\\Nodes",
             a1,
             L"\\System32\\config\\",
             L"SYSTEM");
      if ( v4 >= 0 )
      {
        v4 = sub_14082666C(a1, 10, 0);
        if ( v4 == 0x40000000 )
          v4 = 0;
      }
      ExFreePoolWithTag(Pool2, 0);
    }
    else
    {
      v4 = -1073741670;
    }
  }
  else
  {
    v4 = 0;
  }
  *a2 = v4;
  return v4 >= 0;
}
