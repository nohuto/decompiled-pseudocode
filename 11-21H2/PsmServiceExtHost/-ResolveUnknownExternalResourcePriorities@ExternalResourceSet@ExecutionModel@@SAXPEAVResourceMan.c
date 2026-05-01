/*
 * XREFs of ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180029CF0
 * Callers:
 *     ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180020554 (-HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@.c)
 *     ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18002B4FC (-RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x180041280 (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@.c)
 *     ?SetExternalResourcePriorities@ResourceSet@ExecutionModel@@QEAAJKQEAU_ResourceInfo@2@@Z @ 0x18008EBB0 (-SetExternalResourcePriorities@ResourceSet@ExecutionModel@@QEAAJKQEAU_ResourceInfo@2@@Z.c)
 *     ?AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEAU_RM_HAM_ACTIVITY_HOST@@PEA_N@Z @ 0x18008F51C (-AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResource.c)
 * Callees:
 *     ?RmpPsmIsSharedEntityFromPsmKey@@YAJPEBGPEAE@Z @ 0x18002828C (-RmpPsmIsSharedEntityFromPsmKey@@YAJPEBGPEAE@Z.c)
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180029F54 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionModel@@@Z @ 0x18002A9D4 (-HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionM.c)
 *     ?RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x18002CBF0 (-RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FA.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18008716C (-RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPsmAppFamilyEnumerateActivityHostGetNext@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_PSM_APP_FAMILY_ACTIVITY_HOST_ENUMERATION_CONTEXT@@@Z @ 0x18008F280 (-RmpPsmAppFamilyEnumerateActivityHostGetNext@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_PSM_APP_FAMILY_AC.c)
 *     ?RmpPsmAppFamilyIdFromPsmAppInstanceId@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x18008F2AC (-RmpPsmAppFamilyIdFromPsmAppInstanceId@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 *     ?ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18008F954 (-ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXP.c)
 */

void __fastcall ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(
        struct ExecutionModel::ResourceManager *a1,
        unsigned int a2,
        unsigned int a3,
        struct ExecutionModel::_ResourceInfo *a4,
        struct _RM_ACTIVITY_HOST *a5)
{
  __int64 v6; // rdi
  char *v8; // rax
  __int64 v9; // rcx
  bool v10; // zf
  char *v11; // rbx
  _QWORD *v12; // rcx
  signed int v13; // eax
  __int64 v14; // rdx
  int v15; // esi
  struct ExecutionModel::ResourceSet *Next; // rax
  __int64 v17; // r14
  DWORD v18; // ebp
  _QWORD *Value; // rsi
  int v20; // eax
  __int64 *v21; // rax
  __int64 v22; // rdx
  struct _RM_SERVICE_GLOBALS *v23; // r14
  struct _RM_PSM_APP_FAMILY *v24; // rbp
  struct _RM_PSM_APP_FAMILY *v25; // rax
  char *v26; // rax
  struct _RM_ACTIVITY_HOST *i; // rax
  struct ExecutionModel::ResourceManager *v28; // rcx
  char *v29; // rax
  __int64 v30; // rcx
  unsigned __int8 v31[8]; // [rsp+30h] [rbp-288h] BYREF
  __int64 v32; // [rsp+38h] [rbp-280h] BYREF
  unsigned int v33; // [rsp+40h] [rbp-278h]
  int v34; // [rsp+44h] [rbp-274h]
  _BYTE v35[544]; // [rsp+50h] [rbp-268h] BYREF

