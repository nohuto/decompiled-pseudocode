/*
 * XREFs of ?Mid@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@HH@Z @ 0x180050180
 * Callers:
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x18004F8D0 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 * Callees:
 *     memcpy_s @ 0x1800106EC (memcpy_s.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x1800194A4 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18004237C (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?GetManager@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAPEAUIAtlStringMgr@2@XZ @ 0x18005028C (-GetManager@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAPEAUIAtlStringMgr@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE7C4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800CF134 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 *__fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Mid(
        _QWORD *a1,
        __int64 *a2,
        int a3,
        int a4)
{
  int v4; // esi
  int v7; // edx
  int v8; // r8d
  int v9; // eax
  int v10; // edi
  __int64 (__fastcall ***Manager)(_QWORD, _QWORD, __int64); // rax
  const void *v12; // rsi
  __int64 v13; // rax

  v4 = 0;
  if ( a3 >= 0 )
    v4 = a3;
  v7 = 0;
  if ( a4 >= 0 )
    v7 = a4;
  if ( 0x7FFFFFFF - v4 < v7 )
    goto LABEL_21;
  v8 = *(_DWORD *)(*a1 - 16LL);
  v9 = v8 - v4;
  if ( v7 + v4 <= v8 )
    v9 = v7;
  v10 = 0;
  if ( v4 <= v8 )
    v10 = v9;
  if ( !v4 && v10 == v8 )
  {
    *a2 = (__int64)(ATL::CSimpleStringT<unsigned short,0>::CloneData((volatile signed __int32 *)(*a1 - 24LL)) + 6);
    return a2;
  }
  Manager = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::GetManager(a1);
  v12 = (const void *)(*a1 + 2LL * v4);
  if ( !Manager )
    ATL::AtlThrowImpl(-2147467259);
  if ( !v12 && v10 )
LABEL_21:
    ATL::AtlThrowImpl(-2147024809);
  v13 = (**Manager)(Manager, (unsigned int)v10, 2LL);
  if ( !v13 )
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
  *a2 = v13 + 24;
  ATL::CSimpleStringT<unsigned short,0>::SetLength(a2, v10);
  memcpy_s((void *const)*a2, 2LL * v10, v12, 2LL * v10);
  return a2;
}
