/*
 * XREFs of sub_1C00AC53C @ 0x1C00AC53C
 * Callers:
 *     sub_1C003A494 @ 0x1C003A494 (sub_1C003A494.c)
 * Callees:
 *     memmove @ 0x1C0024A40 (memmove.c)
 */

__int64 __fastcall sub_1C00AC53C(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  const void *v7; // rdx

  v3 = *(_QWORD *)(a2 + 184);
  v4 = 0;
  *a3 = 0LL;
  if ( *(_DWORD *)(v3 + 8) >= 0x1000u )
  {
    v7 = *(const void **)(a1 + 5912);
    if ( v7 )
    {
      memmove(*(void **)(a2 + 24), v7, 0x1000uLL);
      *a3 = 4096LL;
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return v4;
}
