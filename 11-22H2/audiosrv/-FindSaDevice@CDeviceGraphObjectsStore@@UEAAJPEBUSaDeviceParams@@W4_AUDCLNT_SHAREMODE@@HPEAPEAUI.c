/*
 * XREFs of ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@HPEAPEAUISaDeviceProxy@@@Z @ 0x180043ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?SaDeviceExists@CDeviceGraphObjectsStore@@UEAA_NW4_AUDCLNT_SHAREMODE@@@Z @ 0x180043FD0 (-SaDeviceExists@CDeviceGraphObjectsStore@@UEAA_NW4_AUDCLNT_SHAREMODE@@@Z.c)
 *     ?FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x180044044 (-FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV-$function@$$A6A_NPEAUISaDeviceProxy@.c)
 *     WPP_SF_d @ 0x1800DDE94 (WPP_SF_d.c)
 */

__int64 __fastcall CDeviceGraphObjectsStore::FindSaDevice(
        CDeviceGraphObjectsStore *this,
        const struct SaDeviceParams *a2,
        enum _AUDCLNT_SHAREMODE a3,
        int a4,
        struct ISaDeviceProxy **a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  unsigned int FirstMatchingSaDevice; // ebx
  _QWORD v12[8]; // [rsp+20h] [rbp-58h] BYREF

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  *a5 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  if ( CDeviceGraphObjectsStore::SaDeviceExists(this, AUDCLNT_SHAREMODE_EXCLUSIVE) )
  {
    if ( !a4 || a3 )
    {
      FirstMatchingSaDevice = -2005139364;
      goto LABEL_5;
    }
  }
  else if ( a3 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    if ( CDeviceGraphObjectsStore::SaDeviceExists(this, AUDCLNT_SHAREMODE_SHARED) && !a4 )
    {
      FirstMatchingSaDevice = -2005139363;
      goto LABEL_5;
    }
LABEL_16:
    FirstMatchingSaDevice = -2005139430;
    goto LABEL_5;
  }
  if ( *((_DWORD *)a2 + 2) == 1 )
    goto LABEL_16;
  v12[1] = a2;
  v12[0] = off_18017ADF8;
  v12[7] = v12;
  FirstMatchingSaDevice = CDeviceGraphObjectsStore::FindFirstMatchingSaDevice(this, v12, a5);
LABEL_5:
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      14LL,
      &WPP_cde6b4e0c3b236ab5d448129360c4228_Traceguids,
      FirstMatchingSaDevice);
  }
  if ( v5 )
    LeaveCriticalSection(v5);
  return FirstMatchingSaDevice;
}
