/*
 * XREFs of ServicePowerEvent @ 0x180055860
 * Callers:
 *     ?ServiceCtrl@@YAKKKPEAX0@Z @ 0x18004BEB0 (-ServiceCtrl@@YAKKKPEAX0@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ServicePowerEvent(unsigned __int64 a1)
{
  __int64 result; // rax
  int v2; // ecx
  int v3; // ecx
  __int64 (*v4)(void); // rax

  result = 0LL;
  if ( a1 <= 0x8013 )
  {
    if ( (unsigned int)a1 <= 9 )
    {
      if ( (_DWORD)a1 != 9 )
      {
        if ( (_DWORD)a1 )
        {
          v2 = a1 - 2;
          if ( v2 )
          {
            v3 = v2 - 2;
            if ( v3 )
            {
              if ( v3 != 3 )
                return result;
              v4 = *(__int64 (**)(void))(*(_QWORD *)g_AudioService + 88LL);
            }
            else
            {
              v4 = *(__int64 (**)(void))(*(_QWORD *)g_AudioService + 96LL);
            }
            return v4();
          }
        }
      }
    }
    else if ( (_DWORD)a1 == 32787 )
    {
      return (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 104LL))(g_AudioService);
    }
  }
  return result;
}
