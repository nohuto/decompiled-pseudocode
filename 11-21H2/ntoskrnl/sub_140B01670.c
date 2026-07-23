/*
 * XREFs of sub_140B01670 @ 0x140B01670
 * Callers:
 *     sub_140AFFF64 @ 0x140AFFF64 (sub_140AFFF64.c)
 * Callees:
 *     sub_140368C88 @ 0x140368C88 (sub_140368C88.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14057D738 @ 0x14057D738 (sub_14057D738.c)
 *     RtlAssert @ 0x1405E6EA0 (RtlAssert.c)
 *     sub_1408277FC @ 0x1408277FC (sub_1408277FC.c)
 *     sub_14084DC30 @ 0x14084DC30 (sub_14084DC30.c)
 */

__int64 __fastcall sub_140B01670(void *Src, size_t Size, void *a3, unsigned int a4)
{
  unsigned int v6; // ebx
  int v8; // ebx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  v6 = Size;
  if ( dword_140C2A6D0 )
  {
    v10 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
    dword_140C2A220[2 * v10 + 1] = -1073740768;
    dword_140C2A220[2 * v10] = 590051;
    if ( (dword_140D04880 & 4) != 0 )
      RtlAssert("KsepShimDbDuringBoot == FALSE", "minkernel\\ntos\\kshim\\ksesdb.c", 0xE3u, 0LL);
  }
  if ( qword_140C2A6D8 )
  {
    v11 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
    dword_140C2A220[2 * v11 + 1] = -1073740768;
    dword_140C2A220[2 * v11] = 590052;
    if ( (dword_140D04880 & 4) != 0 )
      RtlAssert("KsepShimDbHandle == NULL", "minkernel\\ntos\\kshim\\ksesdb.c", 0xE4u, 0LL);
  }
  qword_140C2A640 = 0LL;
  qword_140C2A6D8 = 0LL;
  dword_140C2A6D0 = 1;
  memset(&unk_140C2A660, 0, 0x70uLL);
  if ( Src && v6 )
  {
    v8 = sub_1408277FC(Src, v6, (__int64)&unk_140C2A660);
    if ( v8 >= 0 )
    {
      if ( a3 && a4 )
      {
        if ( (int)sub_1408277FC(a3, a4, (__int64)&unk_140C2A698) < 0 )
        {
          v12 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
          dword_140C2A220[2 * v12 + 1] = v8;
          dword_140C2A220[2 * v12] = 590110;
          if ( (dword_140D04880 & 2) != 0 )
            sub_14057D738(1LL, "KSE: KsepSdbBootInitialize failed for patch SDB!\n");
          sub_140368C88(1LL, (__int64)"KSE: KsepSdbBootInitialize failed for patch SDB!\n");
        }
        else if ( dword_140C2A690 >= (unsigned int)dword_140C2A6C8 )
        {
          sub_14084DC30((__int64)&unk_140C2A698);
        }
      }
      ++dword_140C2A648;
      v8 = 0;
      qword_140C2A6D8 = (__int64)&unk_140C2A660;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v8;
}
