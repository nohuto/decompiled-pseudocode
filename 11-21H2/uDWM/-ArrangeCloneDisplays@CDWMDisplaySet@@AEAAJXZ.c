/*
 * XREFs of ?ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ @ 0x18003C6DC
 * Callers:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x18003C3BC (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800BBB94 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

__int64 __fastcall CDWMDisplaySet::ArrangeCloneDisplays(CDWMDisplaySet *this)
{
  unsigned int v1; // edx
  unsigned int v2; // ebp
  __int64 v3; // rdi
  CDWMDisplaySet *v4; // r10
  unsigned int v5; // ecx
  __int64 v6; // r14
  __int64 v7; // r11
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v11; // rbx
  __int64 v12; // rsi
  unsigned int v13; // [rsp+20h] [rbp-18h]

  v1 = *((_DWORD *)this + 16);
  v2 = 0;
  *((_DWORD *)this + 8) = 0;
  v3 = 0LL;
  v4 = this;
  if ( v1 )
  {
    v5 = v1;
    do
    {
      v6 = *((_QWORD *)v4 + 5);
      v7 = *(_QWORD *)(v6 + 8 * v3);
      if ( *(_BYTE *)(v7 + 252) && *(_BYTE *)(v7 + 253) )
        *((_DWORD *)v4 + 8) = v3;
      else
        v1 = v5;
      if ( *(_BYTE *)(v7 + 253) )
      {
        *(_QWORD *)(v7 + 88) = v7;
      }
      else
      {
        v11 = 0LL;
        if ( v1 )
        {
          while ( 1 )
          {
            v12 = *(_QWORD *)(v6 + 8 * v11);
            if ( *(_BYTE *)(v12 + 253) )
            {
              if ( (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
                                      v7 + 56,
                                      v12 + 56) )
                break;
            }
            v11 = (unsigned int)(v11 + 1);
            if ( (unsigned int)v11 >= *((_DWORD *)v4 + 16) )
              goto LABEL_8;
          }
          *(_QWORD *)(v7 + 88) = v12;
        }
      }
LABEL_8:
      v1 = *((_DWORD *)v4 + 16);
      v3 = (unsigned int)(v3 + 1);
      v5 = v1;
    }
    while ( (unsigned int)v3 < v1 );
  }
  v8 = 0LL;
  if ( v1 )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(*((_QWORD *)v4 + 5) + 8 * v8);
      if ( !*(_QWORD *)(v9 + 88) )
        break;
      if ( *(_BYTE *)(v9 + 253) && *(_QWORD *)(v9 + 88) != v9 )
      {
        v13 = 414;
        goto LABEL_24;
      }
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= *((_DWORD *)v4 + 16) )
        return v2;
    }
    v13 = 402;
LABEL_24:
    v2 = -2003304291;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011A384, 1LL, -2003304291, v13);
  }
  return v2;
}
