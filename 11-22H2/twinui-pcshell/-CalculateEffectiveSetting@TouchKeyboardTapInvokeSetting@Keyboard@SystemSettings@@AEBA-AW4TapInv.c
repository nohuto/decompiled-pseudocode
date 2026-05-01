/*
 * XREFs of ?CalculateEffectiveSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEBA?AW4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@XZ @ 0x1801BAC9C
 * Callers:
 *     ??0TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAA@XZ @ 0x1800A78F0 (--0TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAA@XZ.c)
 *     ?UpdateEffectiveSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAAXXZ @ 0x18051B9B8 (-UpdateEffectiveSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting::CalculateEffectiveSetting(unsigned int *a1)
{
  __int64 result; // rax
  unsigned int v2; // edx
  unsigned int v3; // r8d

  result = a1[18];
  if ( (_DWORD)result == -1 )
  {
    result = a1[17];
    if ( (_DWORD)result == -1 )
    {
      result = a1[20];
      if ( (_DWORD)result == -1 )
      {
        v2 = a1[19];
        result = 1LL;
        if ( v2 != 1 )
        {
          v3 = a1[21];
          if ( v3 == -1 )
          {
            if ( a1[22] != -1 )
            {
              if ( a1[22] != 1 )
                return a1[22];
              result = 2LL;
              if ( v2 != 2 )
                return a1[22];
            }
          }
          else
          {
            if ( v3 != 1 )
              return v3;
            result = 2LL;
            if ( v2 != 2 )
              return v3;
          }
        }
      }
    }
  }
  return result;
}
