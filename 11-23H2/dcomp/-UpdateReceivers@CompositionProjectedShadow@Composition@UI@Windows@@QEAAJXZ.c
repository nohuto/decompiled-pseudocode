/*
 * XREFs of ?UpdateReceivers@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJXZ @ 0x180006D94
 * Callers:
 *     ?AddReceiver@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJPEAVCompositionProjectedShadowReceiver@234@@Z @ 0x180006A80 (-AddReceiver@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJPEAVCompositionProjectedSha.c)
 *     ?RemoveAllReceivers@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJXZ @ 0x180006D48 (-RemoveAllReceivers@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?RemoveReceiver@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJPEAVCompositionProjectedShadowReceiver@234@@Z @ 0x180183910 (-RemoveReceiver@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJPEAVCompositionProjected.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetReferenceArrayProperty@CDevice@DirectComposition@@QEAAXIIPEBI_K@Z @ 0x18003401C (-ResourceSetReferenceArrayProperty@CDevice@DirectComposition@@QEAAXIIPEBI_K@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18005F634 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180073550 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionProjectedShadow::UpdateReceivers(
        Windows::UI::Composition::CompositionProjectedShadow *this)
{
  __int64 v1; // r14
  __int64 v3; // r14
  int v4; // eax
  int v5; // ebx
  unsigned int v6; // edx
  unsigned int v7; // edi
  __int64 v9; // rsi
  unsigned int v10; // r9d
  __int64 v11; // rcx
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  unsigned int v14; // edx
  int v15; // [rsp+20h] [rbp-50h]
  unsigned int v16; // [rsp+30h] [rbp-40h] BYREF
  unsigned int *v17; // [rsp+38h] [rbp-38h] BYREF
  unsigned int *v18[2]; // [rsp+40h] [rbp-30h] BYREF
  int v19; // [rsp+50h] [rbp-20h]
  unsigned int v20; // [rsp+54h] [rbp-1Ch]
  unsigned __int64 v21; // [rsp+58h] [rbp-18h]
  char v22; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v1 = *((_QWORD *)this + 28) - *((_QWORD *)this + 27);
  LODWORD(v21) = 0;
  v18[0] = (unsigned int *)&v22;
  v3 = v1 >> 3;
  v18[1] = (unsigned int *)&v22;
  v19 = 1;
  v20 = 1;
  v4 = DynArrayImpl<0>::Grow((unsigned int)v18, 4, v3, 0, 0LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    v12 = (unsigned int)v4;
    v13 = 523LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionprojectedshadowscene.cpp",
      (const char *)v12,
      v15);
    goto LABEL_4;
  }
  v6 = v21;
  v7 = 0;
  if ( (_DWORD)v3 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      v10 = *(_DWORD *)(*(_QWORD *)(v9 + *((_QWORD *)this + 27)) + 128LL);
      v16 = v10;
      if ( v6 + 1 < v6 )
        break;
      if ( v6 + 1 > v20 )
      {
        v17 = &v16;
        v5 = DynArrayImpl<0>::Grow((unsigned int)v18, 4, 1, 0, (__int64)&v17);
        if ( v5 < 0 )
        {
          v14 = 192;
          goto LABEL_16;
        }
        *(unsigned int *)((char *)v18[0] + (unsigned int)(4 * v21)) = *v17;
        v6 = v21 + 1;
      }
      else
      {
        v11 = v6++;
        v18[0][v11] = v10;
      }
      LODWORD(v21) = v6;
      ++v7;
      v9 += 8LL;
      if ( v7 >= (unsigned int)v3 )
        goto LABEL_3;
    }
    v5 = -2147024362;
    v14 = 181;
LABEL_16:
    DoStackCaptureDirect(v5, v14);
    v12 = (unsigned int)v5;
    v13 = 527LL;
    goto LABEL_17;
  }
LABEL_3:
  DirectComposition::CDevice::ResourceSetReferenceArrayProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    8u,
    v18[0],
    v6);
  v5 = 0;
LABEL_4:
  DynArrayImpl<0>::~DynArrayImpl<0>(v18);
  return (unsigned int)v5;
}
