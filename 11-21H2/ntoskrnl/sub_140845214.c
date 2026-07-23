/*
 * XREFs of sub_140845214 @ 0x140845214
 * Callers:
 *     sub_1403CC5E8 @ 0x1403CC5E8 (sub_1403CC5E8.c)
 * Callees:
 *     sub_1402511F0 @ 0x1402511F0 (sub_1402511F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140845214(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, char *a6)
{
  __int64 v8; // rax
  void *Pool2; // rbx
  char v10; // al
  __int64 v11; // rax
  __int64 result; // rax

  if ( !a3 )
    return 3221225485LL;
  v8 = (unsigned int)*a5;
  if ( (unsigned int)(v8 + 13) >= 0x400 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, 26LL, 1799447891LL);
    if ( !Pool2 )
      return 3221225495LL;
    v10 = 1;
  }
  else
  {
    Pool2 = (void *)(a4 + 2 * v8);
    *a5 = v8 + 13;
    v10 = 0;
  }
  *a6 = v10;
  if ( (int)sub_1402511F0((wchar_t *)Pool2, 13LL, L"%%%%%u", a1) < 0 )
  {
    if ( *a6 == 1 )
    {
      ExFreePoolWithTag(Pool2, 0);
      *a6 = 0;
    }
    return 3221225485LL;
  }
  v11 = -1LL;
  do
    ++v11;
  while ( *((_WORD *)Pool2 + v11) );
  *(_QWORD *)a3 = Pool2;
  *(_DWORD *)(a3 + 8) = 2 * v11 + 2;
  result = 0LL;
  *(_DWORD *)(a3 + 12) = 0;
  return result;
}
