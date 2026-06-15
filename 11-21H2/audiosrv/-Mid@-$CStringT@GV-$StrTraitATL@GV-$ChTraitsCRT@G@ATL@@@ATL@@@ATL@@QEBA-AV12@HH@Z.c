/*
 * XREFs of ?Mid@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@HH@Z @ 0x1800D92EC
 * Callers:
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x1800DAFB0 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 * Callees:
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x180020AB8 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ??$AtlAddThrow@H@ATL@@YAHHH@Z @ 0x1800D4ECC (--$AtlAddThrow@H@ATL@@YAHHH@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEBGHPEAUIAtlStringMgr@1@@Z @ 0x1800D5E04 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEBGHPEAUIAtlStringMgr@1@@Z.c)
 *     ?GetManager@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAPEAUIAtlStringMgr@2@XZ @ 0x1800D81E8 (-GetManager@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAPEAUIAtlStringMgr@.c)
 */

__int64 *__fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Mid(
        _QWORD *a1,
        __int64 *a2,
        int a3,
        int a4)
{
  int v4; // edi
  int v7; // esi
  int v8; // ebx
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // ebx
  __int64 (__fastcall ***Manager)(_QWORD, _QWORD, __int64); // rax

  v4 = 0;
  if ( a3 >= 0 )
    v4 = a3;
  v7 = 0;
  v8 = *(_DWORD *)(*a1 - 16LL);
  if ( a4 >= 0 )
    v7 = a4;
  v9 = ATL::AtlAddThrow<int>(v4, v7);
  v10 = *(_DWORD *)(*a1 - 16LL);
  if ( v9 > v8 )
    v7 = v10 - v4;
  v11 = 0;
  if ( v4 <= v10 )
    v11 = v7;
  if ( v4 || v11 != v10 )
  {
    Manager = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::GetManager(a1);
    ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
      a2,
      (const void *)(*a1 + 2LL * v4),
      v11,
      Manager);
  }
  else
  {
    *a2 = (__int64)(ATL::CSimpleStringT<unsigned short,0>::CloneData((volatile signed __int32 *)(*a1 - 24LL)) + 6);
  }
  return a2;
}
