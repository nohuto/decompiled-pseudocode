/*
 * XREFs of ?SetIntegerProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0098AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0098D70 (-SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 *     ?UpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@IEAAJW4Enum@KeyframeAnimationPlaybackState@@@Z @ 0x1C0098ED0 (-UpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@IEAAJW4Enum@KeyframeAnimatio.c)
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetIntegerProperty(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        unsigned __int64 a4,
        bool *a5)
{
  unsigned int updated; // ecx
  __int64 v8; // rdx

  updated = 0;
  *a5 = 0;
  if ( a3 > 0x15 )
  {
    switch ( a3 )
    {
      case 0x16u:
        if ( a4 > 4 )
          return (unsigned int)-1073741811;
        if ( *((_DWORD *)this + 76) == (_DWORD)a4 )
          return updated;
        *((_DWORD *)this + 76) = a4;
        break;
      case 0x1Bu:
        if ( *((_QWORD *)this + 29) == a4 )
          return updated;
        *((_QWORD *)this + 29) = a4;
        break;
      case 0x1Cu:
        if ( *((_QWORD *)this + 30) == a4 )
          return updated;
        *((_QWORD *)this + 30) = a4;
        break;
      case 0x1Du:
        if ( a4 > 1 )
          return (unsigned int)-1073741811;
        if ( *((_DWORD *)this + 73) == (_DWORD)a4 )
          return updated;
        *((_DWORD *)this + 73) = a4;
        break;
      case 0x22u:
        if ( a4 <= 1 )
        {
          if ( *((_DWORD *)this + 75) == a4 )
            return updated;
          *((_DWORD *)this + 4) &= ~0x8000u;
          *((_DWORD *)this + 75) = a4;
          goto LABEL_13;
        }
        return (unsigned int)-1073741811;
      case 0x24u:
        if ( (*((_BYTE *)this + 316) & 1) == (a4 != 0) )
          return updated;
        *((_BYTE *)this + 316) = (a4 != 0) | *((_BYTE *)this + 316) & 0xFE;
        break;
      default:
        return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
    }
LABEL_12:
    *((_DWORD *)this + 4) &= ~0x800u;
LABEL_13:
    *a5 = 1;
    return updated;
  }
  switch ( a3 )
  {
    case 0x15u:
      if ( *((_DWORD *)this + 77) == (_DWORD)a4 )
        return updated;
      *((_DWORD *)this + 77) = a4;
      if ( !*((_DWORD *)this + 72) )
      {
LABEL_26:
        *((_DWORD *)this + 4) &= ~0x1000u;
        goto LABEL_13;
      }
      v8 = 0LL;
LABEL_25:
      updated = DirectComposition::CKeyframeAnimationMarshaler::UpdatePlaybackState(this, v8);
      if ( (updated & 0x80000000) != 0 )
        return updated;
      goto LABEL_26;
    case 0xBu:
      if ( *((_DWORD *)this + 62) == a4 )
        return updated;
      *((_DWORD *)this + 62) = a4;
      goto LABEL_12;
    case 0xDu:
      if ( *((_QWORD *)this + 27) == a4 )
        return updated;
      *((_QWORD *)this + 27) = a4;
      goto LABEL_12;
    case 0xEu:
      if ( *((_QWORD *)this + 28) == a4 )
        return updated;
      *((_QWORD *)this + 28) = a4;
      goto LABEL_12;
    case 0x12u:
      if ( a4 > 4 )
        return (unsigned int)-1073741811;
      if ( *((_DWORD *)this + 71) == (_DWORD)a4 )
        return updated;
      *((_DWORD *)this + 71) = a4;
      goto LABEL_12;
    case 0x13u:
      if ( a4 > 2 )
        return (unsigned int)-1073741811;
      if ( *((_DWORD *)this + 74) == (_DWORD)a4 )
        return updated;
      *((_DWORD *)this + 74) = a4;
      goto LABEL_12;
    case 0x14u:
      if ( a4 <= 2 )
      {
        if ( *((_DWORD *)this + 72) == (_DWORD)a4 )
          return updated;
        v8 = (unsigned int)a4;
        goto LABEL_25;
      }
      return (unsigned int)-1073741811;
  }
  return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
}
