/*
 * XREFs of ?SerializeDeviceGraphs@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAPEAEPEAI@Z @ 0x1400632A8
 * Callers:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000AA3C (-PublishDeviceGraphWnfState@@YAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002850C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SerializeMetaData@@YAJAEAPEAEAEAI@Z @ 0x140063368 (-SerializeMetaData@@YAJAEAPEAEAEAI@Z.c)
 *     ?SerializeNodeArray@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAPEAEAEAI@Z @ 0x14006340C (-SerializeNodeArray@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@AT.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SerializeDeviceGraphs(__int64 a1, unsigned __int8 **a2, unsigned int *a3)
{
  unsigned __int8 *v6; // rbx
  int v7; // edi
  unsigned int v8; // ecx
  unsigned __int8 *v9; // rax
  unsigned __int8 *v11[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+68h] [rbp+20h] BYREF

  v6 = (unsigned __int8 *)operator new[](0x1000uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11[1] = v6;
  v11[0] = v6;
  v12 = 0;
  if ( v6 )
  {
    v7 = SerializeMetaData(v11, &v12);
    if ( v7 >= 0 )
    {
      v7 = SerializeNodeArray(a1, v11, &v12);
      if ( v7 >= 0 )
      {
        v8 = v12;
        *((_DWORD *)v6 + 1) = v12;
        v9 = v6;
        v6 = 0LL;
        *a2 = v9;
        *a3 = v8;
      }
    }
  }
  else
  {
    v7 = -2147024882;
  }
  operator delete(v6);
  return (unsigned int)v7;
}
