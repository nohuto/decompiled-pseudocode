/*
 * XREFs of ?SHRegAllocData@@YAJPEAUHKEY__@@PEBG1HPEAPEAXPEAK@Z @ 0x180697B4C
 * Callers:
 *     GetEnterprisePinDataFromRegistry @ 0x180287B1C (GetEnterprisePinDataFromRegistry.c)
 *     _anonymous_namespace_::IsCtaPolicyActive @ 0x1806970E8 (_anonymous_namespace_--IsCtaPolicyActive.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1801C934B (memcpy_0.c)
 */

__int64 __fastcall SHRegAllocData(
        HKEY a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        __int64 a4,
        void **a5)
{
  int v6; // esi
  LSTATUS v7; // ebx
  LSTATUS ValueW; // eax
  void *pvData; // rax
  DWORD pcbData; // [rsp+40h] [rbp-C0h] BYREF
  HKEY hkey; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE Src[256]; // [rsp+50h] [rbp-B0h] BYREF

  hkey = a1;
  if ( a2 && *a2 )
  {
    v6 = 1;
    v7 = RegOpenKeyExW(a1, a2, 0, 1u, &hkey);
    if ( v7 )
    {
LABEL_18:
      *a5 = 0LL;
      if ( v7 > 0 )
        return (unsigned __int16)v7 | 0x80070000;
      return (unsigned int)v7;
    }
    a1 = hkey;
  }
  else
  {
    v6 = 0;
  }
  pcbData = 256;
  ValueW = RegGetValueW(a1, 0LL, a3, 2u, 0LL, Src, &pcbData);
  v7 = ValueW;
  if ( !ValueW || ValueW == 234 )
  {
    pvData = CoTaskMemAlloc(pcbData);
    *a5 = pvData;
    if ( pvData )
    {
      if ( v7 )
      {
        if ( RegGetValueW(hkey, 0LL, a3, 2u, 0LL, pvData, &pcbData) )
        {
          v7 = 1003;
          CoTaskMemFree(*a5);
        }
        else
        {
          v7 = 0;
        }
      }
      else
      {
        memcpy_0(pvData, Src, pcbData);
      }
    }
    else
    {
      v7 = 14;
    }
  }
  if ( v6 )
    RegCloseKey(hkey);
  if ( v7 )
    goto LABEL_18;
  return (unsigned int)v7;
}
