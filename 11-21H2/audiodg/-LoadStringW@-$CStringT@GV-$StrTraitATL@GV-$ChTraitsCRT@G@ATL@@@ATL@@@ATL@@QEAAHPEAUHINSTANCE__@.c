/*
 * XREFs of ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x140054848
 * Callers:
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x140004070 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x140003DD0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x14002D114 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?ConvertToBaseType@?$ChTraitsCRT@G@ATL@@SAXPEAGHPEBGH@Z @ 0x140054610 (-ConvertToBaseType@-$ChTraitsCRT@G@ATL@@SAXPEAGHPEBGH@Z.c)
 *     ?_AtlGetStringResourceImage@ATL@@YAPEBUATLSTRINGRESOURCEIMAGE@1@PEAUHINSTANCE__@@PEAUHRSRC__@@I@Z @ 0x140054AC0 (-_AtlGetStringResourceImage@ATL@@YAPEBUATLSTRINGRESOURCEIMAGE@1@PEAUHINSTANCE__@@PEAUHRSRC__@@I@.c)
 */

__int64 __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
        __int64 *a1,
        HMODULE a2,
        unsigned int a3)
{
  HRSRC Resource; // rax
  const struct ATL::ATLSTRINGRESOURCEIMAGE *StringResourceImage; // rax
  const struct ATL::ATLSTRINGRESOURCEIMAGE *v8; // rdi
  int v9; // ebx
  wchar_t *v10; // r10
  unsigned __int16 v11; // dx

  Resource = FindResourceExW(a2, (LPCWSTR)6, (LPCWSTR)(unsigned __int16)((a3 >> 4) + 1), 0);
  if ( !Resource )
    return 0LL;
  StringResourceImage = ATL::_AtlGetStringResourceImage(a2, Resource, a3);
  v8 = StringResourceImage;
  if ( !StringResourceImage )
    return 0LL;
  v9 = *(unsigned __int16 *)StringResourceImage;
  v10 = (wchar_t *)*a1;
  v11 = *(_WORD *)StringResourceImage;
  if ( ((*(_DWORD *)(*a1 - 12) - v9) | (1 - *(_DWORD *)(*a1 - 8))) < 0 )
  {
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, v9);
    v11 = *(_WORD *)v8;
    v10 = (wchar_t *)*a1;
  }
  ATL::ChTraitsCRT<unsigned short>::ConvertToBaseType(v10, v9, (const wchar_t *)v8 + 1, v11);
  ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, v9);
  return 1LL;
}
