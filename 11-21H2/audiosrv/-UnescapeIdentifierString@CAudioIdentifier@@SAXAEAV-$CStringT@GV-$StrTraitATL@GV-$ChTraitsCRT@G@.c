/*
 * XREFs of ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800E7998
 * Callers:
 *     ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x1800D9B28 (-ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x1800E660C (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800E7008 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x1800E73A4 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18000C0AC (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800C3178 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??A?$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z @ 0x1800E62E8 (--A-$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z.c)
 *     ?Delete@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHHH@Z @ 0x1800E6318 (-Delete@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHHH@Z.c)
 *     ?GetBuffer@?$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ @ 0x1800E645C (-GetBuffer@-$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ.c)
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
      result = ATL::CSimpleStringT<unsigned short,0>::operator[](a1, v2);
      if ( (_WORD)result == 37 )
      {
        if ( (unsigned __int16)ATL::CSimpleStringT<unsigned short,0>::operator[](a1, v2 + 1) == 37 )
        {
          result = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Delete(
                     a1,
                     v2);
LABEL_10:
          --v4;
          goto LABEL_11;
        }
        result = ATL::CSimpleStringT<unsigned short,0>::operator[](a1, v2 + 1);
        if ( (_WORD)result == 98 )
        {
          ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Delete(
            a1,
            v2);
          if ( v2 < 0 || (v6 = *(_DWORD *)(*a1 - 16), v2 >= v6) )
            ATL::AtlThrowImpl(-2147024809);
          *(_WORD *)((char *)ATL::CSimpleStringT<unsigned short,0>::GetBuffer((const void **)a1) + v5) = 124;
          result = ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, v6);
          goto LABEL_10;
        }
      }
LABEL_11:
      ++v2;
      v5 += 2LL;
    }
    while ( v2 < v4 );
  }
  return result;
}
