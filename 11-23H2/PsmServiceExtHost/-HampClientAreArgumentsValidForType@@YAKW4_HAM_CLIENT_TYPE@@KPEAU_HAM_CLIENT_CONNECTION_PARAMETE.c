/*
 * XREFs of ?HampClientAreArgumentsValidForType@@YAKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@@Z @ 0x18004DB4C
 * Callers:
 *     ?HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004C4B8 (-HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_.c)
 * Callees:
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x18004EAAC (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 */

__int64 __fastcall HampClientAreArgumentsValidForType(char a1, unsigned __int64 a2, const unsigned __int16 **a3)
{
  unsigned int v3; // r11d
  int v4; // ebx
  unsigned int v5; // ecx
  unsigned __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  v4 = a2;
  if ( a3 )
  {
    if ( a1 )
    {
      if ( a1 == 6 )
      {
        v5 = *(_DWORD *)*a3;
        if ( v5 >= 0x20 || (v5 & 0x11) == 0x11 )
          return v3;
      }
      goto LABEL_6;
    }
    if ( *a3 && (int)RtlStringCchLengthW(*a3, a2, &v7) < 0 )
      return v3;
LABEL_13:
    if ( (v4 & 1) != v4 )
      return v3;
    return 1;
  }
  if ( !a1 )
    goto LABEL_13;
LABEL_6:
  if ( !(_DWORD)a2 )
    return 1;
  return v3;
}
