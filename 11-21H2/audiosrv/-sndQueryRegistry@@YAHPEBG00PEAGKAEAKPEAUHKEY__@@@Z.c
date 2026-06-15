/*
 * XREFs of ?sndQueryRegistry@@YAHPEBG00PEAGKAEAKPEAUHKEY__@@@Z @ 0x1800066B8
 * Callers:
 *     ?_GetSoundAlias@@YAHPEBGPEAG_KAEAKHPEAUHKEY__@@0@Z @ 0x180006538 (-_GetSoundAlias@@YAHPEBGPEAG_KAEAKHPEAUHKEY__@@0@Z.c)
 * Callees:
 *     ?GetSoundRegistryPath@@YAHPEAG_KPEBG22@Z @ 0x1800069C0 (-GetSoundRegistryPath@@YAHPEAG_KPEBG22@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ?sndRegQueryUserValue@@YAHPEBG0KPEAG@Z @ 0x180151824 (-sndRegQueryUserValue@@YAHPEBG0KPEAG@Z.c)
 */

__int64 __fastcall sndQueryRegistry(
        const unsigned __int16 *a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        unsigned __int16 *a4,
        unsigned int a5,
        unsigned int *a6,
        HKEY hkey)
{
  unsigned int v8; // ebx
  const unsigned __int16 *v9; // rdx
  int UserValue; // ecx
  HKEY v11; // rcx
  WCHAR *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r10
  __int64 v15; // r8
  unsigned int v16; // ecx
  WCHAR *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  char *v20; // r8
  WCHAR v21; // r9
  WCHAR *v22; // rax
  WCHAR *v23; // rdx
  WCHAR *v24; // rax
  __int64 v25; // r8
  unsigned int v26; // ecx
  __int64 v27; // rcx
  char *v28; // rax
  WCHAR v29; // r8
  WCHAR *v30; // rax
  int v31; // ecx
  int v33; // [rsp+48h] [rbp-C0h] BYREF
  DWORD pcbData; // [rsp+50h] [rbp-B8h] BYREF
  DWORD v35[4]; // [rsp+58h] [rbp-B0h] BYREF
  WCHAR SubKey[304]; // [rsp+68h] [rbp-A0h] BYREF

  v33 = 0;
  v8 = 0;
  if ( GetSoundRegistryPath(SubKey, (unsigned __int64)a2, a3, a2, a3) )
  {
    if ( hkey )
    {
      pcbData = 260;
      *a4 = 0;
      UserValue = RegGetValueW(hkey, SubKey, 0LL, 2u, 0LL, a4, &pcbData) == 0;
    }
    else
    {
      UserValue = sndRegQueryUserValue(SubKey, v9, 0x104u, a4);
    }
    if ( UserValue )
    {
      pcbData = 4;
      v11 = HKEY_CURRENT_USER;
      if ( hkey )
        v11 = hkey;
      if ( !RegGetValueW(v11, SubKey, gszDefaultFlags, 0x10u, 0LL, &v33, &pcbData) )
        v33 &= 0x380002u;
      v12 = SubKey;
      v13 = 302LL;
      do
      {
        if ( !*v12 )
          break;
        ++v12;
        --v13;
      }
      while ( v13 );
      v14 = 2147483646LL;
      v15 = (302 - v13) & -(__int64)(v13 != 0);
      v16 = v13 == 0 ? 0x80070057 : 0;
      if ( v13 )
      {
        v17 = &SubKey[v15];
        v18 = 302 - v15;
        if ( v15 != 302 )
        {
          v19 = 2147483646LL;
          v20 = (char *)((char *)gszSlash - (char *)v17);
          do
          {
            if ( !v19 )
              break;
            v21 = *(WCHAR *)((char *)v17 + (_QWORD)v20);
            if ( !v21 )
              break;
            *v17 = v21;
            --v19;
            ++v17;
            --v18;
          }
          while ( v18 );
        }
        v22 = v17 - 1;
        if ( v18 )
          v22 = v17;
        v16 = v18 == 0 ? 0x8007007A : 0;
        *v22 = 0;
      }
      if ( !v16 )
      {
        v23 = (WCHAR *)302;
        v24 = SubKey;
        do
        {
          if ( !*v24 )
            break;
          ++v24;
          v23 = (WCHAR *)((char *)v23 - 1);
        }
        while ( v23 );
        v25 = (302LL - (_QWORD)v23) & -(__int64)(v23 != 0LL);
        v26 = v23 == 0LL ? 0x80070057 : 0;
        if ( v23 )
        {
          v23 = &SubKey[v25];
          v27 = 302 - v25;
          if ( v25 != 302 )
          {
            v28 = (char *)((char *)&aszActiveKey - (char *)v23);
            do
            {
              if ( !v14 )
                break;
              v29 = *(WCHAR *)((char *)v23 + (_QWORD)v28);
              if ( !v29 )
                break;
              *v23 = v29;
              --v14;
              ++v23;
              --v27;
            }
            while ( v27 );
          }
          v30 = v23 - 1;
          if ( v27 )
            v30 = v23;
          v26 = v27 == 0 ? 0x8007007A : 0;
          *v30 = 0;
        }
        if ( !v26 )
        {
          if ( hkey )
          {
            v35[0] = 302;
            SubKey[0] = 0;
            v31 = RegGetValueW(hkey, SubKey, 0LL, 2u, 0LL, SubKey, v35) == 0;
          }
          else
          {
            v31 = sndRegQueryUserValue(SubKey, v23, 0x12Eu, SubKey);
          }
          if ( v31 )
          {
            if ( !lstrcmpW(SubKey, aszBoolOne) )
              v8 = 1;
          }
          else
          {
            v8 = 1;
          }
        }
      }
    }
  }
  if ( v33 )
    *a6 |= v33;
  return v8;
}
