/*
 * XREFs of ?IsScreenSizeRequirementMet@DeviceCapabilitiesW@Internal@Windows@@YA_NW4Capability@123@@Z @ 0x1801AF260
 * Callers:
 *     ?SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x180119110 (-SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ??$GetConditionOperationResult@M@DeviceCapabilitiesW@Internal@Windows@@YA_NMMW4tagCONDITION_OPERATION@@@Z @ 0x1805B2034 (--$GetConditionOperationResult@M@DeviceCapabilitiesW@Internal@Windows@@YA_NMMW4tagCONDITION_OPER.c)
 *     ??$GetConditionOperationResult@N@DeviceCapabilitiesW@Internal@Windows@@YA_NNNW4tagCONDITION_OPERATION@@@Z @ 0x1805B205C (--$GetConditionOperationResult@N@DeviceCapabilitiesW@Internal@Windows@@YA_NNNW4tagCONDITION_OPER.c)
 */

bool __fastcall Windows::Internal::DeviceCapabilitiesW::IsScreenSizeRequirementMet(unsigned int a1)
{
  int v1; // ebx
  int v2; // esi
  char *i; // rdi
  const unsigned __int16 *v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  v11 = a1;
  v1 = 0;
  v2 = 0;
  for ( i = (char *)&`Windows::Internal::DeviceCapabilitiesW::IsScreenSizeRequirementMet'::`2'::c_rgCapabilityToInchMap;
        *(_DWORD *)i;
        i += 24 )
  {
    if ( ++v2 )
      return v1 == 1;
  }
  if ( i[12]
    && (v4 = (const unsigned __int16 *)*((_QWORD *)i + 2)) != 0LL
    && !`Windows::Internal::DeviceCapabilitiesW::IsScreenSizeRequirementMet'::`2'::s_rgCapabilityOverrideDoesNotExist[v2]
    && SHRegGetDWORD(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\CurrentVersion\\DeviceCapabilities", v4, &v11) >= 0
    && v11 )
  {
    v1 = ((unsigned __int8)Windows::Internal::DeviceCapabilitiesW::GetConditionOperationResult<float>(
                             v6,
                             v5,
                             *((unsigned int *)i + 2)) ^ 1)
       + 1;
  }
  else
  {
    v7 = *((_DWORD *)i + 2);
    `Windows::Internal::DeviceCapabilitiesW::IsScreenSizeRequirementMet'::`2'::s_rgCapabilityOverrideDoesNotExist[v2] = 1;
    if ( (int)GetIntegratedDisplaySize(&v12) < 0
      || (v1 = 1,
          !(unsigned __int8)Windows::Internal::DeviceCapabilitiesW::GetConditionOperationResult<double>(v9, v8, v7)) )
    {
      v1 = 2;
    }
  }
  return v1 == 1;
}
