/*
 * XREFs of ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18004FEBC
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18004FB64 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x180050574 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x180082B7C (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x1800E1BEC (-ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z.c)
 * Callees:
 *     ?GetBuffer@?$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ @ 0x1800137DC (-GetBuffer@-$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18004237C (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ??A?$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z @ 0x18004FF98 (--A-$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z.c)
 *     ?Delete@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHHH@Z @ 0x18004FFC8 (-Delete@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHHH@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE7C4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CAudioIdentifier::UnescapeIdentifierString(__int64 *a1)
{
  __int64 result; // rax
  int v2; // ebx
  int v4; // esi
  __int64 v5; // rbp
  int v6; // r14d

  result = *a1;
  v2 = 0;
  v4 = *(_DWORD *)(*a1 - 16);
  if ( v4 > 0 )
  {
    v5 = 0LL;
    do
    {
      if ( v2 < 0 || (result = *a1, v2 > *(_DWORD *)(*a1 - 16)) )
LABEL_14:
        ATL::AtlThrowImpl(-2147024809);
      if ( *(_WORD *)(result + v5) == 37 )
      {
        if ( (unsigned __int16)ATL::CSimpleStringT<unsigned short,0>::operator[](a1, (unsigned int)(v2 + 1)) == 37 )
        {
          result = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Delete(
                     a1,
                     (unsigned int)v2);
LABEL_12:
          --v4;
          goto LABEL_6;
        }
        result = ATL::CSimpleStringT<unsigned short,0>::operator[](a1, (unsigned int)(v2 + 1));
        if ( (_WORD)result == 98 )
        {
          ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Delete(
            a1,
            (unsigned int)v2);
          v6 = *(_DWORD *)(*a1 - 16);
          if ( v2 >= v6 )
            goto LABEL_14;
          *(_WORD *)(ATL::CSimpleStringT<unsigned short,0>::GetBuffer((__int64)a1) + v5) = 124;
          result = ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, v6);
          goto LABEL_12;
        }
      }
LABEL_6:
      ++v2;
      v5 += 2LL;
    }
    while ( v2 < v4 );
  }
  return result;
}
