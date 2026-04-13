/*
 * XREFs of ?EnsureRegKeyExists@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG@Z @ 0x1800315E0
 * Callers:
 *     ?RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z @ 0x18003BFD0 (-RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z.c)
 * Callees:
 *     ?CreateKey@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z @ 0x1800308E8 (-CreateKey@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z.c)
 *     ?DoesKeyExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBGPEA_N@Z @ 0x1800312DC (-DoesKeyExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBGPEA_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ContentManagement::PhoneShellNamespaceHelper::EnsureRegKeyExists(
        ContentManagement::PhoneShellNamespaceHelper *this,
        const unsigned __int16 *a2,
        bool *a3)
{
  const unsigned __int16 *v4; // rdx
  int DoesKeyExist; // ebx
  __int64 v6; // rdx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  ContentManagement::PhoneShellNamespaceHelper *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = this;
  DoesKeyExist = CreativeFramework::ContentDeliveryManagerSettings::DoesKeyExist(a2, (unsigned __int16 *)&v10, a3);
  if ( DoesKeyExist < 0 )
  {
    v6 = 1002LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)DoesKeyExist,
      v8);
    return (unsigned int)DoesKeyExist;
  }
  if ( !(_BYTE)v10 )
  {
    DoesKeyExist = CreativeFramework::ContentDeliveryManagerSettings::CreateKey(a2, v4);
    if ( DoesKeyExist < 0 )
    {
      v6 = 1005LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
