/*
 * XREFs of ?HrToNtStatus@details@wil@@YGJJ@Z @ 0x10002961
 * Callers:
 *     ?FromResult@ResultStatus@details@wil@@SG?AU123@J@Z @ 0x10002621 (-FromResult@ResultStatus@details@wil@@SG-AU123@J@Z.c)
 *     ?LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@ABUResultStatus@12@PB_W_NPA_WIPADIPAUFailureInfo@2@@Z @ 0x10003017 (-LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@ABUResultStatus@12@PB_W_NPA_WIPADIPAUFailu.c)
 *     ??$ReportFailure_Hr@$01@details@wil@@YGXPAXIPBD110J@Z @ 0x10004515 (--$ReportFailure_Hr@$01@details@wil@@YGXPAXIPBD110J@Z.c)
 *     ??$ReportFailure_NoReturn@$02@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOptions@01@@Z @ 0x10004671 (--$ReportFailure_NoReturn@$02@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOp.c)
 *     ??$ReportFailure_Hr@$00@details@wil@@YGXPAXIPBD110J@Z @ 0x100048EA (--$ReportFailure_Hr@$00@details@wil@@YGXPAXIPBD110J@Z.c)
 *     ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YGJPAXIPBD110@Z @ 0x1000493A (--$ReportFailure_GetLastErrorHr@$00@details@wil@@YGJPAXIPBD110@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::details::HrToNtStatus(int a1)
{
  if ( a1 > -2147024662 )
  {
    if ( a1 > -2147023746 )
    {
      switch ( a1 )
      {
        case -2147023604:
          return -1073740757;
        case -2147023537:
          return -1073741595;
        case -2147023431:
          return -1073700733;
        case 0:
          return 0;
      }
    }
    else
    {
      switch ( a1 )
      {
        case -2147023746:
          return -1073741735;
        case -2147024362:
          return -1073741675;
        case -2147024322:
          return -1073741787;
        case -2147024314:
          return -1073741471;
        case -2147024313:
          return -1073741469;
        case -2147024270:
          return -1073741197;
      }
    }
  }
  else
  {
    if ( a1 == -2147024662 )
      return -2147483643;
    if ( a1 > -2147024809 )
    {
      switch ( a1 )
      {
        case -2147024784:
          return -1073741697;
        case -2147024774:
          return -1073741789;
        case -2147024773:
          return -1073741773;
        case -2147024770:
          return -1073741515;
      }
    }
    else
    {
      switch ( a1 )
      {
        case -2147024809:
          return -1073741811;
        case -2147467259:
          return -1073741823;
        case -2147024895:
          return -1073741822;
        case -2147024894:
          return -1073741772;
        case -2147024893:
          return -1073741766;
        case -2147024882:
          return -1073741801;
      }
    }
  }
  if ( ((unsigned int)&_ImageBase & a1) != 0 )
    return a1 & 0xEFFFFFFF;
  if ( (a1 & 0x1FFF0000) == 0x70000 )
  {
    a1 = (unsigned __int16)a1;
    if ( (_WORD)a1 )
      return (unsigned __int16)a1 | 0xC0070000;
    return a1;
  }
  if ( (a1 & 0x1FFF0000) != 0x90000 )
    return -1073741595;
  if ( a1 > 0 )
    return (unsigned __int16)a1 | 0xC0090000;
  return a1;
}
