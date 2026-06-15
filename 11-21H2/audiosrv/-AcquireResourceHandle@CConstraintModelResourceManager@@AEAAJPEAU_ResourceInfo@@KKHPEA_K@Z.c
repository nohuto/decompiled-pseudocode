/*
 * XREFs of ?AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z @ 0x18010A13C
 * Callers:
 *     ?AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KPEA_K@Z @ 0x180065D10 (-AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAVCEndpointCharacteristics@@U_G.c)
 *     ?AcquirePhoneCallResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z @ 0x180109F40 (-AcquirePhoneCallResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z.c)
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@PEBG1KPEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x18010A530 (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@PEBG1KPEAU_ResourceInf.c)
 *     ?QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@K@Z @ 0x18010CAD0 (-QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAVCEndpointCharacteri.c)
 *     ?ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEA_K@Z @ 0x18010D2A0 (-ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEA_K@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800084A0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180008710 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     WPP_SF_D @ 0x1800C61CC (WPP_SF_D.c)
 *     ?GetRmResourceSet@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKPEAURmResourceInfo@@@Z @ 0x18010BC40 (-GetRmResourceSet@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKPEAURmResourceInfo@.c)
 *     ?ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x18010C830 (-ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     WPP_SF_dI @ 0x18010E87C (WPP_SF_dI.c)
 */

__int64 __fastcall CConstraintModelResourceManager::AcquireResourceHandle(
        CConstraintModelResourceManager *this,
        struct _ResourceInfo *a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned __int64 *a6)
{
  int v6; // r14d
  unsigned int v10; // r15d
  struct RmResourceInfo *v11; // rax
  CConstraintModelResourceManager *v12; // rcx
  __int64 v13; // r8
  struct RmResourceInfo *v14; // rdi
  int RmResourceSet; // ebx
  DWORD CurrentProcessId; // eax
  __int64 v17; // rbx
  DWORD v18; // eax
  int v20; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 v21; // [rsp+58h] [rbp-21h] BYREF
  HANDLE Handles; // [rsp+60h] [rbp-19h] BYREF
  __int128 v23; // [rsp+68h] [rbp-11h] BYREF

  v6 = 0;
  v21 = 0LL;
  v20 = 0;
  v10 = 100;
  if ( a4 <= 0x64 )
    v10 = a4;
  v11 = (struct RmResourceInfo *)operator new(saturated_mul(a3, 0x18uLL));
  v14 = v11;
  if ( v11 )
  {
    RmResourceSet = CConstraintModelResourceManager::GetRmResourceSet(v12, a2, a3, v10, v11);
    if ( RmResourceSet >= 0 )
    {
      if ( a5 )
      {
        CurrentProcessId = GetCurrentProcessId();
        RmResourceSet = RmAvailabilityCheck(a3, v14, v10, CurrentProcessId);
LABEL_24:
        operator delete(v14);
        return (unsigned int)RmResourceSet;
      }
      v17 = *((_QWORD *)this + 13);
      v18 = GetCurrentProcessId();
      RmResourceSet = RmAcquireResources(a3, v14, v10, v18, this, v17, 0, 0, &v20, &v21);
      if ( RmResourceSet >= 0 )
      {
        if ( v20 )
        {
          while ( 1 )
          {
            Handles = (HANDLE)*((_QWORD *)this + 13);
            if ( WaitForMultipleObjects(1u, &Handles, 0, 0x3E8u) )
              break;
            CConstraintModelResourceManager::ProcessRevokedResources(this);
            v23 = 0LL;
            while ( (int)RmGetNotification(v21, &v23) >= 0 )
            {
              if ( (_DWORD)v23 )
              {
                if ( (_DWORD)v23 == 1 )
                  RmResourceSet = -2005139335;
              }
              else
              {
                v6 = 1;
              }
            }
            if ( RmResourceSet < 0 )
              goto LABEL_20;
            if ( v6 )
              goto LABEL_18;
          }
          RmResourceSet = -2005139335;
LABEL_20:
          RmReleaseResources(v21);
        }
        else
        {
LABEL_18:
          *a6 = v21;
        }
        goto LABEL_26;
      }
LABEL_25:
      RmResourceSet = -2005139335;
LABEL_26:
      if ( v14 )
        operator delete(v14);
      if ( RmResourceSet < 0 )
      {
        if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x11u,
            (__int64)&WPP_57553648dc9d3a5078fc664d84c702c1_Traceguids,
            RmResourceSet);
        }
      }
      else if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_dI(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, v13, v10, *a6);
      }
      return (unsigned int)RmResourceSet;
    }
  }
  else
  {
    RmResourceSet = -2147024882;
  }
  if ( !a5 )
    goto LABEL_25;
  if ( v14 )
    goto LABEL_24;
  return (unsigned int)RmResourceSet;
}
