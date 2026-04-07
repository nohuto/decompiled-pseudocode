/*
 * XREFs of ?ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ @ 0x18003DE40
 * Callers:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x18003DBEC (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800BFA6C (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

__int64 __fastcall CDWMDisplaySet::ArrangeCloneDisplays(CDWMDisplaySet *this)
{
  unsigned int v1; // edx
  unsigned int v2; // r14d
  __int64 v3; // rbp
  CDWMDisplaySet *v4; // r10
  unsigned int v5; // esi
  __int64 v6; // r15
  __int64 v7; // rbx
  _BYTE *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // r11
  __int64 v13; // rdi
  unsigned int v14; // [rsp+20h] [rbp-28h]

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
      v8 = (_BYTE *)(v7 + 269);
      if ( *(_BYTE *)(v7 + 268) && *v8 )
        *((_DWORD *)v4 + 8) = v3;
      else
        v5 = v1;
      if ( *v8 )
      {
        *(_QWORD *)(v7 + 88) = v7;
      }
      else
      {
        v12 = 0LL;
        if ( v5 )
        {
          while ( 1 )
          {
            v13 = *(_QWORD *)(v6 + 8 * v12);
            if ( *(_BYTE *)(v13 + 269) )
            {
              if ( (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
                                      v7 + 56,
                                      v13 + 56) )
                break;
            }
            v12 = (unsigned int)(v12 + 1);
            if ( (unsigned int)v12 >= v5 )
              goto LABEL_8;
          }
          *(_QWORD *)(v7 + 88) = v13;
        }
      }
LABEL_8:
      v1 = *((_DWORD *)v4 + 16);
      v3 = (unsigned int)(v3 + 1);
      v5 = v1;
    }
    while ( (unsigned int)v3 < v1 );
    v9 = 0LL;
    if ( v1 )
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(*((_QWORD *)v4 + 5) + 8 * v9);
        if ( !*(_QWORD *)(v10 + 88) )
          break;
        if ( *(_BYTE *)(v10 + 269) && *(_QWORD *)(v10 + 88) != v10 )
        {
          v14 = 414;
          goto LABEL_24;
        }
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 >= v1 )
          return v2;
      }
      v14 = 402;
LABEL_24:
      v2 = -2003304291;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011F820, 1u, -2003304291, v14, 0LL);
    }
  }
  return v2;
}
