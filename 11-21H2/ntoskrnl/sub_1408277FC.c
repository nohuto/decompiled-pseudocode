/*
 * XREFs of sub_1408277FC @ 0x1408277FC
 * Callers:
 *     sub_140B01670 @ 0x140B01670 (sub_140B01670.c)
 * Callees:
 *     sub_1402D8494 @ 0x1402D8494 (sub_1402D8494.c)
 *     sub_1402D84BC @ 0x1402D84BC (sub_1402D84BC.c)
 *     sub_140368C88 @ 0x140368C88 (sub_140368C88.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14057D738 @ 0x14057D738 (sub_14057D738.c)
 *     sub_1407ECF00 @ 0x1407ECF00 (sub_1407ECF00.c)
 *     sub_1407ECFCC @ 0x1407ECFCC (sub_1407ECFCC.c)
 */

__int64 __fastcall sub_1408277FC(void *Src, size_t Size, __int64 a3)
{
  unsigned int v4; // ebp
  PVOID v6; // rax
  unsigned int v7; // edi
  void *v8; // rbx
  _QWORD *v9; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  v4 = Size;
  v6 = sub_1402D84BC((unsigned int)Size);
  v7 = 0;
  v8 = v6;
  if ( v6 )
  {
    memmove(v6, Src, v4);
    v9 = sub_1407ECFCC((__int64)v8, v4);
    if ( v9 )
    {
      *(_QWORD *)(a3 + 8) = v8;
      *(_QWORD *)a3 = v9;
      *(_DWORD *)(a3 + 48) = sub_1407ECF00(v9[1]);
    }
    else
    {
      v7 = -1073741823;
      v12 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
      dword_140C2A220[2 * v12 + 1] = -1073741823;
      dword_140C2A220[2 * v12] = 590004;
      if ( (dword_140D04880 & 2) != 0 )
        sub_14057D738(1LL, "KSE: SdbInitDatabaseInMemory failed during boot!\n");
      sub_140368C88(1LL, (__int64)"KSE: SdbInitDatabaseInMemory failed during boot!\n");
      sub_1402D8494(v8);
    }
  }
  else
  {
    v7 = -1073741670;
    v11 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
    dword_140C2A220[2 * v11 + 1] = -1073741670;
    dword_140C2A220[2 * v11] = 589988;
    if ( (dword_140D04880 & 2) != 0 )
      sub_14057D738(0LL, "KSE: Failed to allocate memory for shim database during boot!\n");
    sub_140368C88(0LL, (__int64)"KSE: Failed to allocate memory for shim database during boot!\n");
  }
  return v7;
}
