/*
 * XREFs of ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180010590
 * Callers:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEAUFailureInfo@2@@Z @ 0x18000D620 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEA.c)
 *     ??$ReportFailure_Hr@$00@details@wil@@YAXPEAXIPEBD110J@Z @ 0x18001041C (--$ReportFailure_Hr@$00@details@wil@@YAXPEAXIPEBD110J@Z.c)
 *     ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z @ 0x180010490 (--$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z.c)
 *     ??$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z @ 0x1800181E0 (--$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z.c)
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z @ 0x180018270 (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z.c)
 *     ??$ReportFailure_Hr@$02@details@wil@@YAXPEAXIPEBD110J@Z @ 0x1800182F8 (--$ReportFailure_Hr@$02@details@wil@@YAXPEAXIPEBD110J@Z.c)
 *     ?ResultFromCaughtExceptionInternal@details@wil@@YA?AUResultStatus@12@PEAG_KPEA_N@Z @ 0x180019A50 (-ResultFromCaughtExceptionInternal@details@wil@@YA-AUResultStatus@12@PEAG_KPEA_N@Z.c)
 *     ??$ReportFailure_CaughtExceptionCommon@$00@details@wil@@YA?AUResultStatus@01@PEAXIPEBD110PEAG_KW4SupportedExceptions@1@@Z @ 0x18001B5DC (--$ReportFailure_CaughtExceptionCommon@$00@details@wil@@YA-AUResultStatus@01@PEAXIPEBD110PEAG_KW.c)
 *     ??$ReportFailure_Win32@$00@details@wil@@YAJPEAXIPEBD110K@Z @ 0x18001B704 (--$ReportFailure_Win32@$00@details@wil@@YAJPEAXIPEBD110K@Z.c)
 *     ??$ReportFailure_Win32@$01@details@wil@@YAJPEAXIPEBD110K@Z @ 0x18001B78C (--$ReportFailure_Win32@$01@details@wil@@YAJPEAXIPEBD110K@Z.c)
 *     ??$ReportFailure_CaughtExceptionCommon@$01@details@wil@@YA?AUResultStatus@01@PEAXIPEBD110PEAG_KW4SupportedExceptions@1@@Z @ 0x180023F5C (--$ReportFailure_CaughtExceptionCommon@$01@details@wil@@YA-AUResultStatus@01@PEAXIPEBD110PEAG_KW.c)
 *     ??$ReportFailure_Hr@$0A@@details@wil@@YAXPEAXIPEBD110J@Z @ 0x180024090 (--$ReportFailure_Hr@$0A@@details@wil@@YAXPEAXIPEBD110J@Z.c)
 *     ??$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z @ 0x18002BD80 (--$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z.c)
 *     ??$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x18003ED2C (--$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$1 @ 0x180048656 (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$1.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$2 @ 0x1800486A9 (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$2.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$4 @ 0x180048762 (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$4.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$5 @ 0x1800487B5 (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$5.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::HrToNtStatus(wil::details *this)
{
  if ( (_DWORD)this == -2147023537 )
    goto LABEL_46;
  if ( (int)this <= -2147024895 )
  {
    if ( (_DWORD)this == -2147024895 )
    {
      LODWORD(this) = -1073741822;
      return (unsigned int)this;
    }
    if ( (_DWORD)this == -2147467259 )
    {
      LODWORD(this) = -1073741823;
      return (unsigned int)this;
    }
LABEL_34:
    if ( ((unsigned int)this & 0x10000000) != 0 )
    {
      LODWORD(this) = (unsigned int)this & 0xEFFFFFFF;
      return (unsigned int)this;
    }
    if ( ((unsigned int)this & 0x1FFF0000) == 0x70000 )
    {
      LODWORD(this) = (unsigned __int16)this;
      if ( (_WORD)this )
        LODWORD(this) = (unsigned __int16)this | 0xC0070000;
      return (unsigned int)this;
    }
    if ( ((unsigned int)this & 0x1FFF0000) == 0x90000 )
    {
      if ( (int)this > 0 )
        LODWORD(this) = (unsigned __int16)this | 0xC0090000;
      return (unsigned int)this;
    }
LABEL_46:
    LODWORD(this) = -1073741595;
    return (unsigned int)this;
  }
  if ( (int)this > -2147024362 )
  {
    if ( (int)this > -2147023746 )
    {
      switch ( (_DWORD)this )
      {
        case 0x8007050C:
          LODWORD(this) = -1073740757;
          return (unsigned int)this;
        case 0x800705B9:
          LODWORD(this) = -1073700733;
          return (unsigned int)this;
        case 0:
          LODWORD(this) = 0;
          return (unsigned int)this;
      }
    }
    else
    {
      switch ( (_DWORD)this )
      {
        case 0x8007047E:
          LODWORD(this) = -1073741735;
          return (unsigned int)this;
        case 0x8007023E:
          LODWORD(this) = -1073741787;
          return (unsigned int)this;
        case 0x80070246:
          LODWORD(this) = -1073741471;
          return (unsigned int)this;
        case 0x80070247:
          LODWORD(this) = -1073741469;
          return (unsigned int)this;
        case 0x80070272:
          LODWORD(this) = -1073741197;
          return (unsigned int)this;
      }
    }
    goto LABEL_34;
  }
  if ( (_DWORD)this == -2147024362 )
  {
    LODWORD(this) = -1073741675;
  }
  else
  {
    switch ( (unsigned int)this )
    {
      case 0x80070002:
        LODWORD(this) = -1073741772;
        break;
      case 0x80070003:
        LODWORD(this) = -1073741766;
        break;
      case 0x8007000E:
        LODWORD(this) = -1073741801;
        break;
      case 0x80070057:
        LODWORD(this) = -1073741811;
        break;
      case 0x80070070:
        LODWORD(this) = -1073741697;
        break;
      case 0x8007007A:
        LODWORD(this) = -1073741789;
        break;
      case 0x8007007B:
        LODWORD(this) = -1073741773;
        break;
      case 0x8007007E:
        LODWORD(this) = -1073741515;
        break;
      case 0x800700EA:
        LODWORD(this) = -2147483643;
        break;
      default:
        goto LABEL_34;
    }
  }
  return (unsigned int)this;
}