  v6 = a3;
  if ( a3 )
  {
    v8 = (char *)a4 + 16;
    v9 = a3;
    do
    {
      if ( v8[5] )
        *(_DWORD *)v8 = 101;
      v8 += 24;
      --v9;
    }
    while ( v9 );
  }
  v10 = *((_DWORD *)a5 + 156) == 2;
  v31[0] = 0;
  if ( v10
    && (RmpPsmIsSharedEntityFromPsmKey((const unsigned __int16 *)a5 + 44, v31), v31[0])
    && RmpActivityHostHasPpleResourceSet(a5) )
  {
    v23 = (struct _RM_SERVICE_GLOBALS *)*((_QWORD *)a5 + 6);
    v24 = 0LL;
    if ( RmpPsmAppFamilyIdFromPsmAppInstanceId(
           (struct _RM_ACTIVITY_HOST *)((char *)a5 + 88),
           (struct _RM_PSM_APP_FAMILY_ID *)v35) >= 0 )
    {
      v25 = RmpPsmAppFamilyTableFind(v23, (struct _RM_PSM_APP_FAMILY_ID *)v35);
      if ( v25 )
        v24 = v25;
    }
    v26 = 0LL;
    if ( *((_QWORD *)v24 + 69) )
      v26 = (char *)v24 + 552;
    v32 = (__int64)v26;
    for ( i = RmpPsmAppFamilyEnumerateActivityHostGetNext((struct _RM_PSM_APP_FAMILY_ACTIVITY_HOST_ENUMERATION_CONTEXT *)&v32);
          i;
          i = RmpPsmAppFamilyEnumerateActivityHostGetNext((struct _RM_PSM_APP_FAMILY_ACTIVITY_HOST_ENUMERATION_CONTEXT *)&v32) )
    {
      if ( i != a5 && *((_DWORD *)i + 156) == 2 )
        ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriotiesFromResourceSets(v28, a2, v6, a4, i);
    }
    if ( !(_DWORD)v6 )
      return;
    v29 = (char *)a4 + 16;
    v30 = v6;
    do
    {
      if ( v29[5] && *((_DWORD *)v29 - 4) == 28 )
        *(_DWORD *)v29 = 101;
      v29 += 24;
      --v30;
    }
    while ( v30 );
  }
  else if ( !(_DWORD)v6 )
  {
    return;
  }
  v11 = (char *)a4 + 16;
  do
  {
    if ( v11[5] )
    {
      v34 = 0;
      v12 = (_QWORD *)((char *)a5 + 1128);
      v33 = a2;
      v13 = 0;
      while ( 1 )
      {
        if ( _bittest((const int *)&a2, v13) )
        {
          if ( (_QWORD *)*v12 != v12 )
          {
            v14 = *v12 - 1296LL;
            if ( *v12 != 1296LL )
              break;
          }
        }
        ++v13;
        v12 += 3;
        if ( v13 >= 2 )
        {
          v14 = 0LL;
          break;
        }
      }
      v32 = v14;
      v15 = 101;
      Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)&v32);
      if ( Next )
      {
        v17 = 4LL * *((int *)v11 - 4) + 1488;
        do
        {
          if ( v15 >= *(_DWORD *)((char *)Next + v17) )
            v15 = *(_DWORD *)((char *)Next + v17);
          Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)&v32);
        }
        while ( Next );
      }
      if ( v15 >= *(_DWORD *)v11 )
        v15 = *(_DWORD *)v11;
      *(_DWORD *)v11 = v15;
      if ( (*((_BYTE *)a5 + 852) & 1) != 0 )
      {
        v18 = HampLockTrackerId;
        if ( HampLockTrackerId != -1 )
        {
          Value = TlsGetValue(HampLockTrackerId);
          if ( (*(_QWORD *)TlsGetValue(v18) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
            __int2c();
          *Value |= 2uLL;
          ++Value[2];
        }
        RtlAcquireSRWLockShared((char *)a5 + 64);
        if ( (unsigned int)HampHostHasExternalResourceAccess((char *)a5 + 64, *((unsigned int *)v11 - 4)) )
        {
          v20 = *(_DWORD *)v11;
          if ( *(int *)v11 > 2 )
            v20 = 2;
          *(_DWORD *)v11 = v20;
        }
        if ( HampLockTrackerId != -1 )
        {
          v21 = (__int64 *)TlsGetValue(HampLockTrackerId);
          v22 = *v21;
          if ( (*v21 & 2) == 0 )
            __int2c();
          v10 = v21[2]-- == 1;
          if ( v10 )
            *v21 = v22 & 0xFFFFFFFFFFFFFFFDuLL;
        }
        RtlReleaseSRWLockShared((char *)a5 + 64);
      }
    }
    v11 += 24;
    --v6;
  }
  while ( v6 );
}
