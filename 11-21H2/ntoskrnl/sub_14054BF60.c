/*
 * XREFs of sub_14054BF60 @ 0x14054BF60
 * Callers:
 *     sub_140548D80 @ 0x140548D80 (sub_140548D80.c)
 *     sub_14054C1A4 @ 0x14054C1A4 (sub_14054C1A4.c)
 * Callees:
 *     RtlRaiseException @ 0x140294A60 (RtlRaiseException.c)
 */

void __fastcall sub_14054BF60(int a1, _DWORD *a2)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  v3 = a1 - 256;
  if ( v3 )
  {
    v4 = v3 - 256;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            v8 = v7 - 1;
            if ( v8 )
            {
              if ( v8 != 1 )
              {
                RtlRaiseException(&ExceptionRecord);
                return;
              }
              _RAX = 1073741832LL;
            }
            else
            {
              _RAX = 1073741831LL;
            }
          }
          else
          {
            _RAX = 1073741830LL;
          }
        }
        else
        {
          _RAX = 1073741829LL;
        }
      }
      else
      {
        _RAX = 1073741828LL;
      }
    }
    else
    {
      _RAX = 1073741827LL;
    }
  }
  else
  {
    _RAX = 1073741826LL;
  }
  __asm { cpuid }
  *a2 = _RAX;
  a2[1] = _RBX;
  a2[2] = _RCX;
  a2[3] = _RDX;
}
