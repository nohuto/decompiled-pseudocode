/*
 * XREFs of ?RemoveAt@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAX_K0@Z @ 0x140015B08
 * Callers:
 *     ?RemoveAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x14000E770 (-RemoveAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?RemoveAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x14000E910 (-RemoveAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?AddAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x1400104C0 (-AddAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?AddAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x1400107B0 (-AddAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?ReleaseAPO@CDeviceGraphObjectCache@@UEAAJPEAUIAudioProcessingObject@@@Z @ 0x14001FED0 (-ReleaseAPO@CDeviceGraphObjectCache@@UEAAJPEAUIAudioProcessingObject@@@Z.c)
 *     sub_140040905 @ 0x140040905 (sub_140040905.c)
 *     sub_140040C0C @ 0x140040C0C (sub_140040C0C.c)
 *     wil::details::lambda_call__lambda_60d73b52757ccff8abd34fb69055d725___::_lambda_call__lambda_60d73b52757ccff8abd34fb69055d725___ @ 0x14008EB00 (wil--details--lambda_call__lambda_60d73b52757ccff8abd34fb69055d725___--_lambda_call__lambda_60d7.c)
 *     wil::details::lambda_call__lambda_7689b35a0bf80f5507f5324595203735___::_lambda_call__lambda_7689b35a0bf80f5507f5324595203735___ @ 0x14008EB5C (wil--details--lambda_call__lambda_7689b35a0bf80f5507f5324595203735___--_lambda_call__lambda_7689.c)
 *     wil::details::lambda_call__lambda_9559e19d811c20b95eeab3b486fc6e42___::_lambda_call__lambda_9559e19d811c20b95eeab3b486fc6e42___ @ 0x14008EB94 (wil--details--lambda_call__lambda_9559e19d811c20b95eeab3b486fc6e42___--_lambda_call__lambda_9559.c)
 *     wil::details::lambda_call__lambda_a04fe2ecc849ad478f9f5cbc88df212e___::_lambda_call__lambda_a04fe2ecc849ad478f9f5cbc88df212e___ @ 0x14008EBCC (wil--details--lambda_call__lambda_a04fe2ecc849ad478f9f5cbc88df212e___--_lambda_call__lambda_a04f.c)
 * Callees:
 *     memmove_s @ 0x140021438 (memmove_s.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B99C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::RemoveAt(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  errno_t v7; // eax

  v2 = a2 + 1;
  if ( a2 + 1 < a2 )
    goto LABEL_8;
  if ( a2 == -1LL )
    goto LABEL_8;
  v5 = a1[1];
  if ( v2 > v5 )
    goto LABEL_8;
  v6 = v5 - v2;
  if ( !v6 )
    goto LABEL_5;
  v7 = memmove_s((void *const)(*a1 + 8 * a2), 8 * v6, (const void *const)(*a1 + 8 * v2), 8 * v6);
  switch ( v7 )
  {
    case 0:
      goto LABEL_5;
    case 12:
      ATL::AtlThrowImpl(-2147024882);
    case 22:
    case 34:
LABEL_8:
      ATL::AtlThrowImpl(-2147024809);
  }
  if ( v7 != 80 )
    ATL::AtlThrowImpl(-2147467259);
LABEL_5:
  --a1[1];
}
