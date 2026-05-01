/*
 * XREFs of sub_18001599C @ 0x18001599C
 * Callers:
 *     CrmActivityAllocate @ 0x180006570 (CrmActivityAllocate.c)
 *     sub_1800161E4 @ 0x1800161E4 (sub_1800161E4.c)
 * Callees:
 *     sub_1800065B0 @ 0x1800065B0 (sub_1800065B0.c)
 *     sub_180008700 @ 0x180008700 (sub_180008700.c)
 *     HamFreeBuffer_0 @ 0x180009A20 (HamFreeBuffer_0.c)
 *     sub_180015204 @ 0x180015204 (sub_180015204.c)
 *     memset @ 0x180016A5E (memset.c)
 */

__int64 __fastcall sub_18001599C(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        int *a6,
        __int64 a7,
        __int64 a8)
{
  _QWORD *v12; // rax
  unsigned int v13; // edi
  _QWORD *v14; // rbx
  int v15; // ebp

  v12 = sub_1800065B0(0x68uLL);
  v13 = 0;
  v14 = v12;
  if ( v12 )
  {
    memset(v12, 0, 0x68uLL);
    v14[1] = -1LL;
    *(_DWORD *)v14 = 1303;
    v15 = sub_180015204((__int64)v14, a2, a3, a4, a5, a6, a7, a8);
    if ( v15 < 0 )
    {
      sub_180008700(v14);
      HamFreeBuffer_0(v14);
      return (unsigned int)v15;
    }
    else
    {
      *a1 = v14;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v13;
}
